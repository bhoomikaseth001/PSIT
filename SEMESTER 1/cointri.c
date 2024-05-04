#include <stdio.h>
int CoinTriangle(int n)
{
    int line =1;

    while((n-line)>=0) {
        n-=line;
        line++;
    }

    return line-1;
}
int main()
{
int t;
scanf("%d",&t);
int arr[t];

for(int i=0;i<t;i++) {
    scanf("%d",&arr[i]);
}
for(int i=0;i<t;i++) {
    int ans=CoinTriangle(arr[i]);
    printf("\n%d",ans);
}

}

