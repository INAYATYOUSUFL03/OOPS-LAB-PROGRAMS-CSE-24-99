#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
    int n;
    cin >> n;

    double a[200];
    for(int i=0;i<n;i++) cin>>a[i];

    double sum=0;
    for(int i=0;i<n;i++) sum+=a[i];
    double mean = sum/n;

    double b[200];
    for(int i=0;i<n;i++) b[i]=a[i];
    sort(b,b+n);
    double median = (n%2)?b[n/2]:(b[n/2]+b[n/2-1])/2;

    int maxf=0;
    double mode=b[0];
    for(int i=0;i<n;i++){
        int c=0;
        for(int j=0;j<n;j++)
            if(a[j]==a[i]) c++;
        if(c>maxf){ maxf=c; mode=a[i]; }
    }

    double s=0;
    for(int i=0;i<n;i++) s+=(a[i]-mean)*(a[i]-mean);
    double var=s/n;
    double sd=sqrt(var);

    cout<<mean<<"\n"<<median<<"\n"<<mode<<"\n"<<sd<<"\n"<<var;

    return 0;
}
