#include <stdio.h>

int main()
{
    int weight,male;
    float x;

    while(scanf("%d%d",&weight,&male)!=EOF){

        if(male==1){
            x = (weight-80)*0.7;
            printf("%.1f\n",x);
        }
        else{
            x = (weight-70)*0.6;
            printf("%.1f\n",x);
        }
    }
}
