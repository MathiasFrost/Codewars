(require 'Histogram)
(require 'BitCounter)

(ns main)

(defn -main
([] (-main ""))
([_]

    (println "Codewars Clojure")
    (println (Histogram/hist "tpwaemuqxdmwqbqrjbeosjnejqorxdozsxnrgpgqkeihqwybzyymqeazfkyiucesxwutgszbenzvgxibxrlvmzihcb"))
	   (println (format "Number of bits in 1234 is %d" (BitCounter/count-bits 1234)))
))
