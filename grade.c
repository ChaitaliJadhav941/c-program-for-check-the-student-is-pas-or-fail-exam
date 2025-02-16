#include<stdio.h>
int main()
{
    int phy,chem,maths;
    float per;
    printf("Enter marks \n");
    scanf("%d%d%d", &phy,&chem,&maths);
    if(phy<35 && chem<35 && maths<35)
    {
        printf("fail in all \n");
    }
    else
    {
        if(phy<35 && chem>35 && maths>35)
        {
            printf("fail in phy \n");
        }
        else
        {
            if(phy>35 && chem<35 && maths>35)
            {
                printf("fail in chem \n");
            }
            else
            {
                if(phy>35 && chem>35 && maths<35)
                {
                    printf("fail in maths \n");
                }
                else
                {
                    per = ((phy+chem+maths)*100.0)/300;
                     {
                        printf( "your percentage are:%f \n",per);
                     }
                    if (per>=65)
                     {
                        printf("Congratulations you pass with Grade: A\n");
                     }
                    else
                    {
                        if(per>=65 && per<65)
                        {
                            printf(" Congratulation you pass with Grade: B\n");
                        }
                        else
                        {
                            printf("Congratulations you pass with Grade: C\n");
                        }
                    }
                }
            }
        }

    }
    return 0;

}