int main() {
    int m = 2;
    print_int((m+100) % 2);
    int i = 0;
    int factorial = 3;
    int result = 1;
    while (factorial > 0) {
        result = result * factorial;
        factorial = factorial - 1;
    }
    print_int(result % 100);
    for (int j = 0; j < result % 100 - 1; j=j+1) {
        for (int k = j + 1; k < result % 100 - 1; k=k+1) {
            if (k - 5 == j || ! j + 2 == k && k - 3 == j) {
                i = k % (j + 1);
                print_int(i);
            } else if(i){
                print_int(i);
            }
            else {
                print_int(i);
            }
        }
    }
    return 0;
}
