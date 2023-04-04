#include<stdio.h>

void main()
{

    int s;
    printf("\nhi there! which program you wanna perform?\n\n");
    printf("\n1.C Program to print below design using printf function with help of 'tab' & 'newline' escape sequence");
    printf("\n2.C Program to perform a swapping of two variables\n");
    printf("3.C program to convert temperature from degree Celsius to Fahrenheit.");
    printf("\n4.C Program to find gross salary.Ex. Base Salary: 100 RS, HRA=10,DA=5,TA=8. ans = 123 RS");
    printf("\n\nEnter choice: ");
    scanf("%d",&s);

    if (s==1)
    {
    printf("\t\t*\t\t*\n\n");
    printf("\t*\t\t*\n\n");
    printf("*\t\t*\n\n");
    printf("\t*\t\t*\n\n");
    printf("\t\t*\t\t*\n\n");

    }
    else if(s==2)
    {
    int a,b,c=0;
    printf("Enter A: ");
    scanf("%d",&a);
    printf("Enter B: ");
    scanf("%d",&b);
    
    printf("Before Swap: a= %d b=%d",a,b);
    c=a;
    a=b;
    b=c;
    printf("\tAfter Swap: a=%d b=%d",a,b);
    
    }

    else if(s==3)
    {
    int c,f;

    printf("\nEnter Calcius: ");
    scanf("%d",&c);

    f=(c*9/5)+32;
    printf("Your temprature in Fehranhit is %d",f);

    }
    else if(s==4)
    {   
        int bs,hra,da,ta,total;
        char nm[10];
        printf("enter Your Name: ");
        scanf("%s",nm);
        //hra=house rent allownce; da = dearness allownace; ta = travelling allowance;
        printf("Enter base Salary: ");
        scanf("%d",&bs);

        hra=bs*10/100;
        da=bs*5/100;
        ta=bs*8/100;

        total=bs+hra+da+ta;
        printf("your house allowance: %d",hra);
        printf("\nyour dearness allowance: %d",da);
        printf("\nyour travelling allowance: %d",ta);
        printf("\n\nyour total salary: %d",total);

    }
    else
    {
        printf("Timepass kar ma navra");
    }




}
