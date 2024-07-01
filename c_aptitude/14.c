 #include<stdio.h>

 int main(){
    char arr[]={1,2,3}; //use int 
    char* p=arr; 

    printf("%ld\n",sizeof(p)); //size of pointer always same ->8
    printf("%ld\n",sizeof(arr));// vary with number of inputs
    return 0;
 }
