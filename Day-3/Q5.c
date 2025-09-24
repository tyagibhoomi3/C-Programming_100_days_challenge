/*Write a program to convert temperature from Celsius to Fahrenheit.*/

#include<stdio.h>
int main(){
	printf("Name - Bhoomi Tyagi\n SAP ID - 590028798\n Course - BCA\n Batch - 06\n");
    printf("--------------------------------------------------\n");
    float celsius, fahrenheit; 
    printf("Enter temperature in Celcius: "); 
    scanf("%f", &celsius); 
    fahrenheit = (celsius * 9 / 5) + 32; 
    printf("Temperature in Fahrenheit: %.2f\n", fahrenheit); 
    return 0;
}
