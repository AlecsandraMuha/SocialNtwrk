#include <cassert>
#include <cstring>
#include "User.h"
#include "Tests.h"
#include "RepoForMessage.h"
#include "RepoForUser.h"
#include "RepoforFriends.h"
#include "Network.h"
#include <iostream>

using namespace std;

void testUser() {
    User u1(1, "ale");
    assert(u1.getUsername() == "ale");
    assert(u1.getId() == 1);
    User u2(2, "maria");
    assert(u1.getId() == 1);

    u1.setId(100);
    u1.setUsername("ale");
    assert(u1.getId() == 100);
    assert(u1.getUsername() == "ale");
    User u4(2, "maria");
    User u3(100, "ale");
    assert(u4 == u2);
}

void testRepo() {
    RepoForUser repo;
    User u1(1, "ale");
    repo.addUser(u1);
    User u4(2, "maria");
    User u3(100, "ale");
    repo.addUser(u4);
    repo.addUser(u3);
    RepoForMessage repo2;
    Message m1(1, "hei", u1, u4);
    Message m2(2, "hei", u4, u1);
    RepoFriendship<Friendship> repo3;
    Friendship f(u1, u4);
    Friendship f2(u1, u3);



}
void testNetwork(){
    RepoForUser repo;
    User u1(1, "ale");
    repo.addUser(u1);
    User u4(2, "maria");
    User u3(100, "ale");
    repo.addUser(u4);
    repo.addUser(u3);
    RepoForMessage repo2;
    Message m1(1, "hei", u1, u4);
    Message m2(2, "hei", u4, u1);
    RepoFriendship<Friendship> repo3;
    Friendship f(u1, u4);
    Friendship f2(u1, u3);
    Network network;
    network.addUser(1,"ale");
    network.addUser(2,"maria");
    network.addUser(100,"ale");
    assert(network.searchUser(1, "ale"));
    assert(network.searchUser(2, "maria"));
    assert(network.searchUser(100, "ale"));
    User u2(12, "sergiu");
    User u10(10, "cristi");
    User u11(11, "alex");
    User u12(15, "alexia");
    User u13(13, "lili");
    network.addUser(12, "sergiu");
    network.addUser(10, "cristi");
    network.addUser(11, "alex");
    network.addUser(15, "alexia");
    network.addUser(13, "lili");

}
