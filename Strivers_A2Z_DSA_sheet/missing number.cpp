// Problem : https://leetcode.com/problems/missing-number/

#include<bits/stdc++.h>

using namespace std;

int missing(vector<int>& nums){
    // The intution is to do [n*(n+1)/2 - sum of all elements of nums] hence we will have the missing number left only.
    // accumulate is a function which adds up all the numbers in a given range to an initial sum (here initial sum = 0).
    return nums.size() * (nums.size() + 1) / 2 - accumulate(nums.begin(), nums.end(), 0);
}

int main(){
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    cout << missing(nums) << endl;

    return 0;
}