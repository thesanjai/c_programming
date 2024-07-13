#include <stdio.h>
int find_length_int(int a){

    int len=0;
    while(a!=0){
        a=a/10;
        len++;
        
    }

    return len;
}

int find_decimal_part(double a){
    double fractional_part = a - (int)a; // getting the value after the decimal
    int fractional_data = (int)(fractional_part * 1000000); //max length of decimal in double 6
            
    //removing zeros
    if(fractional_data != 0){
        while(fractional_data % 10 ==0 ){
            fractional_data /= 10;
         }
    }
    return fractional_data;
}
int main() {
    double data;
    printf("Enter data: ");
    scanf("%lf", &data);

  
    int t= find_decimal_part(data);
    printf("t = %d \n",t);
    printf("%d\n",find_length_int(t));

    

<<<<<<< HEAD
    printf("fractional data = %d\n",fractional_data);
*/

printf("%lf",data)
=======
>>>>>>> 4d016e3d357dbd95a5fad12e0afe7ac5d66a1d56
    return 0;
}
