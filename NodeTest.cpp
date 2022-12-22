#include "pch.h"
#include "CppUnitTest.h"
#include "../Myasumov/Node.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace NodeTest
{
	TEST_CLASS(NodeTest)
	{
	public:
		
		TEST_METHOD(Create_node)
		{
			// Arrange
			const string expected = "333";

			// Act
			Node node(333);
			ostringstream temp;
			temp << node.get_data() << endl;
			const string actual = temp.str();

			// Assert
			Assert::AreEqual(expected, actual);
		}
	};
}
