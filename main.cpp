// Started at 5:23 4-26-2022

// Section 6
// The sizeof operator

#include <iostream>
#include <climits>      // make sure you include climits for integer types
                                  // Similar information for floating point numbers
                                  // is contained in <cfloat>

using namespace std;

int main() {

    cout << "sizeof information" << endl;
    cout << "========================" << endl;
    
    cout << "char: " << sizeof(char) << " bytes." << endl;
    cout << "int : " << sizeof(int) << " bytes." << endl;
    cout << "unsigned int: " << sizeof(unsigned int) << " bytes." << endl;
    cout << "short: " << sizeof(short) << " bytes." << endl;
    cout << "long: " << sizeof(long) << " bytes." << endl;
    cout << "long long: " << sizeof(long long) << " bytes." << endl;
    
    cout << "========================" << endl;
    
    cout << "float: " << sizeof(float) << " bytes." << endl;
    cout << "double: " << sizeof(double) << " bytes." << endl;
    cout << "long double: " << sizeof(long double) << " bytes." << endl;
    
    
    // use values defined in <climits>
    cout << "========================" << endl;
    
    cout << "Minimum values:" << endl;
    cout << "char: " << CHAR_MIN << endl;
    cout << "int: " << INT_MIN << endl;
    cout << "short: " << SHRT_MIN << endl;
    cout << "long: " << LONG_MIN << endl;
    cout << "long long: " << LLONG_MIN << endl;
    
    cout << "========================" << endl;
    
    cout << "Maximum values:" << endl;
    cout << "char: " << CHAR_MAX << endl;
    cout << "int: " << INT_MAX << endl;
    cout << "short: " << SHRT_MAX << endl;
    cout << "long: " << LONG_MAX << endl;
    cout << "long long: " << LLONG_MAX << endl;
    
    // sizeof can also be used with variable names
    cout << "========================" << endl;
    
    cout << "sizeof using variable name" << endl;
    int age {21};
    cout << "age is " << sizeof(age) << " bytes." << endl;
    // or
    cout << "age is " << sizeof age << " bytes." << endl;
    
    double wage {22.24};
    cout << "wage is " << sizeof(wage) << " bytes." << endl;
    // or
    cout << "wage is " << sizeof wage << " bytes." << endl; 
    
    return 0;
}

// Section 6 
// Constants

#include <iostream>

using namespace std;

int main() {
    cout << "Hello, welcome to Frank's Carept Cleaning Service" << endl;
    cout << "\nHow many rooms would you like cleaned?";
    
    int number_of_rooms {0};
    cin >> number_of_rooms;
    
    const double price_per_room {32.5};
    const double sales_tax {0.06};
    const int estimate_expiry {30}; // days
    
    cout << "\nEstimate for carpet cleaning service" << endl;
    cout << "Number of rooms: " << number_of_rooms << endl;
    cout << "Price per room: $" << price_per_room << endl;
    cout << "Cost: $" << price_per_room * number_of_rooms << endl;
    cout << "Tax: $" << price_per_room * number_of_rooms * sales_tax << endl;
    cout << "=============================================" << endl;
    cout << "Total estimate: $" << (price_per_room * number_of_rooms) + (price_per_room * number_of_rooms * sales_tax) << endl;
    cout << "This estimate is valid for " << estimate_expiry << " days" << endl;
    
    cout << endl;
    return 0;
}

// Section 6 
// Challenge

#include <iostream>

using namespace std;

int main() {
    cout << "Hello, welcome to Frank's Carept Cleaning Service" << endl;
    cout << "\nHow many small rooms would you like cleaned?";
    
    int number_of_small_rooms {0};
    cin >> number_of_small_rooms;
    
    cout << "How many large rooms would you like cleaned?";
    
    int number_of_large_rooms {0};
    cin >> number_of_large_rooms;
    
    const double price_per_small_room {25.0};
    const double price_per_large_room {35.0};
    const double sales_tax {0.06};
    const int estimate_expiry {30}; // days
    const double cost = (price_per_small_room * number_of_small_rooms) + (price_per_large_room * number_of_large_rooms); //*
    const double tax = cost * sales_tax; //*
    const double estimate = cost + cost * sales_tax; //*
    
    cout << "\nEstimate for carpet cleaning service" << endl;
    cout << "Number of small rooms: " << number_of_small_rooms << endl;
    cout << "Number of large rooms: " << number_of_large_rooms << endl;
    cout << "Price per small room: $" << price_per_small_room << endl;
    cout << "Price per large room: $" << price_per_large_room << endl;
    cout << "Cost: $" << cost << endl;
    cout << "Tax: $" << tax << endl;
    cout << "=============================================" << endl;
    cout << "Total estimate: $" << estimate << endl;
    cout << "This estimate is valid for " << estimate_expiry << " days" << endl;
    
    cout << endl;
    return 0;
}

// Ended at 7:45 4-26-2022
