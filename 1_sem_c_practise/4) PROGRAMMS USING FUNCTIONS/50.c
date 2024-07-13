// Find minimum number in an array
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int find_min(int *a,int n){
    int min = *a;
    for(int i=1; i<n; i++){
        if(*(a+i) < min)
            min = *(a+i);
    }
    return min;
}
int main(){
    srand(time(NULL));
    int n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);

    int a[n];
   
    for(int i=0; i<n; i++){
        a[i] = rand()%100;
        printf("%d ",a[i]);
    }
    printf("\n");

    printf("\nMIN element in the array: %d\n",find_min(a,n));

    return 0;
}
