#include <iterator>
#include <algorithm>
#include <boost/lambda/lambda.hpp>


int abc(int argc, char* argv[]) {


	using namespace boost::lambda;
    typedef std::istream_iterator<int> in;

    std::for_each(in(std::cin), in(), std::cout << (_1 * 3) << " " );

	return 0;
}