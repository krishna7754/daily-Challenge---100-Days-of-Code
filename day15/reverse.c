//Q30: Write a program to reverse a given number.
#include<stdio.h>
int main() {
    int n, reversed = 0, remainder;
    printf("enter your no. ");
    scanf("%d", &n);

    while(n != 0) {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }
    printf("%d\n", reversed);
    
    
    return 0;

    }
/*
Sample Test Cases:
Input 1:
1234
Output 1:
4321

Input 2:
100
Output 2:
1

*/