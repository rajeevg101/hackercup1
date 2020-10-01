#include<bits/stdc++.h>
# define ll long long int
using namespace std;

void i_o_f()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    #ifndef ONLINE_JUDGE
    input.txt = for input
    freopen("input.txt", "r", stdin);
    output.txt = for output
    freopen("output.txt", "w", stdout);
    #endif
}


int main()
{
    i_o_f();

    ll n;
    cin >> n;

    ll *need = new ll[n];
    for(int i=0; i<n; i++)
        cin >> need[i];

    ll *quty = new ll[n];
    for(int i=0; i<n; i++)
        cin >> quty[i];
    
    ll *outarr = new ll[n];
    for(int i=0; i<n; i++)
    {
        outarr[i] = quty[i] / need[i];
    }

    sort(outarr, outarr + n);
    for(int i=0; i<n; i++)
        cout << outarr[i] << " ";


    cout << endl << outarr[0];
    
    return 0;
}
