#include <stdio.h>
int main()
{
    printf("Name - Bhoomi Tyagi\n SAP ID - 590028798\n Course - BCA\n Batch - 06\n");
    printf("--------------------------------------------------\n");
    int n;
    printf("Enter the last number to be entered :");
    scanf("%d",&n);
    for(int i=1 ; i<=n ; i++)
    {
        printf("%d",i);
    }
    return 0;
}