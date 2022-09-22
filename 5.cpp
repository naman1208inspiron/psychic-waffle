#include <bits/stdc++.h>

using namespace std;
int main()
{
    string s;
    cin >> s;

    for (auto ch : s)
    {
        if (ch != 'a' && ch != 'b')
        {
            cout << "Invalid String\n";
            return 0;
        }
    }
    cout << "Valid String\n";

    return 0;
}
