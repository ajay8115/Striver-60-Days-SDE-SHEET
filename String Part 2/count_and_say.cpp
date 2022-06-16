#include <bits/stdc++.h>
#define ll long long int
#define ld long double
#define forn for (int i = 0; i < n; i++)
#define srt(v) sort(v.begin(), v.end());
#define rev(v) reverse(v.begin(), v.end());
#define kk '\n'
using namespace std;

string is(string s)
{
    int n = s.size();
    string t = "";
    for (int i = 0; i < n; i++)
    {
        char c = s[i];
        int cnt = 0;
        while (s[i] == c)
        {
            cnt++;
            i++;
        }
        i--;

        t += to_string(cnt);
        t += c;
    }

    return t;
}

string writeAsYouSpeak(int k)
{
    int k;
    cin >> k;
    k--;

    string s = "1";
    while (k--)
    {
        s = is(s);
        // cout << s << kk;
    }

    return s;
}
