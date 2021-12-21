#include <iostream>
#include <vector>

using namespace std;

void A()
{
    /**
    1. Считать все числа +
    2. Вывести их на экран +
    3. Вывести все пары +
    4. Вывести все тройки +
    5. проверить тройки чисел на условие
    6. Вывести только подходящие тройки
    7. Вывести максимальную тройку в виде суммы
    **/
    int n(0);
    cin >> n;
    vector<int> numbers(n);
    int max_sum(0);
    for (int i(0); i<n; i++)
        cin >> numbers[i];
        for (int j(0); j<n; j++)

            for (int k(0); k<n; k++)
                for (int i(k+j+1); i<n; i++)
                   {
                    int cur_sum(numbers[j]+numbers[i] + numbers[k]);
                        if (cur_sum%4 != 0 and cur_sum > max_sum)
                            max_sum = cur_sum;
                   }
                        cout << max_sum << endl;

}

int main()
{
    A();
    return 0;
}
