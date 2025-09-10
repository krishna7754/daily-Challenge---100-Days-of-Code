//Q36: Write a program to find the HCF (GCD) of two numbers.
#include<stdio.h>
int main() {
    int a, b, i, hcf = 1;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    for (i = 1; i <= (a < b ? a : b); i++) {
        if (a % i == 0 && b % i == 0) {
            hcf = i;
        }
    }

    printf("HCF of %d and %d is: %d\n", a, b, hcf);
    return 0;
}
/*
Sample Test Cases:
Input 1:
12 18
Output 1:
6

Input 2:
7 9
Output 2:
1

*/