#pragma once
#include <exception>
class ex : public std::exception
{
    const char* what() const noexcept
    {
        return "Bad range";
    }
};
