#include <iostream>
#include <cmath>

#define DEF_ERR 1.0e-5
#define DEF_MAX_N 1.0e7

using namespace std;

double f(double var) {
  return (var * var + 2);
}

double area(double var1,double var2){
   return 0.5*(f(var1)+f(var2))*(var2-var1);
}

double integralf(double a, double b, double error=DEF_ERR, double max_n=DEF_MAX_N) {
  int i;
  float n,h,count;
  count = 0;                             
  n = 1048576;                          // no. of rectangles
  h = (b-a)/n;                         // Represent width of the rectangle
  for (i=1;i<n-1;i++) {
  count += area(a+(i*h),a+(i+1)*h);}
  return count;
}

int main() {
  double a, b;
  // Input a and b
  cout << "Input the limits for the integration:" << endl;
  cout << "integrate from: ";
  cin >> a;
  cout << "            to: ";
  cin >> b;
  cout << "The result of the integral is = " << integralf(a, b) << endl;
  
  
}
