#include<stdio.h>
int input_degree()
{
  int n;
  printf("Enter The Degree of the Polynomial\n");
  scanf("%d",&n);
  return n;
}
float input_x()
{
  float x;
  printf("Enter the Value of X\n");
  scanf("%f",&x);
  return x;
}
void input_coefficients(int n,float a[n])
{
  printf("Enter the Equation \n");
  {
    for(int i=0;i<n+1;i++)
      {
        scanf("%f",&a[i]);
      }
  }
}
float evaluate_polynomial(int n,float a[n],float x)
{
  float sum=a[0];
  for(int i=1;i<=n;i++)
    {
      sum=(sum*x+a[i]);
    }
  
  return sum;
}
void output(int n,float a[n],float x,float result)
{
  
  for(int i=0;i<n;i++)
    {
      printf("%f*x^%d+",a[i],n--);
    }
  printf("%f",a[n]);
}
int main()
{
  int n;
  n=input_degree();
  float x;
  x=input_x();
  float a[n];
  input_coefficients(n,a);
  float result;
  result=evaluate_polynomial(n,a,x);
  output(n,a,x,result);
  return 0;
}

