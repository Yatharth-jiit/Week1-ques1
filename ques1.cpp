#include <iostream>
#include <bits/stdc++.h>
using namespace std;

float avg(vector<int> arr){
    int sum = 0;
    for (int i = 0 ; i< arr.size();i++){
        sum+=arr[i];
    }
    return sum/arr.size();
}

int main(){
int n ;
cin>>n;
vector<int> nums(n);
for (int i = 0 ; i< n ; i++){
    cout<<"enter "<<i<<endl;
    cin>>nums[i];
}
cout<<avg(nums);

return 0;
}
