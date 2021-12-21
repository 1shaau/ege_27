#include <iostream>
#include <vector>

using namespace std;

void A()
{
    cout << "Hello world!" << endl;
    /**
    1. Считать все числа +
    2. Вывести их на экран +
    3. Вывести все пары
    4. Вывести все тройки
    5. проверить тройки чисел на условие
    6. Вывести только подходящие тройки
    **/
    int n(0);
    cin >> n;
    vector<int> numbers(n);
    for (int i(0); i<n; i++)
        cin >> numbers[i];
    cout << endl;
    for (int i(0); i<n; i++)
        cout << numbers[i] << ' ';

}


int main()
{
    A();
    return 0;
}
