#include <iostream>
using namespace std;

int main() {
    int m1,m2,m3,m4,m5;
    cin >> m1 >> m2 >> m3 >> m4 >> m5;
    float per = (m1+m2+m3+m4+m5) / 5.0;

    if(per >= 90) cout << "Grade A";
    else if(per >= 75) cout << "Grade B";
    else if(per >= 60) cout << "Grade C";
    else if(per >= 40) cout << "Grade D";
    else cout << "Fail";
}
