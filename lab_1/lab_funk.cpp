#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

double y(double x);
double S(double x, int n);
double S(double x, double eps);

int main(){
 short int k = 10, n = 5;
 double a = 0, b = 1, eps = 0.0001;
 double h = (b - a) / (k - 1);
 cout << "--------------------------------------------------------------\n";
 cout << setw(8) << "x"
      << setw(15) << "S-n=5(x)"
      << setw(15) << "S-eps(x)"
      << setw(15) << "y(x)" << endl;
 for (int i = 0; i < k; i++) {
   double x = a + i * h;
   double S5 = S(x, n);
   double SE = S(x, eps);
   double exact = y(x);

  cout << setw(8) << x
     << setw(15) << S5
     << setw(15) << SE
     << setw(15) << exact
     << endl;

 }
 
    return 0;
}



double y(double x) {
    return (1 + 2 * x * x) * exp(x * x);
}

double S(double x, int n) {
    double sum = 0;
    for (int i = 0; i <= n; i++) {
        sum += (2.0 * i + 1) / tgamma(i + 1) * pow(x, 2 * i); // tgamma(i+1)=i!
    }
    return sum;
}

double S(double x, double eps) {
    double sum = 0;
    double term;
    int i = 0;
    do {
        term = (2.0 * i + 1) / tgamma(i + 1) * pow(x, 2 * i);
        sum += term;
        i++;
    } while (fabs(term) > eps);
    return sum;
}
