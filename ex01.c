#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
  int i,num,total=0;
  char name[100];
  srand((unsigned int)time(NULL));
  printf("What is your name?\n");
  scanf("%s",name);
  printf("Hello, %s!\n",name);
  printf("Rolling dice...\n");
  for(i=1;i<3;i++){
    num=rand()%6+1;
    printf("Die %d: %d\n",i,num);
    total+=num;
  }
  printf("Total value: %d\n",total);
  return 0;
}

