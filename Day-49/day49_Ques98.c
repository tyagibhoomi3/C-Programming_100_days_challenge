//Q98 (Strings)
//Print initials of a name with the surname displayed in full.
#include <stdio.h>
int main()
{
    printf("Name - Bhoomi Tyagi\nSAP ID - 590028798\nCourse - BCA\nBatch - B6");
    printf("\n-------------------------------------\n");
    char name[100];
    int i = 0, lastSpace = -1;
    printf("Enter your full name: ");
    scanf("%[^\n]", name);
    while (name[i] != '\0')
    {
        if (name[i] == ' ')
        {
            lastSpace = i;
        }
        i++;
    }
    if (name[0] != ' ')
    {
        printf("%c. ", name[0]);
    }
    for (i = 1; name[i] != '\0'; i++)
    {
        if (name[i - 1] == ' ' && i != lastSpace + 1 && name[i] != ' ')
        {
            printf("%c. ", name[i]);
        }
    }
    if (lastSpace != -1)
        printf("%s", &name[lastSpace + 1]);
    return 0;
}
