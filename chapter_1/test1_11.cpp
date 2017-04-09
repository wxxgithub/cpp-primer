#include<iostream>
int main()
{
  int a,b,tmp,i=10;
  std::cout<<"please input a , b ="<<std::endl;
  std::cin>>a>>b;
  if(a<b)
  {
    tmp=a;a=b;b=tmp;
  }
  while(a>=b)
  {
    std::cout << b << " ";
    ++b;
  }
  std::cout << std::endl;
  return 0;
}
