#include <stdio.h>

int main()
{
    int size=0,i;
    float ave;
    float num[1010];
    float sum=0;
    while(scanf("%f",&num[size])!=EOF){ size++; }

    printf("Size: %d\n",size);
    for(i=0;i<size;i++){ sum+=num[i]; }
    if(sum==0){ printf("Average: 0.000\n"); return;  }
    ave = sum/size;
    ave+=0.0004;
    printf("Average: %.3f\n",ave);
    return 0;
}
