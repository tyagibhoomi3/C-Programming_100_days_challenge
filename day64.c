//Q114 (Logic Enhancers)
//Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.
#include <stdio.h>
#include <string.h>
int main() 
{
    printf("Name - Shabdi Srivastava\nSAP ID - 590021135\nCourse - BCA\nBatch - 06\n");
    printf("--------------------------------------------------\n");
    char s[1000];
    scanf("%s", s);

    int freq[256] = {0};
    int left = 0, maxLen = 0;

    for(int right = 0; s[right] != '\0'; right++) {
        freq[(unsigned char)s[right]]++;

        while(freq[(unsigned char)s[right]] > 1) {
            freq[(unsigned char)s[left]]--;
            left++;
        }

        int len = right - left + 1;
        if(len > maxLen) maxLen = len;
    }

    printf("%d", maxLen);
    return 0;
}
