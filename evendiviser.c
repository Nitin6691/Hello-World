#include<stdio.h>
#include<stdlib.h>
int main()
    {
    int i,r1,c,t,res[15];
    long int n,tmp;
    scanf("%d",&t);
    for(i=0;i<t;i++)
        {
        c=0;
        scanf("%ld",&n);
        tmp=n;
        while(tmp>=1)
            {
            r1=tmp%10;
            if(r1!=0){
            if((n%r1)==0)
                c+=1;
            }
            tmp=tmp/10;
        }
        res[i]=c;
    }
    for(i=0;i<t;i++)
        printf("%d\n",res[i]);
    return 0;
}
