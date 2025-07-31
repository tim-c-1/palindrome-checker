#include <iostream>
#include <string>
#include "palindrome.h"


bool is_palindrome(std::string text){
    std::string reverse;
    // use size()-1 to get last position
    for (int i = text.size() - 1 ; i >=0; i--){
            reverse.push_back(text[i]);
        }

    if (text == reverse) {
        return true;
    } else {
        return false;
    }
}
