#include <stdio.h>
#include <string.h>

int hello_world();
int ask_int();
void multi_program();
void palindrome();
int is_palindrome(char *str);
void inplace_reverse(char *str);

int main() {
    multi_program();
}

int hello_world() {
    // printf() displays the formatted output
    printf("Hello World\n");
    return 0;
}

int ask_int() {
    int number;
    printf("Enter an integer: ");  
    
    // scanf() reads the formatted input and stores them
    scanf("%d", &number);  

    printf("You entered: %d\n", number);
    return 0;
}

void multi_program() {
    int loop = 0;
    char s1[2];

    printf("Do you want to loop the program? (y/n): ");
    fgets(s1, sizeof(s1), stdin);

    while (*s1 != 'y' || *s1 != 'n') {
        printf("That is not a valid input.\n");
        printf("Please enter either y or n.\n");
        printf("Do you want to loop the program? (y/n): ");
        fgets(s1, sizeof(s1), stdin);
    }
    if (*s1 == 'y') {
        loop = 1;
    } else {
        palindrome();
    }

    while (loop) {
        palindrome();
        printf("Continue? (y/n): ");
        fgets(s1, sizeof(s1), stdin);
        while (*s1 != 'y' || *s1 != 'n') {
            printf("That is not a valid input.\n");
            printf("Please enter either y or n.\n");
            printf("Continue? (y/n): ");
            fgets(s1, sizeof(s1), stdin);
        }
        if (*s1 == 'n') {
            loop = 0;
        }
    }
}

void palindrome() {
    char s2[1000];
    printf("Enter Palindrome: ");
    fgets(s2, sizeof(s2), stdin);
    s2[999] = '\0';
    if (is_palindrome(s2)) {
        printf("This is a palindrome!");
    } else {
        printf("This is not a palindrome. ):<");
    }
}

int is_palindrome(char *str) {
    if (str) {
        char * end = str + strlen(str) - 1;

        while (str < end) {
            if (*str != *end) {
                return 0;
            }
            str++;
            end--;
        }   
    }
    return 1;
}

void inplace_reverse(char *str) {
    /*
     * Found on StackOverflow 
     * https://stackoverflow.com/questions/784417/reversing-a-string-in-c
     * By Username: rampion
     * Reverses the given null-terminated string in place
     */
    if (str) {
        char * end = str + strlen(str) - 1;

        // swap the values in the two given variables
        // XXX: fails when a and b refer to same memory location
        #define XOR_SWAP(a,b) do\
        {\
            a ^= b;\
            b ^= a;\
            a ^= b;\
        } while (0)

        // walk inwards from both ends of the string, 
        // swapping until we get to the middle
        while (str < end)
        {
            XOR_SWAP(*str, *end);
            str++;
            end--;
        }
        #undef XOR_SWAP
    }
}