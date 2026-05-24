#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    multiset<int> a;
    for (int i = 0; i < n; i++)
    {
        int x; cin >> x;
        a.insert(x);
    }
    vector<int> v;
    for(auto it = a.begin(); it != --a.end(); it++)
    {
        auto tmp = it;
        v.push_back(*(++tmp) - (*it));
    }
    cout << *min_element(v.begin(), v.end()) << endl;
    return 0;
}