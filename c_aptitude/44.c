#include <stdio.h>

int main(){
    if(printf("coding ")){
        switch(printf("is ")){
            while(printf("fun\n")){

            }
        }
    }
    printf("\n\n");
    if(printf("coding ")){
        switch(printf("\n")){
            case 1:
                if(printf("is fun\n")){
                    return 0;
                }
        }
    }
    return 0;
}
/*NOTES
    printf function returns the length of the string which prints
    in this case, it returns the 7 in if statement
    then 3 is passed to switch, then compiler searches for case which is matches with 3, here there
    is no such case is given, so it terminates in the switch case itself, so while loop will not execute
*/