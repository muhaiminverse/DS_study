#include<stdio.h>
int main()
{
    int num,remainder,ans=1;
    scanf("%d",&num);
    while(num!=0)
    {
        remainder=num%10;
        ans*=remainder;
        num/=10;
    }
    printf("%d",ans);
}
