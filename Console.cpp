
#include "Console.h"

Console::Console() {

}

void Console::showMenu2() {
    string option;
    RepoForUser repo;
    while (option != "5") {
        Menu();
        cout << "Give option: ";
        cin >> option;
        if (option == "1")
            uiAddUser();
        else if (option == "2")
            uiDeleteUser();
        else if (option == "3")
            uiUpdateUser();
        else if (option == "4")
            uiShowAllUsers(this->network.getAllServiceUser());
        else if (option == "5")
            break;
        else cout << "The option is inncorect! Please try again!" << endl;
    }
}

void Console::showMenu() {
    while (true) {
        cout << "1.Create&Manage account: " << endl;
        cout << "2.Open account: " << endl;
        cout << "3.Close the program: " << endl;
        cout << "Give option: ";
        string option;
        cin >> option;
        if (option == "1")
            showMenu2();
        else if (option == "2")
            uiOpen();
        else if (option == "3")
            break;
        else cout << "Failed! Try again!" << endl;

    }
}

Console::Console(Network &net) {
    network = net;
}

Console::~Console() {

}

void Console::Menu() {
    cout << "1.Add user: " << endl;
    cout << "2.Delete user: " << endl;
    cout << "3.Update user: " << endl;
    cout << "4.Show all users: " << endl;
    cout << "5.Back" << endl;
}

void Console::uiOpen() {
    int id;
    string username;
    cout << "Give id: ";
    cin >> id;
    cout << "Give username";
    cin >> username;
    cout << endl;
    if (network.searchUser(id, username)) {
        while (true) {
            cout << "1. Add friendship: " << endl;
            cout << "2. Add message: " << endl;
            cout << "3. Delete friendship: " << endl;
            cout << "4.Show all friendships: " << endl;
            cout << "5.Show all messages: " << endl;
            cout << "6.Back" << endl;
            string option;
            cout << "Give option: ";
            cin >> option;
            if (option == "1")
                uiAddFriendship(id, username);
            else if (option == "2")
                uiAddMessage(id, username);
            else if (option == "3")
                uiDelFriendship(id, username);
            else if (option == "4")
                uiShowAllFriendship(this->network.getAllFriendsService(), id, username);
            else if (option == "5")
                uiShowAllMessages(this->network.getAllMessageService(), id, username);
            else if (option == "6")
                break;
            else cout << "The option is inncorect! Please try again!" << endl;
        }
    } else cout << " User not found! Try again!" << endl;
}

void Console::uiAddUser() {
    int id;
    string username;
    cout << "Give user id: ";
    cin >> id;
    cout << "Give username: ";
    cin >> username;
    network.addUser(id, username);
}

void Console::uiShowAllUsers(List<User> lista) {
    if (lista.isEmpty())
        cout << "There are no users in the list!" << endl;
    else {
        Node<User> *last = lista.getFirst();
        while (last != nullptr) {
            cout << last->getInfo();
            last = last->getNext();
        }

    }
}

void Console::uiShowAllMessages(List<Message> lista, int id, string username) {
    if (lista.isEmpty())
        cout << "There are no users in the list!" << endl;
    else {
        Node<Message> *last = lista.getFirst();
        User user(id, username);
        while (last != nullptr) {
            if (last->getInfo().getSender() == user)
                cout << last->getInfo();
            else if (last->getInfo().getReceiver() == user)
                cout << last->getInfo();
            last = last->getNext();
        }
    }
}

void Console::uiShowAllFriendship(List<Friendship> lista, int id, string username) {
    if (lista.isEmpty())
        cout << "There are no users in the list!" << endl;
    else {
        Node<Friendship> *last = lista.getFirst();
        User user(id, username);
        while (last != nullptr) {
            if (last->getInfo().getFriend1() == user)
                cout << last->getInfo();
            else if (last->getInfo().getFriend2() == user)
                cout << last->getInfo();
            last = last->getNext();
        }
    }
}

void Console::uiUpdateUser() {
    cout << " Give the id of the user you want to update: " << endl;
    int id1;
    cin >> id1;
    cout << "Give username of the user you want to update: " << endl;
    string username;
    cin >> username;
    int id2;
    cout << " Give the new id: " << endl;
    cin >> id2;
    string username2;
    cout << " Give the new username: " << endl;
    cin >> username2;
    network.updateUser(id1, username, id2, username2);

}

void Console::uiDeleteUser() {
    int id;
    string username;
    cout << " Give id of the user you want to delete: ";
    cin >> id;
    cout << " Give the username of the user you want to delete: ";
    cin >> username;
    network.deleteUser(id, username);

}

void Console::uiAddMessage(int id, string username) {
    cout << "Give message id: ";
    int idMessage;
    cin >> idMessage;
    int id2;
    string username2;
    cout << " Give user receiver id: ";
    cin >> id2;
    cout << " Give user receiver username: ";
    cin >> username2;
    User user1(id, username);
    User user2(id2, username2);
    string mesaj;
    cout << "Give message to send: ";
    cin.ignore();
    getline(cin, mesaj);
    if (this->network.searchUser(id2, username2)) {
        network.addMessage(idMessage, mesaj, user1, user2);
    } else
        cout << " There are no users with this id!" << endl;
}

void Console::uiAddFriendship(int id, string username) {
    User user1(id, username);
    int id2;
    cout << " Give second user id: ";
    cin >> id2;
    cout << " Give username of the second user: ";
    string username2;
    cin >> username2;
    User user2(id2, username2);
    if (this->network.searchUser(id2, username2)) {
        network.addFriendship(user1, user2);
    }
    else cout << " There are no users with this id!" << endl;
}

void Console::uiDelFriendship(int id, string username) {
    int id2;
    string username2;
    User user1(id, username);
    cout << " Give second user id: ";
    cin >> id2;
    cout << " Give username of the second user: ";
    cin >> username2;
    User user2(id2, username2);
    if (this->network.searchUser(id2, username2)) {
        network.delFriendship(user1, user2);
    }
    else cout << "There are no users with this id!" << endl;

}
