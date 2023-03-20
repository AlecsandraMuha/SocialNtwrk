

#ifndef MUHA_ALECSANDRA_314_REPOFORMESSAGE_H
#define MUHA_ALECSANDRA_314_REPOFORMESSAGE_H

#include "MultiDict.h"
#include "Message.h"
class RepoForMessage {
    MultiDict<int, Message> multiDict;
public:
    RepoForMessage();
    ~RepoForMessage();
    void addMessage(Message &message);
    List<Message> getAllMessage();

};


#endif //MUHA_ALECSANDRA_314_REPOFORMESSAGE_H
