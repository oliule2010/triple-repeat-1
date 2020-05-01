/* 
github: triple-repeat-1
Check for a triple repeat in a vector and return that. If there is not one then retnr -1;
*/
#include <iostream>
#include <vector>
using namespace std;

bool check_triple_repeat(const vector<int>& input) {
    int len = input.size() / 3;
    for (int i = 0; i < len; i++) {
        if (input[i] != input[i + len]) {
            return false;
        }
        if (input[i + len + len] != input[i + len]) {
            return false;
        }
        if (input[i] != input[i + len + len]) {
            return false;
        }
    }
    return true;
}
int main(){
    vector<int> input{ 1, 2, 3, 1, 2, 3, 1, 2, 4};
    cout << check_triple_repeat(input);
    return 0;
}