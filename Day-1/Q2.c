/*Write a program to input two numbers and display their sum, difference, product, and quotient.*/

#include <stdio.h>
int main(){
    printf("Name - Bhoomi Tyagi\n SAP ID - 590028798\n Course - BCA\n Batch - 06\n");
    printf("--------------------------------------------------\n");
    int x;
    int y;
    printf("enter the value of 1st number : ");
    scanf("%d",&x);
    printf("enter the value of 2nd number : ");
    scanf("%d",&y);
    printf("SUM = %d\n",x+y);
    printf("Difference = %d\n",x-y);
    printf("Product = %d\n",x*y);
    if (y != 0) {
        printf("Quotient = %.2f\n", (float)x / y);
     } else {
        printf("Division not possible (denominator is zero)\n");
      }
    return 0;
}

