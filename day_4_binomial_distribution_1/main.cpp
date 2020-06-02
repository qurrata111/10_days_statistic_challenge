#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
#include <cassert>
using namespace std;

double factorial(int n) {
    double res = 1;
    while (n>0) {
        res *= n--;
    }
    return res;
}

double combination (int n, int x) {
    return factorial(n) / (factorial(x)*factorial(n-x));
}

double binomial (int n, int x, double p) {
    return combination(n,x) * pow(p,x) * pow (1-p, n-x);
}
int main() {
    double ratio;// = 1.09;
    cin >> ratio;
    double t;//1
    cin >> t;
    double p = ratio/(t + ratio);
    int n = 6;

    double result = 0;
    for (int i=3; i<n+1; i++) {
        result += binomial(n, i, p);
    }
    cout<<fixed<<setprecision(3)<<result<<endl;
    return 0;
}