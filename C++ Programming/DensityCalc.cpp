#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double mass = 0;
    double density = 0;
    double volume = 0;


    cout << "Please type the mass of the object: ";

    cin >> mass;

    cout << "Please type the density of the object: ";

    cin >> density;

    volume = mass / density;

    cout << fixed << setprecision(2) << "The object's voume is " << volume;

    return 0;
}