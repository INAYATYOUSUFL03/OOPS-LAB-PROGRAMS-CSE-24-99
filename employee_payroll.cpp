#include <iostream>
using namespace std;

int main(){
    int id, count=0;
    double rate, hours, gross, net, total=0;

    while(cin >> id >> rate >> hours){
        if(hours > 40) gross = 40*rate + (hours-40)*rate*1.5;
        else gross = hours*rate;

        net = gross - gross*0.03625;
        cout << id << " " << net << "\n";

        total += net;
        count++;
    }

    cout << total << "\n" << total/count;
    return 0;
}
