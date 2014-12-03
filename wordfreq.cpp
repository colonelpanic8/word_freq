//
// wordfreq.cpp
//
//    use: parse and print the words from standard input
//    notes: for submission 1 of project 3
//
//    by: Katya Malison
//    date: 11/23/14
//
#include <iostream>

#include "FrequencyTable.h"

using namespace std;

int main()
{
  string holder;
  FrequencyTable mytable;

  while (cin >> holder) {
    if (isalpha(holder[0])) {
      cout << "yoooo" << endl;
      for (int i = 0; i < (int) holder.length(); i++) {
	holder[i] =  tolower(holder[i]);
	cout << "ayooooo" << endl;
      }
      mytable.insert(holder);
      cout << "wahooooo" << endl;
      mytable.print();
      cout << mytable.size() << endl;
    }
  }

  mytable.print();
  return 0;
}
