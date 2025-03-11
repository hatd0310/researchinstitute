#include "learn/cpp/make_user.cpp"

int main(char* argv[])
{
	const std::string file_input = argv[1];
	const std::string file_result = argv[2];

	std::vector<std::string> raw_list_users = read_from_file(file_input);

	write_to_file(file_result, update_group_role(raw_list_users));



	return 0;
}

