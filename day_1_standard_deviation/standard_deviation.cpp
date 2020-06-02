#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
#include <cassert>
using namespace std;

double mean (vector<int> buff) {
    int sum = 0;
    for (int i=0; i<buff.size(); i++) {
        sum += buff[i];
    }
    return (double)sum/buff.size(); 
}

double standard_deviation(vector<int> buff) {
    double sum = 0;
    int n = buff.size();
    double avg = mean(buff);
    for (int i=0; i<buff.size(); i++) {
        sum += (buff[i]-avg) * (buff[i]-avg);
    }
    return sqrt(sum/n);
}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin >> n;
    vector<int> elmt;
    int x;
    for (int i=0; i<n; i++) {
        cin >> x;
        elmt.push_back(x);
    }
    cout<<fixed<<setprecision(1)<<standard_deviation(elmt)<<endl;
    return 0;
}
