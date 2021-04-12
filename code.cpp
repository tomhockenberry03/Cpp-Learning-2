#include <iostream>
#include <fstream>
using namespace std;

int main(){
    string s; //gets input from the text file and writes it to a string
    ifstream file;
    file.open("list10.txt");
    getline (file, s);
    file.close();

    int number_of_spaces = 11;
    string string_array[number_of_spaces-1];
    int last_space = 0;
    for (int j = 0; j < string_array.length(); j++)
      for (int i = last_space; i < s.length(); i++) {
        if (s[i] = ' '){
          last_space = i;
          string_array[j] = s.substr(last_space, i);
        }
      }
    }
}
