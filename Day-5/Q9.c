/*Write a program to input time in seconds and convert it to hours:minutes:seconds format.*/

#include <stdio.h>
int main (){
   printf("Name - Bhoomi Tyagi\n SAP ID - 590028798\n Course - BCA\n Batch - 06\n");
    printf("--------------------------------------------------\n");
    int s;
    int h;
    int m;
    int ss;
    printf("enter the time in sec = ");
    scanf("%d",&s);
    m=(s%3600/60);
    h=(s/60)/60;
    ss=((s%3600)%60)%60;
    printf("time after formatting will be = %.2d:%.2d:%.2d",h,m,ss);
    return 0;
}
