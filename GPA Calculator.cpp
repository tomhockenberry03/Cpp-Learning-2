#include <iostream>
using namespace std;

int main() {

  int credits; //determines the number of credits and defines the strings
  cout << "How many credits?" << endl;
  cin >> credits;
  string weight;
  float weights_list[credits];
  char letter_grade;
  float grades[credits];
  float weighted_courses[credits];
  float sum;
  float avg;

  for (int i = 0; i < credits; i++) { // gets input from the user on their courses
    cout << "What is the weight of credit " << i + 1 << "?" << endl;
    cout << "Please choose from:" << endl;
    cout << "Advanced Placement - AP" << endl;
    cout << "Honors - HO" << endl;
    cout << "College Prep - CO?" << endl;
    cout << "Career Prep - CA" << endl;
    cin >> weight;

    if (weight == "AP"){
      weights_list[i] = 5.0;
    }
    else if (weight == "HO"){
      weights_list[i] = 4.5;
    }
    else if (weight == "CO"){
      weights_list[i] = 4.0;
    }
    else if (weight == "CA"){
      weights_list[i] = 3.5;
    }


    cout << "What grade was earned for credit " << i + 1 << "? (A, B, C, or D)" << endl;
    cin >> letter_grade;
    if (letter_grade == 'A') {
      grades[i] = 0;
    }
    else if (letter_grade == 'B') {
      grades[i] = -1;
    }
    else if (letter_grade == 'C') {
      grades[i] = -2;
    }
    else if (letter_grade == 'D') {
      grades[i] = -3;
    }
  }

  for (int i = 0; i < credits; i++){
    weighted_courses[i] = weights_list[i] + grades[i];
  }


  for (int i = 0; i < credits; i++){
    sum = sum + weighted_courses[i];
  }
  avg = sum/credits;
  cout << avg;
  return 0;
}
