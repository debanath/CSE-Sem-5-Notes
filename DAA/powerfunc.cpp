#include <iostream>
using namespace std;

int power(int x, int y)
{
    int temp;
    if( y == 0)
        return 1;
    temp = power(x, y / 2);
    if (y % 2 == 0)
        return temp * temp;
    else
        return x * temp * temp;
}

int main() {
    int a ,b;
    cout<< "Enter base of the number and the power separated by a space: ";
    cin >> a >> b;
    cout << power(a,b)<<endl;
}