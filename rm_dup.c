#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>
#include<stdbool.h>

int main()
{
        bool hash[26]={0};
        char str[100]="KAaaammmaaaAllllSSH";
int i=0,j=0;
char temp;
bool t;
while(str[i])
{
if((str[i]<='Z'&&str[i]>='A')||str[i]<='z'&&str[i]>='a'){
temp=str[i];
if(temp-(temp-32)==32)
        temp=temp-32;
        if(hash[temp-65]==0)
{
        hash[temp-65]=1;
       
        str[j]=str[i];
j++;

}
}
printf("%d ",hash[i]);
i++;
}
str[j]='\0';



printf("%s\n",str);
//for(i=0;hash[i];i++)
}

