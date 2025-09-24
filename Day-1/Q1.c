/*Write a program to input two numbers and display their sum.*/

#include <stdio.h>
int main(){
    printf("Name - Bhoomi Tyagi\n SAP ID - 590028798\n Course - BCA\n Batch - 06\n");
    printf("--------------------------------------------------\n");
    int a;
    int b;
    int SUM;
    printf("enter the value of a=");
    scanf("%d",&a);
    printf("enter the value of b=");
    scanf("%d",&b);
    SUM=a+b;
    printf("sum of two number  %d+%d=%d",a,b,SUM);
    return 0;
}

