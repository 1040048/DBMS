#include "DoublyLinkedList.h"

DoublyLinkedList::DoublyLinkedList() noexcept : head(nullptr) , tail(nullptr) {}

DoublyLinkedList::DoublyLinkedList(Node* node) noexcept : head(node), tail(nullptr) {}

Node* DoublyLinkedList::nodeExists(const int data_) noexcept
{
    Node* temp = nullptr;
    Node* ptr = head;

    while (ptr != nullptr) 
    {
        if (ptr->data == data_) 
        {
            temp = ptr;
        }
        ptr = ptr-> next;
    }

    return temp;
}

void DoublyLinkedList::insert_front(const int new_data) noexcept
{
    Node* temp = new Node(new_data);

    if (head == nullptr)
    {
        head = tail = temp;
    }
    else
    {
        head->previous = temp;
        temp->next = head;
        head = temp;
    }
}

void DoublyLinkedList::insert_back(const int new_data) noexcept
{
    Node* temp = new Node(new_data);

    if (tail == nullptr)
    {
        head = tail = temp;
    }
    else
    {
        tail->next = temp;
        temp->previous = tail;
        tail = temp;
    }
}

void DoublyLinkedList::delete_front(const int data_)
{
    Node* ptr = nodeExists(data_);

    if (ptr == nullptr)
    {
        throw invalid_argument("Не существует узла с данным значением!");
    }
    else {

        if (head->data == data_)
        {
            head = head-> next;
        }
        else 
        {
            Node* nextNode = ptr-> next;
            Node* prevNode = ptr-> previous;
            // удаление в конце
            if (nextNode == nullptr) 
            {

                prevNode-> next = nullptr;
            }
            // удаление в середине
            else 
            {
                prevNode->next = nextNode;
                nextNode-> previous = prevNode;
            }
        }
    }
}

bool DoublyLinkedList::search(const int data_) const
{
    Node* temp = head;

    if (temp == nullptr)
    {
        throw invalid_argument("Список пуст!");
    }
    while (temp != nullptr)
    {
        if (temp->data == data_)
        {
            return true;
        }
        temp = temp->next;
    }
    return false;
}

string DoublyLinkedList::display() const
{
    Node* temp = head;
    ostringstream tmpStream;

    if (temp == nullptr)
    {
        throw invalid_argument("Список пуст!");
    }
    while (temp != nullptr)
    {
        tmpStream << temp->data << " -> ";
        temp = temp->next;
    }
    return tmpStream.str();
}