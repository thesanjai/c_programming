#include<stdio.h>
#include<string.h>

//Replace ? with something to get geeks
int main(){ 
   
    char str[]="geeksforgeeks";

    // printf("$s",?);
    printf("%s",strstr(str,"geeks"));

    printf("%s\n",str+8);


    printf("\"Hello%%World\"");
    return 0;
}
/*NOTES
    TO PRINT SPECIAL CHARACTERS IN OUTPUT(printf) USE \
                                                      \"
                                                      \'
                                                      \\
                                                      %% 
*/