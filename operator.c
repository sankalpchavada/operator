#include<stdio.h>

void main()
{
    int x,y,z,s;
    int yn;

    printf("Provide value of X: ");
    scanf("%d",&x);

    printf("Provide value of Y: ");
    scanf("%d",&y);
  /* if (x != int || y != int )
    {
        printf("iinvalid");
    }*/
    printf("Do you want to provide value of Z? type 1 for yes, type 0 for no:   ");
    scanf("%d",&yn);

    if (yn==1)
        {   

        printf("\n\nokay! Provide value of Z: ");
        scanf("%d",&z);

        printf("\n\nselect your equation:\n1.square of (x+y)\n2.square of (x-y)\n3.cube of (x+y)\n4.cube of(x-y)\n5.cube of (x+y+z)\n6.cube of (x-y-z)\n7.square of(x+y+z)");
        printf("\nenter choice: ");
        scanf("%d",&s);



        switch (s)
          {
            case 1: int c =x+y; printf("\nYour Answer: %d",c*c);
            break;
            case 2: printf("\nYour Answer: %d",(x-y)*(x-y));
            break;
            case 3: printf("\nYour Answer: %d",(x+y)*(x+y)*(x+y));
            break;
            case 4: printf("\nYour Answer: %d",(x-y)*(x-y)*(x-y));
            break;
            case 5: printf("\nYour Answer: %d",(x+y+z)*(x+y+z)*(x+y+z));
            break;
            case 6: printf("\nYour Answer: %d",(x-y-z)*(x-y-z)*(x-y-z));
            break;
            case 7: printf("\nYour Answer: %d",(x+y+z)*(x+y+z));
            break;
            default:printf("Invalid");
            break;
          }
    }

    
    else if(yn==0)
    {
        printf("select your equation:\n1.square of (x+y)\n2.square of(x-y)\n3.cube of(x+y)\n4.cube of (x-y)");
        printf("\nenter choice: ");
        scanf("%d",&s);

         switch (s)
        {
            case 1: printf("Your Answer: %d",(x+y)*(x+y));
            break;
            case 2: printf("Your Answer: %d",(x-y)*(x+y));
            break;
            case 3: printf("Your Answer: %d",(x+y)*(x+y)*(x+y));
            break;
            case 4: printf("Your Answer: %d",(x-y)*(x-y)*(x-y));
            break;
            default:printf("Invalid");
            break;

        }
    }
    else
    {
        printf("timepass kar ma dofa");
    }
    
}

