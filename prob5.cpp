#include <iostream>
#include <vector>
#include <set>
#include <string>
#include <map>
#include <stack>
#include <algorithm>
#include <cmath>
#include <math.h>
using namespace std;



int main() {

    vector<int> primes = {16, 9, 5, 7, 11, 13, 17, 19};
    long long ans = 1;
    for(int i=0;i<primes.size();i++){
        int p = primes[i];
        ans *= primes[i];
    }
    cout<<ans;

    return 0;
}