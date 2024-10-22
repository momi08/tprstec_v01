#include "app.h"
#include <format>
#include <sstream>

namespace vsite::oop::v1
{
/*
* function implementations
*/
	std::string to_hex(int num) {
		return std::format("{:X}", num);
	}

	std::string to_exp(double num){
		return std::format("{:.2e}", num);
	}

    void mult_table(int n, std::ostream& ss) {
        if (n < 0 || n > 20 || n == 0) {
            return;
        }
        ss << std::format("{}", 0);
        for (int j = 1; j <= n; ++j) {
            ss << std::format("{:4}", j); 
        }
        ss << '\n';
        for (int i = 1; i <= n; ++i) {
            ss << std::format("{}", i);
            for (int j = 1; j <= n; ++j) {
                ss << std::format("{:4}", i * j);
            }
            ss << '\n';
        }
	}
} // namespace

