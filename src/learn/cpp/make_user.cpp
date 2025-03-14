#include <array>
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

const std::string CMD = "make_user %TC_DM% -update ";

std::vector<std::string> read_from_file(const std::string &path) {
  std::vector<std::string> list_users;
  std::ifstream input_file(path);
  if (input_file.is_open()) {
    std::string line;
    while (std::getline(input_file, line)) {
      list_users.push_back(line);
    }
    std::cout << "Reading file: " << path << std::endl;

    input_file.close();
  } else {
    std::cerr << "Error opening file!" << std::endl;
  }

  return list_users;
}

void write_to_file(const std::string &path,
                   const std::vector<std::string> &list_users) {
  std::ofstream output_file(path, std::ios::app); // open in append mode

  if (output_file.is_open()) {
    for (const std::string &user : list_users) {
      output_file << user << std::endl;
      std::cout << "Written " << user << " to file successfully." << std::endl;
    }
    output_file.close();
    std::cout << "Write to file: " << path << std::endl;

  } else {
    std::cerr << "Error: Could not open file " << path << " for writing."
              << std::endl;
  }
}

std::vector<std::string>
active_users(const std::vector<std::string> &list_users) {
  std::vector<std::string> result;
  for (const std::string &user : list_users) {
    result.push_back(CMD + "-user=\"" + user + "\" -status=0");
  }

  return result;
}

std::vector<std::string>
inactive_users(const std::vector<std::string> &list_users) {
  std::vector<std::string> result;
  for (const std::string &user : list_users) {
    result.push_back(CMD + "-user=\"" + user + "\" -status=1");
  }

  return result;
}

std::vector<std::vector<std::string>>
split_string(const std::vector<std::string> &list_users, char delimiter) {
  std::vector<std::vector<std::string>> result;

  for (const std::string &user : list_users) {
    std::vector<std::string> user_tokens;
    std::stringstream ss(user);
    std::string str;
    while (std::getline(ss, str, ',')) {
      user_tokens.push_back(str);
    }
    result.push_back(user_tokens);
  }

  return result;
}

std::vector<std::string>
update_group_role(const std::vector<std::string> &list_users) {
  std::vector<std::vector<std::string>> parts = split_string(list_users, ',');
  std::vector<std::string> result;

  for (int i = 0; i < parts.size(); i++) {
    std::cout << parts[i][0] << parts[i][1] << parts[i][2] << std::endl;
    result.push_back(CMD + "-user=\"" + parts[i][0] + "\" -group=\"" +
                     parts[i][1] + "\" -role=\"" + parts[i][2] + "\"");
  }

  return result;
}

std::vector<std::string>
update_volume(const std::vector<std::string> &list_users) {
  std::vector<std::vector<std::string>> parts = split_string(list_users, ',');
  std::vector<std::string> result;

  for (int i = 0; i < parts.size(); i++) {
    std::cout << parts[i][0] << parts[i][1] << parts[i][2] << std::endl;
    result.push_back(CMD + "-user=\"" + parts[i][0] + "\" -defaultvolume=\"" +
                     parts[i][1] + "\" -defaultlocalvolume=\"" + parts[i][2] +
                     "\"");
  }

  return result;
}

std::vector<std::string>
update_license_server(const std::vector<std::string> &list_users) {
  std::vector<std::vector<std::string>> parts = split_string(list_users, ',');
  std::vector<std::string> result;

  for (int i = 0; i < parts.size(); i++) {
    std::cout << parts[i][0] << parts[i][1] << parts[i][2] << std::endl;
    result.push_back(CMD + "-user=\"" + parts[i][0] + "\" -licenseserver=\"" +
                     parts[i][1] + "\" -licenselevel=\"" + parts[i][2] + "\"");
  }

  return result;
}

std::vector<std::string>
inactive_group(const std::vector<std::string> &list_users) {
  std::vector<std::vector<std::string>> parts = split_string(list_users, ',');
  std::vector<std::string> result;

  for (int i = 0; i < parts.size(); i++) {
    std::cout << parts[i][0] << parts[i][1] << parts[i][2] << std::endl;
    result.push_back(CMD + "-user=\"" + parts[i][0] + "\" -group=\"" +
                     parts[i][1] + "\" -role=\"" + parts[i][2] +
                     "\" -gm_status=1");
  }

  return result;
}

void run_main() {
  const std::string input =
      "C:\\Users\\hatd6\\source\\repos\\researchinstitute\\resources\\input."
      "lst";
  const std::string output =
      "C:\\Users\\hatd6\\source\\repos\\researchinstitute\\resources\\output."
      "lst";

  std::vector<std::string> v = read_from_file(input);

  write_to_file(output, inactive_group(v));
}
