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
    double p;// = 0.12;
    cin >> p;
    p = p/100;
    double n;// = 10;
    cin >> n;
    // no more than 2 rejects;
    double result = 0;
    for (int i=0; i<2+1; i++) {
        result += binomial(n, i, p);
    }
    cout<<fixed<<setprecision(3)<<result<<endl;
    // at least 2 rejects
    result = 1 - binomial(n, 0, p) - binomial(n, 1, p);
    cout<<fixed<<setprecision(3)<<result<<endl;
    return 0;
}