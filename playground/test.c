#include<stdio.h>
int main(){

	int i,n=5;

	for(int i=0;i<n;i++){
		if(i*i==n){
			printf("%d",i);
			break;
		}
	}
}
