#include <iostream>
#include <string>
#include <vector>

void f(std::vector<std::string>& v);

int main() {
     std::vector<std::string> myvector;
     for (int i=0; i<=100; ++i) {
        //myvector.push_back(std::to_string(i));
        myvector.push_back((std::string)(i + "0"));

        std::cout << "i: " << (std::string)(i + "0") << std::endl;
     }

     f(myvector);

}


void f(std::vector<std::string>& v) {
    std::string val;
    std::cin >> val;
    // ...
     std::vector<std::string>::iterator it = std::find(begin(v), end(v), val);  // better
    // ...
    if (it != v.end()) {
        std::cout << "Element found in myvector: " << *it << '\n';
    }
}