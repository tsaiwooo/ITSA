#include<stdio.h>

void main()
{
        int ans[8] = {0};
        int num, j, i, tmp;

        scanf("%d",&num);
        if(num>127 || num<-128) return;
        tmp = num;
        if(num<0) num*= -1;
        for(i=7; i>=0; i--)
        {
                if(num == 0) break;
                ans[i] = num%2;
                num = num/2;
        }
        if(tmp<0)
        {
                for(i=0; i<8; i++)
                {
                        if(ans[i] != 0)
                        {
                                for(j=0; j<i; j++)
                                {
                                        if(ans[j] == 0) ans[j] = 1;
                                        else ans[j] = 0;
                                }
                                break;
                        }
                }
        }
        for(i=0; i<8; i++)
        {
                printf("%d",ans[i]);
        }
        printf("\n");
}
