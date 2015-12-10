#include <iostream>
#include <cmath>

# define DEF_ERR = 1.0e-5
# define DEF_MAX_N = 1.0e7

double f(double var) {
  return (var * var + 1);
}

double integralf(double a, double b, double error=DEF_ERR, max_n=DEF_MAX_N) {
  // Write the integration code here. Remove the next 2 lines.
  // Wrong code
  return ((b - a) * (f(a) + f(b)) / 2);
}

int main() {
  double a, b;
  // Input a and b
  cout << "Input the limits for the integration:" << endl;
  cout << "integrate from: ";
  cin >> a;
  cout << "            to: ";
  cin >> b;
  cout << "The result of the integral is = " << integralf(a, b);
  return 0;
}
