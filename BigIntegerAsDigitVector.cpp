#include<iostream>
#include<vector>
using namespace std;

vector<int> plusOne(vector<int>& digits) {
    int remain = 1;
    for(int i = digits.size()-1; i > -1; i--){
        digits[i] += remain;
        if(digits[i] > 9){
            remain = 1;
            digits[i] = 0;
            if(i == 0){
                digits.insert(digits.begin(), 0);
                i++;
            }
        }
        else{
            remain = 0;
        }
    }

    return digits;
}

int main()
{
    vector<int> digits{9, 9};

    vector<int> newVec = plusOne(digits);
}