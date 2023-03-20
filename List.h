
#ifndef MUHA_ALECSANDRA_314_LIST_H
#define MUHA_ALECSANDRA_314_LIST_H

#include "Node.h"

template<class T>
class List {
private:
    Node<T> *first;
public:
    List() {//constructor
        first = nullptr;
    }

    bool isEmpty() {//afla daca lista e goala
        return (this->first == nullptr);
    }

    void add(T elem) {
        /*parametri de intare: elem
         * adaugarea in lista a unui element de tip T
         * se verifica daca lista e goala
         * */
        Node<T> *node = new Node<T>(elem);
        if (isEmpty())
            first = node;
        else {
            Node<T> *fin = first;
            while (fin->next != nullptr)
                fin = fin->next;
            fin->next = node;
        }
    }

    void update(T old, T nou) {
        /*parametri de intrare-elemente de tip T
         * old+nou ,unde old va fi inlocuit de nou
         * se actualizeaza datele din old cu cele din nou
         * */
        Node<T> *oldNode = new Node<T>(old);
        Node<T> *nouNode = new Node<T>(nou);
        Node<T> *fin = first;
        while (fin != nullptr) {
            if (fin->info == oldNode->info)
                fin->info = nouNode->info;
            fin = fin->next;
        }
    }

    void remove(T &e) {
        /*element de tip T transmis prin parametru
         * acesta reprezinta elementul ce va fi sters
         * se verifica datele elementului si se sterge
         * */
        Node<T> *todel = nullptr;
        T x;
        if (first != nullptr) {
            if (first->info == e) {
                todel = first;
                first = first->next;
            } else {
                Node<T> *m = first->next;
                Node<T> *n = first;
                while (m != nullptr)
                    if (m->info == e) {
                        todel = m;
                        m = nullptr;
                    } else {
                        m = m->next;
                        n = n->next;
                    }
                if (todel != nullptr)
                    n->next = todel->next;
            }
        }
        if (todel != nullptr) {
            x = todel->info;
            delete todel;
            return;
        }
        return;

    }

    bool search(T elem) {
         /* parametru de intrare: element de tip T
          * daca gaeste elementul cautand in lista returneaza true
          * altfel returneaza false
          * */
        Node<T> *node = new Node<T>(elem);
        Node<T> *fin = first;
        while (fin != nullptr) {
            if (fin->info == node->info)
                return true;
            fin = fin->next;
        }
        return false;
    }

    Node<T> *getFirst() {/* getter pentru element de tipul T, primul nod*/
        return first;
    }

    ~List() {//destructor
        first = nullptr;
    }
};

#endif //MUHA_ALECSANDRA_314_LIST_H
