
#include "RepoForMessage.h"

RepoForMessage::RepoForMessage() {

}

RepoForMessage::~RepoForMessage() {

}

void RepoForMessage::addMessage(Message &message) {
    this->multiDict.put(message.getIdMessage(), message);
}

List<Message> RepoForMessage::getAllMessage() {
    return this->multiDict.getall();
}
