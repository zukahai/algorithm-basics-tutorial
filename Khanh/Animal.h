#include <bits/stdc++.h>

using namespace std;

class Animal {
    private:
        string name;
        int age;
    public:
        Animal() {
            this->name = "Chua dat ten";
            this->age = 0;
        }

        Animal(string name, int age) {
            this->name = name;
            setAge(age);
        }

        Animal(string name) {
            this->name = name;
            this->age = 0;
        }

        void setAge(int age) {
            if (age < 0)
                this->age = 0;
            else
                this->age = age;
        }

        void setName(int name) {
            this->name = name;
        }

        int getAge() {
            return this->age;
        }

        string getName() {
            return this->name;
        }

        void display() {
            cout << "Thong tin, Ten: " << name << ", Tuoi: " << age << endl;
        }

        void eat() {
            cout << name + " dang an" << endl;
        }
};
