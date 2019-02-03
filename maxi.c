#include <stdio.h>
  void main() {
    int a[10];
    int i;
    int maxi;
    for (i = 0; i < 10; i++)
    {
    scanf("%d", &a[i]);
    }
   
    maxi= a[0];
    for (i = 0; i < 10; i++)
    {
      if (a[i] > maxi)
      {
         maxi = a[i];
    }
    }
    printf("%d",maxi);
   
  }
