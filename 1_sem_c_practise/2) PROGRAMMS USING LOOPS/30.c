//Find sin(x) using series
 #include<stdio.h> 
 #include<math.h> 
int main() 
{float sum,term,xd,x; 
int i; 
printf("Enter x in degree:"); 
scanf("%f",&xd); 
x=(xd*3.141552654)/180.0; 
sum=0; 
term=x; 
for(i=2;fabs(term)>0.000001;i++)//fabs(x)- returns modulus i.e. absolute value of argument(x) 
{sum+=term; 
term=-term*x*x/((2*i-1)*(2*i-2));} 
printf("Sin (%f)=%f",xd,sum); 
}