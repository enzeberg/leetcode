int reverse(int x) {
    long long result = 0;
    while (x) {
        result = result * 10 + x % 10;
        if (result > 2147483647 || result < -2147483648) return 0;
        x /= 10;
    }
    return result;
}
