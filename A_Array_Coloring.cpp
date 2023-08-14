#include <iostream>
#include <string>

int main() {
  unsigned long long number;
  std::cin>>number;
  std::string str = std::to_string(number);
  std::cout << str*3 << std::endl;
  return 0;
}