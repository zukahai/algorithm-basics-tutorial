/*
https://codeforces.com/contest/1223/problem/C
*/
fun calc(p: IntArray, len: Int, x: Int, a: Int, y: Int, b: Int): Long {
    var ans = 0L
    var (cX, cY, cXY) = listOf(0, 0, 0)
    for (i in 1..len) {
        if (i % a == 0 && i % b == 0) cXY++
        else if (i % a == 0) cX++
        else if (i % b == 0) cY++
    }
    for (i in 0 until cXY)
        ans += p[i] * (x + y)
    for (i in 0 until cX)
        ans += p[cXY + i] * x
    for (i in 0 until cY)
        ans += p[cXY + cX + i] * y;
    return ans
}

fun main() {
    val q = readLine()!!.toInt()
    for (ct in 1..q) {
        val n = readLine()!!.toInt()
        val p = readLine()!!.split(' ').map { it.toInt() / 100 }
                .sortedDescending().toIntArray()
        var (x, a) = readLine()!!.split(' ').map { it.toInt() }
        var (y, b) = readLine()!!.split(' ').map { it.toInt() }
        val k = readLine()!!.toLong()

        if (x < y) {
            x = y.also { y = x }
            a = b.also { b = a }
        }

        var lf = 0; var rg = n + 1
        while (rg - lf > 1) {
            val mid = (lf + rg) / 2
            if (calc(p, mid, x, a, y, b) >= k)
                rg = mid
            else
                lf = mid
        }

        if (rg > n) rg = -1
        println(rg)
    }
}