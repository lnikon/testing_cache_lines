static const int size = 20;
static char matrix1[size][size];

void test_matrix1ji() {
  for(int i = 0; i < size; i++) {
    for(int j = 0; j < size; j++) {
      matrix1[j][i] = 4;
    }
  }
}

int main() {
  test_matrix1ji();
  return 0;
}
