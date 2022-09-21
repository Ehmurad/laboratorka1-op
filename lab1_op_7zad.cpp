#include<iostream>
using namespace std;
int main()
{
    double x1 = 0, y1 = 0, x2 = 0, y2 = 0, x3 = 0, y3 = 0, x4 = 0, y4 = 0;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    x4 = (x1 + x3) - x2;
    y4 = (y1 + y3) - y2;
    cout << x4 << ' ' << y4 << endl;
}
