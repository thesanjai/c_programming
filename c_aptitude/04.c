#include<stdio.h>

int main(){
    static int i=5;
    //int i=5; segmentation fault
    if(--i){
        main();
        printf("%d\t",i);
    }
}