#include "../researchinstitute.h"
using namespace std;



void increment(int *v) {
    (*v)++;
}

int main() {
    int a;
    cin >> a;
    increment(&a);
    printf("%d", a);
    return 0;
}