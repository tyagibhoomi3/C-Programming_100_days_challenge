/*Q18: Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria: 
90-100: Grade A 
80-89: Grade B 
70-79: Grade C 
60-69: Grade D 
below 60: Grade F.*/



#include <stdio.h>
int main()
{
   printf("Name - Bhoomi Tyagi\n SAP ID - 590028798\n Course - BCA\n Batch - 06\n");
    printf("--------------------------------------------------\n");
    int p;
    scanf("%d", &p);
    if (p >= 90)
        printf("Grade A\n");
    else if (p >= 80)
        printf("Grade B\n");
    else if (p >= 70)
        printf("Grade C\n");
    else if (p >= 60)
        printf("Grade D\n");
    else
        printf("Grade F\n");
return 0;
}
