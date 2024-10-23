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
        if (n <= 0 || n > 20) {
            return;
        }
        for (int i = 0; i <= n; ++i) {
            for (int j = 0; j <= n; ++j){
                if (j == 0) {
                    ss << std::format("{}", i);
                }
                else if (i == 0) {
                    ss << std::format("{:4}", j);
                }
                else {
                    ss << std::format("{:4}", i * j);
                }
        }
       
        ss << "\n";
        }
	}
} // namespace

