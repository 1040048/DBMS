#pragma once
#include "Node.h"

/**
 * \brief Класс - линейный двусвязный список
 */
class DoublyLinkedList
{
private:

    /**
     * \brief Указатель на передний узел
     */
    Node* head;
    /**
     * \brief Указатель на последний узел
     */
    Node* tail;

public:

    /**
     * \brief Кнструктор по умолчанию
     */
    DoublyLinkedList() noexcept;

    /**
     * \brief Функция - проверка на существования узла
     * \param data_ - значение узла
     * \return возвращает указатель на Node
     */
    Node* nodeExists(const int data_) noexcept;

    /**
     * \brief Вставка узла
     * \param data_ - значение узла
     */
    void insert(const int data_) noexcept;

    /**
     * \brief Удаление узла
     * \param data_ - значение узла
     */
    void remove(const int data_);

    /**
     * \brief Поиск узла в списке
     * \param data_ - значение узла
     * \return true или false
     */
    bool search(const int data_) const;

    /**
     * \brief Печать списка
     * \param data_ - значение узла
     * \return строка со списком
     */
    string  display() const;
};
