   // #include<stdio.h>
//
   // int main(){
   //     int first=50;
   //     int second=60, third;
//
    //    third=first/*sanjai*/+second;
    //    printf("%d/*sanjai*/\n",third);
     //   return 0;
   // }

//NOTE THE BELOW QUESTION
//COMPILER WON'T REMOVE THE COMMENT IN UNARY OPERATORS
//OUTPUT :compilation error


//#include<stdio.h>
//
//int main(){
//    for(int i=2;i!=0;i-/*jai*/-){
//        printf("%d",i);
//    }
 //   return 0;
//}


#include<stdio.h>

int main(){
    for(int i=8;i!=0; i-=/*jai*/1){
        printf("%d",i);
    }
    return 0;
}



