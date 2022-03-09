#include<stdio.h>
int input_size()
{
  int n;
  printf("Enter The Size Of an Array\n");
  scanf("%d",&n);
  return n;
}
void input_array(int n,int a[n])
{
  printf("Enter The Numbers\n");
  for(int i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
}
int find_largest(int n,int a[n])
{
  int largest=a[0];
  int i;
  for(int i=1;i<n;i++)
    {
      if()
    }
  
}
void out_put(int n,int a[n],int largest)
{
    printf("%d Is The Index of Largest Number\n",largest);
}
int main()
{
  int n;
  n=input_size();
  int x[n];
  int large;
  input_array(n,x);
  large=find_largest(n,x);
  out_put(n,x,large);
  return 0;
}