//
// Created by UBB-L46 on 30/05/2022.
//

#include "Network.h"

Network::Network() {

}

void Network::addUser(int id, string username) {
    User u1(id, username);
    Repo.addUser(u1);
}

Network::~Network() {

}

void Network::updateUser(int id1, string username1, int id2, string username2) {
    User u1(id1, username1);
    User u2(id2, username2);
    Repo.updateUser(u1, u2);
}

List<User> Network::getAllServiceUser() {
    return this->Repo.getAll();
}

void Network::deleteUser(int id, string username) {
    User u1(id, username);
    Repo.deleteUser(u1);
}

List<Message> Network::getAllMessageService() {
    return this->RepoMessage.getAllMessage();
}

List<Friendship> Network::getAllFriendsService() {
    return this->RepoFriends.getall();
}

void Network::addMessage(int idMessage, string text, const User &sender, const User &receiver) {
    Message m(idMessage, text, sender, receiver);
    RepoMessage.addMessage(m);
}

void Network::addFriendship(const User &friend1, const User &friend2) {
    Friendship fr(friend1, friend2);
    RepoFriends.add(fr);
}

void Network::delFriendship(const User &friend1, const User &friend2) {
    Friendship fr(friend1, friend2);
    RepoFriends.remove(fr);
}

bool Network::searchFriend(const User &friend1, const User &friend2) {
    Friendship fr(friend1, friend2);
    return this->RepoFriends.find(fr);
}

bool Network::searchUser(int id, string username) {
    User u(id, username);
    return this->Repo.findUser(u);
}
