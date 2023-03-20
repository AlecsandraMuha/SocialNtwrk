

#ifndef MUHA_ALECSANDRA_314_MULTIDICT_H
#define MUHA_ALECSANDRA_314_MULTIDICT_H

#include "List.h"
#include <iostream>
#include <vector>

using namespace std;

template<class Key, class Value>
class MultiDict {
private:
    template<class K, class V>
    class DictNode {
    public:
        K key;
        V value;
        DictNode<K, V> *next;

        DictNode(K key, V value) : key(key), value(value) {
            this->next = nullptr;
        }
    };

    template<class V>
    class ListNode {
    public:
        V info;
        ListNode<V> *next;

        ListNode(V info, ListNode<V> *next) : info(info), next(next) {}

        ListNode(V info) : info(info) {
            next = nullptr;
        }
    };

    int size;
    DictNode<Key, ListNode<Value> *> *first;

    DictNode<Key, ListNode<Value> *> *searchAdress(Key k) {
        /*parametru de intrare : chaie k
         * return valoare de tip multidictionar
         * are loc cautarea unui element de tipul cheie
         * */
        if (this->size == 0) return nullptr;
        DictNode<Key, ListNode<Value> *> *a = first;
        while (a->next != nullptr) {
            if (a->key == k) return a;
            a = a->next;
        }
        return a;
    }

public:
    MultiDict() {
        this->first = nullptr;
        this->size = 0;
    }

    void put(Key key, Value value) {
        /* parametri de intrare-cheia key si valoare value
         * cheia este de tipul T
         * lista de values va fi noua valoare
         * return: se va adauga un nou element
         * se verifica data multi dictionarul este neinitializat
         * daca acesta este initializat se initializeaza si head cu valoarea dorita
         * daca nu este, se va adauga in continuare, dupa ultimul element*/
        DictNode<Key, ListNode<Value>*>* position = searchAdress(key);
        if (position == nullptr) {
            this->first = new DictNode<Key, ListNode<Value>*>(key, new ListNode<Value>(value));
            this->size++;
        } else {
            if (position->key == key) {
                ListNode<Value> *node = new ListNode<Value>(value, position->value);
                position->value = node;
            } else {
                position->next = new DictNode<Key, ListNode<Value>*>(key, new ListNode<Value>(value));
                this->size++;
            }
        }
    }

    List<Value> getall() {
        /* parametri de intrare:-
         * return- o lista cu elemente de tipul multidictionar*/
        List<Value> rez;
        DictNode<Key, ListNode<Value> *> *f = first;
        while (f != nullptr) {
            ListNode<Value> *o = f->value;
            f = f->next;
            rez.add(o->info);
        }
        return rez;
    }

    ~MultiDict() {
        //destructor
        DictNode<Key, ListNode<Value> *> *p = first;
        while (p != nullptr) {
            DictNode<Key, ListNode<Value> *> *a = p;
            p = p->next;
            delete a;
        }
    }
};

#endif //MUHA_ALECSANDRA_314_MULTIDICT_H
