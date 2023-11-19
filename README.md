# The Knight's Tour

A backtracking algorithm for finding the knight's tour.

## Algo

Begin with:
 - Representation of visited squares.
 - Algorithm for determining legal moves from representation of visited squares.

Process(Position):
 - From the Position build a stack of legal moves.
 - While(stack !empty)
    - Pop the top one, start Process based on this square.
  

## Tours

Complete tour: 0
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, g5, h7, f6, g8, e7, d5, b4, a6, b8, c6, a5, b7, d8, f7, h8, g6, f8, d7, e5, c4, a3, b5, a7, c8, b6, a8, c7, e8, d6, e4, g3, h1, 
Complete tour: 1
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, g5, h7, f6, g8, e7, d5, b4, a6, b8, c6, e5, d7, f8, g6, h8, f7, d8, b7, a5, c4, a3, b5, a7, c8, b6, a8, c7, e8, d6, e4, g3, h1, 
Complete tour: 2
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, g5, h7, f6, g8, e7, d5, b4, a6, b8, d7, f8, g6, h8, f7, e5, c6, d8, b7, a5, c4, a3, b5, a7, c8, b6, a8, c7, e8, d6, e4, g3, h1, 
Complete tour: 3
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, g5, h7, f6, g8, e7, d5, b4, a6, b8, d7, f8, g6, h8, f7, d8, b7, a5, c6, e5, c4, a3, b5, a7, c8, b6, a8, c7, e8, d6, e4, g3, h1, 
Complete tour: 4
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, g5, h7, f6, g8, e7, c8, a7, b5, a3, c4, e5, d7, f8, g6, h8, f7, d8, b7, a5, c6, b8, a6, b4, d5, b6, a8, c7, e8, d6, e4, g3, h1, 
Complete tour: 5
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, g5, h7, f6, g8, e7, c8, a7, b5, a3, c4, e5, c6, a5, b7, d8, f7, h8, g6, f8, d7, b8, a6, b4, d5, b6, a8, c7, e8, d6, e4, g3, h1, 
Complete tour: 6
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, g5, h7, f6, g8, e7, c8, a7, b5, a3, c4, a5, b7, d8, c6, e5, f7, h8, g6, f8, d7, b8, a6, b4, d5, b6, a8, c7, e8, d6, e4, g3, h1, 
Complete tour: 7
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, g5, h7, f6, g8, e7, c8, a7, b5, a3, c4, a5, b7, d8, f7, h8, g6, f8, d7, e5, c6, b8, a6, b4, d5, b6, a8, c7, e8, d6, e4, g3, h1, 
Complete tour: 8
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, g5, h7, f8, d7, b6, a8, c7, d5, b4, a6, b8, c6, a5, b7, d8, f7, h8, g6, e5, c4, a3, b5, a7, c8, e7, g8, f6, e8, d6, e4, g3, h1, 
Complete tour: 9
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, g5, h7, f8, d7, b6, a8, c7, d5, b4, a6, b8, c6, e5, g6, h8, f7, d8, b7, a5, c4, a3, b5, a7, c8, e7, g8, f6, e8, d6, e4, g3, h1, 
Complete tour: 10
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, g5, h7, f8, d7, b6, a8, c7, e8, d6, c8, a7, b5, a3, c4, e5, g6, h8, f7, d8, b7, a5, c6, b8, a6, b4, d5, e7, g8, f6, e4, g3, h1, 
Complete tour: 11
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, g5, h7, f8, d7, b6, a8, c7, e8, d6, c8, a7, b5, a3, c4, a5, b7, d8, f7, h8, g6, e5, c6, b8, a6, b4, d5, e7, g8, f6, e4, g3, h1, 
Complete tour: 12
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, g5, h7, f8, d7, b6, a8, c7, e8, f6, g8, e7, d5, b4, a6, b8, c6, a5, b7, d8, f7, h8, g6, e5, c4, a3, b5, a7, c8, d6, e4, g3, h1, 
Complete tour: 13
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, g5, h7, f8, d7, b6, a8, c7, e8, f6, g8, e7, d5, b4, a6, b8, c6, e5, g6, h8, f7, d8, b7, a5, c4, a3, b5, a7, c8, d6, e4, g3, h1, 
Complete tour: 14
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, g5, h7, f8, d7, e5, c4, a3, b5, a7, c8, b6, a8, c7, d5, b4, a6, b8, c6, a5, b7, d8, f7, h8, g6, e7, g8, f6, e8, d6, e4, g3, h1, 
Complete tour: 15
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, g5, h7, f8, d7, e5, c4, a3, b5, a7, c8, d6, e8, c7, a8, b6, d5, b4, a6, b8, c6, a5, b7, d8, f7, h8, g6, e7, g8, f6, e4, g3, h1, 
Complete tour: 16
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, g5, h7, f8, d7, e5, g6, h8, f7, d6, e8, c7, a8, b6, d5, b4, a6, b8, c6, d8, b7, a5, c4, a3, b5, a7, c8, e7, g8, f6, e4, g3, h1, 
Complete tour: 17
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, g5, h7, f8, d7, e5, g6, h8, f7, d6, e8, c7, a8, b6, c8, a7, b5, a3, c4, a5, b7, d8, c6, b8, a6, b4, d5, e7, g8, f6, e4, g3, h1, 
Complete tour: 18
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, g5, h7, f8, d7, e5, g6, h8, f7, d8, b7, a5, c4, a3, b5, d6, e8, c7, a8, b6, d5, b4, a6, b8, c6, a7, c8, e7, g8, f6, e4, g3, h1, 
Complete tour: 19
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, g5, h7, f8, d7, e5, g6, h8, f7, d8, b7, a5, c4, a3, b5, d6, e8, c7, a8, b6, c8, a7, c6, b8, a6, b4, d5, e7, g8, f6, e4, g3, h1, 
Complete tour: 20
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, g5, h7, f8, d7, e5, g6, h8, f7, d8, b7, a5, c4, a3, b5, c7, a8, b6, d5, b4, a6, b8, c6, a7, c8, e7, g8, f6, e8, d6, e4, g3, h1, 
Complete tour: 21
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, g5, h7, f8, d7, e5, g6, h8, f7, d8, b7, a5, c4, a3, b5, c7, a8, b6, c8, a7, c6, b8, a6, b4, d5, e7, g8, f6, e8, d6, e4, g3, h1, 
Complete tour: 22
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, g5, h7, f8, d7, e5, g6, h8, f7, d8, b7, a5, c4, a3, b5, a7, c6, b8, a6, b4, d5, f6, g8, e7, c8, b6, a8, c7, e8, d6, e4, g3, h1, 
Complete tour: 23
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, g5, h7, f8, d7, e5, g6, h8, f7, d8, b7, a5, c4, a3, b5, a7, c6, b8, a6, b4, d5, e7, g8, f6, e8, c7, a8, b6, c8, d6, e4, g3, h1, 
Complete tour: 24
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, g5, h7, f8, d7, e5, g6, h8, f7, d8, b7, a5, c4, a3, b5, a7, c6, b8, a6, b4, d5, c7, a8, b6, c8, e7, g8, f6, e8, d6, e4, g3, h1, 
Complete tour: 25
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, g5, h7, f8, d7, e5, g6, h8, f7, d8, b7, a5, c4, a3, b5, a7, c6, b8, a6, b4, d5, b6, a8, c7, e8, d6, c8, e7, g8, f6, e4, g3, h1, 
Complete tour: 26
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, g5, h7, f8, d7, e5, g6, h8, f7, d8, b7, a5, c4, a3, b5, a7, c6, b8, a6, b4, d5, b6, a8, c7, e8, f6, g8, e7, c8, d6, e4, g3, h1, 
Complete tour: 27
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, g5, h7, f8, d7, e5, g6, h8, f7, d8, b7, a5, c4, a3, b5, a7, c8, b6, a8, c7, a6, b8, c6, b4, d5, e7, g8, f6, e8, d6, e4, g3, h1, 
Complete tour: 28
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, g5, h7, f8, d7, e5, g6, h8, f7, d8, b7, a5, c4, a3, b5, a7, c8, b6, a8, c7, d5, b4, a6, b8, c6, e7, g8, f6, e8, d6, e4, g3, h1, 
Complete tour: 29
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, g5, h7, f8, d7, e5, g6, h8, f7, d8, b7, a5, c4, a3, b5, a7, c8, d6, e8, c7, a8, b6, d5, b4, a6, b8, c6, e7, g8, f6, e4, g3, h1, 
Complete tour: 30
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, g5, h7, f8, d7, e5, g6, h8, f7, d8, b7, a5, c6, b8, a6, b4, d5, f6, g8, e7, c8, a7, b5, a3, c4, b6, a8, c7, e8, d6, e4, g3, h1, 
Complete tour: 31
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, g5, h7, f8, d7, e5, g6, h8, f7, d8, b7, a5, c6, b8, a6, b4, d5, e7, g8, f6, e8, c7, a8, b6, c4, a3, b5, a7, c8, d6, e4, g3, h1, 
Complete tour: 32
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, g5, h7, f8, d7, e5, g6, h8, f7, d8, b7, a5, c6, b8, a6, b4, d5, e7, g8, f6, e8, c7, a8, b6, c8, a7, b5, a3, c4, d6, e4, g3, h1, 
Complete tour: 33
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, g5, h7, f8, d7, e5, g6, h8, f7, d8, b7, a5, c6, b8, a6, b4, d5, c7, a8, b6, c4, a3, b5, a7, c8, e7, g8, f6, e8, d6, e4, g3, h1, 
Complete tour: 34
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, g5, h7, f8, d7, e5, g6, h8, f7, d8, b7, a5, c6, b8, a6, b4, d5, b6, a8, c7, e8, d6, c4, a3, b5, a7, c8, e7, g8, f6, e4, g3, h1, 
Complete tour: 35
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, g5, h7, f8, d7, e5, g6, h8, f7, d8, b7, a5, c6, b8, a6, b4, d5, b6, a8, c7, e8, f6, g8, e7, c8, a7, b5, a3, c4, d6, e4, g3, h1, 
Complete tour: 36
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, g5, h7, f8, d7, e5, g6, h8, f7, d8, b7, d6, e8, c7, a8, b6, d5, b4, a6, b8, c6, a5, c4, a3, b5, a7, c8, e7, g8, f6, e4, g3, h1, 
Complete tour: 37
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, g5, h7, f8, d7, e5, g6, h8, f7, d8, b7, d6, e8, c7, a8, b6, c8, a7, b5, a3, c4, a5, c6, b8, a6, b4, d5, e7, g8, f6, e4, g3, h1, 
Complete tour: 38
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, g5, h7, f8, d7, e5, g6, h8, f7, d8, c6, b8, a6, b4, d5, e7, g8, f6, e8, c7, a8, b6, c8, a7, b5, a3, c4, a5, b7, d6, e4, g3, h1, 
Complete tour: 39
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, g5, h7, f8, d7, e5, g6, h8, f7, d8, c6, b8, a6, b4, d5, b6, a8, c7, e8, d6, b7, a5, c4, a3, b5, a7, c8, e7, g8, f6, e4, g3, h1, 
Complete tour: 40
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, g5, h7, f8, d7, e5, g6, h8, f7, d8, c6, b8, a6, b4, d5, b6, a8, c7, e8, f6, g8, e7, c8, a7, b5, a3, c4, a5, b7, d6, e4, g3, h1, 
Complete tour: 41
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, g5, h7, f8, d7, e5, f7, h8, g6, e7, g8, f6, d5, b4, a6, b8, c6, d8, b7, a5, c4, a3, b5, a7, c8, b6, a8, c7, e8, d6, e4, g3, h1, 
Complete tour: 42
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, g5, h7, f8, d7, e5, f7, h8, g6, e7, g8, f6, e8, c7, a8, b6, d5, b4, a6, b8, c6, d8, b7, a5, c4, a3, b5, a7, c8, d6, e4, g3, h1, 
Complete tour: 43
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, g5, h7, f8, d7, e5, c6, b8, a6, b4, d5, f6, g8, e7, g6, h8, f7, d8, b7, a5, c4, a3, b5, a7, c8, b6, a8, c7, e8, d6, e4, g3, h1, 
Complete tour: 44
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, g5, h7, f8, d7, e5, c6, b8, a6, b4, d5, c7, a8, b6, c8, a7, b5, a3, c4, a5, b7, d8, f7, h8, g6, e7, g8, f6, e8, d6, e4, g3, h1, 
Complete tour: 45
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, g5, h7, f8, d7, e5, c6, b8, a6, b4, d5, b6, a8, c7, e8, d6, c8, a7, b5, a3, c4, a5, b7, d8, f7, h8, g6, e7, g8, f6, e4, g3, h1, 
Complete tour: 46
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, g5, h7, f8, d7, e5, c6, b8, a6, b4, d5, b6, a8, c7, e8, f6, g8, e7, g6, h8, f7, d8, b7, a5, c4, a3, b5, a7, c8, d6, e4, g3, h1, 
Complete tour: 47
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, g5, h7, f8, d7, f6, g8, e7, d5, b4, a6, b8, c6, a5, b7, d8, f7, h8, g6, e5, c4, a3, b5, a7, c8, b6, a8, c7, e8, d6, e4, g3, h1, 
Complete tour: 48
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, g5, h7, f8, d7, f6, g8, e7, d5, b4, a6, b8, c6, e5, g6, h8, f7, d8, b7, a5, c4, a3, b5, a7, c8, b6, a8, c7, e8, d6, e4, g3, h1, 
Complete tour: 49
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, g5, h7, f8, d7, f6, g8, e7, c8, a7, b5, a3, c4, e5, g6, h8, f7, d8, b7, a5, c6, b8, a6, b4, d5, b6, a8, c7, e8, d6, e4, g3, h1, 
Complete tour: 50
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, g5, h7, f8, d7, f6, g8, e7, c8, a7, b5, a3, c4, a5, b7, d8, f7, h8, g6, e5, c6, b8, a6, b4, d5, b6, a8, c7, e8, d6, e4, g3, h1, 
Complete tour: 51
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, g5, h7, f8, d7, b8, a6, b4, d5, f6, g8, e7, c6, a5, b7, d8, f7, h8, g6, e5, c4, a3, b5, a7, c8, b6, a8, c7, e8, d6, e4, g3, h1, 
Complete tour: 52
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, g5, h7, f8, d7, b8, a6, b4, d5, f6, g8, e7, c6, e5, g6, h8, f7, d8, b7, a5, c4, a3, b5, a7, c8, b6, a8, c7, e8, d6, e4, g3, h1, 
Complete tour: 53
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, g5, h7, f8, d7, b8, a6, b4, d5, f6, g8, e7, g6, h8, f7, e5, c6, d8, b7, a5, c4, a3, b5, a7, c8, b6, a8, c7, e8, d6, e4, g3, h1, 
Complete tour: 54
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, g5, h7, f8, d7, b8, a6, b4, d5, f6, g8, e7, g6, h8, f7, d8, b7, a5, c6, e5, c4, a3, b5, a7, c8, b6, a8, c7, e8, d6, e4, g3, h1, 
Complete tour: 55
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, g5, h7, f8, d7, b8, a6, b4, d5, e7, g8, f6, e8, c7, a8, b6, c8, a7, b5, a3, c4, e5, g6, h8, f7, d8, c6, a5, b7, d6, e4, g3, h1, 
Complete tour: 56
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, g5, h7, f8, d7, b8, a6, b4, d5, e7, g8, f6, e8, c7, a8, b6, c8, a7, b5, a3, c4, a5, c6, e5, g6, h8, f7, d8, b7, d6, e4, g3, h1, 
Complete tour: 57
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, g5, h7, f8, d7, b8, a6, b4, d5, e7, g8, f6, e8, c7, a8, b6, c8, a7, b5, a3, c4, a5, b7, d8, c6, e5, g6, h8, f7, d6, e4, g3, h1, 
Complete tour: 58
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, g5, h7, f8, d7, b8, a6, b4, d5, e7, g8, f6, e8, c7, a8, b6, c8, a7, c6, a5, b7, d8, f7, h8, g6, e5, c4, a3, b5, d6, e4, g3, h1, 
Complete tour: 59
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, g5, h7, f8, d7, b8, a6, b4, d5, e7, g8, f6, e8, c7, a8, b6, c8, a7, c6, e5, g6, h8, f7, d8, b7, a5, c4, a3, b5, d6, e4, g3, h1, 
Complete tour: 60
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, g5, h7, f8, d7, b8, a6, b4, d5, c7, a8, b6, c8, a7, b5, a3, c4, e5, g6, h8, f7, d8, b7, a5, c6, e7, g8, f6, e8, d6, e4, g3, h1, 
Complete tour: 61
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, g5, h7, f8, d7, b8, a6, b4, d5, c7, a8, b6, c8, a7, b5, a3, c4, e5, c6, a5, b7, d8, f7, h8, g6, e7, g8, f6, e8, d6, e4, g3, h1, 
Complete tour: 62
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, g5, h7, f8, d7, b8, a6, b4, d5, c7, a8, b6, c8, a7, b5, a3, c4, a5, b7, d8, c6, e5, f7, h8, g6, e7, g8, f6, e8, d6, e4, g3, h1, 
Complete tour: 63
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, g5, h7, f8, d7, b8, a6, b4, d5, c7, a8, b6, c8, a7, b5, a3, c4, a5, b7, d8, f7, h8, g6, e5, c6, e7, g8, f6, e8, d6, e4, g3, h1, 
Complete tour: 64
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, g5, h7, f8, d7, b8, a6, b4, d5, b6, a8, c7, b5, a3, c4, e5, g6, h8, f7, d8, b7, a5, c6, a7, c8, e7, g8, f6, e8, d6, e4, g3, h1, 
Complete tour: 65
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, g5, h7, f8, d7, b8, a6, b4, d5, b6, a8, c7, b5, a3, c4, a5, b7, d8, f7, h8, g6, e5, c6, a7, c8, e7, g8, f6, e8, d6, e4, g3, h1, 
Complete tour: 66
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, g5, h7, f8, d7, b8, a6, b4, d5, b6, a8, c7, e8, d6, b5, a3, c4, e5, g6, h8, f7, d8, b7, a5, c6, a7, c8, e7, g8, f6, e4, g3, h1, 
Complete tour: 67
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, g5, h7, f8, d7, b8, a6, b4, d5, b6, a8, c7, e8, d6, b5, a3, c4, a5, b7, d8, f7, h8, g6, e5, c6, a7, c8, e7, g8, f6, e4, g3, h1, 
Complete tour: 68
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, g5, h7, f8, d7, b8, a6, b4, d5, b6, a8, c7, e8, d6, f7, h8, g6, e5, c6, d8, b7, a5, c4, a3, b5, a7, c8, e7, g8, f6, e4, g3, h1, 
Complete tour: 69
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, g5, h7, f8, d7, b8, a6, b4, d5, b6, a8, c7, e8, d6, c8, a7, b5, a3, c4, e5, g6, h8, f7, d8, b7, a5, c6, e7, g8, f6, e4, g3, h1, 
Complete tour: 70
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, g5, h7, f8, d7, b8, a6, b4, d5, b6, a8, c7, e8, d6, c8, a7, b5, a3, c4, e5, c6, a5, b7, d8, f7, h8, g6, e7, g8, f6, e4, g3, h1, 
Complete tour: 71
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, g5, h7, f8, d7, b8, a6, b4, d5, b6, a8, c7, e8, d6, c8, a7, b5, a3, c4, a5, b7, d8, c6, e5, f7, h8, g6, e7, g8, f6, e4, g3, h1, 
Complete tour: 72
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, g5, h7, f8, d7, b8, a6, b4, d5, b6, a8, c7, e8, d6, c8, a7, b5, a3, c4, a5, b7, d8, f7, h8, g6, e5, c6, e7, g8, f6, e4, g3, h1, 
Complete tour: 73
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, g5, h7, f8, d7, b8, a6, b4, d5, b6, a8, c7, e8, d6, b7, a5, c6, d8, f7, h8, g6, e5, c4, a3, b5, a7, c8, e7, g8, f6, e4, g3, h1, 
Complete tour: 74
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, g5, h7, f8, d7, b8, a6, b4, d5, b6, a8, c7, e8, d6, b7, d8, f7, h8, g6, e5, c6, a5, c4, a3, b5, a7, c8, e7, g8, f6, e4, g3, h1, 
Complete tour: 75
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, g5, h7, f8, d7, b8, a6, b4, d5, b6, a8, c7, e8, f6, g8, e7, c6, a5, b7, d8, f7, h8, g6, e5, c4, a3, b5, a7, c8, d6, e4, g3, h1, 
Complete tour: 76
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, g5, h7, f8, d7, b8, a6, b4, d5, b6, a8, c7, e8, f6, g8, e7, c6, e5, g6, h8, f7, d8, b7, a5, c4, a3, b5, a7, c8, d6, e4, g3, h1, 
Complete tour: 77
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, g5, h7, f8, d7, b8, a6, b4, d5, b6, a8, c7, e8, f6, g8, e7, g6, h8, f7, e5, c6, d8, b7, a5, c4, a3, b5, a7, c8, d6, e4, g3, h1, 
Complete tour: 78
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, g5, h7, f8, d7, b8, a6, b4, d5, b6, a8, c7, e8, f6, g8, e7, g6, h8, f7, d8, b7, a5, c6, e5, c4, a3, b5, a7, c8, d6, e4, g3, h1, 
Complete tour: 79
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, g5, h7, f8, d7, b8, a6, b4, d5, b6, a8, c7, e8, f6, g8, e7, c8, a7, b5, a3, c4, e5, g6, h8, f7, d8, c6, a5, b7, d6, e4, g3, h1, 
Complete tour: 80
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, g5, h7, f8, d7, b8, a6, b4, d5, b6, a8, c7, e8, f6, g8, e7, c8, a7, b5, a3, c4, a5, c6, e5, g6, h8, f7, d8, b7, d6, e4, g3, h1, 
Complete tour: 81
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, g5, h7, f8, d7, b8, a6, b4, d5, b6, a8, c7, e8, f6, g8, e7, c8, a7, b5, a3, c4, a5, b7, d8, c6, e5, g6, h8, f7, d6, e4, g3, h1, 
Complete tour: 82
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, g5, h7, f8, d7, b8, a6, b4, d5, b6, a8, c7, e8, f6, g8, e7, c8, a7, c6, a5, b7, d8, f7, h8, g6, e5, c4, a3, b5, d6, e4, g3, h1, 
Complete tour: 83
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, g5, h7, f8, d7, b8, a6, b4, d5, b6, a8, c7, e8, f6, g8, e7, c8, a7, c6, e5, g6, h8, f7, d8, b7, a5, c4, a3, b5, d6, e4, g3, h1, 
Complete tour: 84
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, g5, h7, f8, d7, b8, a6, b4, c6, a5, b7, d8, f7, h8, g6, e5, c4, a3, b5, a7, c8, b6, a8, c7, d5, e7, g8, f6, e8, d6, e4, g3, h1, 
Complete tour: 85
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, g5, h7, f8, d7, b8, a6, b4, c6, a5, b7, d8, f7, h8, g6, e5, c4, a3, b5, a7, c8, d6, e8, c7, a8, b6, d5, e7, g8, f6, e4, g3, h1, 
Complete tour: 86
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, g5, h7, f8, d7, b8, a6, b4, c6, a5, b7, d8, f7, h8, g6, e5, c4, a3, b5, a7, c8, e7, g8, f6, d5, b6, a8, c7, e8, d6, e4, g3, h1, 
Complete tour: 87
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, g5, h7, f8, d7, b8, a6, b4, c6, e5, g6, h8, f7, d8, b7, a5, c4, a3, b5, a7, c8, b6, a8, c7, d5, e7, g8, f6, e8, d6, e4, g3, h1, 
Complete tour: 88
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, g5, h7, f8, d7, b8, a6, b4, c6, e5, g6, h8, f7, d8, b7, a5, c4, a3, b5, a7, c8, d6, e8, c7, a8, b6, d5, e7, g8, f6, e4, g3, h1, 
Complete tour: 89
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, g5, h7, f8, d7, b8, a6, b4, c6, e5, g6, h8, f7, d8, b7, a5, c4, a3, b5, a7, c8, e7, g8, f6, d5, b6, a8, c7, e8, d6, e4, g3, h1, 
Complete tour: 90
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, g5, h7, f8, d7, b8, a6, c7, a8, b6, d5, b4, c6, a5, b7, d8, f7, h8, g6, e5, c4, a3, b5, a7, c8, e7, g8, f6, e8, d6, e4, g3, h1, 
Complete tour: 91
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, g5, h7, f8, d7, b8, a6, c7, a8, b6, d5, b4, c6, e5, g6, h8, f7, d8, b7, a5, c4, a3, b5, a7, c8, e7, g8, f6, e8, d6, e4, g3, h1, 
Complete tour: 92
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, g5, h7, f8, d7, b8, a6, c7, a8, b6, c8, a7, b5, a3, c4, e5, g6, h8, f7, d8, b7, a5, c6, b4, d5, e7, g8, f6, e8, d6, e4, g3, h1, 
Complete tour: 93
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, g5, h7, f8, d7, b8, a6, c7, a8, b6, c8, a7, b5, a3, c4, a5, b7, d8, f7, h8, g6, e5, c6, b4, d5, e7, g8, f6, e8, d6, e4, g3, h1, 
Complete tour: 94
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, g5, h7, f8, d7, b8, c6, a5, b7, d8, f7, h8, g6, e5, c4, a3, b5, a7, c8, b6, a8, c7, a6, b4, d5, e7, g8, f6, e8, d6, e4, g3, h1, 
Complete tour: 95
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, g5, h7, f8, d7, b8, c6, e5, g6, h8, f7, d8, b7, a5, c4, a3, b5, a7, c8, b6, a8, c7, a6, b4, d5, e7, g8, f6, e8, d6, e4, g3, h1, 
Complete tour: 96
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, g5, h7, f8, g6, h8, f7, d6, e8, c7, a8, b6, d5, b4, a6, b8, d7, e5, c6, d8, b7, a5, c4, a3, b5, a7, c8, e7, g8, f6, e4, g3, h1, 
Complete tour: 97
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, g5, h7, f8, g6, h8, f7, d6, e8, c7, a8, b6, c8, a7, b5, a3, c4, a5, b7, d8, c6, e5, d7, b8, a6, b4, d5, e7, g8, f6, e4, g3, h1, 
Complete tour: 98
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, g5, h7, f8, g6, h8, f7, e5, d7, b6, a8, c7, d5, b4, a6, b8, c6, d8, b7, a5, c4, a3, b5, a7, c8, e7, g8, f6, e8, d6, e4, g3, h1, 
Complete tour: 99
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, g5, h7, f8, g6, h8, f7, e5, d7, b6, a8, c7, e8, d6, c8, a7, b5, a3, c4, a5, b7, d8, c6, b8, a6, b4, d5, e7, g8, f6, e4, g3, h1, 
Complete tour: 100
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, g5, h7, f8, g6, h8, f7, e5, d7, b6, a8, c7, e8, f6, g8, e7, d5, b4, a6, b8, c6, d8, b7, a5, c4, a3, b5, a7, c8, d6, e4, g3, h1, 
Complete tour: 101
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, g5, h7, f8, g6, h8, f7, e5, d7, f6, g8, e7, d5, b4, a6, b8, c6, d8, b7, a5, c4, a3, b5, a7, c8, b6, a8, c7, e8, d6, e4, g3, h1, 
Complete tour: 102
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, g5, h7, f8, g6, h8, f7, e5, d7, f6, g8, e7, c8, a7, b5, a3, c4, a5, b7, d8, c6, b8, a6, b4, d5, b6, a8, c7, e8, d6, e4, g3, h1, 
Complete tour: 103
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, g5, h7, f8, g6, h8, f7, e5, d7, b8, a6, b4, d5, f6, g8, e7, c6, d8, b7, a5, c4, a3, b5, a7, c8, b6, a8, c7, e8, d6, e4, g3, h1, 
Complete tour: 104
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, g5, h7, f8, g6, h8, f7, e5, d7, b8, a6, b4, d5, e7, g8, f6, e8, c7, a8, b6, c8, a7, b5, a3, c4, a5, c6, d8, b7, d6, e4, g3, h1, 
Complete tour: 105
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, g5, h7, f8, g6, h8, f7, e5, d7, b8, a6, b4, d5, e7, g8, f6, e8, c7, a8, b6, c8, a7, c6, d8, b7, a5, c4, a3, b5, d6, e4, g3, h1, 
Complete tour: 106
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, g5, h7, f8, g6, h8, f7, e5, d7, b8, a6, b4, d5, c7, a8, b6, c8, a7, b5, a3, c4, a5, b7, d8, c6, e7, g8, f6, e8, d6, e4, g3, h1, 
Complete tour: 107
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, g5, h7, f8, g6, h8, f7, e5, d7, b8, a6, b4, d5, b6, a8, c7, b5, a3, c4, a5, b7, d8, c6, a7, c8, e7, g8, f6, e8, d6, e4, g3, h1, 
Complete tour: 108
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, g5, h7, f8, g6, h8, f7, e5, d7, b8, a6, b4, d5, b6, a8, c7, e8, d6, b5, a3, c4, a5, b7, d8, c6, a7, c8, e7, g8, f6, e4, g3, h1, 
Complete tour: 109
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, g5, h7, f8, g6, h8, f7, e5, d7, b8, a6, b4, d5, b6, a8, c7, e8, d6, c8, a7, b5, a3, c4, a5, b7, d8, c6, e7, g8, f6, e4, g3, h1, 
Complete tour: 110
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, g5, h7, f8, g6, h8, f7, e5, d7, b8, a6, b4, d5, b6, a8, c7, e8, d6, b7, d8, c6, a5, c4, a3, b5, a7, c8, e7, g8, f6, e4, g3, h1, 
Complete tour: 111
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, g5, h7, f8, g6, h8, f7, e5, d7, b8, a6, b4, d5, b6, a8, c7, e8, f6, g8, e7, c6, d8, b7, a5, c4, a3, b5, a7, c8, d6, e4, g3, h1, 
Complete tour: 112
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, g5, h7, f8, g6, h8, f7, e5, d7, b8, a6, b4, d5, b6, a8, c7, e8, f6, g8, e7, c8, a7, b5, a3, c4, a5, c6, d8, b7, d6, e4, g3, h1, 
Complete tour: 113
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, g5, h7, f8, g6, h8, f7, e5, d7, b8, a6, b4, d5, b6, a8, c7, e8, f6, g8, e7, c8, a7, c6, d8, b7, a5, c4, a3, b5, d6, e4, g3, h1, 
Complete tour: 114
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, g5, h7, f8, g6, h8, f7, e5, d7, b8, a6, b4, c6, d8, b7, a5, c4, a3, b5, a7, c8, b6, a8, c7, d5, e7, g8, f6, e8, d6, e4, g3, h1, 
Complete tour: 115
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, g5, h7, f8, g6, h8, f7, e5, d7, b8, a6, b4, c6, d8, b7, a5, c4, a3, b5, a7, c8, d6, e8, c7, a8, b6, d5, e7, g8, f6, e4, g3, h1, 
Complete tour: 116
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, g5, h7, f8, g6, h8, f7, e5, d7, b8, a6, b4, c6, d8, b7, a5, c4, a3, b5, a7, c8, e7, g8, f6, d5, b6, a8, c7, e8, d6, e4, g3, h1, 
Complete tour: 117
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, g5, h7, f8, g6, h8, f7, e5, d7, b8, a6, c7, a8, b6, d5, b4, c6, d8, b7, a5, c4, a3, b5, a7, c8, e7, g8, f6, e8, d6, e4, g3, h1, 
Complete tour: 118
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, g5, h7, f8, g6, h8, f7, e5, d7, b8, a6, c7, a8, b6, c8, a7, b5, a3, c4, a5, b7, d8, c6, b4, d5, e7, g8, f6, e8, d6, e4, g3, h1, 
Complete tour: 119
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, g5, h7, f8, g6, h8, f7, e5, d7, b8, c6, d8, b7, a5, c4, a3, b5, a7, c8, b6, a8, c7, a6, b4, d5, e7, g8, f6, e8, d6, e4, g3, h1, 
Complete tour: 120
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, g5, h7, f8, g6, h8, f7, e5, c6, d8, b7, a5, c4, a3, b5, a7, c8, d6, e8, c7, a8, b6, d7, b8, a6, b4, d5, e7, g8, f6, e4, g3, h1, 
Complete tour: 121
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, g5, h7, f8, g6, h8, f7, e5, c6, d8, b7, a5, c4, a3, b5, a7, c8, e7, g8, f6, d5, b4, a6, b8, d7, b6, a8, c7, e8, d6, e4, g3, h1, 
Complete tour: 122
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, g5, h7, f8, g6, h8, f7, e5, c6, d8, b7, a5, c4, a3, b5, a7, c8, e7, g8, f6, d7, b8, a6, b4, d5, b6, a8, c7, e8, d6, e4, g3, h1, 
Complete tour: 123
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, g5, h7, f8, g6, h8, f7, d8, b7, a5, c4, a3, b5, d6, e8, c7, a8, b6, d5, b4, a6, b8, d7, e5, c6, a7, c8, e7, g8, f6, e4, g3, h1, 
Complete tour: 124
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, g5, h7, f8, g6, h8, f7, d8, b7, a5, c4, a3, b5, d6, e8, c7, a8, b6, c8, a7, c6, e5, d7, b8, a6, b4, d5, e7, g8, f6, e4, g3, h1, 
Complete tour: 125
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, g5, h7, f8, g6, h8, f7, d8, b7, a5, c4, a3, b5, c7, a8, b6, d5, b4, a6, b8, d7, e5, c6, a7, c8, e7, g8, f6, e8, d6, e4, g3, h1, 
Complete tour: 126
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, g5, h7, f8, g6, h8, f7, d8, b7, a5, c4, a3, b5, c7, a8, b6, c8, a7, c6, e5, d7, b8, a6, b4, d5, e7, g8, f6, e8, d6, e4, g3, h1, 
Complete tour: 127
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, g5, h7, f8, g6, h8, f7, d8, b7, a5, c4, a3, b5, a7, c6, e5, d7, b8, a6, b4, d5, f6, g8, e7, c8, b6, a8, c7, e8, d6, e4, g3, h1, 
Complete tour: 128
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, g5, h7, f8, g6, h8, f7, d8, b7, a5, c4, a3, b5, a7, c6, e5, d7, b8, a6, b4, d5, e7, g8, f6, e8, c7, a8, b6, c8, d6, e4, g3, h1, 
Complete tour: 129
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, g5, h7, f8, g6, h8, f7, d8, b7, a5, c4, a3, b5, a7, c6, e5, d7, b8, a6, b4, d5, c7, a8, b6, c8, e7, g8, f6, e8, d6, e4, g3, h1, 
Complete tour: 130
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, g5, h7, f8, g6, h8, f7, d8, b7, a5, c4, a3, b5, a7, c6, e5, d7, b8, a6, b4, d5, b6, a8, c7, e8, d6, c8, e7, g8, f6, e4, g3, h1, 
Complete tour: 131
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, g5, h7, f8, g6, h8, f7, d8, b7, a5, c4, a3, b5, a7, c6, e5, d7, b8, a6, b4, d5, b6, a8, c7, e8, f6, g8, e7, c8, d6, e4, g3, h1, 
Complete tour: 132
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, g5, h7, f8, g6, h8, f7, d8, b7, a5, c4, a3, b5, a7, c8, b6, a8, c7, a6, b8, d7, e5, c6, b4, d5, e7, g8, f6, e8, d6, e4, g3, h1, 
Complete tour: 133
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, g5, h7, f8, g6, h8, f7, d8, b7, a5, c4, a3, b5, a7, c8, b6, a8, c7, d5, b4, a6, b8, d7, e5, c6, e7, g8, f6, e8, d6, e4, g3, h1, 
Complete tour: 134
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, g5, h7, f8, g6, h8, f7, d8, b7, a5, c4, a3, b5, a7, c8, d6, e8, c7, a8, b6, d5, b4, a6, b8, d7, e5, c6, e7, g8, f6, e4, g3, h1, 
Complete tour: 135
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, g5, h7, f8, g6, h8, f7, d8, b7, a5, c4, a3, b5, a7, c8, d6, e8, c7, a8, b6, d7, e5, c6, b8, a6, b4, d5, e7, g8, f6, e4, g3, h1, 
Complete tour: 136
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, g5, h7, f8, g6, h8, f7, d8, b7, a5, c4, a3, b5, a7, c8, e7, g8, f6, d5, b4, a6, b8, c6, e5, d7, b6, a8, c7, e8, d6, e4, g3, h1, 
Complete tour: 137
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, g5, h7, f8, g6, h8, f7, d8, b7, a5, c4, a3, b5, a7, c8, e7, g8, f6, d7, e5, c6, b8, a6, b4, d5, b6, a8, c7, e8, d6, e4, g3, h1, 
Complete tour: 138
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, g5, h7, f8, g6, h8, f7, d8, b7, a5, c6, b4, d5, b6, a8, c7, a6, b8, d7, e5, c4, a3, b5, a7, c8, e7, g8, f6, e8, d6, e4, g3, h1, 
Complete tour: 139
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, g5, h7, f8, g6, h8, f7, d8, b7, a5, c6, b4, a6, b8, d7, e5, c4, a3, b5, a7, c8, b6, a8, c7, d5, e7, g8, f6, e8, d6, e4, g3, h1, 
Complete tour: 140
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, g5, h7, f8, g6, h8, f7, d8, b7, a5, c6, b4, a6, b8, d7, e5, c4, a3, b5, a7, c8, d6, e8, c7, a8, b6, d5, e7, g8, f6, e4, g3, h1, 
Complete tour: 141
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, g5, h7, f8, g6, h8, f7, d8, b7, a5, c6, b4, a6, b8, d7, e5, c4, a3, b5, a7, c8, e7, g8, f6, d5, b6, a8, c7, e8, d6, e4, g3, h1, 
Complete tour: 142
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, g5, h7, f8, g6, h8, f7, d8, b7, a5, c6, e5, c4, a3, b5, a7, c8, d6, e8, c7, a8, b6, d7, b8, a6, b4, d5, e7, g8, f6, e4, g3, h1, 
Complete tour: 143
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, g5, h7, f8, g6, h8, f7, d8, b7, a5, c6, e5, c4, a3, b5, a7, c8, e7, g8, f6, d5, b4, a6, b8, d7, b6, a8, c7, e8, d6, e4, g3, h1, 
Complete tour: 144
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, g5, h7, f8, g6, h8, f7, d8, b7, a5, c6, e5, c4, a3, b5, a7, c8, e7, g8, f6, d7, b8, a6, b4, d5, b6, a8, c7, e8, d6, e4, g3, h1, 
Complete tour: 145
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, g5, h7, f8, g6, h8, f7, d8, b7, a5, c6, e5, d7, b8, a6, b4, d5, f6, g8, e7, c8, a7, b5, a3, c4, b6, a8, c7, e8, d6, e4, g3, h1, 
Complete tour: 146
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, g5, h7, f8, g6, h8, f7, d8, b7, a5, c6, e5, d7, b8, a6, b4, d5, e7, g8, f6, e8, c7, a8, b6, c4, a3, b5, a7, c8, d6, e4, g3, h1, 
Complete tour: 147
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, g5, h7, f8, g6, h8, f7, d8, b7, a5, c6, e5, d7, b8, a6, b4, d5, e7, g8, f6, e8, c7, a8, b6, c8, a7, b5, a3, c4, d6, e4, g3, h1, 
Complete tour: 148
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, g5, h7, f8, g6, h8, f7, d8, b7, a5, c6, e5, d7, b8, a6, b4, d5, c7, a8, b6, c4, a3, b5, a7, c8, e7, g8, f6, e8, d6, e4, g3, h1, 
Complete tour: 149
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, g5, h7, f8, g6, h8, f7, d8, b7, a5, c6, e5, d7, b8, a6, b4, d5, b6, a8, c7, e8, d6, c4, a3, b5, a7, c8, e7, g8, f6, e4, g3, h1, 
Complete tour: 150
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, g5, h7, f8, g6, h8, f7, d8, b7, a5, c6, e5, d7, b8, a6, b4, d5, b6, a8, c7, e8, f6, g8, e7, c8, a7, b5, a3, c4, d6, e4, g3, h1, 
Complete tour: 151
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, g5, h7, f8, g6, h8, f7, d8, b7, a5, c6, e7, g8, f6, d5, b4, a6, b8, d7, e5, c4, a3, b5, a7, c8, b6, a8, c7, e8, d6, e4, g3, h1, 
Complete tour: 152
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, g5, h7, f8, g6, h8, f7, d8, b7, a5, c6, e7, g8, f6, e8, c7, a8, b6, d5, b4, a6, b8, d7, e5, c4, a3, b5, a7, c8, d6, e4, g3, h1, 
Complete tour: 153
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, g5, h7, f8, g6, h8, f7, d8, b7, a5, c6, b8, a6, b4, d5, f6, g8, e7, c8, a7, b5, a3, c4, e5, d7, b6, a8, c7, e8, d6, e4, g3, h1, 
Complete tour: 154
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, g5, h7, f8, g6, h8, f7, d8, b7, a5, c6, b8, a6, b4, d5, e7, g8, f6, e8, c7, a8, b6, d7, e5, c4, a3, b5, a7, c8, d6, e4, g3, h1, 
Complete tour: 155
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, g5, h7, f8, g6, h8, f7, d8, b7, a5, c6, b8, a6, b4, d5, e7, g8, f6, d7, e5, c4, a3, b5, a7, c8, b6, a8, c7, e8, d6, e4, g3, h1, 
Complete tour: 156
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, g5, h7, f8, g6, h8, f7, d8, b7, a5, c6, b8, a6, b4, d5, c7, a8, b6, d7, e5, c4, a3, b5, a7, c8, e7, g8, f6, e8, d6, e4, g3, h1, 
Complete tour: 157
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, g5, h7, f8, g6, h8, f7, d8, b7, a5, c6, b8, d7, e5, c4, a3, b5, a7, c8, b6, a8, c7, a6, b4, d5, e7, g8, f6, e8, d6, e4, g3, h1, 
Complete tour: 158
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, g5, h7, f8, g6, h8, f7, d8, b7, a5, c6, a7, b5, a3, c4, e5, d7, b8, a6, b4, d5, f6, g8, e7, c8, b6, a8, c7, e8, d6, e4, g3, h1, 
Complete tour: 159
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, g5, h7, f8, g6, h8, f7, d8, b7, a5, c6, a7, b5, a3, c4, e5, d7, b8, a6, b4, d5, e7, g8, f6, e8, c7, a8, b6, c8, d6, e4, g3, h1, 
Complete tour: 160
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, g5, h7, f8, g6, h8, f7, d8, b7, a5, c6, a7, b5, a3, c4, e5, d7, b8, a6, b4, d5, c7, a8, b6, c8, e7, g8, f6, e8, d6, e4, g3, h1, 
Complete tour: 161
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, g5, h7, f8, g6, h8, f7, d8, b7, a5, c6, a7, b5, a3, c4, e5, d7, b8, a6, b4, d5, b6, a8, c7, e8, d6, c8, e7, g8, f6, e4, g3, h1, 
Complete tour: 162
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, g5, h7, f8, g6, h8, f7, d8, b7, a5, c6, a7, b5, a3, c4, e5, d7, b8, a6, b4, d5, b6, a8, c7, e8, f6, g8, e7, c8, d6, e4, g3, h1, 
Complete tour: 163
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, g5, h7, f8, g6, h8, f7, d8, b7, a5, c6, a7, c8, b6, a8, c7, b5, a3, c4, e5, d7, b8, a6, b4, d5, e7, g8, f6, e8, d6, e4, g3, h1, 
Complete tour: 164
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, g5, h7, f8, g6, h8, f7, d8, b7, a5, c6, a7, c8, b6, a8, c7, e8, d6, b5, a3, c4, e5, d7, b8, a6, b4, d5, e7, g8, f6, e4, g3, h1, 
Complete tour: 165
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, g5, h7, f8, g6, h8, f7, d8, b7, a5, c6, a7, c8, b6, a8, c7, e8, f6, g8, e7, d5, b4, a6, b8, d7, e5, c4, a3, b5, d6, e4, g3, h1, 
Complete tour: 166
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, g5, h7, f8, g6, h8, f7, d8, b7, a5, c6, a7, c8, e7, g8, f6, e8, c7, a8, b6, d5, b4, a6, b8, d7, e5, c4, a3, b5, d6, e4, g3, h1, 
Complete tour: 167
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, g5, h7, f8, g6, h8, f7, d8, b7, d6, e8, c7, a8, b6, d5, b4, a6, b8, d7, e5, c6, a5, c4, a3, b5, a7, c8, e7, g8, f6, e4, g3, h1, 
Complete tour: 168
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, g5, h7, f8, g6, h8, f7, d8, b7, d6, e8, c7, a8, b6, c8, a7, b5, a3, c4, a5, c6, e5, d7, b8, a6, b4, d5, e7, g8, f6, e4, g3, h1, 
Complete tour: 169
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, g5, h7, f8, g6, h8, f7, d8, c6, a5, b7, d6, e8, c7, a8, b6, d5, b4, a6, b8, d7, e5, c4, a3, b5, a7, c8, e7, g8, f6, e4, g3, h1, 
Complete tour: 170
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, g5, h7, f8, g6, h8, f7, d8, c6, a5, b7, d6, e8, c7, a8, b6, c8, a7, b5, a3, c4, e5, d7, b8, a6, b4, d5, e7, g8, f6, e4, g3, h1, 
Complete tour: 171
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, g5, h7, f8, g6, h8, f7, d8, c6, e5, d7, b8, a6, b4, d5, e7, g8, f6, e8, c7, a8, b6, c8, a7, b5, a3, c4, a5, b7, d6, e4, g3, h1, 
Complete tour: 172
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, g5, h7, f8, g6, h8, f7, d8, c6, e5, d7, b8, a6, b4, d5, b6, a8, c7, e8, d6, b7, a5, c4, a3, b5, a7, c8, e7, g8, f6, e4, g3, h1, 
Complete tour: 173
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, g5, h7, f8, g6, h8, f7, d8, c6, e5, d7, b8, a6, b4, d5, b6, a8, c7, e8, f6, g8, e7, c8, a7, b5, a3, c4, a5, b7, d6, e4, g3, h1, 
Complete tour: 174
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, g5, f7, h8, g6, e5, d7, f8, h7, f6, g8, e7, d5, b4, a6, b8, c6, d8, b7, a5, c4, a3, b5, a7, c8, b6, a8, c7, e8, d6, e4, g3, h1, 
Complete tour: 175
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, g5, f7, h8, g6, e5, d7, f8, h7, f6, g8, e7, c8, a7, b5, a3, c4, a5, b7, d8, c6, b8, a6, b4, d5, b6, a8, c7, e8, d6, e4, g3, h1, 
Complete tour: 176
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, g5, f7, h8, g6, e5, c6, d8, b7, a5, c4, a3, b5, a7, c8, e7, g8, f6, h7, f8, d7, b8, a6, b4, d5, b6, a8, c7, e8, d6, e4, g3, h1, 
Complete tour: 177
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, g5, f7, h8, g6, f8, h7, f6, g8, e7, d5, b4, a6, b8, d7, e5, c6, d8, b7, a5, c4, a3, b5, a7, c8, b6, a8, c7, e8, d6, e4, g3, h1, 
Complete tour: 178
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, g5, f7, h8, g6, f8, h7, f6, g8, e7, c8, a7, b5, a3, c4, a5, b7, d8, c6, e5, d7, b8, a6, b4, d5, b6, a8, c7, e8, d6, e4, g3, h1, 
