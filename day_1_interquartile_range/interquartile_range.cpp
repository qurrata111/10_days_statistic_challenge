#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
#include <cassert>
using namespace std;

double median(vector<int> buff) {
    if (buff.size()%2) {
        return buff[buff.size()/2];
    } else {
        return (double) (buff[buff.size()/2] + buff[buff.size()/2-1])/2.0;
    }
}

double interquartile_range (vector<int> buff) {
    sort(buff.begin(), buff.end());
    double quartiles[2];
    int n = buff.size();
    if (n%2) {
        int mid = n/2;
        quartiles[0] = median(vector<int>(buff.begin(), buff.begin()+mid));
        quartiles[1] = median(vector<int>(buff.begin()+mid+1, buff.end()));
    } else {
        int midl = n/2-1;
        quartiles[0] = median(vector<int>(buff.begin(), buff.begin()+midl+1));
        quartiles[1] = median(vector<int>(buff.begin()+midl+1, buff.end()));
    }
    return quartiles[1]-quartiles[0];
}

vector<int> data (vector<int> elmt, vector<int> freq) {
    assert (elmt.size() == freq.size());
    vector<int> buff;
    for (int i=0; i<freq.size(); i++) {
        for (int j=0; j<freq[i]; j++) {
            buff.push_back(elmt[i]);
        }
    }
    return buff;
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
    vector<int> freq;
    for (int i=0; i<n; i++) {
        cin >> x;
        freq.push_back(x);
    }
    cout<<fixed<<setprecision(1)<<interquartile_range(data(elmt,freq))<<endl;
    return 0;
}
