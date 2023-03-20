//
// Created by UBB-L46 on 27/05/2022.
//

#include "RepoForUser.h"

RepoForUser::RepoForUser() {

}

void RepoForUser::addUser(User &user) {
    elements.add(user);
}

void RepoForUser::updateUser(User &user1, User &user2) {
    elements.update(user1, user2);
}

void RepoForUser::deleteUser(User &user) {
    elements.remove(user);
}

bool RepoForUser::findUser(User &user) {
    return this->elements.search(user);
}

List<User> RepoForUser::getAll() {
    return this->elements;
}

RepoForUser::~RepoForUser() {

}
