#include <bits/stdc++.h>
using namespace std;
    
int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    string s, t = ""; cin >> s;
 
    transform(s.begin(), s.end(), s.begin(), ::tolower);
 
    for (int i = 0; i<s.size(); i++)
    {
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'o' || s[i] == 'u' || s[i] == 'i' || s[i] == 'y') continue;
        
        else
        {
            t.push_back('.');
            t.push_back(s[i]);
        }
    }
 
    cout << t;
    return 0;
}
