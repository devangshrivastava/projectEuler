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

    int mx = 0;
    for(int i=100; i<1000; i++){
        for(int j=100; j<1000; j++){
            int n = i*j;
            string s = to_string(n);
            string t = s;
            reverse(t.begin(), t.end());
            if(s == t){
                mx = max(mx, n);
            }
        }
    }
    cout<<mx;

    return 0;
}