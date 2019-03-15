#include "strFuncs.h"
#include "tddFuncs.h"

int main() {

  assertTrue(isAnagram("twelve plus one","eleven plus two"),"isAnagram(\"twelve plus one\",\"eleven plus two\")");

  assertTrue(isAnagram("TWELVE! PLUS!! ONE!!!!","Eleven, plus-two."), "isAnagram(\"TWELVE! PLUS!! ONE!!!!)\",\"Eleven, plus-two.\")");

  assertTrue(!isAnagram("this string doesn't end early.","this string"),"isAnagram(\"this string doesn't end early.\",\"this string\")");

  assertTrue(isAnagram("Schoolmaster","The classroom"), "isAnagram(\"Schoolmaster\",\"The classroom\")");

  assertTrue(isAnagram("",""), "isAnagram(\"\",\"\")");

  return 0;
}
