def longest_common_subsequence_length(x, y):
    # XOR các giá trị x và y
    xor_result = x ^ y
    print(xor_result)
    
    # Đếm số bit 1 trong kết quả XOR
    bit_count = bin(xor_result).count('1')
    
    k = len(bin(xor_result)) - bit_count

    
    return 2 ** k

x = 1001
y = 1

result = longest_common_subsequence_length(x, y)
print(result)