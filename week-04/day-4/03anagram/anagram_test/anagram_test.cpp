#include <gtest/gtest.h>
#include "anagram.h"

TEST(AnagramCheck, TwoEmptyAnagramTest)
{
    std::string string1 = "";
    std::string string2 = "";

    bool result = anagramItIs(string1, string2);

    ASSERT_EQ(result, false);
}

TEST(AnagramCheck, OneEmptyAnagramTest)
{
    std::string string1 = "anna";
    std::string string2 = "";

    bool result = anagramItIs(string1, string2);

    ASSERT_EQ(result, false);
}

TEST(AnagramCheck, OneDifferentCharacterAnagramTest)
{
    std::string string1 = "a";
    std::string string2 = "b";

    bool result = anagramItIs(string1, string2);

    ASSERT_EQ(result, false);
}

TEST(AnagramCheck, OneSameCharacterAnagramTest)
{
    std::string string1 = "c";
    std::string string2 = "c";

    bool result = anagramItIs(string1, string2);

    ASSERT_EQ(result, true);
}


TEST(AnagramCheck, DifferentLengthNotAnagramTest)
{
    std::string string1 = "state";
    std::string string2 = "states";

    bool result = anagramItIs(string1, string2);

    ASSERT_EQ(result, false);
}

TEST(AnagramCheck, SameLengthNotAnagramTest)
{
    std::string string1 = "statem";
    std::string string2 = "states";

    bool result = anagramItIs(string1, string2);

    ASSERT_EQ(result, false);
}

TEST(AnagramCheck, IsAnagramTest)
{
    std::string string1 = "cat";
    std::string string2 = "act";

    bool result = anagramItIs(string1, string2);

    ASSERT_EQ(result, true);
}

TEST(AnagramCheck, IsAnagramMoreSameLetterTest)
{
    std::string string1 = "state";
    std::string string2 = "taste";

    bool result = anagramItIs(string1, string2);

    ASSERT_EQ(result, true);
}