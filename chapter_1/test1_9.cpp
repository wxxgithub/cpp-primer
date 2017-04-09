#include<iostream>
int main()
{
  int i=50,sum=0;
  std::cout<<"while range 50 to 100 add"<<std::endl;
  while(i<=100)
  {
    sum=sum+i;
    ++i;
  }
  std::cout<<"sum = "<< sum << std::endl;
  return 0;
}
