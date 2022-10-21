#include <stdio.h>
void print(int);
int main() {
  int n;
  printf("enter a number\n");
  scanf("%d",&n);
  print(n);
}
void print(int n)
{
  if(n>=1) 
  {
    printf(" %d",n);
    print(n-1);
  }

}