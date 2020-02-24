#include <iostream>
#include <string>
using namespace std;

int main() {
    string model_number, year_string, cylinder_string;
    int year, cylinder;
    bool input_okay = false;
    do {
        cout << "Enter model number" << endl;
        cin >> model_number;
        if (model_number == "Q"){
            cout << "Exiting" << endl;
            return 1;
        }
        cout << "Enter cyclinders" << endl;
        cin >> cylinder;
        switch (model_number[0]) {
            case 'E':
                //each of these checks you should really put an output statement
                if (cylinder == 6 || cylinder == 8)
                    input_okay = true;
                break;
            case 'A':
                if (cylinder == 4 || cylinder == 6)
                    input_okay = true;
                break;
            case 'C':
                if (cylinder == 15 || cylinder == 20)
                    input_okay = true;
                break;
            case 'J':
                if (cylinder == 6 || cylinder == 12)
                    input_okay = true;
                break;
            default:
                input_okay = false;
                break;
        }
    } while (!input_okay);
    //now deal with the year
    input_okay = false;
    do {
        cout << "Enter year" << endl;
        cin >> year_string;
        if (year_string == "Q"){
            cout << "Quitting" << endl;
            return 1; 
        }
        year = stoi(year_string);
        if (year >= 1985 && year <= 2005){
            input_okay = true;
        } else {
            cout << "Enter year between 1985 and 2005 inclusive" << endl;
        }
    } while (!input_okay);
    string year_part = year_string.substr(year_string.size()-2);
    cylinder_string = to_string(cylinder); 
    cout << "ID is "
         << model_number + year_part +  cylinder_string;

    return 0;
}
