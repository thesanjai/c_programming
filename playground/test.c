#include <stdio.h>
#include <unistd.h>

#define slength(s) ({ \
	int n=0;\
	while(s[++n]!='\0') ;\
	n;\
})

int main(){
	char* str=getpass("Enter the string: ");

	
	printf("%d\n",slength(str));
	return 0;
}