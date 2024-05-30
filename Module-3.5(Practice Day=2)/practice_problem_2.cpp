#include<bits/stdc++.h>
using namespace std;
class Cricketer
{   public:
    int jersey_no;
    char country[25];
};
int main()
{
    Cricketer *dhoni = new Cricketer;
    Cricketer *kohli = new Cricketer;
    dhoni->jersey_no = 75;
    strcpy(dhoni->country, "India");

    // kohli = dhoni;
    // cout << kohli->jersey_no << " " << kohli->country << endl;

    // delete dhoni; //Object pointer deleted from both variable
    // cout << kohli->jersey_no << " " << kohli->country << endl;

    kohli->jersey_no = dhoni->jersey_no;
    strcpy(kohli->country, dhoni->country);
    delete dhoni;
    cout << kohli->jersey_no << " " << kohli->country << endl;
    return 0;
}