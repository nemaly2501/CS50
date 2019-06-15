#include<stdio.h>
#include<math.h>
#include<cs50.h>
int main()
{

    float f=get_float("Change owed:");
    while(f<0.00)
    f=get_float("Change owed:");
    int c=(int)(round(f*100));
    int coins=0;
    if(c>24)
    {
        coins+=c/25;
        c%=25;
    }
    if(c>9)
    {
        coins+=c/10;
        c%=10;
    }
    if(c>4)
    {
        coins+=c/5;
        c=c%5;
    }
    coins+=c;
    printf("%d\n",coins);
}