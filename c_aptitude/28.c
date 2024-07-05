#include <stdio.h>


int main(){
    int arr[2][2]={
                    {1,2},
                    {3,4}
                  };

    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("%d ", j[i[arr]]); //try arr[i][j] = j[i[arr]]      arr[j][i] = i[j[arr]] 
        }
    }

    printf("\n\n");

    int arr2[2]={10,20};
    for(int i=0;i<2;i++){
        printf("%d ",i[arr2]);
    }

    printf("\n");
    
    return 0;
}
/* NOTES:
    In C, i[a] and a[i] are equivalent and both access the i-th element of the array a. However, there is a subtle difference in the way the indexing works.

When you write a[i], the compiler translates it to *(a + i), which means "take the address of a and add i to it, then dereference the resulting pointer".

When you write i[a], the compiler translates it to *(i + a), which means "take the address of i and add a to it, then dereference the resulting pointer".

In most cases, the difference is irrelevant, and both expressions will yield the same result. However, there are a few scenarios where using i[a] instead of a[i] can be advantageous:

1. Clarity: In some cases, using i[a] can make the code more readable, especially when working with multidimensional arrays. For example, i[j[k]] is more readable than j[k][i].
2. Operator precedence: When using operators with different precedence, i[a] can avoid potential issues. For example, i[a] + 1 is clearer than a[i] + 1, which might be parsed as (a[i]) + 1 instead of a[(i + 1)].
3. Older compilers: Some older compilers might have issues with a[i] syntax, especially in cases where a is a complex expression. Using i[a] can avoid these issues.

However, it's important to note that using i[a] instead of a[i] is generally considered unconventional and might make the code harder to understand for most programmers. Therefore, it's usually recommended to stick with the standard a[i] syntax for array indexing.
*/
