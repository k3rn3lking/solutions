//first question

#include<stdio.h>

int main(){
 //total number divisible by 3 in rangle 1 to 1000 are 333
 //total number divisble by 5 in rangle 1 to  1000 are 199
 //total number divisble by 15 in rangle 1 to  1000 are 66
// now use formulae sum of all terms=((number of terms)*(first+last term))/2
  int sum1=((333)*(3+999))/2;
  int sum2=((199)*(5+995))/2;
  int sum3=((66)*(15+990))/2;
  printf("%d",sum1+sum2-sum3);

 return 0;

}
