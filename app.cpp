
#include "app.h"

int main() {
  test::bufferOverflow();
  test::comInj();
  test::cata();
  test::string();
  test::leak();
  test::int_over();
  test::priv();
  test::race();
  test::update();

  return 0;
}