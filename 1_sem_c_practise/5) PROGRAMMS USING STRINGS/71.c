//Program to Count Blanks,Tabs and Newlines
#include <stdio.h>

int main() {
    int blanks = 0, tabs = 0, newlines = 0;
    char c;

    printf("Enter characters (E to stop): \n");

    while ((c = getchar()) != 'E') {
        if (c == ' ')
            blanks++;
        else if (c == '\t')
            tabs++;
        else if (c == '\n')
            newlines++;
    }

    printf("Number of Blanks: %d\n", blanks);
    printf("Number of Tabs: %d\n", tabs);
    printf("Number of Newlines: %d\n", newlines);

    return 0;
}