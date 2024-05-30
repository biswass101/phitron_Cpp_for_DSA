#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
        string name;
        int cls;
        char sec;
        long long int id;
        int m_m;
        int e_m;
};
bool cmp(Student a, Student b)
{
    if(a.e_m > b.e_m) return true;
    else if(a.e_m < b.e_m) return false;
    else
    {
        if(a.m_m > b.m_m) return true;
        else if(a.m_m < b.m_m) return false;
        else return a.id < b.id;
    }
}
int main()
{
    int n; cin >> n;
    Student a[n];
    for(int i= 0; i < n; i++)
    {
        cin >> a[i].name >> a[i].cls >> a[i].sec >> a[i].id >> a[i].m_m >> a[i].e_m;
    }
    
    sort(a, a + n, cmp);
    for(int i= 0; i < n; i++)
    {
        cout << a[i].name << " " <<  a[i].cls << " " << a[i].sec << " " << a[i].id << " " << a[i].m_m << " " << a[i].e_m << endl;
    }
    return 0;
}