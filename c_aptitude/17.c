#include<stdio.h>
#include<string.h>

int main(){ 
    char str[]="sanjai"; //try \tsanjai

    printf("sizeof=>%ld\n",sizeof(str));
    printf("strlen=>%ld\n",strlen(str));
    return 0;
}

/*NOTE:
    command line esacpe sequences are treated as a single character 
    Example:
            \t
            \n
            \b
        all are considered as single character
*/