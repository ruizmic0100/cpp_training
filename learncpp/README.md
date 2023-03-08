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

### Chapter 1 summary

*statement*
*function*
*syntax*
*comments*
*data*
*data type*
*copy assignment*
*initializtion*
    1. copy initiliaztion
    2. direct initialization
    3. list initialization
*unintialized variable*
*undefined behavior*
*keywords*
*literal constanst*
*operation*
*unary operators*
*binary operators*
*ternary operators*
*nullary operators*
*expression*

### Exiting Status Codes

The C++ standard only defines the meaning of 3 status codes: 0, EXIT_SUCCESS, and EXIT_FAILURE. 0 and EXIT_SUCCESS both mean the program executed successfully. EXIT_FAILURE means the program did not execute successfully.

### DRY - Don't Repeat Yourself
If you need to do something more than once, consider how to modify your code to remove as much redundancy as possible. Variables can be used to store the results of calculations that need to be used more than once. Functions can be used to define a sequence of statments we want to execute more than once. And loops can be used to  execute a statement more than once.

### WET - Write Everything Twice

### Local Scope
An identifier's scope determins wherer the identifier can be seen and used within the source code. When an identifier can be seen and used, we say it is in scope. When an identifier can not be seen , we can not use it, and we say it is out of scope.

### Why use functions?

    * Organization -- As a programs grows in complexitiy, having all the code live inside the main() funciton becomes increasingly complicated.
    * Reusability -- Once a function is written, it can be called multiple time from within the program.
    * Testing -- Because functions reduce code redundancy, there's less code to test in the first place.
    * Extensibility -- When we need to exten our program to handle a case it didn't handle before, functions allow us to make the change in one place and have that change take effect every time the function is called.
    * Abstraction -- In order to use a function, you only need to know its name, inputs, outputs, and where it lives.

### Specifying include directory for project

Using g++, you can use the -I option to specify an alternate include directory,

```
g++ -o main -I/source/includes main.cpp
```

Using VS code, in your *tasks.json* configuration file, add a new line in the "Args" section,

```
"-I/source/includes",
```

### Best practices including header files

> To maximize the chance that missing includes will be flagged by compiler, order your #includes as follows:
1. The paried header file
2. Other headers from your project
3. 3rd party library headers
4. Standard library headers

The headers for each grouping should be sorted alphabetically


### Design step 1: Define your goal

* Allow the user to organize a list of names and associated phone numbers.
* Generate randomized dungeons that will produce interesting looking caverns.
* Generate a list of stock recommendations for stocks that have high dividends.
* Model how long it takes for a ball dropped off a tower to hit the ground.

### Design step 2: Define requirements
Requirements is a fancy word for both the constraints that your solution needs to abide by (e.g. budget, timeline, space, memory, etc...), as well as the capabilities that the program must exhibit in order to meet the users' needs.

* Phone number should be saved, so they can be recalled later.
* The randomized dungeon should always contain a way to get from the entrance to an exit.
* The stock recommendations should leverage historical pricing data.
* The user should be able to enter the height of the tower.

### Design step 3: Define your tools, target, and backup plan

* Defining what target architecture and/or OS your program will run on.
* Determining what set of tools you will be using.
* Determining whether you will write your program alone or as part of a team.
* Defining your testing/feedback/release strategy.
* Determing how you will back up your code.

### Design step 4: Break hard problems down into easy problems

**Top down** Method:

* Clean the house
    * Vacuum the carpets
    * Clean the bathrooms
        * Scrub the toilet
        * Wash the sink
    * Clean the kitchen
        * Clear the countertops
        * Clean the countertops
        * Scrub the sink
        * Take out the trash

**Bottom up** Method:

*Get from bed to work
    * Bedroom things
        * Turn off alarm
        * Get out of bed
        * Pick out Clothes
    * Bathroom things
        * Take a shower
        * Get dressed
        * Brush your teeth
    * Breakfast things
        * Eat breakfast
    * Transportation things
        * Travel to work
        * Get on your bicycle

### Design step 5: Figure out the sequence of events

Determine the sequence of events that will be performed.

### Words of advice when writing programs

**Keep your programs simple to start**
**Add features over time**
**Focus on one area at a time**
**Test each piece of code as you go**
**Don't invest in perfecting early code**