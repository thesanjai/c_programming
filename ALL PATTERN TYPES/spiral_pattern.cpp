#include<iostream>

using namespace std;

int main(){

    int a[][5]={{1,2,3,4,5},
                {14,15,16,17,6},
                {13,20,19,18,7},
                {12,11,10,9,8}};  

    //spiral pattern printing

    int rowstart=0;
    int rowend=sizeof(a)/sizeof(a[0])-1;
    int colstart=0;
    int colend=(sizeof(a[0])/sizeof(a[0][0]))-1;
    
    while(rowstart < rowend && colstart <colend){

        //right to left
        for(int i=colstart;i<=colend;i++){
            cout<<a[rowstart][i]<<" ";
        }
        rowstart++;

        //top to down
        for(int i=rowstart;i<=rowend;i++){
            cout<<a[i][colend]<<" ";
        }
        colend--;

        //left to right
        for(int i=colend;i>=colstart;i--){
            cout<<a[rowend][i]<<" ";
        }
        rowend--;

        //down to top

        for(int i=rowend;i>=rowstart;i--){
            cout<<a[i][colstart]<<" ";
        }
        colstart++;

    }

    return 0;
}