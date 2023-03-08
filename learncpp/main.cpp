#include <iostream>
#include <limits>
#include <array>
#include <string_view>
#include <tuple>
#include <type_traits>

int add(int x, int y); // This is needed so main.cpp knows that add() is a function defined somewhere else.

namespace a::b::c
{
    inline constexpr std::string_view str{"Hello"};
}

template<class... T>
std::tuple<std::size_t, std::common_type_t<T...>> sum(T... args)
{
    return { sizeof...(T), (args + ...) };
}

int getValueFromUser()  // this function now returns an integer value
{
    std::cout << "Enter an integer: ";
    int input{};
    std::cin >> input;

    return input; // return the value the user entetered back to the caller.
}

int add(int x, int y)
{
    int z{ x + y };

    return z;
} // z, y, and x destroyed here.

int main()
{

    int num { getValueFromUser() }; // initialize num with the return value of getValueFromUser().
    std::cout << num << " doubled is " << num * 2 << '\n';

    int a; // no initializer (default initialization)
    int b = 5; // initializer (copy initialization)
    int c( 6 ); // initializer in parenthesis (direct initialization)

    // List initialization methods (C++11)
    int d { 7 }; // initializer in braces (direct list initialization)
    int e = { 8 }; // initializer in braces after eqauls sign (copy list initialization)
    int f {}; // initializer is empty braces (value initialization)

    int a = 5, b = 6;          // Copy intialization
    int c( 7 ), d( 8 );        // Direct initialization
    int e { 9 }, f { 10 };     // Direct brace intialization (preferred)
    int g = { 9 }, h = { 10 }; // Copy brace intialization
    int i {}, j {};            // Value initialization

    int a{ 2 };         // initialize variable a with lieral value 2
    int b{ 2 + 3 };     // initialize variable b with computed value 5
    int c{ (2*3) + 4 }; // initialize variable c with computed value 10
    int d{ b };         // initiliaze varaible e with variable b's value of 5
    int e{ five() };    // initiliaze variable e with function return value 5

    [[maybe_unused]] int x { 5 };

    // since x is [[maybe_unused]], no warning generated





    auto [iNumbers, iSum]{ sum(1, 2, 3) };
    std::cout << a::b::c::str << ' ' << iNumbers << ' ' << iSum << '\n';

    std::array arr{ 1, 2, 3 };

    std::cout << std::size(arr) << '\n';

    return 0;








    std::cin.clear(); // reset any error flags

    /* The line below is needed so that any input prior is ignored incase it has a 
    hanging '\n' which would be otherwised picked up by the next readline operation */
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // ignore any character in the input
    std::cin.get(); // Get one more char from the user (waits for user to press enter).
    return 0;
}

int getUserInput()
{
    std::cout << "Enter an interger: ";
    int input{};
    std::cin >> input;

    return input;
}

int temp_main_1()
{
    // Get first number from user
    int value{ getUserInput() };
    std::cout << value << '\n'; // Debug code to ensure getUserInput() is working, we'll remove this later

    // Get mathematical operation from user
    // getMathematicalOperation();

    // Get second number from user
    // getUserInput();

    // Calculate result
    // calculateResult();

    // Print result
    // printResult();

    return 0;
}