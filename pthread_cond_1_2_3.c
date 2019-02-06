#include<stdio.h>
#include<unistd.h> 
#include<pthread.h>
pthread_cond_t c1=PTHREAD_COND_INITIALIZER;
pthread_cond_t c2=PTHREAD_COND_INITIALIZER;
pthread_cond_t c3=PTHREAD_COND_INITIALIZER;

pthread_mutex_t lock =PTHREAD_MUTEX_INITIALIZER;

int d=1;
void *fun(void* n)
{
        //while(1)
        {
pthread_mutex_lock (&lock);
if(d!=(int)*(int *)n)
{

        if((int )*(int*)n==1)
                pthread_cond_wait(&c1,&lock);
        else if((int)*(int *)n==2)
                pthread_cond_wait(&c2,&lock);
        else
                pthread_cond_wait(&c3,&lock);

}
sleep(1);
printf("%d \n",d);

if(d==3)
{
        d=1;
        pthread_cond_signal(&c1);
}
else if(d==1)
{
        d=2;
        pthread_cond_signal(&c2);
}
else if(d==2)
{
        d=3;
        pthread_cond_signal(&c3);
}
pthread_mutex_unlock(&lock);
}

while(1);
return 0;

}


int main()
{
        pthread_t t1,t2,t3;
        int n1=1,n2=2,n3=3;
        pthread_create(&t1,NULL,fun,(void *)&n1);
        pthread_create(&t2,NULL,fun,(void *)&n2);
        pthread_create(&t3,NULL,fun,(void *)&n3);
while(1);

}
