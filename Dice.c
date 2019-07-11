#include<stdio.h>
#include<stdlib.h>

int main() {
  char name[20];
  int D1,D2,D3;
  int sum = 0;

  printf("What is your name?\n");
  scanf("%s",name);
  printf("Hello, %s!\n",name);
  

  D1 = rand() % 6 + 1;
  D2 = rand() % 6 + 1;
  D3 = rand() % 6 + 1;
  sum = D1 + D2 + D3;

  printf("Rolling the dice...\n");
  printf("Die 1: %d\n",D1);
  printf("Die 2: %d\n",D2);
  printf("Die 3: %d\n",D3);
  printf("Total value: %d\n",sum);

  if(sum % 2 == 0) {
    printf("%s won\n",name);
  }else{
    printf("%s lost\n",name);
  }

  return 0;
}

  
  
