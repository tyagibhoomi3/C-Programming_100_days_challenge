//Q91 (Strings)
//Remove all vowels from a string.
#include <stdio.h>
int main() 
{
    printf("Name - Bhoomi Tyagi\nSAP ID - 590028798\nCourse - BCA\nBatch - B6");
    printf("\n-------------------------------------\n");
    char str[200], res[200];
    int i = 0, j = 0;
    printf("Enter a string: ");
    scanf("%[^\n]", str);  
    while (str[i] != '\0') 
    {
        if (str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u' &&
            str[i] != 'A' && str[i] != 'E' && str[i] != 'I' && str[i] != 'O' && str[i] != 'U') 
        {
            res[j] = str[i];
            j++;
        }
        i++;
    }
    res[j] = '\0';  
    printf("String after removing vowels: %s\n", res);
    return 0;
}
