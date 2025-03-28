import java.util.*

fun main() {
    val (n, k, x) = readLine()!!.split(" ").map { it.toInt() }
    val a = readLine()!!.split(" ").map { it.toInt() }
    var l = 0L
    var r = 10L * 1000 * 1000 * 1000
    var res = -1L

    fun can(sum : Long) : Boolean {
        var cursum = 0L
        var need = 0
        var cur = PriorityQueue<Int>(compareBy<Int> { -it })
        for (i in 0 until n) {
            cursum += a[i]
            cur.add(a[i])
            while (cur.size > x || cursum > sum) {
                cursum -= cur.first()
                cur.remove()
                need += 1
            }
            if (cur.size == x) {
                cursum = 0L
                cur.clear()
            }
        }
        return need <= k
    }

    while (l <= r) {
        val mid = (l + r) / 2
        if (can(mid)) {
            res = mid
            r = mid - 1
        } else {
            l = mid + 1
        }
    }
    println(res)
}