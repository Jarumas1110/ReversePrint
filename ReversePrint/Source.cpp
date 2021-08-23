#include<stdio.h>
int main()
{
    int n[10000],i;
    for(i = 0; i < 10000; i++)
    {
        scanf_s("%d",&n[i]);
        if(n[i]==0)
        {
            break; 
        }
    }
    for(i=i-1;i>=0;i--)
    {
        printf("%d ",n[i]);
    }
}