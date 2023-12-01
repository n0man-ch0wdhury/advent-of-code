#include <bits/stdc++.h>
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

#define pb push_back

using namespace std;

int checkdigit(string s)
{
    int n = s.size(); 
    for(int i = 0; i < n; i++){
        if((s[i] == 'o' && s[i+1] == 'n' && s[i+2] == 'e') || s[i] == '1'){
            return 1;
        }
        else if((s[i] == 't' && s[i+1] == 'w' && s[i+2] == 'o') ||  s[i] == '2'){
            return 2;
        }
        else if((s[i] == 't' && s[i+1] == 'h' && s[i+2] == 'r' && s[i+3] == 'e' && s[i+4] == 'e') ||  s[i] == '3' ){
            return 3;
        }
        else if((s[i] == 'f' && s[i+1] == 'o' && s[i+2] == 'u' && s[i+3] == 'r') ||  s[i] == '4'){
            return 4;
        }
        else if((s[i] == 'f' && s[i+1] == 'i' && s[i+2] == 'v' &&  s[i+3] == 'e') ||  s[i] == '5'){
            return 5;
        }
        else if((s[i] == 's' && s[i+1] == 'i' && s[i+2] == 'x') ||  s[i] == '6'){
            return 6;
        }
        else if((s[i] == 's' && s[i+1] == 'e' && s[i+2] == 'v' &&  s[i+3] == 'e' &&  s[i+4] == 'n') ||  s[i] == '7'){
            return 7;
        }
        else if((s[i] == 'e' && s[i+1] == 'i' && s[i+2] == 'g' &&  s[i+3] == 'h' &&  s[i+4] == 't') ||  s[i] == '8'){
            return 8;
        }
        else if((s[i] == 'n' && s[i+1] == 'i' && s[i+2] == 'n' &&  s[i+3] == 'e') ||  s[i] == '9'){
            return 9;
        }
    }
    return 0;
}

int checkdigitrev(string s)
{
    int n = s.size(); 
    for(int i = n-1; i >= 0; i--){
        if((s[i] == 'o' && s[i+1] == 'n' && s[i+2] == 'e') || s[i] == '1'){
            return 1;
        }
        else if((s[i] == 't' && s[i+1] == 'w' && s[i+2] == 'o') ||  s[i] == '2'){
            return 2;
        }
        else if((s[i] == 't' && s[i+1] == 'h' && s[i+2] == 'r' && s[i+3] == 'e' && s[i+4] == 'e') ||  s[i] == '3' ){
            return 3;
        }
        else if((s[i] == 'f' && s[i+1] == 'o' && s[i+2] == 'u' && s[i+3] == 'r') ||  s[i] == '4'){
            return 4;
        }
        else if((s[i] == 'f' && s[i+1] == 'i' && s[i+2] == 'v' &&  s[i+3] == 'e') ||  s[i] == '5'){
            return 5;
        }
        else if((s[i] == 's' && s[i+1] == 'i' && s[i+2] == 'x') ||  s[i] == '6'){
            return 6;
        }
        else if((s[i] == 's' && s[i+1] == 'e' && s[i+2] == 'v' &&  s[i+3] == 'e' &&  s[i+4] == 'n') ||  s[i] == '7'){
            return 7;
        }
        else if((s[i] == 'e' && s[i+1] == 'i' && s[i+2] == 'g' &&  s[i+3] == 'h' &&  s[i+4] == 't') ||  s[i] == '8'){
            return 8;
        }
        else if((s[i] == 'n' && s[i+1] == 'i' && s[i+2] == 'n' &&  s[i+3] == 'e') ||  s[i] == '9'){
            return 9;
        }
    }
    return 0;
}

void solve()
{
    vector <string> s;
    string x;
    while(cin >> x){
        s.pb(x);
    }
    
    int sum = 0;
    for(int i = 0; i < s.size(); i++){
        int n = s[i].size();
        int tm = 0;
        for(int j = 0; j < n; j++){
            int xx = checkdigit(s[i]);
            if(xx > 0){
                tm += xx;
                break;
            }
        }
        tm *= 10;
        for(int j = n - 1; j >= 0; j--){
            int xx = checkdigitrev(s[i]);
            if(xx > 0){
                tm += xx;
                break;
            }
        }
       // cout << tm << endl;
        sum += tm;
    }
    cout << sum << endl;
}


int main()
{
    fastio();
    int T = 1;
    //cin >> T;
    for (int t = 1; t <= T; t++) {
    //    cout << "Case " << t << ": ";
        solve();
    }
    
    return 0;
}
