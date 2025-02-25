#include <boost/lambda/lambda.hpp>
#include <boost/regex.hpp>
#include <iostream>
#include <iterator>
#include <algorithm>

void test_boost_library()
{
	std::string line;
	boost::regex pat("^Subject: (Re: |Aw: )*(.*)");

	while (std::cin)
	{
		std::getline(std::cin, line);
		boost::smatch matches;
		if (boost::regex_match(line, matches, pat))
			std::cout << matches[2] << std::endl;
	}
}
