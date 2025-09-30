/*Write a program to print the following pattern:
*****
*****
*****
*****
*****   */
#include <stdio.h>
int main()
{
     printf("Name - Bhoomi Tyagi\n SAP ID - 590028798\n Course - BCA\n Batch - 06\n");
    printf("--------------------------------------------------\n");
    for(int i=0;i<=5;i++)
    {
        for(int j=0;j<=5;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

