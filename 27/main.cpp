#include <iostream>
#include <vector>

using namespace std;

void A()
{
    cout << "Hello world!" << endl;
    /**
    1. ������� ��� ����� +
    2. ������� �� �� ����� +
    3. ������� ��� ����
    4. ������� ��� ������
    5. ��������� ������ ����� �� �������
    6. ������� ������ ���������� ������
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
    A();
    return 0;
}
