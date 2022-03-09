#include<stdio.h>
int input_n(int *n,int *r)
{
  printf("Enter n\n");
  scanf("%d",n);
  printf("Enter r\n");
  scanf("%d",r);
}
int fact(int n)
{
  int f=1;
  for(int i=1;i<=n;i++)
    {
      f=f*i;
    }
  return f;
}
int ncr(int n,int r)
{
   int ncr;
  if(r<=n)
  {
  ncr=fact(n)/((fact(n-r))*(fact(r)));
    return ncr;
  }
  else if(r>n)
  {
    printf("Wrong Input");
    return 0;
  }
  
}
void output(int n,int r,int result)
{
  if(result==0)
  printf("\n");
  
  else
  {
     printf("The ncr of %d c %d is %d\n",n,r,result);
  }
}
int main()
{
  int n,r,result;
  input_n(&n,&r);
  result=ncr(n,r);
  output(n,r,result);
  return 0;
}
