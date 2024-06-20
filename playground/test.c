#include<stdio.h>
#include<unistd.h>
#include<time.h>
#include<math.h>



int main(){
	int a,b;

	printf("Enter a and b : ");
	scanf("%d%d",&a,&b);

	printf("%f",pow(a,b));
}