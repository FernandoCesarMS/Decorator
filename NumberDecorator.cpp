#include <sstream>

#include "NumberDecorator.hpp"

std::string NumberDecorator::toString() {
  // TODO: implement this method;
  return "( " + StreamDecorator::toString() + " )";
}