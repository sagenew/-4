#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

template<typename Type>
class Array
{
private:
  int ArrSize;
  vector<Type> v;
public:
  Array(int n) : ArrSize(n)
  {
    Type temp;
    srand (time(NULL));
    for(int i = 0; i <= n; i++)
    {
      temp = Type(rand()%500);
      v.push_back(temp);
    }
    sort(v.begin(), v.end());
  }
  void print()
  {
    for(int i = 0; i <= ArrSize; i++)
    {
      cout << v[i] << ' ';
    }
    cout << "\n";
  }
  int BinarySearch(Type key)
  {
    int left = 0, midd = 0, right = ArrSize;
    while (1)
    {
      midd = (left + right) / 2;

      if (key < v[midd])
      right = midd - 1;
      else
      if (key > v[midd])
      left = midd + 1;
      else
      return midd;

      if (left > right)
      return -1;
    }
  }
  void Processing()
  {
    bool flag = true;

    while (flag)
    {
      Type key;
      int index = -1;
      cout << "Enter the key:" <<"\n";
      cin >> key;

      index = BinarySearch(key);
      if(index != -1)
      {
        cout << "The key`s element is in сell with index of " << index << "." << "\n";
      }
      else
      {
        cout << "The array doesn`t contain this number." << "\n";
      }
      cout << "Continue? (y/n)" << "\n";
      char end;
      cin >> end;
      if(end != 'y') flag = false;
    }
  }
};

template<> class Array<char>
{
private:
  int ArrSize;
  vector<char> v;
public:
  Array(int n) : ArrSize(n)
  {
    char temp;
    srand (time(NULL));
    for(int i = 0; i <= n; i++)
    {
      temp = char(rand()%26 + 65);
      v.push_back(temp);
    }
    sort(v.begin(), v.end());

  }
  void print()
  {
    for(int i = 0; i <= ArrSize; i++)
    {
      cout << v[i] << ' ';
    }
    cout << "\n";
  }
  int BinarySearch(char key)
  {
    int left = 0, midd = 0, right = ArrSize;
    while (1)
    {
      midd = (left + right) / 2;

      if (key < v[midd])
      right = midd - 1;
      else
      if (key > v[midd])
      left = midd + 1;
      else
      return midd;

      if (left > right)
      return -1;
    }
  }
  void Processing()
  {
    bool flag = true;

    while (flag)
    {
      char key;
      int index = -1;
      cout << "Enter the key:" <<"\n";
      cin >> key;

      index = BinarySearch(key);
      if(index != -1)
      {
        cout << "The key`s element is in сell with index of " << index << "." << "\n";
      }
      else
      {
        cout << "The array doesn`t contain this number." << "\n";
      }
      cout << "Continue? (y/n)" << "\n";
      char end;
      cin >> end;
      if(end != 'y') flag = false;
    }
  }
};
