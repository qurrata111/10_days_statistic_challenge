#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
#include <cassert>
using namespace std;

double normal_distribution (double m, double sd, double x) {
    return 0.5*(1 + erf((x-m)/(sd*sqrt(2.0))));
}
int main() {
    double x; cin >> x;
    double n; cin >> n;
    double miu; cin >> miu;
    double sigma; cin >> sigma;
    double m = miu*n;
    double sd = sqrt(n)*sigma;
    cout<<fixed<<setprecision(4)<<normal_distribution(m,sd,x)<<endl;
    return 0;
}