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



long long isprime(long long n){
    
    long long a = sqrt(n);
    for(long long i=2; i<=a; i++){
        if(n%i == 0){
            return max(isprime(n/i), i);
        }
    }
    return n;
}

int main() {

    long long n = 600851475143;
    cout<<isprime(n);

    return 0;
}