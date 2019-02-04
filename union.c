#include<stdio.h>
union a
{
        int a;
        char b;
       char c;

};

struct A
{
        int type;
        union a b;
};

int main()
{
        union a a1;        
        struct A p;
                p.type=2;
                a1.a='a';
                if(p.type==1)
        printf("%d**\n",p.b.a);
               if(p.type==2) 
        printf("%c==\n",p.b.a);
}
