#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define F first
#define S second
#define pb push_back
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        string s;
        cin >> s;
        ll mx=0;
        ll k=0;
        while (n--) {
            if (s[n]=='P') k++;
            else { mx = max (mx,k); k=0; }
        }
        cout << mx <<"\n";
    }
    return 0;
}
