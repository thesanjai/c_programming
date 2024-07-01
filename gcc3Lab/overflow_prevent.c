#include<stdio.h>

int main(){

   char name1[7],name2[8]="voshini";

  

   printf("Enter the name: ");
   scanf("%6[^\n]s",name1);

   
   printf("name=> %s\n",name1);
   printf("name2=> %s\n",name2);
   
}