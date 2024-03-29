#define f (1 << 14)

int n_to_fp(int n) {return n * f;}
int x_to_int(int x) {return x / f;}
int x_to_int_round(int x) {return x >= 0 ? (x + f / 2) / f : (x - f / 2) / f;}
int add_xy(int x, int y) {return x + y;}
int sub_xy(int x, int y) {return x - y;}
int add_xn(int x, int n) {return x + n * f;}
int sub_xn(int x, int n) {return x - n * f;}
int mul_xy(int x, int y){return ((int64_t)x) * y / f;}
int mul_xn(int x, int n){return x * n;}
int div_xy(int x, int y) {return ((int64_t)x) * f / y;}
int div_xn(int x, int n) {return x / n;}
