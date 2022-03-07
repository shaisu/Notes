/* Welcome to the notes for cpp objects. Within this code we annotate the definitive caveats with wich we utilize wach of the many pieces of C++ objects, in particular, with relevancy to the C++ STL 11 ISO Standard. Here, I will also provide the correct and typical use of certian C++ methods. */



import <iostream>
import <String>

/*
 Import Statements enumerate the specified libraries which will be inherited into our program. In this case, we are importing the library "iostream" and the "String" library. The "iostream" library is included with the ___ and it will be either called directly by oir program or compiled as runtime or when the program is initialized. I have to see how it is particularly initialized and also in the amount of data bytes each of these libraries utlizes. I want to do this to get an exact estimate of the importes libraries amd if the enitre library is imported into our program or if we only utilize its components as runtime.
 */

void printPointer(std:initializer_list<int> vals)
{
    for (auto p=vals.begin(); p! =vals.end)();++p){
        std:cout << p << " is located at address:  " << *p << "/n ";} 
}
/* The function printPointer will print the address for each value on a list whose values are of type int. It uses the C++ class template std:initializer_list<> which is used to support initializations by a list of values or in instances were the user defined variables */


class UndefinedName{
    public: 
        X& Copyoperator = (const X& lvalue);
        x& Moveoperator= (const X&& rvalue);
           
}
// Considering a class UndefinedName we write two public variables with a "Copy" and a "Move" operator. We must ask ourselves what the ampersand & and the double ampersand && do.

/* Classes are C++ objects which ____ */

//This next template function takes a function decleration, it's template, and the definite function definition. ____ elaborate


void printMultiplevalue(){
}

template <Typename T, typename... Types>

void printMultiplevalue(constT& firstArg, const Types&... args) {
    std:cout<< firstArg << std:endl;
    printMultiplevalue(args...);
}

// This will print the values with a tempalte if one or more arguments are used


int  main (){
std:cout << UR" String literal, should 'i stop using backspace on sample code?";
printPointer(9);
retun 1 
}

// Lamdas redefine C++ function code. Conciscely, a lamda is a definition of functionality defined inside an expression suc as the one below
// We cannot use braces to initialize a value whose data type is different from it’s initializer 

/* Functions in C++, where the () function parameters are optinal whereas the [] are utilized to call data out of it's locally defined scope. In conclusion the {} braces define the function expression. */



// Ideas we can convert this into a practice website, we can empliy this within a blog, once we tailor our study as also as publishing drafts

