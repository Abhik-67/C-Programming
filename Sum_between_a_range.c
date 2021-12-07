//Write A Program to find the Sum of even numbers between two numbers n & m(inclusive).
//Input:- 1 5(1 & 5 in same line)       Output:-6(2+4=6)
//Input:- 10 20(10 & 20 in same line)                Output:- 90(10+12+14+16+18+20=90)


#include<stdio.h>
void main()
{
    int n;
    int m,sum=0,i;
    scanf("%d%d",&n,&m);
    for(i=n;i<=m;i++){
        if(i%2==0)
        {
            sum=sum+i;
        }
    }
    printf("%d",sum);
}