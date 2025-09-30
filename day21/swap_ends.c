//Q41: Write a program to swap the first and last digit of a number.
#include<stdio.h>
#include<math.h>    
int main() {
    int n, first_digit, last_digit, num_digits, middle_part;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 10) {
        // If the number has only one digit, no swap needed
        printf("%d\n", n);
        return 0;
    }

    last_digit = n % 10; // Get the last digit
    num_digits = (int)log10(n); // Find the number of digits - 1
    first_digit = n / (int)pow(10, num_digits); // Get the first digit

    // Remove the first and last digits from the number
    middle_part = (n % (int)pow(10, num_digits)) / 10;

    // Construct the new number with swapped digits
    int swapped_number = last_digit * (int)pow(10, num_digits) + middle_part * 10 + first_digit;

    printf("%d\n", swapped_number);
    return 0;
}
/*
Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001
*/
