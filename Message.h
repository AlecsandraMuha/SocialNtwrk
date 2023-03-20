
#ifndef MUHA_ALECSANDRA_314_MESSAGE_H
#define MUHA_ALECSANDRA_314_MESSAGE_H

#include "User.h"

class Message {
private:
    int idMessage;
    User sender;
    User receiver;
    string m;
public:
    Message();

    Message(int, string, const User &, const User &);

    Message(const Message &message);

    ~Message();

    int getIdMessage();

    string getMessage();

    User getSender();

    User getReceiver();

    void setIdMessage(int idMessagee);

    void setMessage(string mm);

    void setSender(const User &u);

    void setReceiver(const User &u);

    bool operator==(const Message &);

    Message &operator=(const Message &);

    friend istream &operator>>(istream &, Message &);

    friend ostream &operator<<(ostream &, Message &);

};


#endif //MUHA_ALECSANDRA_314_MESSAGE_H
