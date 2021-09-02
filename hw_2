#include<stdio.h>
#include<math.h>
#define LEN 12
#define K 10
void prime(int n);
int main() {
  prime(K);
  return 0;
}
void prime(int k)
{
  int count, i, flag, sr;
  int n=1;
  count = 1;

  while(count <= k){
    sr = sqrt(n);
    flag = 0;
    for(i=2; i<= sr; i++){
      if(n%i==0){
        flag = 1;
        break;
      }

    }

    if(flag== 0 && n != 1){

      printf("%d\n",n);
      bits(n, LEN);

      count++;
    }

    n++;

  }
}
void bits(int a, int k) {
  int i = k;
  int b[k];
  while (a > 0 || i > 0) {
    b[--i] = a % 2;
    a = a >> 1;
  }
  for (i = 0; i < k; i++) {
    printf("%d", b[i]);

  }
  printf("\n");
}
