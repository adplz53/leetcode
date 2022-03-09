// 190. Reverse Bits

uint32_t reverseBits(uint32_t n) {
    int temp = 0, p = 31;
    while (n != 0){
        temp += pow(2, p--) * (n % 2);
        n /= 2;
    }
    return temp;
}

// Runtime: 0 ms, faster than 100.00% of C online submissions for Reverse Bits.
// Memory Usage: 5.8 MB, less than 12.46% of C online submissions for Reverse Bits