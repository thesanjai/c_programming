#include <stdio.h>

int main(){
    char *str ="code io";

    printf("%c \n",*&*str);
   // printf("%c \n",&**str); //this line leads to error


    printf("%c\n",*&*&*&*(str+2));
    printf("%c\n",*&*&*&*str+4); //*str + 4 → 'c' + 4 → ASCII of 'c' is 99, 99 + 4 = 103 → 'g'
    return 0;
}
/*NOTES
    * - referencing
    & - dereferencing
    so , both get cancel out
    the result will be *str
*/