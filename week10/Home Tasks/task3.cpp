#include <iostream>
using namespace std;

float taxCalculator(char type, float price) {
    char vehicleCodes[] = {'M', 'E', 'S', 'V', 'T'};
    char vehicleTypes[][20] = {"Motorcycle", "Electric", "Sedan", "Van", "Truck"};
    float taxRates[] = {6, 8, 10, 12, 15};

    float taxRate = 0.0;
    char vehicleType[20];

    // Find the matching vehicle code and get tax rate and type
    for (int i = 0; i < 5; i++) {
        if (type == vehicleCodes[i]) {
            taxRate = taxRates[i];
            int j = 0;
            while (vehicleTypes[i][j] != '\0') {
                vehicleType[j] = vehicleTypes[i][j];
                j++;
            }
            vehicleType[j] = '\0';
            break;
        }
    }

    if (taxRate == 0.0) {
        cout << "Invalid vehicle type code!" << endl;
        return 0;
    }

    // Calculate tax amount and final price
    float taxAmount = (price * taxRate) / 100;
    float finalPrice = price + taxAmount;

    // Display result
    cout << "The final price on a vehicle of type " << vehicleType
         << " after adding the tax is $" << finalPrice << "." << endl;

    return finalPrice;
}

int main() {
    char type;
    float price;

    // Take input from the user
    cout << "Enter Vehicle Type Code (M/E/S/V/T): ";
    cin >> type;
    cout << "Enter Vehicle Price: ";
    cin >> price;

    // Call the taxCalculator function
    taxCalculator(type, price);

    return 0;
}