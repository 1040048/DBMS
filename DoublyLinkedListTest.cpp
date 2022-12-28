#include "pch.h"
#include "CppUnitTest.h"
#include "../Myasumov/DoublyLinkedList.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace DoublyLinkedListTest
{
	TEST_CLASS(DoublyLinkedListTest)
	{
	public:
		
		TEST_METHOD(Insert_front)
		{
			// Arrange
			const string expected = "666 -> 333 -> ";

			// Act
			DoublyLinkedList dll;
			ostringstream temp;
			dll.insert(333);
			dll.insert(666);
			temp << dll.display() << endl;
			const string actual = temp.str();

			// Assert
			Assert::AreEqual(expected, actual);
		}

		TEST_METHOD(Delete)
		{
			// Arrange
			const string expected = "666 -> ";

			// Act
			DoublyLinkedList dll;
			ostringstream temp;
			dll.insert(333);
			dll.insert(666);
			dll.remove(333);
			temp << dll.display() << endl;
			const string actual = temp.str();

			// Assert
			Assert::AreEqual(expected, actual);
		}

		TEST_METHOD(Search_success)
		{
			// Arrange
			const string expected = "1";

			// Act
			DoublyLinkedList dll;
			ostringstream temp;
			dll.insert(333);
			dll.insert(666);
			temp << dll.search(333) << endl;
			const string actual = temp.str();

			// Assert
			Assert::AreEqual(expected, actual);
		}

		TEST_METHOD(Search_failed)
		{
			// Arrange
			const string expected = "0";

			// Act
			DoublyLinkedList dll;
			ostringstream temp;
			dll.insert(333);
			dll.insert(666);
			temp << dll.search(777) << endl;
			const string actual = temp.str();

			// Assert
			Assert::AreEqual(expected, actual);
		}
	};
}
