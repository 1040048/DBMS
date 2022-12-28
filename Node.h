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
    /**
     * \brief Поле данных
     */
    int data;
    /**
     * \brief Указатель на следующий элемент
     */
    Node* next;
    /**
     * \brief Указатель на предыдущий элемент
     */
    Node* previous;
    /**
     * \brief Для доступа к private полям
     */
    friend class DoublyLinkedList;

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
