#include <iostream>
using namespace std;


double power(double base, int exp) {
        double result = 1.0;
        for(int i = 0; i < exp; i++){
                result *= base;
        }
        return result;
}

double roundToTwo(double val){
        return (long)(val * 100 + 0.5) / 100.0;
}

double present_value(double value,double rate,double time){
        double pv = value / power((1 + rate), time);
        return roundToTwo(pv);
}

double future_value(double value,double rate,double time){
        double fv = value * power((1 + rate), time);
        return roundToTwo(fv);
}

int main() {
        cout << "Present Value..." << '\n';
        cout << present_value(100,0.1,5) << '\n';
        cout << "Future Value..." << '\n';
        cout << future_value(100,0.1,5) << '\n';
        return 0;

}
