#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void compare(char **cmp, int cnt)
{
}

int main()
{
        char line[64], tmp[1];
        char type[64][1];
        char *ptr;
        int n, i, j, k, num[64], ntmp;
        int cnt = 0;

        fgets(line, 64, stdin);
        line[strlen(line)-1] = '\0';
        n = atoi(line);

        for(i=0; i<n; i++)
        {
                cnt = 0;
                fgets(line, 64, stdin);
                line[strlen(line)-1] = '\0';
                ptr = strtok(line, " ");
                while(ptr != NULL)
                {
                        type[cnt][0] = *ptr;
                        if(type[cnt][0] == 'S')
                        {
                                type[cnt][0] = '3';
                        }
                        else if(type[cnt][0] == 'H')
                        {
                                type[cnt][0] = '2';
                        }
                        else if(type[cnt][0] == 'D')
                        {
                                type[cnt][0] = '1';
                        }
                        else if(type[cnt][0] == 'C')
                        {
                                type[cnt][0] = '0';
                        }
                        ptr++;
                        num[cnt] = atoi(ptr);
                        ptr = strtok(NULL, " ");
                        cnt++;
                }
                for(j=0; j<cnt; j++)
                {
                        for(k=0; k<cnt-1-j; k++)
                        {
                                if(type[k][0] < type[k+1][0])
                                {
                                        tmp[0] = type[k][0];
                                        type[k][0] = type[k+1][0];
                                        type[k+1][0] = tmp[0];
                                        ntmp = num[k];
                                        num[k] = num[k+1];
                                        num[k+1] = ntmp;
                                }
                                else if(type[k][0] == type[k+1][0])
                                {
                                        if(num[k] < num[k+1])
                                        {
                                            tmp[0] = type[k][0];
                                            type[k][0] = type[k+1][0];
                                            type[k+1][0] = tmp[0];
                                            ntmp = num[k];
                                            num[k] = num[k+1];
                                            num[k+1] = ntmp;
                                        }
                                }
                        }
                }
                for(j=0; j<cnt; j++)
                {
                        if(type[j][0] == '0')
                        {
                                type[j][0] = 'C';
                        }
                        else if(type[j][0] == '1')
                        {
                                type[j][0] = 'D';
                        }
                        else if(type[j][0] == '2')
                        {
                                type[j][0] = 'H';
                        }
                        else if(type[j][0] == '3')
                        {
                                type[j][0] = 'S';
                        }
                        printf("%c%d", type[j][0], num[j]);
                        if(j != cnt-1)
                        {
                                printf(" ");
                        }
                }
                printf("\n");
        }
}
