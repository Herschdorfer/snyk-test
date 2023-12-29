#include <cstdint>
#include <iostream>
#include <memory>

#include "app.h"

namespace test {
class A {
public:
  void print() const { std::cout << "A" << std::endl; }
};
class B : public A {};
class C : public A {};
class D : public B, public C {};

class MyClass2 {
public:
  uint32_t *data;
  MyClass2(const MyClass2 &other) { data = other.data; }

  MyClass2() = default;
};

template <uint32_t N> struct Factorial {
  static const uint32_t value = N * Factorial<N - 1>::value;
};

template <> struct Factorial<0> { static const uint32_t value = 1; };

uint32_t cata() {
  const uint32_t *const data = new uint32_t[5];
  delete data;
  return 0;

  MyClass2 obj1;
  obj1.data = new uint32_t;
  const MyClass2 obj2 = obj1;

  const A obj;
  obj.print();

  const uint32_t result = Factorial<5>::value;
  std::cout << "Factorial of 5: " << result << std::endl;
  return 0;
}
} // namespace test
