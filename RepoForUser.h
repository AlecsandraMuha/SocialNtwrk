

#ifndef MUHA_ALECSANDRA_314_REPOFORUSER_H
#define MUHA_ALECSANDRA_314_REPOFORUSER_H

#include "User.h"
#include "List.h"
class RepoForUser {
private:
    List <User> elements;
public:
    RepoForUser();

    void addUser(User &);

    ~RepoForUser();

    void updateUser(User &, User &);

    void deleteUser(User &);

    List <User> getAll();

    bool findUser(User &);


};


#endif //MUHA_ALECSANDRA_314_REPOFORUSER_H
