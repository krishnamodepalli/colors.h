

#ifndef COLORS_HH
#define COLORS_HH

#include <iostream>

inline const char * operator ""_red (const char * str, std::size_t len) {
    auto buffer = new char[len + 19];
    sprintf(buffer, "\033[91m%s\033[0m", str);
    return buffer;
}

inline const char * operator ""_green (const char * str, std::size_t len) {
    auto buffer = new char[len + 19];
    sprintf(buffer, "\033[32m%s\033[0m", str);
    return buffer;
}

inline const char * operator ""_yellow (const char * str, std::size_t len) {
    auto buffer = new char[len + 19];
    sprintf(buffer, "\033[33m%s\033[0m", str);
    return buffer;
}

inline const char * operator ""_blue (const char * str, std::size_t len) {
    auto buffer = new char[len + 19];
    sprintf(buffer, "\033[34m%s\033[0m", str);
    return buffer;
}

inline const char * operator ""_magenta (const char * str, std::size_t len) {
    auto buffer = new char[len + 19];
    sprintf(buffer, "\033[35m%s\033[0m", str);
    return buffer;
}

inline const char * operator ""_cyan (const char * str, std::size_t len) {
    auto buffer = new char[len + 19];
    sprintf(buffer, "\033[36m%s\033[0m", str);
    return buffer;
}

#endif // COLORS_HH
