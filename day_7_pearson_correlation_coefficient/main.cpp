#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
#include <cassert>
using namespace std;

double mean (vector<double> buff) {
    double sum = 0;
    for (int i=0; i<buff.size(); i++) {
        sum += buff[i];
    }
    return (double)sum/buff.size(); 
}

double standard_deviation(vector<double> buff) {
    double sum = 0;
    int n = buff.size();
    double avg = mean(buff);
    for (int i=0; i<buff.size(); i++) {
        sum += (buff[i]-avg) * (buff[i]-avg);
    }
    return (double)sqrt(sum/n);
}

double pearson_correlation_coefficient(vector<double> x, vector<double> y) {
    assert (x.size() == y.size());
    double mx = mean(x);
    double sdx = standard_deviation(x);
    double my = mean(y);
    double sdy = standard_deviation(y);
    double sum = 0;
    int n = x.size();
    for (int i=0; i<n; i++) {
        sum += ((x[i]-mx) * (y[i]-my));
    }
    return (double)sum/(n*sdx*sdy);
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin >> n;
    vector<double> x;
    double elmt;
    for (int i=0; i<n; i++) {
        cin >> elmt;
        x.push_back(elmt);
    }
    vector<double> y;
    for (int i=0; i<n; i++) {
        cin >> elmt;
        y.push_back(elmt);
    }
    cout<<fixed<<setprecision(3)<<pearson_correlation_coefficient(x,y)<<endl;    
    return 0;
}
