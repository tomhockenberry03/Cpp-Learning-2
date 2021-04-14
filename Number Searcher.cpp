#include <iostream>
#include <fstream>
using namespace std;

int main(){

    string raw; //gets input from the text file and writes it to a string of raw data
    ifstream file;
    file.open("list10k.txt");
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
    while (i < number_of_spaces - 1){
      for (int j = last_space + 1; j < raw.length(); j++){
        if (raw[j] == ' '){
          s_array[i] = raw.substr(last_space, j);
          last_space = j;
          break;
        }
      }
      i++;
    }

    int length = number_of_spaces - 1;

    int i_array[length]; //Takes the sting array and converts it to an integer array.
    for (int k = 0; k < length; k++){
      i_array[k] = stoi(s_array[k]);
    }

    int a = 1; //sorts the array
    while(a == 1){
      a = 0;
      for (i = 0; i < length; i++){
        int first_entry = i_array[i];
        int second_entry = i_array[i+1];
        if(first_entry > second_entry){
          a = 1;
          int swap = first_entry;
          i_array[i] = second_entry;
          i_array[i+1] = swap;
        }
      }
    }

    /*for (i = 0; i < length; i++) {
      cout << i_array[i] << ' ';
    }*/
    cout << "What number would you like to find?";
    int entry;
    cin >> entry;

    if (entry > i_array[length/2]) {
      for (i = length/2; i < length; i++) {
        if (i_array[i] == entry){
          cout << i << endl;
        }
      }
    }
    else {
      for (i = 0; i < length/2; i++) {
        if (i_array[i] == entry){
          cout << i << endl;
        }
      }
    }


    return 0;
}
