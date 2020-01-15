#include<stdio.h>

int main()
{
        int num1, num2, i;

        scanf("%d %d",&num1, &num2);
        if(num1<=0 || num2<=0) return;
        else
        {
                while(num1>0 && num2>0)
                {
                        if(num1>num2)
                        {
                                num1 = num1%num2;
                        }
                        else
                        {
                                num2 = num2%num1;
                        }
                }
                if(num1==0)
                        printf("%d\n",num2);
                else
                        printf("%d\n",num1);
        }
}
