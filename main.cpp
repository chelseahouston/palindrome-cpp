#include <iostream>
#include <string>
using namespace std;

int main (){

  string input;
  cout << "Please input a number, word or sentence to find out if it's a Palindrome: ";
  cin >> input;
  
  if (input == string(input.rbegin(), input.rend())) {
    cout << input << " is a palindrome";}
  else
  cout << input << " is not a palindrome.";

  return 0;
}