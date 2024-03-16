#include <iostream>
#include <vector>
using namespace std;

int removeElement(vector<int>& nums, int val) {
    for(int i = 0; i < nums.size(); i++){
        if(nums[i] == val){
            int temp = nums[i];
            nums[i] = nums[nums.size()-1];
            nums[nums.size()-1] = temp;
            nums.pop_back();
            i--;
        }
    }
    return nums.size();
}

int main()
{
    int n;
    cin >> n;

    vector<int> nums;

    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;

        nums.push_back(a);
    }
    
    int afterSize = removeElement(nums, 2);
}