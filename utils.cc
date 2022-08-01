#include <system_error>
#include <cerrno>
#include <iostream>

#include "utils.h"

void print_error(){
    const std::error_category& cat = std::generic_category();
    std::cout << cat.message(errno) << std::endl;
}
