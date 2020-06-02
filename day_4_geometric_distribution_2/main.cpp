#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
#include <cassert>
using namespace std;

double geometric (int n, double p) {
    return pow(1-p, n-1) * p;
}
int main() {
    int numerator; cin >> numerator;
    int denominator; cin >> denominator;
    int n; cin >> n;
    double p = (double)numerator/denominator;
    double result =0;
    for (int i=1; i<5+1; i++) {
        result += geometric(i, p);
    }
    cout<<fixed<<setprecision(3)<<result<<endl;
    return 0;
}