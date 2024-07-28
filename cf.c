#include<stdio.h>
void ctof()
{

    int c,f;
    printf("Enter the temperature in celsius:");
    scanf("%d",&c);
    f=(1.8*c)+32;
    printf("Temperature in fahrenheit: %d",f);
}
void ftoc()
{

    int c,f;
    printf("Enter the temperature in fahrenheit:");
    scanf("%d",&f);
    c=(f-32)/1.8;
    printf("Temperature in celsius: %d",c);
}
int main()
{
    int choice;
    printf("Enter the option for conversion:\n1.Celsius to fahrenheit\n2.Fahrenheit to celsius\n");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
       ctof();
       break;
    case 2:
        ftoc();
        break;
    default:
        printf("Enter the valid option");
    }
}
