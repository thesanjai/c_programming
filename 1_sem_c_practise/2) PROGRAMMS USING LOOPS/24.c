//Dec to Bin and octal
#include<stdio.h>

int main(){
    int n;
    printf("Enter the n: ");
    scanf("%d",&n);
    int copy=n;
    int index=1;
    int bans=0;
    while(n!=0){
        int b=n%2;
        bans=bans+b*index;
        n=n/2;
        index =index*10;
    }

    n=copy;
    index=1;
    int oans=0;
    while(n!=0){
        int o=n%8;
        oans=oans+o*index;
        n=n/8;
        index =index*10;
    }

    printf("%d in Binary -> %d\n",copy,bans);
   // printf("%d in octal  -> %o\n",copy,copy); //it directly prints the decimal value into octal value
    printf("%d in Octal -> %d\n",copy,oans);
    return 0;
}