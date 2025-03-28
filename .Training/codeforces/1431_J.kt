fun main() {
	val MOD = 998244353
	
	fun add(x : Int, y : Int) : Int {
		return x + y - if (x + y < MOD) 0 else MOD	
	}
	
	fun mul(x : Int, y : Int) : Int {
		return (1L * x * y % MOD).toInt()
	}
	
	val inv = IntArray(60) { 0 }.also { it[0] = 1; it[1] = (MOD + 1) / 2 }
	for (i in 2 until 60) {
		inv[i] = mul(inv[i - 1], inv[1])
	}
	
	val n = readLine()!!.toInt()
	val a =	readLine()!!.split(" ").map { it.toLong() }
	val target = a.fold(0.toLong()) { res, it -> res xor it }
	val dp = Array(n) { Array(2) { IntArray(2) { 0 } } }
	
	var ans = 0
	
	val m = 1 shl (n - 1)
	for (mask in 0 until m) {
		val cur = Array(n - 1) { longArrayOf(a[it], a[it + 1]) }
		val used = BooleanArray(n - 1) { false }
		
		for (pw in 59 downTo 0) {
			for (i in 0 until n)
				for (cnt in 0 until 2)
					for (fl in 0 until 2)
						dp[i][cnt][fl] = 0
			dp[0][0][0] = 1
			for (i in 0 until n - 1) {
				for (cnt in 0 until 2) {
					for (fl in 0 until 2) {
						if (dp[i][cnt][fl] == 0)
							continue
						val (l, r) = cur[i]
						if ((l shr pw) == (r shr pw)) {
							if (!used[i] && ((mask shr i) and 1) == 1)
								continue
							val c = (l shr pw).toInt()
							val len = (cur[i][1] - cur[i][0] + 1)
							dp[i + 1][cnt xor c][fl] = add(dp[i + 1][cnt xor c][fl], mul((len % MOD).toInt(), dp[i][cnt][fl]))
						} else for (c in 0 until 2) {
							if (!used[i] && (c != (mask shr i) and 1))
								continue
							val nl = if (c == 1) 0L else l
							var nr = if (c == 1) r - (1L shl pw) else (1L shl pw) - 1
							val len = nr - nl + 1
							val nfl = if (len == (1L shl pw) && (c != ((mask shr i) and 1))) 1 else 0
							dp[i + 1][cnt xor c][fl or nfl] = add(dp[i + 1][cnt xor c][fl or nfl], mul((len % MOD).toInt(), dp[i][cnt][fl]))
						}
					}
				}
			}
			
			var cnt = ((target shr pw) and 1).toInt()
			ans = add(ans, mul(dp[n - 1][cnt][1], inv[pw]))
			if (pw == 0) 
				ans = add(ans, dp[n - 1][cnt][0])
			
			for (i in 0 until n - 1) {
				val (l, r) = cur[i]
				if ((l shr pw) == (r shr pw)) {
					val c = (l shr pw)
					cnt = cnt xor c.toInt()
					cur[i][0] -= c shl pw
					cur[i][1] -= c shl pw
				} else {
					used[i] = true
					val c = (mask shr i) and 1
					cnt = cnt xor c.toInt()
					cur[i][0] = if (c == 1) 0 else cur[i][0]
					cur[i][1] = if (c == 1) cur[i][1] - (1L shl pw) else (1L shl pw) - 1
				}
			}
			
			if (cnt != 0)
				break
		}
	}
	
	println(ans)
}