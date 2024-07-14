#include <stdio.h>

int main(){
  printf(2 + "sanjai\n");
  printf(0 + "like\n");
  printf(3 + "sanjai\n");
    return 0;
}
/*NOTES
    if we add the integer with string
    first pointer points to the first character of the string , which is 's' in this case
    if we add +2 with that stering, it moves to that int position
*/