
#ifndef MUHA_ALECSANDRA_314_NETWORK_H
#define MUHA_ALECSANDRA_314_NETWORK_H

#include "RepoForMessage.h"
#include "RepoForUser.h"
#include "RepoforFriends.h"

class Network {
    RepoForUser Repo;
    RepoForMessage RepoMessage;
    RepoFriendship<Friendship> RepoFriends;
public:
    Network();

    Network(RepoForUser &ru, RepoForMessage &rm, RepoFriendship<Friendship> rf) :
            Repo(ru), RepoMessage(rm), RepoFriends(rf) {

    }

    void addUser(int id, string username);

    ~Network();

    void updateUser(int id1, string username1, int id2, string username2);

    List<User> getAllServiceUser();

    void deleteUser(int id, string username);

    List<Message> getAllMessageService();

    List<Friendship> getAllFriendsService();

    void addMessage(int, string, const User &sender, const User &receiver);

    void addFriendship(const User &friend1, const User &friend2);

    void delFriendship(const User &friend1, const User &friend2);

    bool searchFriend(const User &friend1, const User &friend2);

    bool searchUser(int id, string username);


};


#endif //MUHA_ALECSANDRA_314_NETWORK_H
