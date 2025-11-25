//Q125: Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.

/*
Sample Test Cases:
Input 1:
Existing File: data.txt (Content before execution: Hello world)
User Input: This is appended text.
Output 1:
File updated successfully with appended text.

*/


#include <stdio.h>

int main() {
	printf("Name - Bhoomi Tyagi\n SAP ID - 590028798\n Course - BCA\n Batch - 06\n");
    printf("--------------------------------------------------\n");
    FILE *fp;
    char text[200];

    fp = fopen("data.txt", "a");

    printf("Enter text to append: ");
    getchar(); 
    gets(text);

    fprintf(fp, "\n%s", text);

    fclose(fp);

    printf("File updated successfully with appended text.");

    return 0;
}

