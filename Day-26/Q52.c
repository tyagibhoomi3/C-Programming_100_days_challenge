/*Q52: Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

**/

#include <stdio.h>

int main() {
	printf("Name : Bhoomi Tyagi \n Sap_id : 590028798 \n Course : BCA \n Batch : 6 \n");
	printf("------------------------------------------- \n");
    int i;
    printf("*\n\n");
    for (i = 0; i < 2; i++) {
        printf("*\n");
    }
    printf("\n");
    for (i = 0; i < 5; i++) {
        printf("*\n");
    }
    printf("\n");
    for (i = 0; i < 3; i++) {
        printf("*\n");
    }
    printf("\n");
    printf("*\n");

    return 0;
}

