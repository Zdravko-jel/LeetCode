#include <iostream>

using namespace std;

int mySqrt(int x) {
    int count = 0;
    for(int i = 1; i < x + x; i+=2){
        if(x != 0 && x >= i){
            count++;
            x -= i;
        }
        else{
            break;
        }
    }
    return count;
}

int main(){
    int x = 4;
    int sqrtFour = mySqrt(x);
}