static const int size = 64;
static char matrix2[size][size];

void test_matrix2ji() {
  for(int i = 0; i < size; i++) {
    for(int j = 0; j < size; j++) {
      matrix2[j][i] = 4;
    }
  }
}

int main() {
  test_matrix2ji();
  return 0;
}
