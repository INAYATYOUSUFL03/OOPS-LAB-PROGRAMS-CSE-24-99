#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size n for n x n matrix: ";
    cin >> n;
    int **matInt = new int*[n];
    for (int i=0;i<n;++i) matInt[i] = new int[n];

    cout << "Enter integer matrix elements:\n";
    for (int i=0;i<n;++i) for (int j=0;j<n;++j) cin >> matInt[i][j];


    float **matF = new float*[n];
    double **matD = new double*[n];
    for (int i=0;i<n;++i) {
        matF[i] = new float[n];
        matD[i] = new double[n];
        for (int j=0;j<n;++j) {
            matF[i][j] = (float)matInt[i][j];
            matD[i][j] = (double)matF[i][j];
        }
    }

    
    int **resI = new int*[n];
    float **resF = new float*[n];
    double **resD = new double*[n];
    for (int i=0;i<n;++i) {
        resI[i] = new int[n]; resF[i] = new float[n]; resD[i] = new double[n];
        for (int j=0;j<n;++j) { resI[i][j]=0; resF[i][j]=0.0f; resD[i][j]=0.0; }
    }

    
    for (int i=0;i<n;++i)
      for (int j=0;j<n;++j)
        for (int k=0;k<n;++k)
          resI[i][j] += matInt[i][k] * matInt[k][j];

    
    for (int i=0;i<n;++i)
      for (int j=0;j<n;++j)
        for (int k=0;k<n;++k)
          resF[i][j] += matF[i][k] * matF[k][j];

    
    for (int i=0;i<n;++i)
      for (int j=0;j<n;++j)
        for (int k=0;k<n;++k)
          resD[i][j] += matD[i][k] * matD[k][j];

    cout << "\nResult (int):\n";
    for (int i=0;i<n;++i) { for (int j=0;j<n;++j) cout << resI[i][j] << " "; cout << "\n"; }

    cout << "\nResult (float):\n";
    for (int i=0;i<n;++i) { for (int j=0;j<n;++j) cout << resF[i][j] << " "; cout << "\n"; }

    cout << "\nResult (double):\n";
    for (int i=0;i<n;++i) { for (int j=0;j<n;++j) cout << resD[i][j] << " "; cout << "\n"; }

    for (int i=0;i<n;++i) {
        delete[] matInt[i]; delete[] matF[i]; delete[] matD[i];
        delete[] resI[i]; delete[] resF[i]; delete[] resD[i];
    }
    delete[] matInt; delete[] matF; delete[] matD;
    delete[] resI; delete[] resF; delete[] resD;

    return 0;
}
