#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    //c style-->
    // int a, b;
    // while(scanf("%d %d", &a, &b) != EOF)
    // {
    //     printf("%d %d\n", a, b);
    // }

    //c++ Style-->
    // while(cin >> a >> b)
    // {
    //     cout << a << " " << b << endl;
    // }

    double a; cin >> a;
    cout << fixed << setprecision(5) << a << endl;
    return 0;
}