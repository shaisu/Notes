/* Welcome, these are Notes highlighting methods for C++ obejcts introduced by STL 11.

 Within this code I annotate the definitive caveats introduced colloquially by the Second Standardization of the C++ Language. */


import <iostream>
import <String>


/*
 Import Statements enumerate the specified libraries which will be inherited into our program. Here we are importing the library "iostream" and the "String" library.
 The "iostream" library is included with the ___ and it will be either called directly by oir program or compiled as runtime or when the program is initialized. I have to see how it is particularly initialized and also in the amount of data bytes each of these libraries utlizes. I want to do this to get an exact estimate of the importes libraries amd if the enitre library is imported into our program or if we only utilize its components as runtime.
 */

void printPointer(std:initializer_list<int> vals)
{
    for (auto p=vals.begin(); p! =vals.end)();++p){
        std:cout << p << " is located at address:  " << *p << "/n ";} 
}
/* The function printPointer will print the address, in the pointer notation, for each value by a list whose values are of type int. This function uses the C++ class template std:initializer_list<> which is used to support initializations by a list of values. */


class UndefinedName{
    public: 
        X& Copyoperator = (const X& lvalue);
        x& Moveoperator= (const X&& rvalue);
           
}
// Considering a class, in C++ it is custmomary to write two public variables, one who can "Copy" and another operator which can "Move". We must ask ourselves what the ampersand & and the double ampersand && do.

/* Classes are C++ objects which ____ containerize a set of variables and functions. */

//This next template function takes a function decleration, it's template, and the definite function definition. ____ elaborate


void printMultiplevalue(){
}

template <Typename T, typename... Types>

void printMultiplevalue(constT& firstArg, const Types&... args) {
    std:cout<< firstArg << std:endl;
    printMultiplevalue(args...);
}


💾// initializer List
void PrintElementsbyinitializerList(std::initializer_list<int> elements) {
    for (auto& E = elements.begin(); E!= elements.end(); ++E){
        std::cout << *E << "\n";
    }
}
    

int  main (){
std:cout << UR" String literal, should 'i stop using backspace on sample code?";
printPointer(9);
retun 1 
}

// Lamdas redefine C++ function code. Conciscely, a lamda is a definition of functionality defined inside an expression suc as the one below
// We cannot use braces to initialize a value whose data type is different from it’s initializer 

/* Functions in C++, where the () function parameters are optinal whereas the [] are utilized to call data out of it's locally defined scope. In conclusion the {} braces define the function expression. */



// Ideas we can convert this into a practice website, we can empliy this within a blog, once we tailor our study as also as publishing drafts

