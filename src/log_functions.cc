#include "log_functions.h"

namespace logging {
  std::function<void()> g_central_lock;
  std::function<void()> g_page_heap_lock;
  std::function<void()> g_grow_heap;
}
