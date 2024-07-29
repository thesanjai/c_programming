#include <stdio.h>

int add(int a,int b){
    return a+b;
}
int mul(int a,int b){
    return a*b;
}
int main(){

    int (*fun)(int ,int);
    fun=&add;
    printf("Addition: %d\n",fun(5,3));

    fun=&mul;
    printf("Multiplication: %d\n",fun(5,3));
    return 0;
}
/*#include <stdio.h>

// Function pointer type
typedef void (*func_ptr)(int);

// Functions to point to
void foo(int x) { printf("foo: %d\n", x); }
void bar(int x) { printf("bar: %d\n", x); }

int main() {
    // Create a function pointer
    func_ptr ptr = foo;

    // Call the pointed-to function
    ptr(10); // Output: foo: 10

    // Change the pointer to point to another function
    ptr = bar;

    // Call the new pointed-to function
    ptr(20); // Output: bar: 20

    return 0;
}

*/