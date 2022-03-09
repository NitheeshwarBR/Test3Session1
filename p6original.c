#include<stdio.h>
#include<string.h>
void input_string(char *a)
{
  printf("Enter The String\n");
  scanf("%s",a);
}
int count_words(char *string)
{
  int a;
  char *token=strtok(string," ");

  while(token!=NULL)
    {
      token=strtok(NULL," ");
    }
  a=*token;
  return a;
  
}
 

void output(char *string,int no_words)
{
  printf("Number Of Words In %s is %d",string,no_words);
}
int main()
{
  char a[100];
  input_string(a);
  int result;
  result=count_words(a);
  output(a,result);
  return 0;
}
