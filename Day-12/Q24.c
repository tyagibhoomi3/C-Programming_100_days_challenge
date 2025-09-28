/*Write a program to calculate electricity bill based on units consumed with these rates: 
First 100 units at ₹5/unit 
Next 100 units at ₹7/unit 
Next 100 units at ₹10/unit 
Above at ₹12/unit*/
#include <stdio.h>
int main ()
{
    printf("Name - Bhoomi Tyagi\n SAP ID - 590028798\n Course - BCA\n Batch - 06\n");
    printf("--------------------------------------------------\n");
    int units;
    float bill;
    printf("Enter the units consumed: ");
    scanf("%d",&units);
    if(units<=100)
    {
        bill=units*5;
    }
    else if(units>100 && units<=200)
    {
        bill=(100*5)+(units-100)*7;
    }
    else if(units>200 && units<=300)
    {
        bill=(100*5)+(100*7)+(units-200)*10;
    }
    else if(units>300)
    {
        bill=(100*5)+(100*7)+(100*10)+(units-300)*12;
    }
    printf("Electricity Bill = ₹%.2f",bill);
    return 0;
}
