#include<stdio.h>

int _min(int m,int n);
int main()
{   int ret;
    int m,n;
    scanf("%d%d",&m,&n);
    
    int min;
    min=_min(m,n);
    for (int i = 1; i <= min; i++)
    {
        if (m%i==0 && n%i==0)
        {
            ret=i;
        }
    }
    printf("%d",ret);
    return 0;
}
int _min(int m,int n)
{
    int min;
    if (m<n)
    {
       min=m;
    }else{
        min=n;
    }
    return min;
}