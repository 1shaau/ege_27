#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

void max_sum_div()
{
    ifstream ifs("data.txt");
    /**
    1. считать и сохранить все числа +
    2. вывести все пары +
    3. вместо пары вывести суммы +
    4. проверить делмость суммы +
    5. вывести только наибольшую сумму
    */
  int n(0);
  ifs >> n;
  vector<int> numbers(n);
  for (int i(0); i<n; i++)
    ifs >> numbers[i];
  for(int j(0); j<n; j++)
    for (int i(j+1); i<n; i++)
    {
      int cur_prod(numbers[j]+numbers[i]);
      if (cur_prod%2 == 1)
        cout << cur_prod << endl;
    }
}

int main()
{
    max_sum_div();
    return 0;
}
