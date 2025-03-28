MOD = 10**9 + 7

class Matrix:
    def __init__(self, rows, cols):
        self.n_rows = rows
        self.n_cols = cols
        self.mat = [[0] * cols for _ in range(rows)]
    
    @staticmethod
    def identity_matrix(size):
        I = Matrix(size, size)
        for i in range(size):
            I.mat[i][i] = 1
        return I
    
    def __mul__(self, other):
        n, m = self.n_rows, other.n_cols
        product = Matrix(n, m)
        for i in range(n):
            for j in range(m):
                for k in range(self.n_cols):
                    product.mat[i][j] = (product.mat[i][j] + self.mat[i][k] * other.mat[k][j] % MOD) % MOD
        return product
    
    def pow(self, exp):
        result = Matrix.identity_matrix(self.n_rows)
        base = self
        while exp > 0:
            if exp % 2 == 1:
                result = result * base
            base = base * base
            exp //= 2
        return result

def solve(a, b, c, d, n):
    if n == 0:
        return b % MOD
    if n == 1:
        return a % MOD

    T = Matrix(6, 6)
    T.mat = [
        [3, 2, 1, 1, 1, 0],
        [1, 0, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 0, 0, 1, 2, 0],
        [0, 0, 0, 1, 0, 0],
        [0, 0, 0, 0, 1, 0]
    ]

    initial_state = Matrix(6, 1)
    initial_state.mat = [
        [a],
        [b],
        [0],
        [c],
        [d],
        [0] 
    ]

    result_matrix = T.pow(n-1) * initial_state
    return result_matrix.mat[0][0] % MOD

a, b, c, d, n = 1, 2, 2, 1, 4
print(solve(a, b, c, d, n))
