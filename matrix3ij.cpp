static const int size = 1000;
static char matrix3[size][size];

void test_matrix3ij() {
  for(int i = 0; i < size; i++) {
    for(int j = 0; j < size; j++) {
      matrix3[i][j] = 4;
    }
  }
}

int main() {
  test_matrix3ij();
  return 0;
}
