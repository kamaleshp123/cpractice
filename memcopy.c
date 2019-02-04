/*#include<stdio.h>

int main()
{
        char str[]="abcde";
        memmove(str+2,str,3);
        puts(str);
}*/


#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
void* mem_cpy(void* dest,void *scr,int n)
{
       char* ptr=malloc(1*sizeof(char));
        if(dest-scr<n)
        {
                scr=scr+n-1;
                dest=dest+n-1;


                while(n--)
                {
                        *dest--=*scr--;
                }

        }

        else
        {
                while(n--)
                {
                        *dest++=*scr++;
                }
        }
}

int main() 
{ 
           char csrc[100] = "abcdef";
           char csr[100] = "xyz";
              mem_cpy(csrc+2, csr,3); 
                 printf("%s", csrc); 
                 puts(csr);   
                 return 0; 
} 
