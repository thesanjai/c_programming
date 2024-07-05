  #include<stdio.h>
    int main(){

        int a[]={1,2,3,4,5,6};

        int *p=a;


       

        printf("%p\n",p);

        for(int i=0;i<6;i++){
          printf("%p\n",&i[a]);
        }

    return 0;
    }