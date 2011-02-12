#define BOOST_TEST_MODULE Test-case fixture example
#include <boost/test/unit_test.hpp>

struct F {
	F() : i(1) {}
	~F() { }
	int i;
};

BOOST_FIXTURE_TEST_CASE(simple_test, F) {
	BOOST_CHECK_EQUAL(i, 1);
}

