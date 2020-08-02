#include<stdio.h>

int a[2]={0};

int main() {
  int n;
  scanf("%d", &n);
  for (int i=0; i< n; i++)
    a[0]++;
  if (a[0]>5) {
    printf("%d\t%d", a[0], a[1]);
  }
  else 
    printf("%d", a[1]);

}
