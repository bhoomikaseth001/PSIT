// #include <stdio.h>
// int is_prime(int n){
//   int c=0;
//   for (int i=1;i<=n;i++)
//     if (n%i==0)
//       c++;
//   if (c==2)
//     return 1;
//   else
//     return 0;
// }

// int main() {

//   int n,num;
//   scanf("%d", &n);
// 	int counter=0;
//   for(int i=0;i<n;i++){
//       scanf("%d",&num);
//     if (counter==0 && is_prime(num)){
//           printf("%d",num);
//       	counter++;
//       continue;
//     }
//       if(is_prime(num)){
//           printf(" %d",num);
//       }
//   }
// }


#include <stdio.h>

int is_prime(int n){
  int c=0;
  for(int i=1;i<=n;i++) {
  	 if(n%i==0)
    	c++;
	}
  if(c==2)
    	return 1;
    else
    	return 0;
}

int main() {

  int n,num;
  scanf("%d", &n);

  for(int i=0;i<n;i++){
      scanf("%d",&num);
      if(is_prime(num)){
          printf("%d ",num);
      }
  }
}