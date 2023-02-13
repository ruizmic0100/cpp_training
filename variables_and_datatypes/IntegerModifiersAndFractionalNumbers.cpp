// #include <iostream>
// #include <iomanip>

// int main()
// {
//     signed int value1{10};
//     signed int value2{-200};

//     std::cout << "value1 : " << value1 << std::endl;
//     std::cout << "value2 : " << value2 << std::endl;
//     std::cout << "sizeof(value1) : " << sizeof(value1) << std::endl;
//     std::cout << "sizeof(value2) : " << sizeof(value2) << std::endl;

//     unsigned int value3{3};
//     // unsigned int value4{-5}; // Compiler error

//     // short and long
//     short short_var {-32768}; // 2 Bytes
//     short int short_int {455};
//     signed short signed_short {122};
//     signed short int signed_short_int {-456};
//     unsigned short int unsigned_short_int {456};

//     int int_var {55}; // 4 bytes
//     signed signed_var {66}; 
//     signed int signed_int {77};
//     unsigned int unsigned_int {77};

//     long long_var {88}; // 4 or 8 bytes
//     long int long_int {33};
//     signed long signed_long {44};
//     signed long signed_long_int {44};
//     signed long int unsigned_long_int {44};

//     long long long_long {888}; // 8 bytes
//     long long int long_long_int {999};
//     signed long long signed_long_long {444};
//     signed long long int signed_long_long_int {1234};
//     unsigned long long int unsigned_long_long_int {1234};

//     std::cout << "Short variable : " << short_var << " , size : "
//     << sizeof (short) << " bytes" << std::endl;

//     std::cout << "Short int : " << short_int << " , size : "
//     << sizeof (short int) << " bytes" << std::endl;

//     std::cout << "Signed short int : " << signed_short << " , size : "
//     << sizeof (signed short int) << " bytes" << std::endl;

//     std::cout << "Signed short int : " << signed_short_int << " , size : "
//     << sizeof (signed short int) << " bytes" << std::endl;

//     std::cout << "unsigned short int : " << unsigned_short_int << " , size : "
//     << sizeof (unsigned short int) << " bytes" << std::endl;

//     std::cout << "----------------------" << std::endl;

//     std::cout << "Int variable : " << int_var << ", size : "
//     << sizeof (int) << " bytes" << std::endl;

//     std::cout << "Signed variable : " << signed_var << ", size : "
//     << sizeof (signed) << " bytes" << std::endl;

//     std::cout << "Signed int : " << signed_int << ", size : "
//     << sizeof (signed int) << " bytes" << std::endl;

//     std::cout << "unsigned int : " << unsigned_int << ", size : "
//     << sizeof (unsigned int) << " bytes" << std::endl;

//     std::cout << "----------------------" << std::endl;

//       std::cout << "Long variable :  " << long_var << " , size : "
//         << sizeof (long) << " bytes" <<std::endl;

//     std::cout << "Long int :  " << long_int <<" , size : "
//         << sizeof (long int) << " bytes" << std::endl;

//     std::cout << "Signed long :  " << signed_long <<" , size : "
//         << sizeof (signed long) << " bytes" << std::endl;

//     std::cout << "Signed long int : " << signed_long_int <<" , size : "
//         << sizeof (signed long int) << " bytes" << std::endl;
        
//     std::cout << "unsigned long int : " << unsigned_long_int <<" , size : "
//         << sizeof (unsigned long int) << " bytes" << std::endl;
        
//     std::cout << "---------------------" << std::endl;



//     std::cout << "Long long : " << long_long <<" , size : "
//         << sizeof (long long) << " bytes" << std::endl;

//     std::cout << "Long long int : " << long_long_int <<" , size : "
//         << sizeof (long long int) << " bytes" << std::endl;

//     std::cout << "Signed long long : " << signed_long_long <<" , size : "
//         << sizeof (signed long long) << " bytes" <<std::endl;
        
//     std::cout << "Signed long long int : " << signed_long_long_int <<" , size : "
//         << sizeof (signed long long int) << " bytes" << std::endl;
        
//     std::cout << "unsigned long long int : " << unsigned_long_long_int <<" , size : "
//         << sizeof (unsigned long long int) << " bytes" << std::endl;
        
//     std::cout << "---------------------" << std::endl;

//      float number1 {1.12345678901234567890f}; // Precision : 7
//     double number2 {1.12345678901234567890}; // Precision : 15
//     long double number3  {1.12345678901234567890L};
    
//     //Print out the sizes
//     std::cout << "sizeof float : " << sizeof(float) << std::endl;
//     std::cout << "sizeof double : " << sizeof(double) << std::endl;
//     std::cout << "sizeof long double : " << sizeof(long double) << std::endl;



//     //Precision
//     std::cout << std::setprecision(20); // Control the precision from std::cout.
//     std::cout << "number1 is : " << number1 << std::endl; //7 digits
//     std::cout << "number2 is : " << number2 << std::endl; // 15'ish digits
//     std::cout << "number3 is : " << number3 << std::endl; // 15+ digits
//     return 0;
// }