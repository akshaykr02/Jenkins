#include <stdio.h>

biggest2()
{
    int x,y;
    printf("Enter the two numbers \n");
    scanf("%d%d",&x,&y);
    if(x>y)
    { 
        printf("Largest number is %d.", x);
    }else
{
    printf("Largest number is %d.", y );
}
return 0;
}

