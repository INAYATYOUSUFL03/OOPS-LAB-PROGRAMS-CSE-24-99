#include <iostream>
using namespace std;

int main(){
    string t;
    char op;
    cin >> t >> op;

    if(t=="int"){
        int a,b;
        cin>>a>>b;
        if(op=='+') cout<<a+b;
        else if(op=='-') cout<<a-b;
        else if(op=='*') cout<<a*b;
        else if(op=='/') cout<<a/b;
        else if(op=='%') cout<<a%b;
    }
    else if(t=="float"){
        float a,b;
        cin>>a>>b;
        if(op=='+') cout<<a+b;
        else if(op=='-') cout<<a-b;
        else if(op=='*') cout<<a*b;
        else if(op=='/') cout<<a/b;
    }
    else{
        double a,b;
        cin>>a>>b;
        if(op=='+') cout<<a+b;
        else if(op=='-') cout<<a-b;
        else if(op=='*') cout<<a*b;
        else if(op=='/') cout<<a/b;
    }

    return 0;
}
