#include <cmath>
#include <iostream>
#include <vector>
/* String functions section */

// Splits a single string on separator into a vector of strings
std::vector<std::string> Split(std::string whole, std::string separator);

// takes two strings and returns a new string that is the result of removing all
// occurrences of s2 from s1.
std::string RemoveAllSubstrings(std::string s1, std::string s2);

// takes two strings and returns a new string that is the result of removing the
// first occurrence of s2 from s1.
std::string RemoveFirstSubstring(std::string s1, std::string s2);

// Joins all strings in a vector together, using the glue string in between them
std::string Join(std::vector<std::string> pieces, std::string glue);

// takes two vectors of integers, a and b. The function then removes elements
// from a if they are also in b. If the integer is in b, but not in a, nothing
// happens.
std::vector<int> MatchVectors(std::vector<int> a, std::vector<int> b);

// divides an input integer by 2 until it is impossible to do so, then returns
// the final number. (16 = 2 * 2 * 2 * 2 * 1 -> 1, 7 -> 7, 26 = 2 * 13 -> 13, 52
// = 2 * 2 * 13 -> 13)
int RemoveTwos(int original)
{
  int odd = original;

  while (odd % 2 == 0)
  {
    odd /= 2;
  }

  return odd;
}

// takes a vector of integers and removes all elements evenly divisible by the
// passed in int
std::vector<int> MultiplesFilter(std::vector<int>, int divides_by);

// returns a vector with true for even numbers and false for odd numbers
std::vector<bool> EvenMask(std::vector<int>);

// returns a vector with true for odd numbers and false for even numbers
std::vector<bool> OddMask(std::vector<int>);

// Sums all numbers in a vector and returns the resulting value
int Sum(std::vector<int> nums);

// Multiplies all numbers in a vector together and returns the resulting value
int Product(std::vector<int> nums);

// Adds an integer n to each element of a given vector
std::vector<int> VectorPlusN(std::vector<int> v, int n);

// Multiples an integer n with each element of a given vector
std::vector<int> VectorTimesN(std::vector<int> v, int n);

// takes in two integers and returns a vector of size n with
// values n*1, n*2, n*3... up to n*m
std::vector<int> Multiples(int n, int m)
{
  std::vector<int> mult;

  if (m < 1)
  {
    mult.push_back(0);
    return mult;
  }

  for (int i = 1; i <= m; i++)
  {
    mult.push_back(n * i);
  }

  return mult;
}

// takes an integer n that is >= 0 and returns a vector of all squares up to n^n
// (1^1, 2^2, 3^3, .... n^n)
// tested n = 12 and needed larger data type
std::vector<long long> SquaresUntil(long long n)
{
  std::vector<long long> s;

  if (n <= 0)
  {
    s.push_back(0);
    return s;
  }

  for (int i = 1; i <= n; i++)
  {
    s.push_back((long long)pow(i, i));
  }

  return s;
}

// takes an int, n, and returns the nth value of the fibonacci sequence (1, 1,
// 2, 3, 5, 8, 13, ...)
int NthFibonacci(int n)
{
  if (n == 1 || n == 2)
  {
    return 1;
  }

  int *fib_array = new int[n]{1, 1};

  for (int i = 2; i < n; i++)
  {
    fib_array[i] = fib_array[i - 1] + fib_array[i - 2];
  }

  int fib = fib_array[n - 1];
  delete[] fib_array;

  return fib;
}

// takes an int, n, and returns the factorial of that int (n!)
long long Factorial(long long n)
{
  if (n < 0)
  {
    return 0;
  }
  else if (n == 0)
  {
    return 1;
  }

  long long *fac_array = new long long[n + 1]{1, 1};

  for (long long i = 2; i <= n; i++)
  {
    fac_array[i] = fac_array[i - 1] * i;
  }

  long long fac = fac_array[n];
  delete[] fac_array;

  return fac;
}

// returns -1 if the number is negative and 1 if positive
int Sign(int num)
{
  return num < 0 ? -1 : 1;
}

// takes two vectors of doubles, a and b. The function then removes elements
// from a if they are also in b. If the double is in b, but not in a, nothing
// happens.
std::vector<double> MatchVectors(std::vector<double> a, std::vector<double> b);

// takes a vector of doubles and removes all elements evenly divisible by the
// passed in double
std::vector<double> MultiplesFilter(std::vector<double>, double divides_by);

// returns a vector with true for numbers greater than the second parameters and
// false for those less than or equal to
std::vector<bool> GreaterMask(std::vector<double> nums, double greater_than);

// returns a vector with true for numbers less than the second parameters and
// false for those greater than or equal to
std::vector<bool> LessMask(std::vector<double> nums, double less_than);

// returns a vector with true for numbers greater than the second parameters and
// false for those less than or equal to
std::vector<bool> GreaterMask(std::vector<int> nums, int greater_than);

// returns a vector with true for numbers less than the second parameters and
// false for those greater than or equal to
std::vector<bool> LessMask(std::vector<int> nums, int less_than);

// Sums all numbers in a vector and returns the resulting value
double Sum(std::vector<double> nums)
{
  double sum = 0;

  for (auto x : nums)
  {
    sum += x;
  }

  return sum;
}

// Multiplies all numbers in a vector together and returns the resulting value
double Product(std::vector<double> nums)
{
  double prod = 1;

  for (auto x : nums)
  {
    prod *= x;
  }

  return prod;
}

// Adds an double n to each element of a given vector
std::vector<double> VectorPlusN(std::vector<double> v, double n)
{
  for (auto &x : v)
  {
    x += n;
  }

  return v;
}

// Multiples an double n with each element of a given vector
std::vector<double> VectorTimesN(std::vector<double> v, double n)
{
  for (auto &x : v)
  {
    x *= n;
  }

  return v;
}

// takes in two doubles and returns a vector of size n with
// values n*1, n*2, n*3... up to n*m
std::vector<double> Multiples(double n, double m);

// returns -1 if the number is negative and 1 if positive
double Sign(double num)
{
  return num < 0 ? -1 : 1;
}

// adds n to each element of the vector
std::vector<int> AddN(std::vector<int> v, int n);

// adds n to each element of the vector
std::vector<double> AddN(std::vector<double>, double n);

// adds n to each element of the vector
std::vector<std::string> AddN(std::vector<std::string>, std::string n);

// subtracts n to each element of the vector
std::vector<int> SubtractN(std::vector<int>, int n);

// subtracts n to each element of the vector
std::vector<double> SubtractN(std::vector<double>, double n);

// int main(){
// 	std::cout << Factorial (5) <<std::endl;
// 	std::vector<int> v{1,2,3};
// 	std::vector<int> res = AddN(v, 5);
// 	for(int i=0;i<res.size();i++){
// 		std::cout<<res[i]<<" ";
// 	}
// }