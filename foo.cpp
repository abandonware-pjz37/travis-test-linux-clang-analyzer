int foo() {
  int a[2] = {0, 2};
  if (a[1] == 3) {
    int* ptr = nullptr;
    *ptr = 123;
  }
  return 0x42;
}
