//45: Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.
#include<stdio.h>
int main() {
    int n;
    float sum = 0.0;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        int num = 2 * i;          // Numerator: 2, 4, 6, 8, ...
        int den = 4 * i - 1;      // Denominator: 3, 7, 11, 15, ...
        sum += (float)num / den;  // Add the fraction to sum
    }

    printf("Approximate sum: %.2f\n", sum);
    return 0;
}
/*
Sample Test Cases:
Input 1:
3
Output 1:
Approximate sum: 1.56

Input 2:
5
Output 2:
Approximate sum: 2.22

*/