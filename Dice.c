#include<stdio.h>
#include<stdlib.h>

int main() {
  char name[20];
  int D1,D2;
  int sum = 0;

  printf("What is your name?\n");
  scanf("%s",name);
  printf("Hello, %s!\n",name);
  

  D1 = rand() % 6 + 1;
  D2 = rand() % 6 + 1;
  sum = D1 + D2;

  printf("Rolling the dice...\n");
  printf("Die 1: %d\n",D1);
  printf("Die 2: %d\n",D2);
  printf("Total value: %d\n",sum);

  if(sum >= 7) {
    printf("%s won\n",name);
  }else{
    printf("%s lost\n",name);
  }

  return 0;
}

  
  
