#include <stdio.h>
#include <stdlib.h>

#define output_file "digits_count.txt"

int main() {

    int digits_counter = 0, is_char;
    FILE *number_count;
    number_count = fopen(output_file, "w+b");
    if (number_count == NULL) {
        printf("\nError");
    } else {
        printf("Text: \n");

        while ((is_char = getchar()) != EOF) {
            if (is_char == 48 || is_char == 49 || is_char == 50 || is_char == 51 || is_char == 52 || is_char == 53 ||
                is_char == 54 || is_char == 55 || is_char == 56 || is_char == 57) {
                digits_counter++;
            }
        }

        number_count = fopen(output_file, "wt");
        if (number_count == NULL) {
            printf("\nError");
            exit(1);
        }

        fprintf(number_count, "Counted digits = %d", digits_counter);
        fclose(number_count);
    }
    return 0;
}