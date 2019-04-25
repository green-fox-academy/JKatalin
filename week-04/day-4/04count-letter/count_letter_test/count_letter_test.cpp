#include <gtest/gtest.h>
#include "count_letter.h"

TEST(LetterCounterCheck, EmptyLetterCounterTest)
{
    std::string string1 = "";

    std::map<char, int> letters = letterDictionary(string1);

    ASSERT_EQ(letters[0], 0);
}

TEST(LetterCounterCheck, OneLetterCounterTest)
{
    std::string string1 = "d";

    std::map<char, int> letters = letterDictionary(string1);

    ASSERT_EQ(letters['d'], 1);
}

TEST(LetterCounterCheck, SameLetterCounterTest)
{
    std::string string1 = "ppppp";

    std::map<char, int> letters = letterDictionary(string1);

    ASSERT_EQ(letters['p'], 5);
}

TEST(LetterCounterCheck, SameLetterDiffSizeCounterTest)
{
    std::string string1 = "pppPP";

    std::map<char, int> letters = letterDictionary(string1);

    ASSERT_EQ(letters['p'], 3);
    ASSERT_EQ(letters['P'], 2);
}

TEST(LetterCounterCheck, LetterCounterTest)
{
    std::string string1 = "tattara";

    std::map<char, int> letters = letterDictionary(string1);

    ASSERT_EQ(letters['a'], 3);
    ASSERT_EQ(letters['t'], 3);
    ASSERT_EQ(letters['r'], 1);
}

