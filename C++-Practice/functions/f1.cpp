#include <iostream>
using namespace std;

template <class T>
T maximum(T a, T b, T c = 0)
{
    return (a > b && a > c) ? a : (b > c ? b : c);
}

int main()
{
    cout << maximum(10, 5) << endl;
    cout << maximum(10.5, 5.5) << endl;
    cout << maximum(1, 2, 3) << endl;

    return 0;
}