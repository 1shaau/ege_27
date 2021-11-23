#include <iostream>
#include <vector>


using namespace std;

void max_sum_div()
{
    /**
    1. считать и сохранить все числа +
    2. вывести все пары +
    3. вместо пары вывести суммы +
    4. проверить делмость суммы +
    5. вывести только наибольшую сумм +
    */
    int n(0);
    cin >> n;
    vector<int> numbers(n);
    int max_sum(0);
    for (int i(0); i<n; i++)
    cin >> numbers[i];
    for(int j(0); j<n; j++)
    {
        for (int i(j+1); i<n; i++)
        {
            int cur_sum(numbers[j]+numbers[i]);
            if (cur_sum%2 == 1 and cur_sum > max_sum)
                max_sum = cur_sum;

        }
        if (max_sum%2 == 0)
            max_sum = -1;
    }
cout << max_sum << endl;
}

int main()
{
max_sum_div();
return 0;
}
