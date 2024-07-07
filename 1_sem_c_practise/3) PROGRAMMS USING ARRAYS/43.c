//Linear Search

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int main(){
    srand(time(NULL));
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int a[n];

    printf("ORIGINAL ARRAY: \n");
    for(int i=0;i<n;i++){
        a[i] = rand()%10;
        printf("%d ", a[i]);
    }    
    printf("\n");
    
    int target;
    printf("Enter the element to search: ");
    scanf("%d",&target);

    bool t =false;

    int i; // declaring outside to find the index of the element
    for(i=0;i<n;i++){
        if(a[i] == target){
            t =true;
            break;
        }
    }
    if(t){
        printf("Element %d fount at the index %d\n",target,i);
    }else{
        printf("Element %d not found\n",target);
    }
    
    return 0;
}
