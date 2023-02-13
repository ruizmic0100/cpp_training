/** Finding PI to the Nth digit
 *
*/

// #include <iostream>
// #include <iomanip> // for setting precision
// #include <stdlib.h>

// /**
//  * @brief Program to find PI to a specified number of decimal places
// */
// int main(int argc, char* argv[])
// {
//     double PI=3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679;
//     int decimalPlaces;
//     char* commandLine=argv[1];

//     if (commandLine == NULL) {
//         std::cout << "Enter how many decimal places of PI you would like to see (limit: 100): " << std::endl;
//         std::cin >> decimalPlaces;
//         decimalPlaces+=1;
//     } else {
//         decimalPlaces = atoi(commandLine);
//         decimalPlaces += 1;
//     }
//     std::cout << std::setprecision(decimalPlaces) << PI << std::endl;
//     return 0;
// }