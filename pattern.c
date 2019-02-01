#include<stdio.h>

int main()
{
        int n,i,j,k;
        puts("n=");
        scanf("%d",&n);
        int N=2*n-1;

        unsigned int a=5;








                for(i=0;i<N;i++)
                {
                        for(j=0;j<N;j++)
                        {
                        //        printf("%d",n);
                                if(i==j)
                                {
                                        for(k=j;k<=(N-2*i);k++)
                                        {
                                                printf("%d",n-i);
                                        }
                                j=k;
                                }
                                
                                else if(i!=j)
                                        printf("%d",n-j);
                                else 
                                {
                                        printf("**%d",(N-j-1));
                                }
                                
                        }
                        printf("\n");
                }
}
        
