#include <stdio.h>
#include <string.h>
int main() {
  int n;
  printf("nhap so nguyen: ");
  scanf("%d",n);
  if (n%2==0){
    printf("la so chan");
  }
  else{
    printf("la so le");
  }
  return 0;
}