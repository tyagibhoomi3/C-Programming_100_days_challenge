/*Write a program to input two numbers and display their sum, difference, product, and quotient.*/
/*Name-Bhoomi Tyagi*/
/*SAP_ID-590028798*/
/*course-BCA*/
/*Batch-6*/

#include <stdio.h>
int main(){
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
