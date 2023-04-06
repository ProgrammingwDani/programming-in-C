//dshahini22
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, sum=0, avg;
    int number[100];
    scanf("%d", &n);
    for(int i=0;i<n;i++)
    {
        scanf("%d", &number[i]);
    }
    for(int i=0;i<n;i++)
    {
        sum+=number[i];
    }
    avg=sum/n;
    printf("%d", avg);
    return 0;
}