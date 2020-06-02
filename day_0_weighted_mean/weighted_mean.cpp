#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
#include <cassert>
using namespace std;

double weight_mean(vector<int> buff, vector<int> weight) {
    assert(buff.size() == weight.size());
    double sum_of_xw = 0;
    double sum_of_w = 0;
    for (int i=0; i<buff.size(); i++) {
        sum_of_xw += buff[i]*weight[i];
        sum_of_w += weight[i];
    }
    
    return (double) sum_of_xw/sum_of_w;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin >> n;
    vector<int> buff;
    int elmt;
    for (int i=0; i<n; i++) {
        cin >> elmt;
        buff.push_back(elmt);
    }
    vector<int> weight;
    for (int i=0; i<n; i++) {
        cin >> elmt;
        weight.push_back(elmt);
    }
    cout<<fixed<<setprecision(1)<<weight_mean(buff, weight)<<endl;
    return 0;
}
