#include<iostream>
#include "Header.h"
using namespace std;

int main()
{
	cout<<"1st complex number:"<<endl;
  complexnumber z1(4, -3);
  z1.display();
  complexnumber z2(-8, 2);
  cout<<"2nd complex number:"<<endl;
  z2.display();
  complexnumber z3;
  z3=z1+z2;
  cout<<"Sum of complex numbers:"<<endl;
  z3.display();
  z3=z1-z2;
  cout<<"Difference of complex number:"<<endl;
  z3.display();
  z3=z1*z2;
  cout<<"multiplication of complex number:"<<endl;
  z3.display();
  z3=z1/z2;
  cout<<"division of complex number:"<<endl;
  z3.display();
  system("pause");
}

