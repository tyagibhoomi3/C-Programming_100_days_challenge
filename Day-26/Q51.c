/*Q51: Write a program to print the following pattern:
    5
   45
  345
 2345
12345*/

#include <stdio.h>

int main() {
	printf("Name : Bhoomi Tyagi \n Sap_id : 590028798 \n Course : BCA \n Batch : 6 \n");
	printf("------------------------------------------- \n");
    int i, j, n = 5;
    for (i = 5; i >= 1; i--) {
        for (j = 1; j < i; j++) {
            printf(" ");
        }
        for (j = i; j <= n; j++) {
            printf("%d", j);
        }
        printf("\n");  
    }

    return 0;
}

