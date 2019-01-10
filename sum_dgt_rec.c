#include<stdio.h>

int sum_dgt(int n)
{
        int sum=0,rem;

        while(n)
        {
                sum=sum+n%10;
                n=n/10;
        }
        if(sum>=10)
                sum_dgt(sum);
        else
                return sum;

}

int sum_rec(int n)
{
        int sum;
        if(n==0)
                return 0;
        sum= (n%9)?9:(n%9);
}

int main()
{
        int n,k,sum;
        scanf("%d",&n);
        scanf("%d",&k);
       sum=k*sum_dgt(n);
       printf("%d\n",sum);
if(sum>=10){
       sum=sum_dgt(sum);
}
       printf("%d\n",sum);
}
