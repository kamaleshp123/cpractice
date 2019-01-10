/*C Program to Convert a Decimal Number to Binary & Count the Number of 1s 
 */


#include<stdio.h>

int main()
{
        int n,cnt=0;
        puts("Enter no\n");
        scanf("%d",&n);
int i=31,rem;
        while(i>=0)
        {
                printf("%d",(n>>i)&1);
       i--;
        }

        while(n)
        {
                n=n&(n-1);
                cnt++;
        }
                printf("\n%d\n",cnt);
        
}
