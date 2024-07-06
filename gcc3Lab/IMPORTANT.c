#include<stdio.h>

int main(){
    char name[6],str[3]="abc",str1[10]="Sivakumar";

    char* str2="hema";

    printf("[before scanf()]str1 => %s\n",str1);
    printf("Enter the name(give input < 6 ,=6 and (> 6 and < 9) to see difference in str1, for loop): ");
    scanf("%s",name);

    printf("name => %s\n",name);
    printf("str => %s\n",str);
    printf("[After scanf()]str1 => %s\n",str1);
    printf("str2 => %s\n",str2);

    for(int i=0;i<30;i++){
        printf("%c  %d\n",str[i],str[i]);
    }
    printf("Address\n");
    printf("name => %p\n",name);
    printf("str => %p\n",str);
    printf("str1 => %p\n",str1);
    printf("*str2 => %p\n",str2);
    return 0;
}
/*
    NOTES
        HOW MEMORY WILL ALLOCATES IN COMPILER 

1-> single char
2-> int
3-> float
4-> char*
5-> double
6-> char[]

in string always last char is null '\0'

char name[6]; 
//you must use only 5 address spaces and leave last space for null
or else it leads to buffer overflow

//HOW TO PREVENT USER FROM BUFFER OVERFLOW
scanf("%(size-1)s",name);

EXAMPLE:scanf("%5s"name);


memory is allocated respect to its size, 
smaller memory allocates first eventhough , you declared that variable jsut before to the return 0

char str1[10],str2[5],str4[30];
char str3[2];

HOW COMPILER ALLOCATES MEMORY (ascending order) -> str3,str2,str1,str4

char name[]="Sanjai"; //automatically sets the size by the compiler
//its actual size ? => 6+1 =sizeof() =strlen()+1

char name[20]="Sanjai";
//if user use less number of character than allocated , then automatically other values are set to null '\0'

char name[20];
printf("Enter the name: ");
scanf("%s",name);
//by this ,method if user enter a string which is less than allocated , then all values are remains as a Garbage value;

char* name;
//if you type like this , its initial value is null => try to print(null)
//if you didn't  use this variable through out the program no memory was allocated to this variable => try to print (nil)
//it is dynamic memory , its memory was allocated during only run time, no memory is allocated in storage.
//its memory is allocates in RAM and then after the execution it was releasd by the CPU from the RAM

*/