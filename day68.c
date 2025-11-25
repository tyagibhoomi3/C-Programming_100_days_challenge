//Q118 (Logic Enhancers)
//Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. Print that missing number
#include <stdio.h>
int main() 
{
    printf("Name - Bhoomi Tyagi\nSAP ID - 590028798\nCourse - BCA\nBatch - 06\n");
    printf("--------------------------------------------------\n");
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++) 
    scanf("%d", &arr[i]);
    scanf("%d", &arr[i]);
    int total = n * (n + 1) / 2;
    int sum = 0;
    for(int i = 0; i < n; i++) 
    sum += arr[i];
    printf("%d", total - sum);
    return 0;
}
