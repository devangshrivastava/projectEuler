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

bool isprime(long long n){
    
    long long a = sqrt(n);
    for(long long i=2; i<=a; i++){
        if(n%i == 0){
            return false;
        }
    }
    return true;
}

int main() {

    int n;  cin>>n;
    int i = 1;
    int cnt = 0;
    while(n != 0){
        i++;
        if(isprime(i)){
            cnt++;
        }
        if(cnt == n){
            cout<<i;
            break;
        }
    }

    return 0;
}