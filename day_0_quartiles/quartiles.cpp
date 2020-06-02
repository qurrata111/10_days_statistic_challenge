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

vector<double> split (vector<int> buff) {
    sort(buff.begin(), buff.end());
    double quartiles[3];
    int n = buff.size();
    if (n%2) {
        int mid = n/2;
        quartiles[0] = median(vector<int>(buff.begin(), buff.begin()+mid));
        quartiles[1] = buff[mid];
        quartiles[2] = median(vector<int>(buff.begin()+mid+1, buff.end()));
    } else {
        int midl = n/2-1;
        quartiles[0] = median(vector<int>(buff.begin(), buff.begin()+midl+1));
        quartiles[1] = (double) (buff[midl]+buff[midl+1])/2.0;
        quartiles[2] = median(vector<int>(buff.begin()+midl+1, buff.end()));
    }
    return vector<double>(quartiles, quartiles+sizeof(quartiles)/sizeof(double));
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
    vector<double> result = split(buff);
    cout<<fixed<<setprecision(0);
    for (int i=0; i<result.size(); i++) {
        cout<<result[i]<<endl;
    }
    return 0;
}
