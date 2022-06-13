// Online C compiler to run C program online
#include <stdio.h>
/**
 * main - Prints the alphabet in lowercase.
 *
 * Return: Always 0.
 */
int main() {
    // Write C code here
    char alphabet;
    for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
    {
        putchar(alphabet);
        putchar("\n");
    }

    return 0;
}
