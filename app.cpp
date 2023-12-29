
#include "app.h"

int main() {
  ::buffer_overflow();
  ::com_inj();
  ::cata();
  ::string();
  ::leak();
  ::int_over();
  ::priv();
  ::race();
  ::update();

  return 0;
}