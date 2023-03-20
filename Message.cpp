

#include "Message.h"

Message::Message() {
    this->m = " ";
    this->idMessage = 0;
}

Message::Message(int idMessage, string m, const User &sender, const User &receiver) {
    this->idMessage = idMessage;
    this->m = m;
    this->sender = sender;
    this->receiver = receiver;
}

Message::Message(const Message &message) {
    this->idMessage = message.idMessage;
    this->m = message.m;
    this->sender = message.sender;
    this->receiver = message.receiver;
}

Message::~Message() {

}

int Message::getIdMessage() {
    return this->idMessage;
}

string Message::getMessage() {
    return this->m;
}

User Message::getSender() {
    return this->sender;
}

User Message::getReceiver() {
    return this->receiver;
}

void Message::setIdMessage(int idMessagee) {
    this->idMessage = idMessagee;
}

void Message::setMessage(string mm) {
    this->m = mm;

}

void Message::setSender(const User &u) {
    this->sender = u;
}

void Message::setReceiver(const User &u) {
    this->receiver = u;
}

bool Message::operator==(const Message &n) {
    if (this->sender == n.sender and this->receiver == n.receiver and this->m == n.m)
        return true;

    return false;
}

Message &Message::operator=(const Message &n) {
    if (this != &n) {
        this->sender = n.sender;
        this->receiver = n.receiver;
        this->m = n.m;
    }
    return *this;
}

ostream &operator<<(ostream &os, Message &n) {
    cout << "Text message: " << n.m << " Sender: " << n.sender << endl << " Receiver: " << n.receiver << endl;
    return os;
}

istream &operator>>(istream &is, Message &n) {
    User sender, receiver;
    string m;
    cout << "Give user sender: ";
    cin >> sender;
    cout << "Give user receiver";
    cin >> receiver;
    cout << "Give the text message: " << endl;
    cin >> m;
    n.setReceiver(receiver);
    n.setSender(sender);
    n.setMessage(m);
    return is;


}
