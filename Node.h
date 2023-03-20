
#ifndef MUHA_ALECSANDRA_314_NODE_H
#define MUHA_ALECSANDRA_314_NODE_H

template<class T>
class List;

template<class T>
class Node {
private:
    T info;
    Node<T> *next;
public:
    Node(T info) {
        this->next = nullptr;
        this->info = info;
    }

    T &getInfo() {
        return this->info;
    }

    Node<T> *getNext() {
        return next;

    }
    friend class List<T>;
};

#endif //MUHA_ALECSANDRA_314_NODE_H
