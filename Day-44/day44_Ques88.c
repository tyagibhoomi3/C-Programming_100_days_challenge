//Q88 (Strings)
//Replace spaces with hyphens in a string.
#include <stdio.h>
int main() 
{
    printf("Name - Bhoomi Tyagi\nSAP ID - 590028798\nCourse - BCA\nBatch - B6");
    printf("\n-------------------------------------\n");
    char str[100];
    int i = 0;
    printf("Enter a string: ");
    scanf("%[^\n]", str);   
    while (str[i] != '\0') 
    {
        if (str[i] == ' ') 
        {
            str[i] = '-';
        }
        i++;
    }
    printf("Modified string: %s\n", str);
    return 0;
}
