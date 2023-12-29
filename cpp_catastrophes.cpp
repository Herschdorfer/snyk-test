#include <iostream>
#include <memory>

class A {
public:
  void print() const { std::cout << "A" << std::endl; }
};
class B : public A {};
class C : public A {};
class D : public B, public C {};

class MyClass2 {
public:
  int *data;
  MyClass2(const MyClass2 &other) { data = other.data; }

  MyClass2() = default;
};

template <int N> struct Factorial {
  static const int value = N * Factorial<N - 1>::value;
};

template <> struct Factorial<0> { static const int value = 1; };

int cata() {
  int *data = new int[5];
  delete data;
  return 0;

  MyClass2 obj1;
  obj1.data = new int;
  MyClass2 obj2 = obj1;

  A obj;
  obj.print();
  return 0;

  int result = Factorial<5>::value;
  std::cout << "Factorial of 5: " << result << std::endl;
  return 0;
}
