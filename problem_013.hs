{-- Project Euler - Problem 13 --}

module Problem13 where

import System.IO

inputFilename = "problem_013.input.txt"
numberContent = read( readFile(inputFilename))
numbers = (map $ (\x -> read(x) ) lines numberContent) :: [Integer]


main :: IO()
main = do
       inh <- openFile inputFilename ReadMode
       

