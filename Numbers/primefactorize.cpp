/** Have to user enter a number and find all prime factors (if any) and display them
 * 
*/

#include <iostream>
#include <sstream>
#include <string>
#include <vector>

std::string toString(int a)
{
    std::ostringstream g;
    g << a;
    return g.str();
}

void printVector(std::vector<int> v)
{
    std::string output = "{";

    for (int i=0; i<v.size(); i++) {
        std::ostringstream a;
        a << v[i];
        
        if (i == v.size()-1) {
            output += a.str() + "}";
        } else {
            output += a.str() + ", ";
        }
    }

    std::cout << output << std::endl;
}

std::vector<int> Factors(int num)
{
    std::vector<int> f;

    for (int i=1; i <=num; i++) {
        if (num%i == 0) {
            f.push_back(i);
        }
    }
    return f;
}

bool isprime(int num)
{
    if (Factors(num).size() == 2) {
        return true;
    } else {
        return false;
    }
}

std::vector<int> primeFactors(std::vector<int> f)
{
    std::vector<int> r;

    for (int i=0; i<f.size(); ++i) {
        if (isprime(f[i])) {
            r.push_back(f[i]);
        }
    }
    return r;
}

std::vector<int> primeFactors(int a)
{
    std::vector<int> r;
    std::vector<int> f = Factors(a);

    for (int i=0; i<f.size(); ++i) {
        if (isprime(f[i])) {
            r.push_back(f[i]);
        }
    }

    return r;
}

std::string primeFactorize(int num)
{
    std::vector<int> factors = primeFactors(num);

    if (isprime(num)) {
        return toString(num);
    } else {
        return toString(factors[0]) + "*" + primeFactorize(num/factors[0]);
    }
}

int main()
{
    std::cout << "Welcome to Prime Factorizer... Keep entering your numbers to prime factorize or enter -1 to quit" << std::endl;

    int num = 0;
    std::cout << "Enter the numbers below" << std::endl;

    while (num!=-1) {
        if (num!=0) {
            std::cout << primeFactorize(num) << std::endl;
        }

        std::cout << ">>>";
        std::cin >> num;
    }

    return 0;
}