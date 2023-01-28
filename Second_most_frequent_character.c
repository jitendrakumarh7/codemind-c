#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],str1[100],t,a;
    int k=0,max=1,max2=1;
    scanf("%[^
]s
",str);
    int i,j;
    strcpy(str1,str);
    for(i=0;str[i]!=NULL;i++)
    {
      for(j=i+1;str[j]!=NULL;j++)
      {
        if(str[i]>str[j])
        {
             t=str[i];
            str[i]=str[j];
            str[j]=t;
        }
      }  
    }
    //printf("%s",str);
for(i=0;str[i]!=NULL;i++)
{     int x=0;
    for(j=0;str[j]!=NULL;j++)
    {
        if(str[i]==str[j])
        {
            x++;
        }
    }
    if(x>max)
    {
        k+=1;
        max=x;
        a=str[i];
    }
}
for(i=0;str[i]!=NULL;i++)
{ 
    int x=0;
    for(j=0;str[j]!=NULL;j++)
    {
        if(str[i]==str[j])
        {
            x++;
        }
    }
    if(x>max2 && x<max)
    {
        k+=1;
        max2=x;
        a=str[i];
    }
}
if(k==0)
printf("-1");
else
printf("%c",a);
    
}