#include <sstream>
#include <iostream>

#include "CommaDecorator.hpp"

std::string CommaDecorator::toString() {
    std::string a,b,c = "";
    std::istringstream ss(StreamDecorator::toString());
    std::getline(ss, a, ' ');
    int i = 0;
    while (a != b){
        b = a;
        std::getline(ss, a, ' ');
        if (a!=b)
            c += b + " , ";
        i++;
        if (i > 10) {
            break;
        }
    }
    c += b;
  return c;
}