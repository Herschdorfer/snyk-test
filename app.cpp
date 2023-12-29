

extern int buffer_overflow();
extern int com_inj();
extern int cata();
extern int string();
extern int leak();
extern int int_over();
extern int priv();
extern int race();
extern int update();

int main() {
  buffer_overflow();
  com_inj();
  cata();
  string();
  leak();
  int_over();
  priv();
  race();
  update();

  return 0;
}