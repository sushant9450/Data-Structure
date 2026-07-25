#include<bits/stdc++.h> 
using namespace std; 
vector<int> FindErrorNums(vector<int>& nums) {
    vector<int> ans;
    int n = nums.size();
    // tracking the presence of numbers from 1 to n
    vector<bool> isPresent(n + 1, false); 
    
    // First pass to find the duplicate
    for(int i = 0; i < n; i++) {
        // If the number has been seen before, it's the duplicate
        if(isPresent[nums[i]]) {
            ans.push_back(nums[i]); 
        }
        isPresent[nums[i]] = true;
    }
    
    // Second pass to find the missing number
    for(int i = 1; i <= n; i++) { 
        // If a number from 1 to n is not present, it's the missing one
        if(!isPresent[i]) {
            ans.push_back(i);
            break; // Stop after finding the missing number
        }
    }
    
    return ans; 
}

int main() {
    vector<int> nums = {1, 2, 2, 4}; 
    vector<int> result = FindErrorNums(nums); // Function calling
    
    cout << "Duplicate number: " << result[0] << endl;
    cout << "Missing number: " << result[1] << endl;
    
    return 0; 
}




















