//Q97 (Strings)
//Print the initials of a name.
#include <stdio.h>
int main() 
{
    printf("Name - Bhoomi Tyagi\nSAP ID - 590028798\nCourse - BCA\nBatch - B6");
    printf("\n-------------------------------------\n");
    char name[100];
    int i = 0;
    printf("Enter your full name: ");
    scanf("%[^\n]", name);  
    if (name[0] != ' ')
    {
        printf("%c. ", name[0]);
    }
    while (name[i] != '\0') 
    {
        if (name[i] == ' ' && name[i + 1] != ' ' && name[i + 1] != '\0')
        {
            printf("%c. ", name[i + 1]);
        }
        i++;
    }
    return 0;
}
