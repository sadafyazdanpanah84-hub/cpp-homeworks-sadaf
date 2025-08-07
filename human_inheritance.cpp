#include <iostream>
#include <string>
using namespace std;

class Human {
protected:
    string name;
    string family;

public:
    Human(string n, string f)
        : name(n), family(f) {}

    void displayInfo() {
        cout << "Full Name: " << name << " " << family << endl;
    }
};

class Learner : public Human {
private:
    float score;

public:
    Learner(string n, string f, float s)
        : Human(n, f), score(s) {}

    void displayStudent() {
        displayInfo();
        cout << "Score: " << score << endl;
    }

    float getScore() {
        return score;
    }
};

class Instructor : public Human {
private:
    float income;

public:
    Instructor(string n, string f, float i)
        : Human(n, f), income(i) {}

    void displayTeacher() {
        displayInfo();
        cout << "Income: " << income << endl;
    }
};

float averageScore(Learner learners[], int count) {
    float total = 0;
    for (int i = 0; i < count; i++) {
        total += learners[i].getScore();
    }
    return total / count;
}

int main() {
    Learner learners[3] = {
        Learner("Ali", "Rezai", 18.5),
        Learner("Sara", "Karimi", 17.0),
        Learner("Nima", "Gholami", 19.2)
    };

    Instructor instructor("Hossein", "Moradi", 32000000);

    cout << "Student Details:\n";
    for (int i = 0; i < 3; i++) {
        learners[i].displayStudent();
        cout << "---------------------\n";
    }

    cout << "Average Score: " << averageScore(learners, 3) << endl;

    cout << "\nInstructor Details:\n";
    instructor.displayTeacher();

    return 0;   
    }
