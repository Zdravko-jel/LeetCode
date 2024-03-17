#include <iostream>
#include <string>

using namespace std;

//This function checks if string is contained in string and returns
// the first index of the first occurance of the string if it exists

int strStr(string haystack, string needle) {
    int startindex = 0;
    bool isPart = false;
    for(int i = 0; i < haystack.length(); i++){
        if(haystack[i] == needle[0]){
            int check = needle.length() - 1;
            for(int j = 1; j < needle.length(); j++){
                if(haystack[i + j] == needle[j]){
                    check--;
                }
                else{
                    break;
                }
            }
            if(check == 0){
                startindex = i;
                isPart = true;
                break;
            }
        }
    }
    if(isPart){
        return startindex;
    }
    else{
        return -1;
    }
}

int main(){

    string one, two;
    cin >> one >> two;

    int index = strStr(one, two);
}