
#ifndef MUHA_ALECSANDRA_314_USER_H
#define MUHA_ALECSANDRA_314_USER_H

#include <iostream>
#include <cstring>

using namespace std;

class User {
private:
    int id;
    string username;
public:
    User();

    User(int, string);

    User(User &);

    int getId();

    string getUsername();

    void setId(int id);

    void setUsername(string username);

    User &operator=(const User &);

    bool operator==(const User &);

    friend ostream &operator<<(ostream &os, User &u);

    friend istream &operator>>(istream &is, User &u);

};


#endif //MUHA_ALECSANDRA_314_USER_H
