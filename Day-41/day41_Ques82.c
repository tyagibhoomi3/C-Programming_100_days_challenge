//Q82 (Strings)
//Print each character of a string on a new line.
#include <stdio.h>
int main() 
{
    printf("Name - Bhoomi Tyagi\nSAP ID - 590028798\nCourse - BCA\nBatch - B6");
    printf("\n-------------------------------------\n");
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    for (int i = 0; str[i] != '\0'; i++) 
    {
        printf("%c", str[i]);
        printf("\n");
    }
    return 0;
}