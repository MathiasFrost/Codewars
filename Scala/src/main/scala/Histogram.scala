object Histogram {

  def hist(s: String): String = {
    var strings: Array[String] = Array()
    for (letter <- "uwxz") {
      val count = s.count(c => c.equals(letter))
      if (count > 0) {
        val string = "%c  %-5d %s".format(letter, count, "*" * count)
        strings = strings.appended(string)
      }
    }
    strings.mkString("\n")
  }
}
