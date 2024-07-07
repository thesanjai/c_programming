// Split the sorted array

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

    //selction sort
    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(a[j]<a[min]){
                min=j;
            }
        }
        a[i] = a[i] + a[min] - (a[min] = a[i]);
    }
    printf("SORTED ARRAY: \n");
    for(int i=0;i<n;i++){
        printf("%d ", a[i]);
    }    
    printf("\n");
    
    //array splitting  into 2

    int index;
    printf("Enter the index to spilt the array: ");
    scanf("%d", &index);

    int a1[index],a2[n-index];

    for(int i=0;i<index;i++){
        a1[i] = a[i];
    }
    
    for(int i=index;i<n;i++){
        a2[i-index] = a[i];
    }

    printf("1st ARRAY: \n");
        for(int i=0;i<index;i++){
            printf("%d ", a[i]);
        }    
        printf("\n");

    printf("2nd ARRAY: \n");
        for(int i=index;i<n;i++){
            printf("%d ", a[i]);
        }    
        printf("\n");


    
    return 0;
}
