/*
https://codeforces.com/contest/1469/problem/C
*/
fun main() {
    repeat(readLine()!!.toInt()) {
        val (n, k) = readLine()!!.split(' ').map { it.toInt() }
        val h = readLine()!!.split(' ').map { it.toInt() }

        var mn = h[0]
        var mx = h[0]
        var ok = true
        for (i in 1 until n) {
            mn = maxOf(mn - k + 1, h[i])
            mx = minOf(mx + k - 1, h[i] + k - 1)
            if (mn > mx) {
                ok = false
                break
            }
        }
        if (h[n - 1] !in mn..mx)
            ok = false
        println(if (ok) "YES" else "NO")
    }
}