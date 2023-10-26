#include <iostream>
using namespace std;

int main()
{
  int n, i;
  int even = 0;
  int odd = 0;
  cin >> n;

  while (n > 0)
  {
    i = n % 10;
    if (i % 2 == 0)
    {
      even = even + i;
    }
    else
    {
      odd = odd + i;
    }
    n /= 10;
  }
  cout << even << " " << odd;
}
