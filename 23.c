#include<stdio.h>

int main()
{
        int n, a1, a2, a3, total;
        int c1=0, c5=0, c50=0;

        scanf("%d,%d,%d,%d", &n, &a1, &a2, &a3);
        total =n-((a1*15)+(a2*20)+(a3*30));
        if(total < 0)
        {
                printf("0\n");
                return;
        }
        else
        {
                while(total >= 50)
                {
                        total -= 50;
                        c50++;
                }
                while(total >= 5)
                {
                        total -= 5;
                        c5++;
                }
                c1 = total;
        }
        printf("%d,%d,%d\n", c1, c5, c50);
}
