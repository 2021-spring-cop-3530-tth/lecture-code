#define CATCH_CONFIG_MAIN

#include "../catch/catch.hpp"
#include "student.hpp"

TEST_CASE("Test Student ToString")
{
	Student s1(1.8, "John", "Doe");
	CHECK("Doe, John: 1.800000" == s1.ToString());
}
