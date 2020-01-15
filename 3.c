#include<stdio.h>

int main()
{
    int num1, num2, ans, i;

    scanf("%d%d",&num1, &num2);
    num1*=num1;
    num2*=num2;
    num1+=num2;
    for(i=1; i<num1/2; i++)
    {
            if(i*i > num1) break;
    }
    ans = i;
    if(ans < 100)
    {
        printf("inside\n");
    }
    else
        printf("outside\n");
}
