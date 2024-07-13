#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    for(auto x: arr) cout<<x<<' ';
    cout<<endl;
    int sum=0;
    for(auto x: arr) sum+=x;
    cout<<sum<<endl;
}