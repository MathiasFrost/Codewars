#lang racket

(provide hist)

(define (hist s)
  (string-join 
    (map (lambda (pair)
        (format "~c  ~a ~a" (car pair) (~a (cdr pair) #:min-width 5 #:align 'left) (make-string (cdr pair) #\*)))
      (filter (lambda (pair)
          (< 0 (cdr pair)))
        (map (lambda (pair)
          (cons (car pair) (count (lambda (letter) (equal? letter (car pair)) ) (string->list s))))
        (list (cons #\u 0) (cons #\w 0) (cons #\x 0) (cons #\z 0)))))
    "\n"))