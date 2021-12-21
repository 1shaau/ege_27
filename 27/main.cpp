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
    **/
    int n(0);
    cin >> n;
    vector<int> numbers(n);
    for (int i(0); i<n; i++)
        cin >> numbers[i];
        for (int j(0); j<n; j++)
            for (int k(0); k<n; k++)
                for (int i(k+j); i<n; i++)
                    cout << numbers[k] << ' ' << numbers[j] << ' ' << numbers[i] << endl;

}


int main()
{
    A();
    return 0;
}
