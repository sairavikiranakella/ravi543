#include<stdio.h>
void main()
{
int i,j,n,a[20],temp;
printf("enter the no.of elements");
scanf("%d",&n);
printf("enter integer");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<=n;i++)
{
for(j=0;j<=n;j++)
{
 if(a[i]>=a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
printf("sorted elements are:");
for(i=0;i<n;i++)
printf("%d",a[i]);
}
