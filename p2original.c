#include<stdio.h>
struct _fraction
{
  int num,den;
};
typedef struct _fraction Fraction;

Fraction input_fraction()
{
  Fraction a;
  printf("Enter Numerator and Denominator of the fraction\n");
  scanf("%d %d",&a.num,&a.den);
  return a;
}
Fraction Largest_fraction(Fraction f1,Fraction f2,Fraction f3)
{
  Fraction largest;
  if(f2.den*f1.num<f1.den*f2.num&& f3.den*f1.num<f1.den*f3.num)
  {
    largest=f1;
  }
  else if(f1.den*f2.num<f2.den*f1.num && f3.den*f2.num <f1.den*f3.num )
  {
    largest=f2;
   }
  else{
    largest = f3;
  }
  return largest;
}
void output(Fraction f1,Fraction f2,Fraction f3,Fraction largest)
{
  printf("%d/%d is the smallest fraction of all \n",largest.num,largest.den);
}
int main()
{
  Fraction x,y,z,largest;
  x=input_fraction();
  y=input_fraction();
  z=input_fraction();
  largest=Largest_fraction(x,y,z);
  output(x,y,z,largest);
  return 0;
  
}

