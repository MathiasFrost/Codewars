import java.sql.DriverManager

fun main(args: Array<String>) {
	println("Hello World!")

	println(Histogram.hist("tpwaemuqxdmwqbqrjbeosjnejqorxdozsxnrgpgqkeihqwybzyymqeazfkyiucesxwutgszbenzvgxibxrlvmzihcb"))
	println(Beggars.beggars(listOf(1, 2, 3, 4, 5), 2))

	val connection = DriverManager.getConnection("jdbc:mariadb://localhost:3306/DB?user=zoru&password=1012");
	val statement = connection.createStatement()
	statement.executeQuery("select * from test.root")
	println(statement.resultSet)
}

class Test {
	val prop1: String = ""
	var prop2: String = ""
	val prop3: Short = 2
	var prop4: ULong = 2UL
}
