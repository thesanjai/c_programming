//Insert an element in an array
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

    int element,pos;
    printf("\nEnter the position to insert: ");
    scanf("%d",&pos);
    if(pos < 0 || pos > n){
        printf("Invalid position");
        return 1;
    }
    printf("\nEnter the element to be inserted: ");
    scanf("%d",&element);
    
    for(int i=n-1;i>=pos;i--){
       arr[i+1] = arr[i];
    }
    arr[pos] = element;
    
    printf("\nARRAY AFTER INSERTION:\n");
    for(int i=0;i<n+1;i++){ // n+1 because one element is added to the array
        printf("%d ",arr[i]);
    }
    return 0;
}