#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
#include <cassert>
using namespace std;

int main() {
    double n; cin >> n;
    double m; cin >> m;
    double sd; cin >> sd;
    double alpha; cin >> alpha;
    double z; cin >> z; // 1.96
    
    double error = z*sd/sqrt(n);
    cout<<fixed<<setprecision(2)<<m-error<<endl;
    cout<<fixed<<setprecision(2)<<m+error<<endl;
    return 0;
}