#include<stdio.h>
# define max 100
void selsort(int [],int);
int main()
{
    int a[max],i,n;
    printf("enter the size of the array\n");
    scanf("%d",&n);
    printf("enter the elements in the array\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    selsort(a,n);
    return 0;
}
void selsort(int a[],int n)
{
    int i,j,t;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    printf("\nthe sorted array is");
    for(i=0;i<n;i++)
        printf("%d\t",a[i]);
}
