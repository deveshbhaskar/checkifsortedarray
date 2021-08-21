#include<stdio.h>
int n;
int rec(int a[n],int i,int n)
{
    if(i==n-1)
    return 0;
    if(a[i]>a[i+1])
    return 1;
    else
    return rec(a,i+1,n);
}
void main()
{
 int i,flag;
 scanf("%d",&n);
 int a[n];
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
 flag=rec(a,0,n);
 if(flag==0)
 printf("Sorted");
 else if(flag==1)
 printf("Unsorted");
}
