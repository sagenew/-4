#include<iostream>
#include "array.h"
using namespace std;


int main()
{
  Array<int>A(15);
  A.print();
  A.Processing();

  Array<char>B(15);
  B.print();
  B.Processing();

  Array<long long>C(15);
  C.print();
  C.Processing();


  cout << "Гуменчук Артур, ІП-71, Варіант 7, А" << endl;
}
