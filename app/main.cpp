#include <iostream>
#include "app.h"

// input one integer
// write its hex representation to std::cout (using vsite::oop::v1::to_hex)
// write multiplication table up to this number to std::cout (using vsite::oop::v1::mult_table)

using namespace vsite::oop::v1;


int main() {
	int broj;
	std::cout << "Unesite cijeli broj: ";
	std::cin >> broj;
	std::cout << "Heksa zapis: " << to_hex(broj) << std::endl;
	std::cout << "Tablica mnozenja do " << broj << ":" << std::endl;
	mult_table(broj, std::cout);
}