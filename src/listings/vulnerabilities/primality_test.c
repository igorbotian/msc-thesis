#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#define UCHAR_MAX_LENGTH 3 /* UCHAR_MAX == 255 */
int is_prime(unsigned short number);

int main(int argc, char** argv) {
    unsigned int number_buf_size = (UCHAR_MAX_LENGTH + 1);
    char* number_buf = 
        (char *) malloc(sizeof(char) * number_buf_size);
    printf("Enter a number (1-%d)", UCHAR_MAX);
    gets(number_buf);
    
    unsigned char number = 
        (unsigned char) atoi(number_buf);
    char* result = is_prime(number) 
        ? "is a prime" : "is not a prime";
    printf(number_buf);
    printf(" %s number\n", result);

    free(number_buf);
    return EXIT_SUCCESS;
}

int is_prime(unsigned int number) {
    int result = 1;
    int i;

    for(i = 2; i <= number / 2; i++) {
        if((number % i) == 0) {
            result = 0;
        }
    }

    return result;
}