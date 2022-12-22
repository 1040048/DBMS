#pragma once
#include<iostream>
#include<sstream>
#include<exception>

using namespace std;

/**
 * \brief Класс - узел списка
 */
class Node 
{
private:

    int data; // поле данных
    Node* next; // указатель на следующий элемент
    Node* previous; // указатель на предыдущий элемент
    friend class DoublyLinkedList; // для доступа к private полям

public:
    /**
     * \brief Конструктор с параметарми
     * \param data_ - значение узла
     */
    Node(const int data_) noexcept;

    /**
    * \brief Геттер для data
    */
    int get_data();
};