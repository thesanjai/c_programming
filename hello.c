#include<stdio.h>

int add(){
	int a;
	int b;
	printf("Enter two numbers to add: ");
	scanf("%d%d",&a,&b);
	return a+b;

}
int main(){
	printf("Hello World");

	printf("%d",add());
	return 99;
}
