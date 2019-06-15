#include<stdio.h>
#include<math.h>
#include<cs50.h>
int main()
{
    long long int cc=get_long_long("Number: ");
    long long int n=cc;
    int c=0,sum=0,u,d;
     while(n!=0)
    {
      c++;n/=10;
    }
    if (c!=13&&c!=15&&c!=16)
    printf("INVALID\n");
    else
    {
        n=cc;
        while(n!=0)
        {
            d=n%100;
            sum+=d%10;
            n=n/100;
            d=d/10;
            d=d*2;
            while(d!=0)
            {
                sum+=d%10;
                d/=10;
            }
        }
        if(sum%10==0)
        {
          u=cc/powl(10,(c-2));
          if(c==15&&(u==37||u==34))
          printf("AMEX\n");
          else if(c==16&&(u>=51&&u<=55))
          printf("MASTERCARD\n");
          else if((c==13||c==16)&&u/10==4)
           printf("VISA\n");
           else
           printf("INVALID\n");
        }   else
           printf("INVALID\n");
    }
}