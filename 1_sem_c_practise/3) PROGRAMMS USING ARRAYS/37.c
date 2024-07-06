//Reverse the array elements

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define INF 999999999

int main(){
    srand(time(NULL));
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    
    int arr[n];
    printf("ORIGINAL ARRAY:\n");
    for(int i=0;i<n;i++){
        i[arr] = rand()%1000;
        printf("%d ",i[arr]);
    }
    
    //REVERSING THE ARRAY
    int i=0,j=n-1;
    while(i<j){ i[arr] = i[arr] + j[arr] -(j[arr] = i[arr]); i++,j--;}

    printf("\nREVERSED ARRAY:\n");
    for(i=0;i<n;i++)
        printf("%d ",i[arr]);
        
    return 0;
}