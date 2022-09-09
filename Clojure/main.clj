(require 'Histogram)

(ns main)

(defn -main
	([] (-main ""))
	([args]
	 (println "Codewars Clojure")
	 (println (Histogram/hist "tpwaemuqxdmwqbqrjbeosjnejqorxdozsxnrgpgqkeihqwybzyymqeazfkyiucesxwutgszbenzvgxibxrlvmzihcb"))))
