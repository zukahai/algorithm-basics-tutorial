fun main() {
    repeat(readLine()!!.toInt()) {
        val (n, k) = readLine()!!.split(' ').map { it.toInt() }

        for (i in 1 until (k - (n - k)))
            print("$i ")
        for (i in k downTo (k - (n - k)))
            print("$i ")
        println("")
    }
}