#include <stdio.h>
int hello_world();
int ask_int();

int main() {
    ask_int();
}

int hello_world() {
    printf("Hello World\n");
    return 0;
}

int ask_int() {
    int number;

    // printf() dislpays the formatted output 
    printf("Enter an integer: ");  
    
    // scanf() reads the formatted input and stores them
    scanf("%d", &number);  
    
    // printf() displays the formatted output
    printf("You entered: %d\n", number);
    return 0;
}