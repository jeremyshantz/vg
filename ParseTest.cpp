#include "src/Parse.h"
#include "cppunitlite/TestHarness.h"

using namespace Parse;


TEST(leadingSpace, Parse)
{
    std::string actual{"      \tHello"};
    trim(actual);
    
    CHECK_EQUAL("Hello", actual);
}

TEST(trimLeadingStuff, Parse)
{
    std::string actual{"123Hello"};
    trim(actual, "0123456789");
    
    CHECK_EQUAL("Hello", actual);
}

TEST(trimBeginning, Parse)
{
    std::string actual{"  \tHello"};
    trim(actual, " \t\n");
    
    CHECK_EQUAL("Hello", actual);
}

TEST(trimEnd, Parse)
{
    std::string actual{"Hello  \n\n\n\t"};
    trim(actual, " \t\n");
    
    CHECK_EQUAL("Hello", actual);
}

TEST(trimBeginningAndEnd, Parse)
{
    std::string actual{"  Hello\n\t"};
    trim(actual, " \t\n");
    
    CHECK_EQUAL("Hello", actual);
}

TEST(trimNone, Parse)
{
    std::string actual{"Hello"};
    trim(actual);
    
    CHECK_EQUAL("Hello", actual);
}

TEST(trimEmpty, Parse)
{
    std::string actual;
    trim(actual);
    
    CHECK_EQUAL("", actual);
}

TEST(trimEverything, Parse)
{
    std::string actual{"Hello 1234"};
    std::string trimmables{"Hello 0123456789"};
    trim(actual, trimmables);
    
    CHECK_EQUAL("", actual);
}

TEST(trimEverything, Parse2)
{
    std::string actual{"1234"};
    trim(actual, "01234567890");
    
    CHECK_EQUAL("", actual);
}

TEST(eatNothing, Parse)
{
    std::istringstream stream{"Hello"};
    eat(stream, "123456789");
    
    std::ostringstream actual;
    actual << stream.rdbuf();
    
    CHECK_EQUAL("Hello", actual.str());
}

TEST(eatSomething, Parse)
{
    std::istringstream stream{"4320Hello"};
    eat(stream, "1234567890");
    
    std::ostringstream actual;
    actual << stream.rdbuf();
    
    CHECK_EQUAL("Hello", actual.str());
}

TEST(eatSomeLeadingWhitespace, Parse)
{
    std::istringstream stream{"   I had leading whitespace"};
    eat(stream);
    
    std::ostringstream actual;
    actual << stream.rdbuf();
    
    CHECK_EQUAL("I had leading whitespace", actual.str());
}
