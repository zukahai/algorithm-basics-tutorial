fun main() {
    repeat(readLine()!!.toInt()) {
        val n = readLine()!!.toInt()
        val a = readLine()!!.split(' ').map { it.toLong() }

        val k = maxOf(a.max()!!, (a.sum() + n - 2) / (n - 1))
        println(k * (n - 1) - a.sum())
    }
}