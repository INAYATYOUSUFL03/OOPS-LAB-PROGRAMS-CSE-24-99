#include <iostream>
#include <cmath>
using namespace std;

void bubbleSort(double arr[], int n) {
    for (int i=0;i<n-1;++i)
      for (int j=0;j<n-1-i;++j)
        if (arr[j] > arr[j+1]) {
            double t = arr[j]; arr[j] = arr[j+1]; arr[j+1] = t;
        }
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    double *arr = new double[n];
    for (int i=0;i<n;++i) cin >> arr[i];

    
    double sum=0;
    for (int i=0;i<n;++i) sum += arr[i];
    double mean = sum / n;

    double *copy = new double[n];
    for (int i=0;i<n;++i) copy[i] = arr[i];
    bubbleSort(copy, n);
    double median = (n%2==1) ? copy[n/2] : (copy[n/2 -1] + copy[n/2]) / 2.0;

    double mode = copy[0];
    int modeCount = 1;
    for (int i=0;i<n;) {
        int j = i+1;
        int cnt = 1;
        while (j<n && copy[j]==copy[i]) { cnt++; j++; }
        if (cnt > modeCount) { modeCount = cnt; mode = copy[i]; }
        i = j;
    }

    double varSum = 0;
    for (int i=0;i<n;++i) varSum += (arr[i] - mean) * (arr[i] - mean);
    double variance = varSum / n;
    double sd = sqrt(variance);

    cout << "Mean = " << mean << "\n";
    cout << "Median = " << median << "\n";
    cout << "Mode = " << mode << " (count " << modeCount << ")\n";
    cout << "Variance = " << variance << "\n";
    cout << "Standard deviation = " << sd << "\n";

    float *farr = new float[n];
    for (int i=0;i<n;++i) farr[i] = (float)arr[i];
    float fsum = 0;
    for (int i=0;i<n;++i) fsum += farr[i];
    float fmean = fsum / n;
    float fvarSum = 0;
    for (int i=0;i<n;++i) fvarSum += (farr[i] - fmean) * (farr[i] - fmean);
    float fvariance = fvarSum / n;
    float fsd = sqrt(fvariance);
    cout << "\nAs float: Mean = " << fmean << ", Variance = " << fvariance << ", SD = " << fsd << "\n";

    delete[] arr; delete[] copy; delete[] farr;
    return 0;
}
