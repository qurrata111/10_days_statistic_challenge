#include <cmath>
#include <cstdio>
#include <vector>
#include <ios>
#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <iomanip>
using namespace std;

double mean (vector<int> buff) {
    int sum = 0;
    for (int i=0; i<buff.size(); i++) {
        sum += buff[i];
    }
    return (double)sum/buff.size(); 
}

double median (vector<int> buff) {
    double med;
    int n;
    sort(buff.begin(), buff.end());
    n = buff.size();
    if (buff.size()%2 == 0) {
        med = (double)((buff[n/2] + buff[n/2 - 1] )/ 2.0); 
    } else {
        med = buff[n/2];
    }
    return med;
}

int mode (vector<int> buff) {
    map<int, int> freqs;
    for (int i=0; i<buff.size(); i++) {
        freqs[buff[i]] += 1;
    }
    int res = -1;
    int freq = 0;
    for (map<int, int>::iterator iter=freqs.begin(); iter!=freqs.end(); iter++) {
        if (iter->second > freq) {
            freq = iter->second;
            res =iter->first;
        }
    }
    return res;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    // input n
    int n;
    cin >> n;
    // input vector
    vector<int> buff;
    int elmt_temp;
    for (int i=0; i<n; i++) {
        cin >> elmt_temp;
        buff.push_back(elmt_temp);
    }
    cout<<fixed<<setprecision(1)<<mean(buff)<<endl;
    cout<<fixed<<setprecision(1)<<median(buff)<<endl;
    cout<<mode(buff)<<endl;
    return 0;
}
