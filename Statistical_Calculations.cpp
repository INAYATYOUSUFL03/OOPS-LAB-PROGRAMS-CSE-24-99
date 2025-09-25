#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cout << "Enter number of values: ";
    cin >> n;

    vector<double> arr(n);
    cout << "Enter values: ";
    for (int i=0;i<n;i++) cin >> arr[i];

    double sum=0;
    for (double x: arr) sum+=x;
    double mean = sum/n;

    sort(arr.begin(),arr.end());
    double median = (n%2)? arr[n/2] : (arr[n/2-1]+arr[n/2])/2.0;

    double var=0;
    for (double x: arr) var += (x-mean)*(x-mean);
    var/=n;

    double stddev = sqrt(var);

    cout << "Mean = " << mean << endl;
    cout << "Median = " << median << endl;
    cout << "Variance = " << var << endl;
    cout << "Std Dev = " << stddev << endl;

    return 0;
}
