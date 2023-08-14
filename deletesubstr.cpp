#include <iostream>
#include <string>
#include <regex>
using namespace std;

int main() { 
   string str = "red tuna, blue tuna, black tuna, one tuna";
   regex pattern("tuna");

   cout <<regex_replace(str, pattern, "");
}