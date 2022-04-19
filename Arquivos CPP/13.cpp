#include <iostream>

using namespace std;

int main() {
    float celsius, fahrenheit;

    cout << "Temperatura em graus Celsius: ";
    cin >> celsius;

    fahrenheit = ((9 * celsius + 160) / 5.0);

    cout << "Temperatura em graus Fahrenheit: " << fahrenheit << "°F.";

    return 0;
}