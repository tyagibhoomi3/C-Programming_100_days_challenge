/*Q49: Write a program to print the following pattern:
5
45
345
2345
12345*/

#include <stdio.h>

int main() {
	printf("Name : Bhoomi Tyagi \n Sap_id : 590028798 \n Course : BCA \n Batch : 6 \n");
	printf("------------------------------------------- \n");
    int i, j;

    for (i = 5; i >= 1; i--) {
        for (j = i; j <= 5; j++) {
            printf("%d", j);
        }
        printf("\n"); 
    }

    return 0;
}


