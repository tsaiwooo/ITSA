#include <stdio.h>


long long count(int n)
{
    int total;
    if(n==0){ return 1; }
    else if(n==1){ return 2; }
    else { return (count(n-1) + count(n/2)); }
}
int main()
{
    long long n;
    scanf("%d",&n);
    printf("%d\n",count(n));
}
