fun main() = repeat(readLine()!!.toInt()) {
	val n = readLine()!!.toInt()
	val a = readLine()!!.split(" ").map { it.toInt() }
	val b = readLine()!!.split(" ").map { it.toInt() }
	
	var ans = -1
	var ans_shift = -1
	for (shift in 0 until n) {
		var res = 1e9.toInt()
		for(i in 0 until n)
			res = Math.min(res, Math.abs(a[i] - b[(i + shift) % n]))
		if (res > ans) {
			ans = res
			ans_shift = shift
		}
	}	

	println(IntArray(n) { (it + ans_shift) % n + 1 }.joinToString(" ")) 
}