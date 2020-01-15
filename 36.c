#include <stdio.h>


int main()
{
    int year;

    scanf("%d",&year);

    if(year%400==0){ printf("Bissextile Year\n"); return ;}
    else if(year%100==0){ printf("Common Year\n"); return ;}
    else if(year%4==0){ printf("Bissextile Year\n"); return; }
    else{
        printf("Common Year\n"); return;
    }
}
