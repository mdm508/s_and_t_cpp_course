#include <iostream>
using namespace std;

int main(){
  char name[] = "";
  char year[] = "";
  short num;
  cout << "Welcome to the ";
  cout << "\033[1;36mAir Cylinder Finder™\033[0m\n" << endl;
  cout << "What is the name of your vehicle?" << endl;
  cin >> name;
  cout << "Ok. What is the year of manufature for your vehicle?" << endl;
  cin >> year;
  cout << "Thank you. How many cylinders do your vehicle need?" << endl;
  cin >> num;
  char* result[] = name[0] + year[2] + year[4] + num;
  cout << "Your vehicle's cylinder number is " + result + ".";
  return 0;
}