
#ifndef MUHA_ALECSANDRA_314_REPOFORFRIENDS_H
#define MUHA_ALECSANDRA_314_REPOFORFRIENDS_H

#include "List.h"
#include "Node.h"
#include "Friendship.h"


template<class T>
class RepoFriendship {
protected:
    List<T> e;
public:
    RepoFriendship(){}

    void add(T elem) {
        this->e.add(elem);

    }

    void remove(T &elem) {
        this->e.remove(elem);
    }

    bool find(T elem) {
        return this->e.search(elem);
    }

    List<Friendship> getall() {
        return this->e;
    }

    ~RepoFriendship() {}
};
#endif