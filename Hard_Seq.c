#include <stdio.h>
int main(void)
{
    int T,N,i,flag,j;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d",&N);
        int ar[N];
        ar[0]=0;
        if(N>1)
            ar[1]=0;
        for(i=1;i<N;i++)
        {
            flag=0;
            for(j=i-2;j>=0;j--)
            {
                if(ar[j]==ar[i-1])
                {
                    flag=1;
                    break;
                }
            }
            if(flag==1)
                ar[i]=i-j-1;
            else
                ar[i]=0;
        }
        j=0;
        for(i=0;i<N;i++)
        {
            if(ar[i]==ar[N-1])
                j++;
        }
        printf("%d\n",j);
    }
    
    return 0;
}
