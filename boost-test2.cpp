#define BOOST_TEST_MODULE Simple testcases 2
#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_SUITE(suite1)

BOOST_AUTO_TEST_CASE(test1) {
	BOOST_CHECK_EQUAL(2+2, 4);
}

BOOST_AUTO_TEST_CASE(test2) {
	BOOST_CHECK_EQUAL(2*2, 4);
}

BOOST_AUTO_TEST_SUITE_END()
