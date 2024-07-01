#include<stdio.h>
int main(){

	char name1[7],name2[100]="Hello world  i am not good girl \n";

	printf("[before 1st scanf()] name2 = %s\n",name2);
	printf("enter the name 1 :");
	scanf("%s",name1);
	printf("[after 1st scanf()] name2 = %s\n",name2);

	printf("enter the name 2 :");
	scanf("%s",name2);

	printf("name\b\b 1 : %s\n",name1);
	printf("name 2 : %s\n",name2);


	for(int i=0;i<50;i++){
		printf("%c %d\n",name1[i],name1[i]);
	}

}
