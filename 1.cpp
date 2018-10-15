#include <iostream>
#include <string>

using namespace std;

enum Gender {
    Male,
    Female
};

class Person {
public:

    short Age;
    string Name;
    Gender gender;

    Person(short age, string name, string gender) {
        this->Age = age;
        this->Name = name;
        this->gender = (gender == "Male" ? Male : Female);
    }

    string ToString() {

        return "[" + Name + ", " + to_string(Age) + ", " + (gender == Male ? "Male" : "Female") + "]";

    }

    void Equals(Person anotherPerson) {

        cout << endl;
        cout << "Персонаж 1 - " << Name << endl;
        cout << "Персонаж 2 - " << anotherPerson.Name << endl;
        cout << endl;

        if ((Name == anotherPerson.Name) && (Age == anotherPerson.Age) && (gender == anotherPerson.gender)) {
            cout << "У персонажей одинаковые пол, возраст и имя" << endl;
        } else {
            cout << "Персонажи разные" << endl;
        }

    }
};

int main() {

    Person Victor = Person(18, "Victor", "Male") << endl;
    Person Irina = Person(16, "Irina", "Female") << endl;

    cout << Victor.ToString();
    cout << Irina.ToString();

    Victor.Equals(Irina);

    return 0;
}