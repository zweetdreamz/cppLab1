#include <iostream>
#include <string.h>

using namespace std;

struct Vector3 {
public:

    int x, y, z;

    string ToString() {

        return "[" + to_string(x) + ", " + to_string(y) + ", " + to_string(z) + "]";
    }
};

enum Gender {
    Male,
    Female
};

class Person {
public:

    short Age;
    string Name;
    Gender gender;
    Vector3 position;

    Person(short age, string name, string gender, Vector3 vector) {

        this->Age = age;
        this->Name = name;
        this->gender = (gender == "Male" ? Male : Female);
        this->position = vector;

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

    void Translate(Vector3 translation) {

        cout << "Начальные координаты: " << endl;
        cout << position.ToString();
        cout << endl;

        cout << "Вектор перемещения: " << endl;
        cout << translation.ToString() << endl;

        position.x += translation.x;
        position.y += translation.y;
        position.z += translation.z;

        cout << "Координаты после перемещения: " << endl;

        cout << position.ToString();

        cout << endl;

    }
};

int main() {

    Vector3 vector1 = {1, 2, 44};
    Vector3 vector0 = {0, 0, 0};
    Person Ivan = Person(19, "Ivan", "Male", vector0);

    Ivan.Translate(vector1);

    Vector3 vector2 = {13, 25, 44};
    Ivan.Translate(vector2);

    return 0;
}