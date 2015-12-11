# include <iostream>

using namespace std;

/* This is an example where if different functions just differ in the types
 * of the parameters used to call them, one can write one generalized
 * functions using the template keyword.
 */

/* Suppose we are trying to create a put_together function to put together
 * different types of object. On numerical types like int, float, double,
 * etc., it will just add the parameters. In case two strings are passed, it
 * will concatenate them. This also demonstrates overloading.
 */

template <class NumType> /* no ; here as the function definition is a part of
                            the template declaration
                          */
NumType put_together(NumType no1, NumType no2)
{
  return (no1 + no2);
}

int put_together(int no1, int no2)
{
  return put_together<int>(no1, no2);
}

float put_together(float no1, float no2)
{
  return put_together<float>(no1, no2);
}

double put_together(double no1, double no2)
{
  return put_together<double>(no1, no2);
}

string put_together(string s1, string s2)
{
  return s1 + s2;
}

string put_together(char c1, char c2)
{
  string a;
  a += c1;
  a += c2;
  return a;
}

int main()
{
  int a = 2, b = 3;
  float c = 1.0, d = 4.0;
  double e = 2.718281845, f = 1.6180339887;
  string s = "Hi! ", t = "How are you?";
  char g = 'o', h = 'l';

  cout << "Join of " << a << " and " << b << " is " << put_together(a, b) << endl;
  cout << "Join of " << c << " and " << d << " is " << put_together(c, d) << endl;
  cout << "Join of " << e << " and " << f << " is " << put_together(e, f) << endl;
  cout << "Join of " << s << " and " << t << " is " << put_together(s, t) << endl;
  cout << "Join of " << g << " and " << h << " is " << put_together(g, h) << endl;
}
