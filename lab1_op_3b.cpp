#include<iostream>
using namespace std;
int main()
{
    int n = 0, m = 0, k = 0, podezd = 0, etaj = 0;
    cin >> n >> m >> k;
    cout << n / (m * k) + 1 << ' ' << n % (m * k) / k + 1 << endl;
}