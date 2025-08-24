//Q5: Write a program to convert temperature from Celsius to Fahrenheit.
#include <stdio.h>
int main() {
    int celcius;
    float fahhrenheit;

    printf("enter temperature in celcius: ");
    scanf("%d", &celcius);      
    fahhrenheit = (celcius * 9/5) + 32; 
    printf("Fahrenheit=%f \n", fahhrenheit);
    return 0;  
}
/*
Sample Test Cases:
Input 1:
0
Output 1:
Fahrenheit=32

Input 2:
100
Output 2:
Fahrenheit=212

*/