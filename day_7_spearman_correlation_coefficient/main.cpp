#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
#include <cassert>
#include <map>
using namespace std;

vector<double> create_rank (vector<double> buff) {
    map<double, int> m1;
    vector<double> x1(buff.size());
    for(auto i=0; i<buff.size(); i++) {
        m1.insert(make_pair(buff[i], i));
    }
    int rank = 0;
    for(auto it : m1){
        x1[it.second] = rank++;
    }
    return x1;
}

double spearman_correlation_coefficient(vector<double> x, vector<double> y) {
    assert (x.size() == y.size());
    int n = x.size();

    auto rankx = create_rank(x);
    auto ranky = create_rank(y);

    double num = 0;
    for (auto i=0; i<n; i++) {
        num += ((rankx[i]-ranky[i])*(rankx[i]-ranky[i]));
    }
    num *= 6;
    return 1-(num/(n*(n*n-1)));
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
    cout<<fixed<<setprecision(3)<<spearman_correlation_coefficient(x,y)<<endl;    
    return 0;
}
