//Largest among N numbers in an array
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
    int max=-INF;        

    for(int i=0;i<n;i++)
        i[arr]>max?max=i[arr]:0;

    printf("\nLargest element in the array is %d\n",max);
    return 0;
}
