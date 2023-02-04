#include <iostream>
int gcd(int a, int b) {
  if (b == 0) return a;
  return gcd(b, a % b);
}
int main() {
  int num1, den1, num2, den2, result_num, result_den;
  
  std::cout << "Enter the first fraction: ";
  std::cin >> num1 >> den1;
  
  std::cout << "Enter the second fraction: ";
  std::cin >> num2 >> den2;
  
  result_num = num1 * den2 + num2 * den1;
  result_den = den1 * den2;
  
  int gcd_value = gcd(result_num, result_den);
  
  result_num /= gcd_value;
  result_den /= gcd_value;
  
  std::cout << "The sum of the fractions is: " << result_num << "/" << result_den << std::endl;
  
  return 0;
}
