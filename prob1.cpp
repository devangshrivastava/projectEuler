#include <iostream>
#include <vector>
#include <set>
#include <string>
#include <map>
#include <stack>
#include <algorithm>
using namespace std;



int main() {

    int n;  cin>>n;
    int sum = 0;

    for (int i = 3; i < n; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            sum += i;
        }
    }
    cout<<sum<<" ";
    return 0;
}