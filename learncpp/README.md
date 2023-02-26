# Notes

## What is C++ good at?

* Video games
* Real-time systems (e.g. for transportation, manufacturing, etc...)
* High-performance financial applications (e.g. high frequencyt trading)
* Graphical applications and simulations
* Productivity / office applications
* Embedded Software
* Audio and video processing
* Artificial intelligence and neural networks

## Determining how to solve the problem

Typically, good solutions have the following characteristics:

* They are straightforward.
* They are well documentated.
* They are built modularly, so parts can be reused or changed later without impacting other parts of the program.
* They are robust, and can recover or give useful error messages when something unexpected happens.

## Statements

Most (but not all) statements in C++ end in a semicolon.

` There are many different kinds of statements in C++ `

1. Declaration Statements
2. Jump Statements
3. Expression Statements
4. Compound Statements
5. Selection Statements (conditionals)
6. Iteration Statements (loops)
7. Try Blocks

## Preprocessor

The preprocessor directive indicates that we would like to use the contents of the iostream library.

## Initialization

### Default Initialization -
When no initialization value is provided, this is called **default initialization**. In most cases, default initialization leaves a variable with an indeterminate value.

### Copy Initialization -
When an initializer is provided after an equals sign, this is called **copy initialization**.

Copy initialization is not explicitly used to initialize variables much in modern C++.

### Direct Initialization - 
When an initializer is provied inside parenthesis, this is called **direct initialization*.

Direct initialization was initially introduced to allow for more effecient initalization of complex objects (those with class types, which we'll cover in a future chapter). However, like copy initialization, direct initialization is not used much in modern C++.

One of the reasons direct initialization has fallen out of favor is because it makes it hard to differentiate variables from functions. For example:
``` 
int x(); // forward declaration of function x 
int x(0); // definition of variable x with intializer 0
```

### List initialization -
The modern way to initilize objects in C++ is to use a form of initialization that makes use of curly braces: **list initialization**.

List initialization comes in three forms:

```
    int width { 5 };    // direct list initialization of value 5 into variable width (preferred)
    int height = { 6 }; // copy list initialization of value 6 into variable height
    int depth {};       // value  initialization
```

List initialization has an added benefit: it disallows "narrowing conversions". This means that if you try to brace intialize a variable using a value that the variable can not safely hold, the compiler will produce an error. For example:

```
int width { 4.5 } // error: a number with a fractional value can't fit into an int.
```