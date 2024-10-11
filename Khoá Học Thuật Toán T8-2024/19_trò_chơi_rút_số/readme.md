Trò chơi rút số

dp[k]: Kết quả nếu như chơi trước khi rút số k

x = {danh sách các số có thể rút}

Nếu tất cả dp[k - x] = "Win"
Thì dp[k] = "Lose"
Ngược lại nếu tồn tại 1 dp[k - x] = "Lose"
Thì dp[k] = "Win"

