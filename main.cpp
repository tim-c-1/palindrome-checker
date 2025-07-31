// main.cpp
//compile palindrome.cpp and main.cpp together

#include <iostream>
#include "palindrome.h"


int main(){

    // loop through palindrome checking while user says keep going

    // call palindrome check
    // print yes or no
    // ask if theres more to check
    std::string answer = "y";
    std::string word;
    
    std::cout << "hello, ";
    
    while (answer == "y"){

        std::cout << "enter a word to check if it is a palindrome: ";
        std::getline(std::cin, word);

        if (is_palindrome(word)){
        std::cout << "yes, that's a palindrome.\n";
        } else {
        std::cout << "no, that's not a palindrome.\n";
        }

        std::cout << "want to check another? (y/n)";
        std::getline(std::cin, answer);

    }
    
    std::cout << "goodbye.\n";
    

}