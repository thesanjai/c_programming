//Binary search

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

    
    //BINARY SEARCH ONLY WORKS FOR SORTED ARRAY

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
    
    
    int target;
    printf("Enter the element to search: ");
    scanf("%d",&target);

    bool t =false;
    int i; //to find index

    int l=0,r=n;

    while(l<r){
        int mid = (l+r)/2;

        if(a[mid]==target){
            t = true;
            i = mid;
            break;
        }else if(a[mid] < target){
            l = mid+1;
        }else{
            r = mid-1;
        }
    }

    if(t){
        printf("Element %d fount at the index %d\n",target,i);
    }else{
        printf("Element %d not found\n",target);
    }
    
    return 0;
}
