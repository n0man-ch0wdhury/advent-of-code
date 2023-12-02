#include <bits/stdc++.h>


#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define fRead freopen("in.txt","r",stdin);
#define fWrite freopen ("out.txt","w",stdout);
 
#define vi vector <int>
#define vl vector <ll>
#define pii pair <int, int>
#define MOD 1000000007
#define INF 1e18
#define PI acos(-1)
#define pb push_back
#define pf push_front
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define all(x) x.begin(),x.end()
#define MEM(a,x) memset(a,x,sizeof(a))
#define ll long long
#define llu unsigned long long
#define endl '\n'
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update> 

using namespace std;

static const int N = 1e6+20;

bitset <N> isPrime;
vector <int> prime;
 
// ll gcd(ll a, ll b){if(b == 0) return a; a %= b; return gcd(b, a);}
// ll lcm(ll a, ll b){return (a / gcd(a, b) * b);}

void wiz()
{
    #ifndef ONLINE_JUDGE
        fRead; fWrite;
    #endif
}

int red = 12, green = 13, blue = 14;


ll sum(string s)
{
    int n = s.size();
    int r = 0, g = 0, b = 0;
    bool f = true;
    string tr = "";
    string tg = "";
    string tb = "";
    int mxb = 0, mxg = 0,  mxr = 0;
    for(int i = 0; i < n; i++){
        // if(r > 12 || g > 13 || b > 14){
        //     //cout << 4 << endl;
        //     return 0;
        // }

        if(s[i] == ';'){
            tr = "";
            tg = "";
            tb = "";
            continue;
        }

        if(s[i] == 'r' && s[i+1] == 'e' && s[i+2] == 'd'){
            if(isdigit(s[i-3])) tr += s[i-3];
            if(isdigit(s[i-2])) tr += s[i-2];
            r = stoi(tr);
            mxr = max(r, mxr);
        }
        else if(s[i] == 'g' && s[i+1] == 'r' && s[i+2] == 'e'){
            if(isdigit(s[i-3])) tg += s[i-3];
            if(isdigit(s[i-2])) tg += s[i-2];
            g = stoi(tg);
            mxg = max(g, mxg);
        }
        else if(s[i] == 'b' && s[i+1] == 'l' && s[i+2] == 'u'){
            if(isdigit(s[i-3])) tb += s[i-3];
            if(isdigit(s[i-2])) tb += s[i-2];
            b = stoi(tb);
            mxb = max(b,  mxb);
        }
        
    }
    // if(r <= 12 && g <= 13 && b <= 14) return 1;
    // //cout << "2\n";
    // return 0;


    ll ml = mxb * mxg * mxr;
    return ml;
}

void solve()
{
    ll res = 0;
    vector <string> s;
    string x;
    while(getline(cin, x)){
        //cout << x << endl;
        s.pb(x);
    }

    int sz = s.size();
    for(int i = 0; i < sz; i++){
        ll tm = sum(s[i]);
        res += tm;
    }
    cout << res << endl;
}


int main()
{
    fastio();
    wiz();
    //sieve(N);

    int T = 1;
    //cin >> T;
    for (int t = 1; t <= T; t++) {
    //    cout << "Case " << t << ": ";
        solve();
    }
    
    return 0;
}
//ans1 : 2164
//ans2 : 69929
