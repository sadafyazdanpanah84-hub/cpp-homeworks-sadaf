#include <iostream>
#include <thread>
using namespace std;

void printName(int index) {
    cout << "Sadaf Yazdanpanah " << index << endl;
}

int main() {
    for (int i = 0; i < 10; ++i) {
        thread worker(printName, i);
        worker.join();
    }

    return 0;
}
