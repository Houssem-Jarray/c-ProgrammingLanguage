//
// Created by houssem on 08/05/24.
//

#include <iostream>
#include <cstring>

using namespace std;

class String {
private:
    int size;
    char* s;
public:
    String(const char *c);
    String(const String& other);
    ~String();
    string toString() const {
        return s;
    }
};

String::String(const char *c) {
    this->size = strlen(c);
    this->s = new char[this->size + 1];
    strcpy(this->s, c);
}

String::String(const String& other) {
    this->size = other.size;
    this->s = new char[this->size + 1];
    strcpy(this->s, other.s);
}

String::~String() {
    delete[] s;
}

int main() {
    String s("hello world!");
    String myString(s);
    string out = myString.toString();
    cout << "string content: " << out << endl;
    return 0;
}
