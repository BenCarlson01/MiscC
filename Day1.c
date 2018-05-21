/* 
 * Tells the compiler to include contents of stdio.h
 * Contains basic functions such as scanf() and printf()
 */
#include <stdio.h>

/*
 * Must declare/define methods before they are called
 */
// int methods return type int
int int_square(int x) {
    return x * x;
}
// float methdos return type float
float float_square(float x) {
    return x * x;
}
// void methods return NULL
void printf_examples();

/*
 * The execution of a C program begins from the main() function
 */
int main() {
    printf_examples();
    // Exit statement of the program - where it ends
    return 0;
}  

/*
 * A method with many printf() examples
 */
void printf_examples() {
    /*
     * Format is: %[flags][width][.precision][length]specifier
     */
    /*
     * Specifiers:
     * %c - character
     * %d, %i - signed decimal integer
     * %e - scientific notation (mantissa/exponent) using e
     * %E - scientific notation (mantissa/exponent) using E
     * %f - decimal floating point number
     * %g - uses shorter of %e or %f
     * %G - uses shorter of %E or %f
     * %o - signed octal number
     * %s - string of characters
     * %u - unsigned decimal integers
     * %x - unsigned hexadecimal integers
     * %X - unsigned hexadecimal integers, with capital letters
     * %p - pointer address
     * %n - nothing printed
     * %% - %
     */
    /* 
     * flags:
     * - - left-justify (default right-justify)
     * + - precede the result with a +/- sign (default only - has sign)
     * (space) - insert a space before the value if no sign
     * # - used with %o, %x, %X, the value is preceded by 0, 0x, 0X
     *      respectively for values different than 0
     *     used with %e, %E, %f, %g, %G, forces written output to contain
     *      a decimal point even if no digits would follow (by default, 
     *      if no digits follow, no decimal point is written)
     * 0 - left-pads the number with 0's instead of spaces
     */
    /*
     * width:
     * (number) - minimum number of characters to be printed
     *      if a larger number of characters, none are truncated 
     * * - the width is not specified in the format string, but as an
     *      additional integer value argument preceding the argument to be
     *      formatted
     */
    /*
     * .precision:
     * .number - specifies minimum number of digits to be written.
     *      if value is shorter, padded with leading zeros
     * .* - precision is not specified in the format string, but as an 
     *      additional integer value argument preceding the argument to be 
     *      formatted
     */
    /*
     * length:
     * h - argument is interpretted as a short int or an unsigned short int
     * l - argument is interpretted as a long int or an unsigned long int for
     *      integer specifiers, and as a wide character or wide character
     *      string for %c and %s
     * L - argument is interpretted as a long double
     */
    /*
     * Additional arguments should match the number of % specifiers in the
     *  string to be printed, and each additional argument is respective to
     *  a % specifier
     * 
     * Return value: number of characters written, or a negative value if fail
     */
    //Examples
    char c1 = 'X';
    char* s1 = "I am a string";
    printf("Here is a char: %c; Here is a string: %s\n", c1, s1);


}









