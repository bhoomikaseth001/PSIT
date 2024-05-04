#include<stdio.h>
int divisibleSumPairs(int n,int k) {
    int flag=0,ar[n];
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(i<j) {
                if((ar[i]+ar[j])%k==0)
                flag++;    
            }            
     }
 } 
 return flag;
}

int main()
{
int n,k;
    scanf("%d",&n);
    scanf("  %d\n",&k);
    int  ar[n],ans;
    for(int i=0;i<n;i++)
    {
        scanf("  %d",&ar[i]);
    } 
    for(int i=0;i<n;i++) {
        if((n>=2&&n<=100) && (ar[i]>=1&&ar[i]<=100) && (k>=1&&k<=100)) {
            ans=divisibleSumPairs(n,k);
        }
    }
        printf("%d",ans); 
}