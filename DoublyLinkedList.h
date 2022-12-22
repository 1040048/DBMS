#pragma once
#include "Node.h"

/**
 * \brief Класс - линейный двусвязный список
 */
class DoublyLinkedList
{
private:

    Node* head; // указатель на передний узел
    Node* tail; // указатель на последний узел

public:
    /**
     * \brief Кнструктор по умолчанию
     */
    DoublyLinkedList() noexcept;

    /**
     * \brief Конструктор с параметарми
     * \param node - указатель на node
     */
    DoublyLinkedList(Node* node) noexcept;

    /**
     * \brief Функция - проверка на существования узла
     * \param data_ - значение узла
     */
    Node* nodeExists(const int data_) noexcept;

    /**
     * \brief Вставка узла в начало
     * \param data_ - значение узла
     */
    void insert_front(const int data_) noexcept;

    /**
     * \brief Вставка узла в конец
     * \param data_ - значение узла
     */
    void insert_back(const int data_) noexcept;

    /**
     * \brief Удаление узла
     * \param data_ - значение узла
     */
    void delete_front(const int data_);

    /**
     * \brief Поиск узла в списке
     * \param data_ - значение узла
     */
    bool search(const int data_) const;

    /**
     * \brief Печать списка
     * \param data_ - значение узла
     */
    string  display() const;
};