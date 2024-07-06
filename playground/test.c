#include <stdio.h>

#define slength(s) ({ \
	int n=0;\
	while(s[++n]!='\0') ;\
	n;\
})

int main(){
	char* str="000";

	
	printf("%d\n",slength(str));
	return 0;
}