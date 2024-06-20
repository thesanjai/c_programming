#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<stdbool.h>
#include<unistd.h>
typedef char* string;

int check_password(string name){
    int count=0;
    int digit=0;
    bool spl_chr=false;
    bool upper_chr=false;
    bool lower_chr=false;

    for(int i=0;name[i]!='\0';i++){
        count++;
        if(isdigit(name[i])){
            digit++;
        }
        if(isupper(name[i])){
            upper_chr=true;
        }
        if(islower(name[i])){
            lower_chr=true;
        }
        if(isalnum(name[i])==0){
            spl_chr=true;
        }
    }
   
    if(count<8){
        printf("Password must contain 8 characters\n");
        return 0;
    }else if(lower_chr==false){
        printf("Password must contain atleast one lower case character\n");
        return 2;
    }else if(upper_chr==false){
        printf("Password must contain atleast one upper case character\n");
        return 4;
    }else if(spl_chr==false){
        printf("Password must contain atleast one special character\n");
        return 5;
    }else if(digit<3){
        printf("Password must contain atleast 3 digits\n");
        return 6;
    }

    for(int i=0;name[i]!='\0';i++){
        if(isdigit(name[i])){
            int i1=(int)name[i];
            if(isdigit(name[i+1])){
                int i2=(int)name[i+1];
                if(isdigit(name[i+2])){
                    int i3=(int)name[i+2];
                    
                    //to find sequential
                    if(i2>i1){
                        if(i3>i2){
                            if(i2-i1==1 && i3-i2==1){
                                printf("Password must not contain a 3 sequential digits\n");
                                return 7;
                            }
                        }
                    }
                }
            }
        }
    }

    return 9;
}

int main(){
 
    int result=0;
    FILE *fptr=fopen("password_data.txt","w");//to empty the file
    fclose(fptr);
    while(1){
        //printf("Enter the password: ");
        string name=getpass("Enter the password(\"exit\" to terminate): ");

        FILE *fptr=fopen("password_data.txt","a");//appending the password in the file
        fprintf(fptr,"%s\n",name);

        fclose(fptr);

        string exit="exit";
        if((strcmp(exit,name)==0)){
            break;
        }

        int result =check_password(name);

        if(result==0 || result==2 ||result==4  ){
            printf("Weak password (strength = %d)\n",result);
        }else if(result==5 ||result==6|| result==7 || result==8){
            printf("Average password (strength = %d)\n",result);
        }else{
            printf("Strong password (strength = %d)\n",result);
        }
        printf("\n");
    
        if(result==9){
            break; 
        }
       
   }
    return 0;
}