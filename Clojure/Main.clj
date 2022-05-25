(require 'Histogram)

(ns Main)

(defn -main
  ([] (-main ""))
  ([args]
   (println "Codewars Clojure")
   (println (Histogram/hist "tpwaemuqxdmwqbqrjbeosjnejqorxdozsxnrgpgqkeihqwybzyymqeazfkyiucesxwutgszbenzvgxibxrlvmzihcb"))))