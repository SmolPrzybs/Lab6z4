#include <iostream>

using namespace std;


void potega(int* a) {
    *a *= *a;
}

int main()
{
    int a;
    cin >> a;

    int* wsk_a = &a;

    potega(wsk_a);
    cout << a;
}