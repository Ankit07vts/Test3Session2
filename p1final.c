
#include <stdio.h>
void input(int*num1,int*den1,int*num2,int*den2)
{
 
printf("Enter the numerator for 1st number : ");
scanf("%d",num1);
printf("Enter the denominator for 1st number : ");
scanf("%d",den1);
printf("Enter the numerator for 2nd number : ");
scanf("%d",num2);
printf("Enter the denominator for 2nd number : ");
scanf("%d",den2);
}
void add(int num1,int den1,int num2,int den2,int*num3,int*den3)
{
  *num3=(num1*den2)+(num2*den1);
  *den3=den1*den2;
  
}
void output(int num1, int den1, int num2, int den2, int num3, int den3)
{
  printf("%d/%d + %d/%d =  %d/%d\n",num1,den1,num2,den2,num3,den3);
  
}
int main()
{
  int  num1,  den1, num2,  den2,  num3,  den3;
  input(&num1,&den1,&num2,&den2);
  add(num1,den1,num2,den2,&num3,&den3);
  output(num1,den1,num2,den2,num3,den3);
  return 0;
  
  }