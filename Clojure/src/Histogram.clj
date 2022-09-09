(ns Histogram)

(defn hist [s]
	(apply str
		(interpose "\n"
			(map
				(fn [[key value]]
					(str (format "%s  %-6d" key value) (apply str (repeat value "*"))))
				(filter
					(fn [[_ value]]
						(< 0 value))
					(map
						(fn [[key _]]
							[key (- (count s) (count (.replaceAll s key "")))])
						{"u" 0 "w" 0 "x" 0 "z" 0}))))))
