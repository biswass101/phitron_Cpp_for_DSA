#include<iostream>
#include<string.h>
#include<string>
using namespace std;
int main()
{
    //c style-->
    // char ch[1000];
    // fgets(ch, 100, stdin);
    // cout << ch << endl;

    // c++ style-->
    int a; cin >> a;
    getchar(); //skipping an character
    char ch[1000];
    cin.getline(ch, 1000); //with space input //it takes enter as a input
    cout << a << endl;
    cout << ch << endl;
    return 0;
}