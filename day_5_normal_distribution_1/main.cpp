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
    double m; cin >> m;
    double sd; cin >> sd;
    double x; cin >> x;
    double x1; cin >> x1;
    double x2; cin >> x2;
    cout<<fixed<<setprecision(3)<<normal_distribution(m,sd,x)<<endl;
    cout<<fixed<<setprecision(3)<<normal_distribution(m,sd,x2)-normal_distribution(m,sd,x1)<<endl;
    return 0;
}