//Find largest among three numbers 
#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter the 3 numbers: ");
    scanf("%d%d%d",&a,&b,&c);
    
   printf("Largest number -> %d ",a>b?(a>c?a:c):(b>c?b:c));
    return 0;
}