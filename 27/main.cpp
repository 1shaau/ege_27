#include <iostream>
#include <vector>

using namespace std;
void min_sum_distance()
{
    /**
    1. считать числа +
    2. вывести пары +
    3. вывести пары с минимальным расстоянием
    4. вместо вывода пары посчитать сумму
    5. найти минимум среди сумм
    **/
  int n(0);
  cin >> n;
  vector<int> numbers(n);
  for (int i(0); i<n; i++)
    cin >> numbers[i];
  for(int j(0); j<n; j++)
    for (int i(j+1); i<n; i++)
        cout << numbers[j] << ' ' << numbers[i] << endl;
}

int main()
{
    min_sum_distance();
    return 0;
}
