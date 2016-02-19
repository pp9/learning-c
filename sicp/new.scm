#lang scheme
(define size 2) 
(+ (+ 10 12) (- 15 size) )
(define (square x)
  (* x x))
(define (some x) (cond( (> x 0) x ) ((= x 0) 0)))
(some 10)

