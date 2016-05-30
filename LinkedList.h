#ifndef LINKEDLIST_H_INCLUDED
#define LINKEDLIST_H_INCLUDED
#include "Node.h"
#include <stdexcept>
using namespace std;

template <typename E>
class LinkedList{
private:
    Node<E>* head;
    Node<E>* tail;
    Node<E>* current;
    int size;

    Node<E>* searchPrevious (Node<E>* pNode){
        if (current ==head){
            return NULL;
        }
        Node<E> *res=head;
        while (res->next != current){
            res=res->next;
        }
        return res;
    }

public:
    LinkedList(){ //constructor
        head = tail = current = new Node<E>();
        size=0;
    }

    ~LinkedList(){
        clear();
        delete head;
    }

    void insert(E pElement){
        current->next =new Node <E> (pElement, current->next);
        if(current==tail){
            tail=tail->next;
        }
        size++;
    }

    void append(E pElement){
        tail->next=new Node<E> (pElement);
        tail=tail->next;
        size++;
    }

    E remove() throw (runtime_error){
        if (current->next ==NULL){
            throw runtime_error("No element to remove");
        }
        E result = current->next->element;
        Node<E> *temp = current->next;
        current->next = current->next->next;
        if(temp == tail){
            tail = current;
        }
        delete temp;
        size--;
        return result;
    }

    void clear(){
        current=head;
        while(head!=NULL){
            head=head->next;
            delete current;
            current=head;
        }
        head=tail=current=new Node<E>();
        size=0;
    }

    E getElement() throw (runtime_error){
        if (current->next == NULL) {
            throw runtime_error("No element to get.");
        }
        return current->next->element;
    }

    void setElement(E pElement){
        current->next->element = pElement;
    }

    void goToStart() {
        current = head;
    }

    void goToEnd() {
        current = tail;
    }

    void goToPos(int nPos) throw(runtime_error) {
        if ((nPos < 0) || (nPos > size)) {
            throw runtime_error("Index out of bounds");
        }
        current = head;
        for (int i = 0; i < nPos; i++) {
            current = current->next;
        }
    }

    void previous() {
        if (current != head) {
            current = searchPrevious(current);
        }
    }

    void next() {
        if (current != tail) {
            current = current->next;
        }
    }

    int getPos() {
        int pos = 0;
        Node<E>* temp = head;
        while (temp != current) {
            pos++;
            temp = temp->next;
        }
        return pos;
    }

    int getSize() {
        return size;
    }

    void mostrarTodo(){
        cout << "Muestro los elementos(getElement)\n" << endl;
        for(int i = 0; i < size; i++){
            goToPos(i);
            cout << "Valor: <" << i << "> es-> " << getElement() << endl;
        }
    }
};



#endif // LINKEDLIST_H_INCLUDED
