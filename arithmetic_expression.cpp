#include <iostream>
using namespace std;

enum Type { T_INT, T_FLOAT, T_DOUBLE };

struct Val {
    Type t;
    int vi;
    float vf;
    double vd;
};

double getAsDouble(const Val &v) {
    if (v.t == T_INT) return (double)v.vi;
    if (v.t == T_FLOAT) return (double)v.vf;
    return v.vd;
}

int main() {
    cout << "Enter three operands and their types and two operators.\n";
    cout << "Type as i for int, f for float, d for double.\n";
    cout << "Example input sequence:\n";
    cout << "  5 i  +  3.2 f  *  2.0 d\n\n";

    Val a, b, c;
    char ta, tb, tc;
    double va, vb, vc;
    char op1, op2;

    cin >> va >> ta >> op1 >> vb >> tb >> op2 >> vc >> tc;

    auto fillVal = [](Val &V, double x, char tch) {
        if (tch == 'i') { V.t = T_INT; V.vi = (int)x; }
        else if (tch == 'f') { V.t = T_FLOAT; V.vf = (float)x; }
        else { V.t = T_DOUBLE; V.vd = x; }
    };

    fillVal(a, va, ta);
    fillVal(b, vb, tb);
    fillVal(c, vc, tc);

    auto evalTwo = [&](const Val &L, char op, const Val &R) -> Val {

        Type resT = T_INT;
        if (L.t == T_DOUBLE || R.t == T_DOUBLE) resT = T_DOUBLE;
        else if (L.t == T_FLOAT || R.t == T_FLOAT) resT = T_FLOAT;
        Val Rv;
        Rv.t = resT;
        if (resT == T_DOUBLE) {
            double ld = getAsDouble(L), rd = getAsDouble(R), out=0;
            if (op=='+') out = ld + rd;
            if (op=='-') out = ld - rd;
            if (op=='*') out = ld * rd;
            if (op=='/') out = rd != 0 ? ld / rd : 0;
            Rv.vd = out;
        } else if (resT == T_FLOAT) {
            float lf = (float)getAsDouble(L), rf = (float)getAsDouble(R), out=0;
            if (op=='+') out = lf + rf;
            if (op=='-') out = lf - rf;
            if (op=='*') out = lf * rf;
            if (op=='/') out = rf != 0 ? lf / rf : 0;
            Rv.vf = out;
        } else {
            int li = L.vi, ri = R.vi, out=0;
            if (op=='+') out = li + ri;
            if (op=='-') out = li - ri;
            if (op=='*') out = li * ri;
            if (op=='/') out = (ri != 0 ? li / ri : 0);
            Rv.vi = out;
        }
        return Rv;
    };

    bool op1High = (op1=='*' || op1=='/');
    bool op2High = (op2=='*' || op2=='/');

    Val res;
    if (op2High && !op1High) {
        Val bc = evalTwo(b, op2, c);
        res = evalTwo(a, op1, bc);
    } else {
        Val ab = evalTwo(a, op1, b);
        res = evalTwo(ab, op2, c);
    }

    cout << "Result type: ";
    if (res.t == T_INT) { cout << "int, value = " << res.vi << "\n"; }
    else if (res.t == T_FLOAT) { cout << "float, value = " << res.vf << "\n"; }
    else { cout << "double, value = " << res.vd << "\n"; }

    return 0;
}
