#include <stdio.h>

void main()
{
    int phy, chem, bio, math, comp; 
    float per; 

    /* Input marks of five subjects from user */
    printf("Enter five subjects marks: ");
    scanf("%d%d%d%d%d", &phy, &chem, &bio, &math, &comp);


    /* Calculate percentage */
    per = (phy + chem + bio + math + comp) / 5.0;

    printf("Percentage = %.2f\n", per);


    /* Find grade according to the percentage */
    if(per >= 70)
    {
        printf("Grade A");
    }
    else if(per > 60 && per < 70)
    {
        printf("First class");
    }
    else if(per >= 45 && per < 60)
    {
        printf("second class");
    }
    else if(per >= 35 && per < 45)
    {
        printf("Third class");
    }
    
    else
    {
        printf("Fail");
    }


}
