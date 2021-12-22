#include<stdio.h>

int main()
{
  int i,r,temp1,tem2=0;
  printf("Enter the Value to check: ");
  scanf("%d",&i);
  temp1=i;
  for(;i>0;)
  {
    r=i%10;
    temp2+=r*r*r;
    i=i/10;
  }
  if(temp1==temp2)
  {
    printf("The given number is Armstrong Number");
  }
  else
  {
  printf("The given number is not Amstrong Number");
  }
  return 0;
}
