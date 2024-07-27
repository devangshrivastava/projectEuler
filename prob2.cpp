#include <iostream>
#include <vector>
#include <set>
#include <string>
#include <map>
#include <stack>
#include <algorithm>
using namespace std;



int main() {
    int a = 1;
    int b = 2;
    int sum = 0;
    while (b < 4000000) {
        if (b % 2 == 0) {
            sum += b;
        }
        int temp = b;
        b = a + b;
        a = temp;
    }
    cout<<sum<<" ";
    return 0;
}