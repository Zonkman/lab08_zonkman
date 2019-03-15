#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
#include "strFuncs.h"
using namespace std;



void makeLower(string& s) {
  for (int i = 0; i < (int)s.length(); i++) {
    char currChr = s.at(i);
    if (currChr >= 'A' && currChr <= 'Z') { //this range is capital letters
      char lower = (char)(((int)currChr)+0x20);
      s.replace(i,1,1,lower); //switches the capital letter with lowercase
    }
  }
}

void lettersOnly(string& s) {
  for (int i = 0; i < (int)s.length(); i++) {
    char currChr = s.at(i);
    if ((currChr <= 'A' || currChr >= 'Z') && (currChr <= 'a' || currChr >= 'z')) { //letter ranges
      s.erase(i--,1);
    }
  }
}

bool isAnagramHelper(const string s1, const string s2) {
  int s1Len = (int)s1.length();
  int s2Len = (int)s2.length();
  if (s1Len == 0 || s2Len == 0) {
    return (s1Len == s2Len);
  }
  else {
    if (s1.at(0) == s2.at(0)) {
      return isAnagramHelper(s1.substr(1), s2.substr(1));
    }
  }
  return false;
}

/* Precondition: Two valid strings s1 and s2, each containing a mix of alphabets, spaces and punctuations
 * Post condition: Return true if one string is an anagram of the other string. White spaces, punctuations and
 * the case for the letters (upper or lower) should not
 * affect your result. 
 */
bool isAnagram(string s1, string s2){
  makeLower(s1);
  makeLower(s2);
  lettersOnly(s1);
  lettersOnly(s2);
  sort(s1.begin(), s1.end());
  sort(s2.begin(), s2.end());
  return isAnagramHelper(s1,s2);
}

bool isPalindromeHelper(const string s1){
  int sLen = (int)s1.length();
  if (sLen < 2){
    return true;
  }
  else if (s1.at(0) == s1.at(sLen-1)) {
    return isPalindrome(s1.substr(1,sLen-2));
  }
  else {
    return false;
  }
  return false; //how to get here???
}

/* Precondition: s1 is a valid string that may contain upper or lower case alphabets, no spaces or special characters
 * Postcondition: Returns true if s1 is a palindrome, false otherwise
 *You should provide a recursive solution*/
bool isPalindrome(const string s1){
  string myStr = s1;
  makeLower(myStr);
  return isPalindromeHelper(myStr);
}


