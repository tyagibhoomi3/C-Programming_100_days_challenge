//Q124: Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().

/*
Sample Test Cases:
Input 1:
Source File: source.txt (Content: Learning C File Handling)
Output 1:
File copied successfully to destination.txt

*/
#include <stdio.h>

int main() {
	printf("Name - Bhoomi Tyagi\n SAP ID - 590028798\n Course - BCA\n Batch - 06\n");
    printf("--------------------------------------------------\n");
    FILE *src, *dest;
    char source[50], destination[50];
    int ch;

    printf("Enter source file name: ");
    scanf("%s", source);

    printf("Enter destination file name: ");
    scanf("%s", destination);

    src = fopen(source, "r");
    dest = fopen(destination, "w");

    while ((ch = fgetc(src)) != EOF) {
        fputc(ch, dest);
    }

    fclose(src);
    fclose(dest);

    printf("File copied successfully to %s", destination);

    return 0;
}

