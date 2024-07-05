//Delete an element in an array
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
    srand(time(NULL));
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    
    printf("ORIGINAL ARRAY:\n");
    int arr[2*n];
    for(int i=0;i<n;i++){
        i[arr] = rand()%1000;
        printf("%d ",i[arr]);
    }

    int pos;
    printf("\nEnter the position of the element to be deleted: ");
    scanf("%d",&pos);

    for(int i=pos;i<n;i++){
        arr[i] = arr[i+1];
    }
    arr[n-1]='\0';
    
    printf("\nARRAY AFTER DELETION:\n");
    for(int i=0;i<n-1;i++){  // n-1 because one element is removed from the array
        printf("%d ",arr[i]);
    }
    return 0;
}