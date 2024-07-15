// Bubble Sort
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void bubble_sort(int a[],int n){
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
           if(a[i] >= a[j]){
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
           }
        }
    }
}

int main(){
    srand(time(NULL));
    int n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);

    int a[n];
   printf("Before sorting:\n");
    for(int i=0; i<n; i++){
        a[i] = rand()%100;
        printf("%d ",a[i]);
    }
    printf("\n");

    bubble_sort(a,n);
    printf("After Sorting:\n");
    for(int i=0; i<n; i++){
        printf("%d ",a[i]);
    }

    printf("\n");

    return 0;
}
