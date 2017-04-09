#include<iostream>
int main()
{
  int sum,val;
  std::cout<<"please input a array: "<<std::endl;
  while(std::cin >> val)
    sum+=val; 
  std::cout << std::endl << "This sum is " << sum << std::endl;
  return 0;
}
