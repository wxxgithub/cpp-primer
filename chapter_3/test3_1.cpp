#include<iostream>
using std::cin;using std::cout;using std::endl;
int main()
{
  int a,b,tmp,i=10;
  cout<<"please input a , b ="<<endl;
  cin>>a>>b;
  if(a<b)
  {
    tmp=a;a=b;b=tmp;
  }
  while(a>=b)
  {
    cout << b << " ";
    ++b;
  }
  cout << endl;
  return 0;
}
