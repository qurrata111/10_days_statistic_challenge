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
    cout<<fixed<<setprecision(3)<<geometric(n,p)<<endl;
    return 0;
}