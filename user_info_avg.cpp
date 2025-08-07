#include <iostream>
#include <string>

class User {
private:
    std::string firstName;
    std::string familyName;
    int yearsOld;

public:
    User() : firstName(""), familyName(""), yearsOld(0) {}

    void setData(const std::string& fn, const std::string& ln, int age) {
        firstName = fn;
        familyName = ln;
        yearsOld = age;
    }

    int getYears() const {
        return yearsOld;
    }

    void showDetails() const {
        std::cout << "Full Name: " << firstName << " " << familyName << " | Age: " << yearsOld << std::endl;
    }
};

int main() {
    const int totalUsers = 10;
    User users[totalUsers];

    for (int i = 0; i < totalUsers; ++i) {
        std::string fn, ln;
        int age;

        std::cout << "Enter information for person #" << i + 1 << ":\n";
        std::cout << "First Name: ";
        std::cin >> fn;
        std::cout << "Last Name: ";
        std::cin >> ln;
        std::cout << "Age: ";
        std::cin >> age;

        users[i].setData(fn, ln, age);
    }

    int sumAges = 0;
    for (int i = 0; i < totalUsers; ++i) {
        sumAges += users[i].getYears();
    }

    double avgAge = static_cast<double>(sumAges) / totalUsers;

    std::cout << "\n--- Summary Report ---\n";
    for (int i = 0; i < totalUsers; ++i) {
        users[i].showDetails();
    }

    std::cout << "\nAverage Age of All Users: " << avgAge << " years\n";
    std::cout << "Programmed by: Sadaf Yazdanpanah\n";

    return 0;
}
