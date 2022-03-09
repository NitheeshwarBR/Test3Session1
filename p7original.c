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
Fraction input_fraction()
{
  Fraction n;
  printf("Enter the numerator and denominator\n");
  scanf("%d/%d",&n.num,&n.den);
  return n;
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
void output(Fraction f1,Fraction f2,Fraction sum)
{
  printf("%d/%d + %d/%d = %d/%d \n",f1.num,f1.den,f2.num,f2.den,sum.num,sum.den);
}
int main()
{
  
  Fraction f1;
  f1=input_fraction();
 Fraction f2;
  f2=input_fraction();
  Fraction sum;
  sum=add_fractions(f1,f2);
  output(f1,f2,sum);
  return 0;
}