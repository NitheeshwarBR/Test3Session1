#include<stdio.h>
struct _fraction
{
  int num,den;
};
typedef struct _fraction Fraction;
int find_gcd(int a,int b)
{
   int d=1;
  while(b!=0)
    {
     
      d=a%b;
       a=b;
      b=d;
    }
  return a;
}
int input_n()
{
  int n;
  printf("Enter number of fractions that has to be added\n");
  scanf("%d",&n);
  return n;
  
}

Fraction input_fraction()
{
  Fraction x;
  printf("Enter thr numerator and denominator\n");
  scanf("%d/%d",&x.num,&x.den);
  return x;
}
void input_in_fractions(int n,Fraction f[n])
{
  for(int i=0;i<n;i++)
  {
     f[i]=input_fraction();
  }
}
Fraction add_fractions(Fraction f1,Fraction f2)
{
  Fraction f3;
  f3.num=f1.num*f2.den+f2.num*f1.den;
  f3.den=f1.den*f2.den;
  int x=find_gcd(f3.num,f3.den);
  f3.num=f3.num/x;
  f3.den=f3.den/x;
  return f3;
}
Fraction add_n_fractions(int n,Fraction f[n])
{
  Fraction Sum;
  Sum.den=1;
  Sum.num=0;
  for(int i=0;i<n;i++)
    {
      Sum=add_fractions(f[i],Sum);
    }
  return Sum;
}
void output(int n,Fraction f[n],Fraction sum)
{
  for(int i=0;i<n-1;i++)
    {
      printf("%d/%d+",f[i].num,f[i].den);
    }
  printf("%d/%d = %d/%d \n",f[n-1].num,f[n-1].den,sum.num,sum.den);
}
int main()
{
  
  int n;
  n=input_n();
  Fraction f[n];
  Fraction sum;
  input_in_fractions(n,f);
  sum=add_n_fractions(n,f);
  output(n,f,sum);
  return 0;
}
