#include<stdio.h>
#define max 10
int main()
{
    int a[max],t,i,n,j;
    printf("enter the size of the array:");
    scanf("%d",&n);
    printf("enter the elements in the array\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        printf("array inserted is:");
        for(i=0;i<n;i++)
            printf("%d\t",a[i]);
    for(i=1;i<n;i++)
    {
        for(j=0;j<i;j++)
        {
            if(a[i]<a[j])
            {
                t=a[j];
                a[j]=a[i];
                a[i]=t;
            }
        }
    }
    printf("\nsorted array is:");
    for(i=0;i<n;i++)
    printf("%d\t",a[i]);
    return 0;
}
