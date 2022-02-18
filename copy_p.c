#include <stdio.h>

int main()
{
int n,*p,*q;
printf("Enter the size of the array");
scanf("%d",&n);
int a[n],b[n],i;
p= a;
q= b;
printf("Enter numbers");
for(i=0;i<n;i++)
{
scanf("%d",(p+i));
}
for(i=0;i<n;i++)
{
    *q=*p;
    q++;
    p++;
}
printf("The numbers after copying to another array are ");
for(i=0;i<n;i++)
{
    printf(" %2d",*(q+i));
    
}
}

