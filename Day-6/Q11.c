//Q11: Write a program to input an integer and check whether it is even or odd using if–else.

#include <stdio.h>

int main(){
    printf("Name  - Bhoomi Tyagi\n");
    printf("SAP ID - 590028798\n");
    printf("Course - BCA\n");
    printf("Batch  - 06\n");
    printf("--------------------------------------------\n");
    int n;
    printf("Enter a number: ");  
    scanf("%d", &n);
    if (n >= 0) {
        if (n == 0) {
            printf("Zero\n");
        } else {
            printf("Positive\n");
        }
    } else {
        printf("Negative\n");
    }
     return 0;
}

