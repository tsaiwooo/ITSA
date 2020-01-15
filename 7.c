#include<stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
        int r1, r2, i1, i2;
        int R, I, i, num, cnt=0;
        char line[15], op;
        char *ptr, *delim=" ";
        fgets(line, 15, stdin);
        num = atoi(line);
        for(i=0; i<num; i++)
        {
            fgets(line, 15, stdin);
            ptr = line;
            ptr = strtok(line, delim);
            while(ptr != NULL)
            {
                    if(cnt == 0) op = *ptr;
                    else if(cnt == 1) r1 =atoi(ptr);
                    else if(cnt == 2) i1 =atoi(ptr);
                    else if(cnt == 3) r2 =atoi(ptr);
                    else if(cnt == 4) i2 =atoi(ptr);
                    cnt++;
                    ptr = strtok(NULL, delim);
            }
            cnt = 0;
            if(op == '+')
            {
                R = r1+r2;
                I = i1+i2;
            }
            else if(op == '-')
            {
                R = r1-r2;
                I = i1-i2;
            }
            else if(op == '*')
            {
                R = (r1*r2) - (i1*i2);
                I = (r1*i2) + (r2*i1);
            }
            printf("%d %d\n",R, I);
        }
}
