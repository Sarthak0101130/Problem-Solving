#include<stdio.h>
int main()
{
    int n,a[1000],i;
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    for(i=0;i<n;i+=2)
    {
        printf("%d ", a[i]);
    }
}