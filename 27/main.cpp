#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

void max_sum_div()
{
    ifstream ifs("data.txt");
    /**
    1. ������� � ��������� ��� ����� +
    2. ������� ��� ���� +
    3. ������ ���� ������� ����� +
    4. ��������� �������� ����� +
    5. ������� ������ ���������� ����
    */
  int n(0);
  ifs >> n;
  vector<int> numbers(n);
  int max_sum(0);
  for (int i(0); i<n; i++)
    ifs >> numbers[i];
  for(int j(0); j<n; j++)
    for (int i(j+1); i<n; i++)
    {
      int cur_sum(numbers[j]+numbers[i]);
      if (cur_sum%2 == 1 and cur_sum > max_sum)
        max_sum = cur_sum;
    }
    cout << max_sum << endl;
}

int main()
{
    max_sum_div();
    return 0;
}
