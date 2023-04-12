#include "catch2/catch_all.hpp"

namespace simple_test
{
TEST_CASE("very_simple_test")
{
  REQUIRE(true == true);
}
}

namespace test_suite
{
TEST_CASE("test_suite_or_fixture")
{
    std::vector<int> testedEntity{};

    SECTION("vector_is_initially_empty")
    {
        REQUIRE(testedEntity.empty());
    }

    SECTION("vector_after_putting_something_inside_has_size_1")
    {
        constexpr int something{1};
        testedEntity.push_back(something);

        REQUIRE(testedEntity.size() == 1);
    }

    SECTION("vector_after_putting_something_it_can_be_retrieved")
    {
        constexpr int somethingElse{5};
        testedEntity.push_back(somethingElse);

        REQUIRE(testedEntity.front() == somethingElse);
    }
}
}
