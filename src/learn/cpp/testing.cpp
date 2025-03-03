#include <iostream>
#include <sstream>
#include <string>
#include <vector>


int main(int argc, char* argv[])
{
	std::string user = "anhbt25,USER_VOL3,USER_VOL5";

	std::vector<std::string> user_tokens;
	std::stringstream ss(user);
	std::string token;

	while (std::getline(ss, token, ','))
	{
		user_tokens.push_back(token);
	}

	std::cout << user_tokens[0] << std::endl;

	return 0;
}
