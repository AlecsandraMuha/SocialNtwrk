

#include "Friendship.h"

Friendship::Friendship() {

}

Friendship::Friendship(const User &u1, const User &u2) {
    this->u1 = u1;
    this->u2 = u2;
}

Friendship::Friendship(const Friendship &f) {
    this->u1 = f.u1;
    this->u2 = f.u2;
}

User Friendship::getFriend1() {
    return this->u1;
}

User Friendship::getFriend2() {
    return this->u2;
}

void Friendship::setFriend1(const User &u) {
    this->u1 = u;
}

void Friendship::setFriend2(const User &u) {
    this->u2 = u;
}

ostream &operator<<(ostream &os, Friendship &f) {
    cout << "Friendship beetween: " << endl << "Friend 1: " << f.u1 << endl << "Friend 2: " << f.u2 << endl;
    return os;
}

Friendship &Friendship::operator=(const Friendship &f) {
    if (this != &f) {
        this->u1 = f.u1;
        this->u2 = f.u2;
    }
    return *this;
}

istream &operator>>(istream &is, Friendship &f) {
    User u1, u2;
    cout << "First user id: ";
    cin >> u1;
    cout << endl << "Second user id: ";
    cin >> u2;
    f.setFriend1(u1);
    f.setFriend2(u2);
    return is;
}

bool Friendship::operator==(const Friendship &f) {
    if ((this->u1 == f.u1) and (this->u2 == f.u2))
        return true;
    return false;

}

Friendship::~Friendship() {

}
