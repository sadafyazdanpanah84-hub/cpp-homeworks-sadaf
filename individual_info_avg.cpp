#include <iostream>
#include <string>

class Individual {
private:
    std::string firstName;
    std::string surname;
    int yearsOld;

public:
    Individual() : firstName(""), surname(""), yearsOld(0) {}

    void assignData(const std::string& fn, const std::string& sn, int y) {
        firstName = fn;
        surname = sn;
        yearsOld = y;
    }

    int fetchAge() const {
        return yearsOld;
    }

    void printDetails() const {
        std::cout << "Full Name: " << firstName << " " << surname << ", Age: " << yearsOld << std::endl;
    }
};

int main() {
    const int totalPersons = 10;
    Individual group[totalPersons];

    for (int i = 0; i < totalPersons; ++i) {
        std::string fn, sn;
        int age;

        std::cout << "Enter info for individual " << i + 1 << ":" << std::endl;
        std::cout << "First Name: ";
        std::cin >> fn;
        std::cout << "Surname: ";
        std::cin >> sn;
        std::cout << "Age: ";
        std::cin >> age;

        group[i].assignData(fn, sn, age);
    }

    int ageSum = 0;
    for (int i = 0; i < totalPersons; ++i) {
        ageSum += group[i].fetchAge();
    }

    double avgAge = static_cast<double>(ageSum) / totalPersons;
    std::cout << "Average Age of all individuals: " << avgAge << std::endl;

    return 0;
}
