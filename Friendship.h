

#ifndef MUHA_ALECSANDRA_314_FRIENDSHIP_H
#define MUHA_ALECSANDRA_314_FRIENDSHIP_H

#include "User.h"

class Friendship {
private:
    User u1;
    User u2;
public:
    Friendship();

    Friendship(const User &u1, const User &u2);

    Friendship(const Friendship &f);

    User getFriend1();

    User getFriend2();

    void setFriend1(const User &u);

    void setFriend2(const User &u);

    bool operator==(const Friendship &f);

    Friendship &operator=(const Friendship &f);

    friend istream &operator>>(istream &, Friendship &);

    friend ostream &operator<<(ostream &, Friendship &);

    ~Friendship();

};


#endif //MUHA_ALECSANDRA_314_FRIENDSHIP_H
