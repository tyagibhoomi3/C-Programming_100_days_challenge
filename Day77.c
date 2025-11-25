//Q127: Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to output.txt.

/*
Sample Test Cases:
Input 1:
Input File (input.txt): Hello World\nC programming
Output 1:
Output File (output.txt): HELLO WORLD\nC PROGRAMMING

*/

#include <stdio.h>

int main() {
	printf("Name - Bhoomi Tyagi\n SAP ID - 590028798\n Course - BCA\n Batch - 06\n");
    printf("--------------------------------------------------\n");
    FILE *in, *out;
    char ch;

    in = fopen("input.txt", "r");
    out = fopen("output.txt", "w");

    while ((ch = fgetc(in)) != EOF) {
        if (ch >= 'a' && ch <= 'z') {
            ch = ch - 32;   
        }
        fputc(ch, out);
    }

    fclose(in);
    fclose(out);

    printf("Conversion complete. Data written to output.txt");

    return 0;
}

