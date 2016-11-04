#include<stdio.h>
#define max 100
void sort(int[],int);

int main()
{
    int a[max],i,n;
    printf("enter the size of the array\n");
    scanf("%d",&n);
    printf("enter the elements in the array\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    sort(a,n);
    return 0;
}
void sort(int a[],int n)
{
    int t,i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(a[j]>a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
        printf("\n\nthe sorted array is:");
        for(i=0;i<n;i++)
    printf("\n%d",a[i]);
}

