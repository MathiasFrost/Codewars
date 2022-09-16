(ns BitCounter)

(defn count-bits [n]

	(def my-value (atom n))
	(def my-count (atom 0))
	(while (> @my-value 0)
	(do
	    (reset! my-value (bit-and @my-value (- @my-value 1)))
	    (swap! my-count inc)
	))
	@my-count
)
