#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
#include <cassert>
using namespace std;

double normal_distribution (double m, double sd, double x) {
    return (0.5*(1 + erf((x-m)/(sd*sqrt(2.0)))))*100;
}
int main() {
    double m; cin >> m;
    double sd; cin >> sd;
    double x1; cin >> x1;
    double x2; cin >> x2;
    cout<<fixed<<setprecision(2)<<double(100)-normal_distribution(m,sd,x1)<<endl;
    cout<<fixed<<setprecision(2)<<double(100)-normal_distribution(m,sd,x2)<<endl;
    cout<<fixed<<setprecision(2)<<normal_distribution(m,sd,x2)<<endl;
    return 0;
}