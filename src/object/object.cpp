
#include "driver/detactor/detactor.hpp"
#include "loader/imgLoader.hpp"

class Object
{
public:
  virtual void init(Loader loader) = 0;
  virtual void execute(Detactor *data) = 0;
  virtual void run(void) = 0;
};