#include<stdio.h>
#include<math.h>
void input(int *num1,int *den1,int *num2,int *den2)
{
  printf("Enter Numerator and Denominator of 1st fraction\n");
  scanf("%d %d",num1,den1);
  printf("Enter Numerator and Denominator of 2nd fraction\n");
  scanf("%d %d",num2,den2);
}
void add(int num1,int den1,int num2,int den2,int *num3,int *den3)
{
  *num3=den1*num2+den2*num1;
  *den3=den1*den2;
  int a=*den3,b=*num3,t=1;
  if(a<b)
  {
    t=b;
    a=b;
    b=t;
  }
  while(a%b!=0)
    {
      t=a%b;
      a=b;
      b=t;
    }
  *num3=*num3/b;
  *den3=*den3/b;
}
void output(int num1,int den1,int num2,int den2,int num3,int den3)
{
  printf("%d/%d + %d/%d = %d/%d\n",num1,den1,num2,den2,num3,den3);
}
int main()
{
  int a,b,c,d,e,f;
  input(&a,&b,&c,&d);
  add(a,b,c,d,&e,&f);
  output(a,b,c,d,e,f);
  return 0;
}