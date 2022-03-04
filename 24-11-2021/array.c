#include<stdio.h>
void main()
{
int a,b,i,k,j,temp;
int x[20],y[20],c[20];
printf("\n enter the size of 1st  array \t");
scanf("%d",&a);
printf("\n enter the elements of 1 st array \t");

for(i=0;i<a;i++)
{
    scanf("%d",&x[i]);
}
printf("\n enter the size of 2 ed array \t");
scanf("%d",&b);
k=a+b;
printf("\n enter the elements of 2 ed array \t");
for(i=0;i<b;i++)
{
    scanf("%d",&y[i]);
}
j=0;
for(i=0;i<k;i++)
{
    if (i<a)
    {
        c[i]=x[i];
    }
    else
    {
        c[i]=y[j];
        j++;
    }
}
for(i=0;i<k;i++)
{
    for(j=i+1;j<k;j++)
    {
        if (c[i]>c[j])
        {
            temp=c[i];
            c[i]=c[j];
            c[j]=temp;
        }
    }
}
printf("array:\t");
for(i=0;i<k;i++)
{
    printf("%d \t",c[i]);
}
}
