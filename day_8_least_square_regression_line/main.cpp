#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
#include <cassert>
using namespace std;

double regression (vector<int> x, vector<int> y) {
    long sumx = 0;
    for(int i=0; i<x.size(); i++)
        sumx += x[i];
    double meanx = (double)sumx/x.size();
    
    long sumy = 0;
    for(int i=0; i<y.size(); i++)
        sumy += y[i];
    double meany = (double)sumy/y.size();
 
    long xsq = 0;
    for(int i=0; i<x.size(); i++)
        xsq += (x[i]*x[i]);

    long xy = 0;
    for(int i=0; i<x.size(); i++)
        xy += (x[i]*y[i]);

    double b = (5.0*xy - sumx*sumy)/(5.0*xsq - sumx*sumx);
    double a = meany - b*meanx;
    
    return a + b*80;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n = 5;
    vector<int> x, y;
    int elmt;
    for (int i=0; i<n; i++) {
        cin >> elmt;
        x.push_back(elmt);
        cin >> elmt;
        y.push_back(elmt);
    }
    cout<<fixed<<setprecision(3)<<regression(x,y)<<endl;
    return 0;
}
