
#include<stdio.h>

int main(){
    short int i=65000;

        //try ++i and diff no. instead of 0
    while(i++!=0);//checks condition fails and then it 'i' value incremented
    printf("%d",i);
    return 0;
} 


//////////////////////////////////////////////////////
/*
#include<stdio.h>

int main(){
    unsigned int i=65000;

        //try ++i and diff no. instead of 0
    while(i++ !=65000); //checks condition fails and then it 'i' value incremented
    printf("%d",i);
    return 0;
}


*/
