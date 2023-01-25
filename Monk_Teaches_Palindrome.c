#include<stdio.h>
#include<string.h>
int main()
{
    int k,m;
    scanf("%d
",&m);
    for(k=1;k<=m;k++)
    {
    char str[100],str1[100];
    scanf("%s",str);
    int i=0,j;
    strcpy(str1,str);
    int l=strlen(str);
    // printf("%d",l);
    j=l-1;
    while(j!=0)
    {
        if(i<j)
        {
            int t=str[i];
            str[i]=str[j];
            str[j]=t;
            
        }
        else{ break;
        }
        i++;
        j--;
    }
    int g=strcmp(str,str1);
    if(g==0)
    { 
         if(l%2==0)
         {
        printf("YES EVEN
");
         }
        else
        {printf("YES ODD
");
        }
    }
   
    else  printf("NO
");
    }
    
}