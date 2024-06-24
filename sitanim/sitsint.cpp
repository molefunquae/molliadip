#include <iostream>
#include <string>

int main() {
    std::string str = "Hello";
    char ch = '!';
    
    str += ch; // Concatenate '!' to the end of the string
    
    std::cout << str << std::endl; // Output: Hello!
    
    return 0;
}
