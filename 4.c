#include<stdio.h>

int main()
{
        int hour1,hour2,min1,min2;
        int total,hour,cost;

        scanf("%d%d%d%d",&hour1, &min1, &hour2, &min2);
        hour = hour2 - hour1;
        total = (hour*60)+min2-min1;
        if(total < 120) cost = (total/30)*30;
        else if(total < 240)
        {
                cost = 120;
                total -= 120;
                cost += (total/30) * 40;
        }
        else
        {
                cost = 280;
                total -= 240;
                cost += (total/30) * 60;
        }
        printf("%d\n",cost);
}
