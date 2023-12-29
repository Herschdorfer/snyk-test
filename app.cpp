
#include "app.h"

int main() {
  test::bufferOverflow();
  test::comInj();
  test::cata();
  test::string();
  test::leak();
  test::intOverflow();
  test::priv();
  test::race();
  test::update();

  return 0;
}
