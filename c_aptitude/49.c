#include <stdio.h>

/*int main(){
    int x=0, k;

    while( +(+x--) != 0){
        x++;
    }
    printf("x = %d\n", x);
    return 0;
}*/
int main(){
    int x=0, k;

    while( +(+x--)==0){//eventhough condition fails ,x-- statement is executed
        x--;
    }
    printf("x = %d\n", x);
    return 0;
}
/*NOTES
    there is no significance is there for + here,
    so, 
        x-- only
*/