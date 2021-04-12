#include <iostream>
#include <fstream>
using namespace std;

int main(){

    string raw; //gets input from the text file and writes it to a string of raw data
    ifstream file;
    file.open("list10.txt");
    getline (file, raw);
    file.close();


    int number_of_spaces = 0; // determines the number of spaces in the string of raw data
    for (int i = 0; i < raw.length(); i++){
      if (raw[i] == ' '){
        number_of_spaces ++;
      }
    }

    string s_array[number_of_spaces - 1]; // separates the raw data by spaces and forms a list of the different sections.
    int i = 0;
    int last_space = 0;
    while (i < number_of_spaces - 2){
      for (int j = last_space + 1; j < raw.length(); j++){
        if (raw[j] == ' '){
          s_array[i] = raw.substr(last_space, j);
          last_space = j;
          break;
        }
      }
      i++;
    }
    for (int k = 0; k < number_of_spaces - 1; k++){
      cout << s_array[k] << endl;
    }
    return 0;
}
