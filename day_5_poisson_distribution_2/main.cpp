#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
#include <cassert>
using namespace std;

int main() {
    double a; cin >> a;
    double b; cin >> b;
    double dailyCostA = 160 + 40 * (a + (a * a));
    double dailyCostB = 128 + 40 * (b + (b * b));
    cout<<fixed<<setprecision(3)<<dailyCostA<<endl;
    cout<<fixed<<setprecision(3)<<dailyCostB<<endl;
    return 0;
}