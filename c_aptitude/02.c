#include<stdio.h>

int main(){
    int i=1;
    do{
        printf("%d\n",i++);
        if(i<15){
            continue;
        }
    }while(0); //always false

    return 0;
}

/*
#include<stdio.h>

int main(){
    int i=1;
    do{
        printf("%d\n",i++);
        if(i<15){
            break;
        }
    }while(1); 

    return 0;
}
*/