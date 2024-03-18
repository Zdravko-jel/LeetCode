#include <iostream>
#include <vector>
#include <string>

using namespace std;

int lengthOfLastWord(string s) {
    vector<string> strs;
    vector<string> words;
    string temp = "";
    for(int i = 0; i < s.length(); i++){
        if(s[i] != ' '){
            temp+=s[i];
        }
        else{
            strs.push_back(temp);
            temp="";
        }
    }
    strs.push_back(temp);

    for(int i = 0; i < strs.size(); i++){
        if(strs[i] != ""){
            words.push_back(strs[i]);
        }
    }
    
    return words[words.size() - 1].length();
}

int main()
{
    string str = "   fly me   to   the moon  ";

    int lenOfLast = lengthOfLastWord(str);
}