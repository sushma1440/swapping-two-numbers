#include <stdio.h>
int main()
{
  printf("Enter the value of a:10");
  scanf("%d",&a);
  printf("Enter the value of b:20");
  scanf("%d",&b);
  printf("Before swapping a:10 %d,b:20 %d\n",a,b);
  a = a+b;
  b = a-b;
  a = a-b;
  printf("After swapping a:20 %d,b:10 %d\n",a,b);
  return 0;
}
