//Duplicate removal in an array

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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
    printf("Enter the element to remove: ");
    scanf("%d",&target);

    int count=0;

    for(int i=0;i<n-count;i++){
        if(a[i]==target){
            count++;
            for(int j=i;j<n-count;j++){
                a[j]=a[j+1];
            }
            i--; // to remove element which was present continuously
        }
      
    }
    
    printf("MODIFIED ARRAY: \n");
    for(int i=0;i<n-count;i++){
        printf("%d ", a[i]);
    }
    printf("\n");
    
    return 0;
}