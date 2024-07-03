  #include<stdio.h>
    int main(){
      
    int a=10;
    
    int b=&a;
    int c=&a+1;

    printf("%d",c-b);
    return 0;
    }