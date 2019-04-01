#include <iostream>
#include <vector>
#include "ValSet.hpp"
using namespace std;

int main() {
   ValSet<char> mySet;
   mySet.add('A');
   mySet.add('j');
   mySet.add('&');
   mySet.remove('j');
   mySet.add('#');
   int arrsize = mySet.size();
   ValSet<char> mySet2 = mySet;
   bool check1 = mySet2.contains('&');
   bool check2 = mySet2.contains('j');

}

template class ValSet<int>;
template class ValSet<char>;
template class ValSet<std::string>;
