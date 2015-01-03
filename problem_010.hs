{-- Project Euler Problem 10 --}

module Problem10 where

isPrime 0 = False
isPrime 1 = False
isPrime 2 = True
isPrime n = n > 2 && null [x | x <- [3,5..(div n 2)], mod n x == 0]
