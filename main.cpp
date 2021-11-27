#include <bits/stdc++.h>
//https://khmt.uit.edu.vn/wecode/truonganpn/assignment/31/133

using namespace std;

int n;
double ans=0;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin>>n;
    if (n>100) {
        ans+=100*1.418;
        if (n>150) {
            ans+=50*1.622;
            if (n>200) {
                ans+=50*2.044;
                if (n>300) {
                    ans+=100*2.210;
                    if (n>400) {
                        ans+=100*2.361;
                        ans+=(n-400)*2.420;
                    } else ans+=(n-300)*2.361;
                } else ans+=(n-200)*2.210;
            } else ans+=(n-150)*2.044;
        } else ans+=(n-100)*1.622;
    }
    else ans+=n*1.418;
    cout<<fixed<<setprecision(0)<<ans*1000;
    return 0;
}
