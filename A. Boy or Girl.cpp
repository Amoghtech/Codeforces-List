#define nbits(n) __builtin_popcount(n)
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long double ld;
#define mod 1000000007
#define up(a, x) upper_bound(a.begin(), a.end(), x) - a.begin()
#define lp(a, x) lower_bound(a.begin(), a.end(), x) - a.begin()
#define maxv(a) max_element(a.begin(), a.end()) - a.begin();
#define minv(a) min_element(a.begin(), a.end()) - a.begin();
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) ((a * b) / gcd(a, b))
#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define pairi pair<ll, ll>
#define vi vector<ll>
#define mapi map<ll, ll>
#define mapci map<char, ll>
#define mapsi map<string, ll>
#define pq priority_queue<ll>
#define pqr priority_queue<ll, vi, greater<ll>>
#define minele(a, n) *min_element(a, a + n);
/*******************************/
#define w(x)  \
    ll x;     \
    cin >> x; \
    while (x--)
#define take(n) \
    ll n;       \
    cin >> n
#define takearray(a, n)        \
    ll a[n];                   \
    for (ll i = 0; i < n; i++) \
        cin >> a[i];
#define takeab(a, b) \
    ll a, b;         \
    cin >> a >> b;
#define ctoupper(x) transform(x.begin(),x.end(),x.begin(),::toupper)
#define ctolower(x) transform(x.begin(),x.end(),x.begin(),::tolower)
bool isUpper(string s) {
    return std::all_of(s.begin(), s.end(), [](unsigned char c){ return std::isupper(c); });
}

int main()
{
    string s;
    cin>>s;
    int a[26]={0};
    for(int i=0;i<s.length();i++)
    a[s[i]-'a']++;

int c=0;
    for(int i=0;i<26;i++){
        if(a[i]>0){
            c++;
        }
    }
    if((c&1)==0){
        cout<<"CHAT WITH HER!"<<endl;

    }
    else{
        cout<<"IGNORE HIM!"<<endl;
    }
    return 0;
}