#include <stdio.h>

int main() {
  int a1,b1,c1,a2,b2,c2,x,y;
  scanf("%d%d%d%d%d%d",&a1,&b1,&c1,&a2,&b2,&c2);
  x=(c1*b2-c2*b1)/(a1*b2-a2*b1);
  y=(c1*b2-(a1*b2*x))/(b1*b2);
  printf("%d %d",x,y);
}