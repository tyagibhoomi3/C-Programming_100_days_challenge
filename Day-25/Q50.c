/*Q50: Write a program to print the following pattern:
*****
 ****
  ***
   **
    **/

#include <stdio.h>

int main() {
	printf("Name : Bhoomi Tyagi \n Sap_id : 590028798 \n Course : BCA \n Batch : 6 \n");
	printf("------------------------------------------- \n");
    int i, j, n = 5;  
    for (i = 0; i < n; i++) {
        for (j = 0; j < i; j++) {
            printf(" ");
        }
        for (j = i; j < n; j++) {
            printf("*");
        }
        printf("\n");  
    }

    return 0;
}

