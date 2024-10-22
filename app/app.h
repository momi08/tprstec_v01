#pragma once
#include <string>
#include <iostream>
#include <sstream>

namespace vsite::oop::v1
{
    std::string to_hex(int num);
    std::string to_exp(double num);
    void mult_table(int n, std::ostream& ss);
}
