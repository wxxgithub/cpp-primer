#include<iostream>
int main()
{
  int i=10;
  std::cout<<"print 10-0 "<<std::endl;
  while(i>=0)
  {
    std::cout << i << " ";
    --i;
  }
  std::cout << std::endl;
  return 0;
}
