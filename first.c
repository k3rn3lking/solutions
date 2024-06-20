//first question

#include<stdio.h>

int main(){
  int num1=0,num2=0,num3=0;
  int array[1000];
  int array1[1000];
  int array3[1000];

  for(int i=1;i<1000;i++){
    if(i%3==0){
     array[num1++]=i;
    }
    if(i%5==0){
      array1[num2++]=i;
    }
    if(i%15==0){
      array3[num3++]=i;
    }
  }
  
  int sum=0,sum1=0,sum2=0;

  for(int i=0;i<num1;i++){
    sum+=array[i];
  }

  for(int i=0;i<num2;i++){
    sum1+=array1[i];
  }
  
  for(int i=0;i<num3;i++){
    sum2+=array3[i];
  }

  printf("%d",sum+sum1-sum2);
  return 0;

}
