#include<iostream>
#include<algorithm>
using namespace std;
#define ll long long
int main(){
    ll n, s; 
    cin >> n >> s;
    ll a[n];
    for(ll &i : a) cin >> i;
    int l = 0, r;
    ll ans = 0, sum = 0;
    for(r = 0; r < n; ++r){
        sum += a[r];
        while(sum >= s){
            ans += n - r;
            sum -= a[l]; ++l;
        }
    }
    cout << ans << '\n';
    return 0;
}