//Q49: Write a program to print the following pattern:
#include<stdio.h>
int main() {
    int n=5;
    for(int i=1; i<=n; i++ ) {
        for(int j=n-i+1; j<=n; j++ ) {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}
/*
Sample Test Cases:
Input 1:

Output 1:
5
45
345
2345
12345

*/