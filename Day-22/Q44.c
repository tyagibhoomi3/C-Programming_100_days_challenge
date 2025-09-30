//Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.
#include <stdio.h>
int main()
{
     printf("Name - Bhoomi Tyagi\n SAP ID - 590028798\n Course - BCA\n Batch - 06\n");
    printf("--------------------------------------------------\n");
    float den,num;
    int n;
    printf("Enter the  value of n : ");
    scanf("%d",&n);
    float sum = 0.0;
    for(int i = 1; i <= n; i++)
    {
        num = (2*i)-1;
        den = 2*i;
        sum = sum + num/den;
    }
    printf("The sum of the series is: %.2f\n", sum);
    return 0;
}

