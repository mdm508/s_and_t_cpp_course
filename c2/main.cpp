/* 
 * Matthew McLaughlin
 * 2/20/20
 * see https://classes.mst.edu/compsci1570/hw2.htm for details
 * 
*/ 

#include <iostream>
#include <math.h> /* ceil */
using namespace std;

const float P = 0.004;
const float W = 1.2;

int main() {
    cout << "\n\tWelcome to the IPU calculator\n\n";
    // declare variables for inputs
    float s, temp_result;
    int nc, nd;
    int N;
    //get the inputs
    cout << "Please enter the surface area: " << endl;
    cin >> s;
    cout << "Please enter the number of children in the area: " << endl;
    cin >> nc;
    cout << "Please enter number of expected days to complete the painting: " << endl;
    cin >> nd;
    //make the calculation and round up
    N = ceil((P * nc * s + W) * (1 + 1 / nd));
    cout << "\nYou should buy " << N << " gallons of paint";
    return 0;
}
