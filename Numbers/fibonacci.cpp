// /** Fibonacci Sequence
//  * 
// */

// #include <iostream>

// int fibonacci(int x);

// int main()
// {
//     int x;
//     std::cout << "How many fibonacci numbers would you like to display?: ";
//     std::cin >> x;
//     fibonacci(x);

//     return 0;
// }

// int fibonacci(int x)
// {
//     int a = 0;
//     int b = 1;
//     int counter = 0;
//     int temp;

//     std::cout << a << " ";
//     std::cout << b << " ";

//     while (counter != (x-2)) {
//         temp = b;
//         b = a + b;
//         std::cout << b << " ";
//         a = temp;
//         counter++;
//     }

//     std::cout << std::endl;
// }