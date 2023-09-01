(require 'histogram)
(require 'bit-counter)

(ns main)

(defn -main
	  ([] (-main ""))
	  ([_]

	   (println "Codewars Clojure")
	   (println (histogram/hist "tpwaemuqxdmwqbqrjbeosjnejqorxdozsxnrgpgqkeihqwybzyymqeazfkyiucesxwutgszbenzvgxibxrlvmzihcb"))
	   (println (format "Number of bits in 1234 is %d" (bit-counter/count-bits 1234)))))
