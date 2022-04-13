int reverse(int x) {
    long long result = 0;
    while (x) {
        result = result * 10 + x % 10;
        if (result > 2147483647 || result < -2147483648) return 0;
        x /= 10;
    }
    return result;
}

bool isPalindrome(int x){
    if (x < 0 || (x > 10 && x % 10 == 0)) {
        return false;
    }
    if (x < 10 || x == reverse(x)) {
        return true;
    }
    return false;
}

