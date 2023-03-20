
#ifndef MUHA_ALECSANDRA_314_CONSOLE_H
#define MUHA_ALECSANDRA_314_CONSOLE_H

#include "Network.h"

class Console {
private:
    Network network;
public:
    Console();

    void showMenu();

    void showMenu2();

    Console(Network &);

    ~Console();

    void Menu();

    void uiOpen();

    void uiAddUser();

    void uiShowAllUsers(List<User> lista);

    void uiShowAllMessages(List<Message> lista, int id, string username);

    void uiShowAllFriendship(List<Friendship>, int id, string username);

    void uiUpdateUser();

    void uiDeleteUser();

    void uiAddMessage(int id, string username);

    void uiDelMessage(int id, string username);

    void uiAddFriendship(int id, string username);

    void uiDelFriendship(int id, string username);


};


#endif //MUHA_ALECSANDRA_314_CONSOLE_H
