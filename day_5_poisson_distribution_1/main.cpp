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

double poisson (int k, double lambda) {
    return (pow(lambda, k) * pow(exp(1), -1*lambda)) / factorial(k);
}

int main() {
    double lambda;
    cin >> lambda;
    int k;
    cin >> k;
    cout<<fixed<<setprecision(3)<<poisson(k, lambda)<<endl;
    return 0;
}