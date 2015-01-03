{-- Project Euler - Problem 009 --}

module Problem9 where

triangleSum = 1000
subAB a b = ((-) ((-) triangleSum a) b)

isPyTri a b = let c = subAB a b
              in a <= b && b <= c && a * a + b * b == c * c

calcPythagTris = [ a * b * (subAB a b) | a <- [1..triangleSum], b <- [1..triangleSum], isPyTri a b]

main :: IO()
main = let solution = head calcPythagTris
       in putStrLn(show solution)
