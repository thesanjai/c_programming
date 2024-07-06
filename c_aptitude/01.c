#include<stdio.h>

int main(){
    for(int n=7;n!=0;n--){
       // printf("%d\n",(n-1));
       printf("%d\n",n--); //decrement the value in mwmory location
    }

    return 0;
}

/*
Decremenst the n value 2 times , & 7 is a odd no. so it won't reach 0 hence, infinte loop is the answer
*/