#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
  int i,num,total=0;
  srand((unsigned int)time(NULL));
  printf("Rolling dice...\n");
  for(i=1;i<3;i++){
    num=rand()%6+1;
    printf("Die %d: %d\n",i,num);
    total+=num;
  }
  printf("Total value: %d\n",total);
  
   if(total>7){
      printf("You won\n");
    }else{
      printf("You lost\n");
    }  
  return 0;
}  
    
