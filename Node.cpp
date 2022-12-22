#include "Node.h"

Node::Node(const int data_) noexcept : data(data_), next(nullptr), previous(nullptr) {}

int Node::get_data()
{
	return data;
}
