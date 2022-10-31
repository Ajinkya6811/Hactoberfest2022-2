#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<int, multiset<string>> m;
    int n;
    cout << "Enter number of students: ";
    cin >> n;
    cout << "Enter Name and marks of students\n";
    for (int i = 0; i < n; i++)
    {
        int marks;
        string name;
        cin >> name >> marks;
        m[-1 * marks].insert(name);
    }
    cout << "Arranged in descending order of marks then ascending order of names" << endl;
    // map<int, set<string>>::iterator it;
    // for (cur_iter = m.begin(); cur_iter != m.end(); ++cur_iter)

    // auto cur_iter = m.end();
    // do
    // {
    //     --cur_iter;
    //     for (auto &name : (*cur_iter).second)
    //     {
    //         cout << name << "\t" << cur_iter->first << endl;
    //     }
    // } while (cur_iter != m.begin());

    for (auto cur_iter : m)
    {
        for (auto &name : cur_iter.second)
        {
            cout << name << "\t" << -1 * cur_iter.first << endl;
        }
    }
}