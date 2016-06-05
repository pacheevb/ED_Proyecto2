#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include "Node.h"
#include <stdexcept>
#include <iostream>
using namespace std;

template <typename E>

class LinkedList
{
    private:
        Node< E> *head;
        Node< E> *tail;
        Node< E> *current;
        int size;

    public:
        LinkedList()
        {
            tail = current = head = new Node<E>();
            size = 0;

        };

        ~LinkedList()
        {
            clear();
            delete head;
        };

        void insert (E pElement)
        {
            current ->next = new Node< E>( pElement, current ->next);

            if (tail  ==  current)
            {
                tail = tail ->next;
            }
            size++ ;
        }

        void append ( E pElement)
        {
            tail = tail ->next = new Node< E>( pElement);
            size++ ;

        }

        E remove () throw (runtime_error)
        {
            if (current ->next == NULL){
                throw runtime_error ("list is empty");
            }
            E result = current -> next ->element;
            Node<E> *temp =current ->next;

            if (current ->next == tail ){
                tail = current;
            }
            current ->next = current ->next ->next;
            delete temp;
            size--;
            return result;
        }
            void clear() {
                current = head;
                while (head != NULL) {
                    head = head->next;
                    delete current;
                    current = head;
                }
                head = tail = current = new Node<E>();
                size = 0;
            }


        E getElement() throw (runtime_error)

        {
            if (current ->next == NULL ){
                throw runtime_error ("not Element");
            }
            return current ->next ->element;
        }
        void goToStart()
        {
            current = head;
        }
        void goToEnd()
        {
            while (current ->next ->next != NULL)
            {
                current  = current ->next;
            }

        }
        void goToPos(int pPos) throw (runtime_error)
        {
            if (pPos < 0 || pPos > size){

                throw runtime_error("out of range");

            }
            current = head;
            for(int i = 0; i < pPos; i++ ){
                current = current ->next;
            }


        }

        void next() throw(runtime_error)
        {
            if (size == 0){
                throw runtime_error ("list is empty");
            }
            if (current ->next == NULL){

                    throw runtime_error ("out of range");
            }
            current = current ->next;

        }
        void previous() throw(runtime_error)
        {
            if (size == 0){
                throw runtime_error ("list is empty");
            }
            if (current == head){
                throw runtime_error ("out of range");
            }

            Node<E> *temp;
            temp = head;

            while(temp ->next != current){
                temp = temp -> next;
            }

            current = temp;
            temp = NULL;
            delete temp;


        }

        int getPos()

        {
            Node< E> *temp ;
            temp = head;
            int i = 0;
            while(temp != current){
                temp = temp ->next;
                i++;
            }
            delete temp;
            return i;

        }

        int getSize()
        {
            return size;
        }

        void repre()
        {
            if (size == 0){
                cout<< "( )\n";
            }
            Node<E> *temp;
            temp = head;
            for(int i  = 0; i < size; i++){
                if (temp ->next == tail){
                    if (temp == current){
                        cout << "{"<< temp ->next ->element <<"}\n";
                    }
                    else{
                        cout << "("<< temp ->next ->element <<")\n";
                    }
                }
                else{
                    if (temp == current){
                        cout << "{"<< temp ->next ->element<<"}->";
                    }
                    else{
                        cout << "("<< temp ->next ->element<<")->";
                    }
                }
                temp = temp ->next;

            }
        }




};

#endif // LINKEDLIST_H
