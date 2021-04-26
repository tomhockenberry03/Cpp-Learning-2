#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <cstdio>
using namespace std;

int main() {
  string l;
  string g;
  int number_of_courses = 0;
  int entry = 0;
  ifstream file;
  vector <string> levels; // defines 2 strings to store grade and level for each course
  vector <string> grades;
  vector <float> weights; // defines 2 more strings to store the weight and change in course weight due to grade
  vector <float> subtractions;
  vector <string> vecOfStrs;
  string str;
// Read the next line from File untill it reaches the end.
while (getline(file, str))
{
    // Line contains string of length > 0 then save it in vector
    if(str.size() > 0)
        vecOfStrs.push_back(str);
}

for (auto i = vecOfStrs.begin(); i != vecOfStrs.end(); ++i) {
  cout << *i << " ";
}
/*  file.open("major.gpa.txt"); // reads the file to determnd the number of courses
  while (file >> l >> g){
    number_of_courses++;
  }
  file.close();

  vector <string> levels(); // defines 2 strings to store grade and level for each course
  vector <string> grades();
  vector <float> weights(); // defines 2 more strings to store the weight and change in course weight due to grade
  vector <float> subtractions();

  file.open("major.gpa.txt"); // reopens the file, and adds entry to the two strings from inside the file
  while (file >> levels[entry] >> grades[entry]){
    entry ++;
  }
  file.close();*/


  for (int i = 0; i < number_of_courses; i++) { //assigning values to weights depending on the level of the course
    string a = levels[i];
    if (a == "APP"){
      weights[i] = 5.5;
    }
    else if (a == "AP"){
      weights[i] = 5;
    }
    else if (a == "HO"){
      weights[i] = 4.5;
    }
    else if (a == "CP"){
      weights[i] = 4.0;
    }
    else {
      printf("a = '%s'\n", a);
      printf("a = '%d' '%d' '%d'\n", a[0], a[1], a[2]);
    }
  }
  for (int i = 0; i < number_of_courses; i++) { //determining how much is subtracted from each weight based on the grade
    if (grades[i] == "A") {
      subtractions[i] = 0;
    }
    if (grades[i] == "B") {
      subtractions[i] = -1;
    }
    if (grades[i] == "C") {
      subtractions[i] = -2;
    }
    if (grades[i] == "D") {
      subtractions[i] = -3;
    }
  }

  for (int i = 0; i < 100; i++) {
    cout << levels[i] << '-' << weights[i] << "---" << grades[i] << '-' << subtractions[i] << endl;
  }

}


/*int main() {

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
    cout << "College Prep - CP?" << endl;
    cout << "Career Prep - CA" << endl;
    cin >> weight;

    if (weight == "AP"){ // forms a list of the weightings for each course
      weights_list[i] = 5.0;
    }
    else if (weight == "HO"){
      weights_list[i] = 4.5;
    }
    else if (weight == "CP"){
      weights_list[i] = 4.0;
    }
    else if (weight == "CA"){
      weights_list[i] = 3.5;
    }


    cout << "What grade was earned for credit " << i + 1 << "? (A, B, C, or D)" << endl;
    cin >> letter_grade;
    if (letter_grade == 'A') { // forms a list of the necessary subtractions from each weight based on the grade
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

  for (int i = 0; i < credits; i++){ //forms a list of the true weighted credits including grades
    weighted_courses[i] = weights_list[i] + grades[i];
  }

  //averages the weighted credits
    for (int i = 0; i < credits; i++){
    sum = sum + weighted_courses[i];
  }
  avg = sum/credits;
  cout << avg;
  return 0;
}
*/
