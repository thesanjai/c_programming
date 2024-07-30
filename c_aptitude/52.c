//without using any loop find the number of digits in a number
#include <stdio.h>
#include <math.h>

int main(){
    int n;
    printf("Enter the n :");
    scanf("%d",&n);
    
    printf("The length of %d is %d\n",n,(int)(log10(n)+1));
    return 0;
}
/*NOTES
    do log_base(num) + 1;
    it returns the double value, so type cast it
    the base may be the number system you want
*/