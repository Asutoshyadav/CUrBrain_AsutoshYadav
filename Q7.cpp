#include <bits/stdc++.h>
using namespace std;
int arrayGCD(const vector<int>& arr){
    int result = arr[0];
    for(int i = 1; i<arr.size();i++){
        result = __gcd(result,arr[i]);
    }
    return result;
}
int main() {
    int n;
    cout<<"Enter the Array Lenght:";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter Input:"<<"\n";
    for(int i = 0; i<n;i++){
        cin>>arr[i];
    }
    cout<<"Output:"<<arrayGCD(arr)<<'\n';
    return 0;
}