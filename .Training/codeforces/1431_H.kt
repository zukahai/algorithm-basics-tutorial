fun main() {
	val (n, m, k) = readLine()!!.split(" ").map { it.toInt() }	
	val a = readLine()!!.split(" ").map { it.toLong() }
	val b = readLine()!!.split(" ").map { it.toLong() }
	val c = Array(n) { readLine()!!.split(" ").map { it.toLong() } }
	
	val ev = Array(n + m) {
		if (it < n)
			longArrayOf(a[it], 1L, it.toLong())
		else
			longArrayOf(b[it - n], 0L, (it - n).toLong())
	}
	
	ev.sortWith(compareBy({ it[0] }))
	
	val vals = LongArray(n + m) { 0 }
	
	for (e in 0 until n + m) {
		if (ev[e][1] == 1L) {
			val i = ev[e][2].toInt()
			vals[e] = b.indices.filter { b[it] <= ev[e][0] }.map { c[i][it] }.max()!!
		} else {
			val j = ev[e][2].toInt()
			vals[e] = a.indices.filter { a[it] <= ev[e][0] }.map { c[it][j] }.max()!!
		}
	}
	
	var ans = 1e18.toLong()
	
	for (bonus in 1 until n + m) {
		vals[bonus] += k.toLong()
		var (res, cur, mx) = LongArray(3) { 0 }
		var i = 0
		while (true) {
			while (i < n + m && ev[i][0] <= cur) {
				mx = Math.max(mx, vals[i])
				++i;
			}
			if (i == n + m) break
			val need = (ev[i][0] - cur + mx - 1) / mx
			res += need
			cur += need * mx
		}
		ans = Math.min(ans, res)
		vals[bonus] -= k.toLong()
	}

	println(ans)
}