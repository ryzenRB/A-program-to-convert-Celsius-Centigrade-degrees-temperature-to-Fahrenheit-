#include<stdio.h>
int main (){ 

    float celsius;

    printf("Write the temperature in Celsius:");
    scanf("%f", &celsius);

    printf("Given temerature in Fahrenheit will be: %f.", (celsius*9/5) + 32 );

 return 0; 
 }