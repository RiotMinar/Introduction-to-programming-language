#include <bits/stdc++.h>
using namespace std;

map<string, vector<int>> mp;
int len;

void AND(string cd, string g1, string g2)
{
    cout << cd << " ";
    for (int i = 0; i < len; i++)
    {
        auto ans = mp[g1][i] & mp[g2][i];
        if (ans == 0) cout << "_";
        else if (ans == 1) cout << "-";
    }
}

void OR(string cd, string g1, string g2)
{
    cout << cd << " ";
    for (int i = 0; i < len; i++)
    {
        auto ans = mp[g1][i] | mp[g2][i];
        if (ans == 0) cout << "_";
        else if (ans == 1) cout << "-";
    }
}

void XOR(string cd, string g1, string g2)
{
    cout << cd << " ";
    for (int i = 0; i < len; i++)
    {
        auto ans = mp[g1][i] ^ mp[g2][i];
        if (ans == 0) cout << "_";
        else if (ans == 1) cout << "-";
    }
}

void NAND(string cd, string g1, string g2)
{
    cout << cd << " ";
    for (int i = 0; i < len; i++)
    {
        auto ans = (mp[g1][i] & mp[g2][i]);
        if (ans == 0) cout << "-";
        else if (ans == 1) cout << "_";
    }
}

void NOR(string cd, string g1, string g2)
{
    cout << cd << " ";
    for (int i = 0; i < len; i++)
    {
        auto ans = (mp[g1][i] | mp[g2][i]);
        if (ans == 0) cout << "-";
        else if (ans == 1) cout << "_";
    }
}

void NXOR(string cd, string g1, string g2)
{
    cout << cd << " ";
    for (int i = 0; i < len; i++)
    {
        auto ans = (mp[g1][i] ^ mp[g2][i]);
        if (ans == 0) cout << "-";
        else if (ans == 1) cout << "_";
    }
}

int main()
{
    int n, m;
    cin >> n >> m;

    while (n--)
    {
        string name, signal;
        cin >> name >> signal;
        len = signal.size();
        for (auto i : signal)
        {
            if (i == '-')
                mp[name].push_back(1);
            else
                mp[name].push_back(0);
        }
    }

    while (m--)
    {
        string cd, op, g1, g2;
        cin >> cd >> op >> g1 >> g2;

        if (op == "AND") AND(cd, g1, g2);
        else if (op == "OR") OR(cd, g1, g2);
        else if (op == "XOR") XOR(cd, g1, g2);
        else if (op == "NAND") NAND(cd, g1, g2);
        else if (op == "NOR") NOR(cd, g1, g2);
        else if (op == "NXOR") NXOR(cd, g1, g2);

        cout << endl;
    }

    return 0;
}