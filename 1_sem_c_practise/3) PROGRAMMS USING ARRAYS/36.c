//Smallest among N numbers in an array

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
    for(int i=0;i<n;i++){
        i[arr] = rand()%1000;
        printf("%d ",i[arr]);
    }
    int min=INF;        

    for(int i=0;i<n;i++)
        i[arr]<min?min=i[arr]:0;

    printf("\nSmallest element in the array is %d\n",min);
    return 0;
}