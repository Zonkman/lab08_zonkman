//Diba Mirza
#ifndef STRFUNCS_H
#define STRFUNCS_H
using namespace std;
#include <string>

void makeLower(string& s);

void lettersOnly(string& s);

bool isAnagramHelper(const string s1, const string s2);

bool isAnagram(string s1, string s2);

bool isPalindromeHelper(const string s1);

bool isPalindrome(const string s1);


#endif //STRFUNCS_H
