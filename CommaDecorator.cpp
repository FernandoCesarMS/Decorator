#include <sstream>
#include <iostream>

#include "CommaDecorator.hpp"

std::string CommaDecorator::toString() {
    std::string a = StreamDecorator::toString();
  return "( " + a + " )";
}