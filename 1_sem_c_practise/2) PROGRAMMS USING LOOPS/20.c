//LCM & GCD
#include<stdio.h>

int find_gcd(int a,int b){
    if(b==0){
        return a;
    }else{
        return find_gcd(b,a%b);
    }
}
int main(){
    int a,b;
    printf("Enter two numbers: "); 
    scanf("%d%d",&a,&b);
                                                                             
    int gcd=find_gcd(a,b);
    printf("GCD of %d and %d is %d\n",a,b,gcd);
    printf("LCM of %d and %d is %d\n",a,b,(a*b)/gcd);  //lcm * gcd = a * b
    return 0;
}