#include <stdio.h>
int main()
{
    printf("Name - Bhoomi Tyagi\n SAP ID - 590028798\n Course - BCA\n Batch - 06\n");
    printf("--------------------------------------------------\n");
    int n,pro=1;
    printf("enter the last number to be multiplied : ");
    scanf("%d",&n);
    for (int i=0 ; i<=n ; i++)
    {
        if(i%2 == 0)
        {
            pro = pro*i;
        }
    }
    printf("The product of first %d even numbers is : %d",n,pro);
    return 0;
}