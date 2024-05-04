#include<stdio.h>
int check_smart(int n) {
   int c=0;
   for(int i=1;i<n;i++) {
      if(n%i==0)
         c++;
   }
   if(c%2!=0) 
      return 1;
   return 0;
}
int main() {
   int t;
scanf("%d",&t);
int arr[t];
   for(int i=0;i<t;i++) {
    scanf("%d",&arr[i]);
}
for(int i=0;i<t;i++) {
   if((t>=1 && t<=100) && (arr[i]>= 1 && arr[i]<=10000)) {
      if(check_smart(arr[i]))
      printf("YES\n");
      else
      printf("NO\n");
   }
    
}
}