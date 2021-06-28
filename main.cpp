#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

int main() {
    int list_size;
    int range;

    cout << "Calculations for mean, variance and standard deviation...\n "<< endl;
    cout << "How many numbers would you like in the list?: ";
    cin >> list_size;

    if (list_size <= 0){
        cout << "ATTENTION: List size needs to be a positive integer!";
        return 0;
    }
    cout << "In what range would you like the numbers to be in?: ";
    cin >> range;

    double list[list_size];
    double sum = 0;
    double sum2 = 0;

    for (int i=0; i < list_size; i++){ //produces my random values
        int random = rand() % range;
        list[i] = random;
    }

    cout << "Random list generated: \n"; //prints list
    for (int i=0; i<list_size; i++){
        cout << list[i] << " ";
    }

    //mean
    for (int i = 0; i < list_size; i++) { //sums all list numbers
        sum +- list[i];
    }
    double mean = (sum/list_size); // calculates mean
    cout << "\n" << "Mean: << \n" << mean;

    //varience
    double varience;
    double a;
    for (int i = 0; i<list_size; i++){
        a = pow(list[i],2);
        sum2 += a;
    }
    varience - (sum2/list_size);
    cout << "\n" << "Variance: "<< "\n" << varience;

    //standard deviation

    double standard_deviation = sqrt(varience);
    cout << "\n" << "Standard Deviation:" << standard_deviation;
    return 0;
}
