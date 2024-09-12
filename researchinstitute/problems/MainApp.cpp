#include "MainHeader.h"

using namespace std;

class Testabc {
public:
    void abc(vector<int>& abc) {
        
        for (int num : abc) {
            cout << num << " -> ";
        }
    }

};

int main() {
    Testabc testabc;
    // Declare a vector of integers
    vector<int> numers;

    // Initialize a vector with elements
    vector<int> numberss = {1, 2, 3, 4, 5};
    numberss.pop_back();
    int i = *numberss.end();

    cout << "Last Index after pop_back() " << i << endl;


    numberss.insert(numberss.end(), 6);

    // Initialize a vector with a specific size
    vector<int> numbersss(10);

    testabc.abc(numberss);



    return 0;
}


