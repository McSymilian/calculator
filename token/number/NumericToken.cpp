#include <array>
#include <charconv>
#include "NumericToken.h"

char *NumericToken::toString() {
    std::array<char, 10> str{};
    std::to_chars(str.data(), str.data() + str.size(), getValue());
    return str.data();
}
