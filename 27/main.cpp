#include <iostream>

using namespace std;


void number_of_products_div() /// number of products dividable by 55
{
  /**
  1. считать число
  2. добавить его к одному его из счетчиков соответствующего класса эквивалентности:
     делится на 55, делится на 5 не на 11, делится на 11 не на 5, не делится ни на что
  3. ответ n55*n11+n55*n5+n55*no+n55*(n55-1)/2*n5*n11
  */

  int n(0), cur(0);
  int n55(0), n11(0), n5(0), no(0);
  cin >> n;
  for (int i(0); i<n; i++)
  {
    cin >> cur;
    if (cur%55==0) n55++;
    else if (cur%11==0) n11++;
    else if (cur%5==0) n5++;
  }
  no = n - n55 - n5 - n11;
  cout << n55*n5 + n55*n11 + n55*no + n55*(n55-1)/2 + n5*n11 << endl;
}

int main()
{
    number_of_products_div();
    return 0;
}
