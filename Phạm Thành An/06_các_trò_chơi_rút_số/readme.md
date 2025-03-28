# Rút số chính phương

dp[k]: Kết quả của trò chơi
Khi tới lượt mình mà gặp số K

dp[0] = "Lose"
dp[1] = "Win"
dp[2] = "Lose"
dp[3] = "Win"
dp[4] = "Win"
dp[5] = "Lose"
dp[6] = "Win"
dp[7] = "Lose"
dp[8] = "Win"
dp[9] = "Win"
dp[10] = "Lose"

dp[k]
duyệt được tất cả số chính phương
trong khoảng 1 đến k, đặt tên là x

dp[k] = "Lose"
Nếu dp[k - x] == "Lose"
Thì dp[k] = "Win"

for k = 1; k <= n; k ++ 
	dp[k] = "Lose";
	for (int i = 1; i <= k; i++){
		int temp = sqrt(i);
		if (temp * temp == i) {
			if (dp[k - i] == "Lose")
				dp[k] = "Win";



duyệt được tất cả số chính phương
trong khoảng 1 đến k

1   4   9    16    25   36   49   64
1^2  2^2  3^2  4^2  5^2  6^2  7^2  8^2			




# Rút số Luỹ thừa

dp[k]: Kết quả của trò chơi
Khi tới lượt mình mà gặp số K


x: là tập hợp các số có thể rút
dp[k] = "Lose"
Nếu tồn tại một dp[k - x] == "Lose"
Thì dp[k] = "Win"

dp[k]
duyệt được tất cả luỹ thừa của 2
trong khoảng 1 đến k, đặt tên là x



dp[k]: Kết quả của trò chơi
Khi tới lượt mình mà gặp số K


x: là tập hợp các số có thể rút
dp[k] = "Lose"
Nếu tồn tại một dp[k - x] == "Lose"
Thì dp[k] = "Win"

dp[k]
duyệt được tất cả luỹ thừa của 2
trong khoảng 1 đến k, đặt tên là x

p[0] = 1
p[1] = 2
p[2] = 4

p[0] = 1
for (int i = 1; i <= 16; i++)
	p[i] = p[i - 1] * 2;

.....
	for (int j = 1; j <= 16; j++)
		if (p[j] <= i) {
			if (dp[i - p[j]] == "Lose") 
				dp[i] = "Win"

		}



			