

#include "User.h"

User::User() {
    this->id = 0;
    this->username = "";
}

User::User(int id, string username) {
    this->id = id;
    this->username = std::move(username);
}

User::User(User &u) {
    this->id = u.id;
    this->username = u.username;
}

int User::getId() {
    return this->id;
}

string User::getUsername() {
    return this->username;
}

void User::setId(int idd) {
    this->id = idd;

}

void User::setUsername(string usernamee) {
    this->username = usernamee;
}

User &User::operator=(const User &u) {
    this->id = u.id;
    this->username = u.username;
    return *this;
}

bool User::operator==(const User &u) {
    return (this->id == u.id and this->username == u.username);
}

ostream &operator<<(ostream &os, User &u) {
    cout << "Id: " << u.id << " Username: " << u.username << endl;
    return os;
}

istream &operator>>(istream &is, User &u) {
    cout << "Give user data: " << endl;
    cout << "Id: ";
    int id;
    cin >> id;
    cout << endl << "Username: ";
    string username;
    cin >> username;
    u.setId(id);
    u.setUsername(username);
    return is;
}
