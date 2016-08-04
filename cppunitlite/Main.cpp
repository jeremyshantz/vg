#include "TestHarness.h"
#include <iostream>
#include <cstdlib>
#include <ostream>
#include <functional>

void receive(std::function<void(std::ostream&)> & l)
{
    l(std::cout);
}

TEST(a, q)
{
    auto f = [](std::ostream& o){ o << "f";};
    auto g = [](std::ostream& o){ o << "g";};
    receive(f);
    receive(g);
}

int main()
{
	// random number generator used in some tests
	srand(::time_t(NULL));

    TestResult tr;
    TestRegistry::runAllTests(tr);

//	// force console screen to hold
//	char ch;
//	std::cin >> ch;

    return 0;
}
