#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int a1,an,n,sum,dev;


  cout<<"Enter number of even numbers between 1-20: ";
  cin>>n;

  cout<<"Enter first even number: ";
  cin>>a1;

  cout<<"Enter last even number: ";
  cin>>an;

  sum=(a1+an);
  dev=n/2;

  cout<<"The sum of 1 to 20 even numbers is "<<sum*dev<<endl;


  return 0;
}


