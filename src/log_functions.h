#ifndef LOG_FUNCTIONS_H
# define LOG_FUNCTIONS_H

#include <functional>

namespace logging
{
  extern std::function<void(size_t)> g_central_lock;
  extern std::function<void()> g_page_heap_lock;
  extern std::function<void()> g_grow_heap;
}

#endif //LOG_FUNCTIONS_H
