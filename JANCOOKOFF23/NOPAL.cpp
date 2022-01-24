#include<iostream>
using namespace std;

int main(void){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string ans = "";
        char ch = 'a';
        for(int i=0; i<n; i++){
            ans+=ch;
            ch++;
            if(ch == 'd')
                ch = 'a';
        }
        cout << ans << endl;
    }
}