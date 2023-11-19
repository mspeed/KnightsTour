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
Complete tour: 179
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, f8, d7, b6, a8, c7, e8, d6, c8, a7, b5, a3, c4, e5, g6, h8, f7, d8, b7, a5, c6, b8, a6, b4, d5, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 180
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, f8, d7, b6, a8, c7, e8, d6, c8, a7, b5, a3, c4, a5, b7, d8, f7, h8, g6, e5, c6, b8, a6, b4, d5, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 181
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, f8, d7, e5, c4, a3, b5, a7, c8, d6, e8, c7, a8, b6, d5, b4, a6, b8, c6, a5, b7, d8, f7, h8, g6, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 182
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, f8, d7, e5, g6, h8, f7, d6, e8, c7, a8, b6, d5, b4, a6, b8, c6, d8, b7, a5, c4, a3, b5, a7, c8, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 183
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, f8, d7, e5, g6, h8, f7, d6, e8, c7, a8, b6, c8, a7, b5, a3, c4, a5, b7, d8, c6, b8, a6, b4, d5, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 184
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, f8, d7, e5, g6, h8, f7, g5, h7, f6, g8, e7, d5, b4, a6, b8, c6, d8, b7, a5, c4, a3, b5, a7, c8, b6, a8, c7, e8, d6, e4, g3, h1, 
Complete tour: 185
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, f8, d7, e5, g6, h8, f7, g5, h7, f6, g8, e7, c8, a7, b5, a3, c4, a5, b7, d8, c6, b8, a6, b4, d5, b6, a8, c7, e8, d6, e4, g3, h1, 
Complete tour: 186
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, f8, d7, e5, g6, h8, f7, d8, b7, a5, c4, a3, b5, d6, e8, c7, a8, b6, d5, b4, a6, b8, c6, a7, c8, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 187
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, f8, d7, e5, g6, h8, f7, d8, b7, a5, c4, a3, b5, d6, e8, c7, a8, b6, c8, a7, c6, b8, a6, b4, d5, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 188
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, f8, d7, e5, g6, h8, f7, d8, b7, a5, c4, a3, b5, a7, c6, b8, a6, b4, d5, b6, a8, c7, e8, d6, c8, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 189
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, f8, d7, e5, g6, h8, f7, d8, b7, a5, c4, a3, b5, a7, c8, d6, e8, c7, a8, b6, d5, b4, a6, b8, c6, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 190
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, f8, d7, e5, g6, h8, f7, d8, b7, a5, c6, b8, a6, b4, d5, b6, a8, c7, e8, d6, c4, a3, b5, a7, c8, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 191
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, f8, d7, e5, g6, h8, f7, d8, b7, d6, e8, c7, a8, b6, d5, b4, a6, b8, c6, a5, c4, a3, b5, a7, c8, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 192
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, f8, d7, e5, g6, h8, f7, d8, b7, d6, e8, c7, a8, b6, c8, a7, b5, a3, c4, a5, c6, b8, a6, b4, d5, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 193
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, f8, d7, e5, g6, h8, f7, d8, c6, b8, a6, b4, d5, b6, a8, c7, e8, d6, b7, a5, c4, a3, b5, a7, c8, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 194
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, f8, d7, e5, c6, b8, a6, b4, d5, b6, a8, c7, e8, d6, c8, a7, b5, a3, c4, a5, b7, d8, f7, h8, g6, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 195
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, f8, d7, b8, a6, b4, d5, e7, g8, f6, h7, g5, f7, h8, g6, e5, c6, d8, b7, a5, c4, a3, b5, a7, c8, b6, a8, c7, e8, d6, e4, g3, h1, 
Complete tour: 196
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, f8, d7, b8, a6, b4, d5, b6, a8, c7, e8, d6, b5, a3, c4, e5, g6, h8, f7, d8, b7, a5, c6, a7, c8, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 197
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, f8, d7, b8, a6, b4, d5, b6, a8, c7, e8, d6, b5, a3, c4, a5, b7, d8, f7, h8, g6, e5, c6, a7, c8, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 198
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, f8, d7, b8, a6, b4, d5, b6, a8, c7, e8, d6, f7, h8, g6, e5, c6, d8, b7, a5, c4, a3, b5, a7, c8, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 199
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, f8, d7, b8, a6, b4, d5, b6, a8, c7, e8, d6, c8, a7, b5, a3, c4, e5, g6, h8, f7, d8, b7, a5, c6, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 200
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, f8, d7, b8, a6, b4, d5, b6, a8, c7, e8, d6, c8, a7, b5, a3, c4, e5, c6, a5, b7, d8, f7, h8, g6, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 201
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, f8, d7, b8, a6, b4, d5, b6, a8, c7, e8, d6, c8, a7, b5, a3, c4, a5, b7, d8, c6, e5, f7, h8, g6, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 202
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, f8, d7, b8, a6, b4, d5, b6, a8, c7, e8, d6, c8, a7, b5, a3, c4, a5, b7, d8, f7, h8, g6, e5, c6, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 203
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, f8, d7, b8, a6, b4, d5, b6, a8, c7, e8, d6, b7, a5, c6, d8, f7, h8, g6, e5, c4, a3, b5, a7, c8, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 204
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, f8, d7, b8, a6, b4, d5, b6, a8, c7, e8, d6, b7, d8, f7, h8, g6, e5, c6, a5, c4, a3, b5, a7, c8, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 205
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, f8, d7, b8, a6, b4, c6, a5, b7, d8, f7, h8, g6, e5, c4, a3, b5, a7, c8, d6, e8, c7, a8, b6, d5, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 206
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, f8, d7, b8, a6, b4, c6, e5, g6, h8, f7, d8, b7, a5, c4, a3, b5, a7, c8, d6, e8, c7, a8, b6, d5, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 207
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, f8, g6, h8, f7, d6, e8, c7, a8, b6, d5, b4, a6, b8, d7, e5, c6, d8, b7, a5, c4, a3, b5, a7, c8, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 208
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, f8, g6, h8, f7, d6, e8, c7, a8, b6, c8, a7, b5, a3, c4, a5, b7, d8, c6, e5, d7, b8, a6, b4, d5, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 209
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, f8, g6, h8, f7, e5, d7, b6, a8, c7, e8, d6, c8, a7, b5, a3, c4, a5, b7, d8, c6, b8, a6, b4, d5, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 210
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, f8, g6, h8, f7, e5, d7, b8, a6, b4, d5, b6, a8, c7, e8, d6, b5, a3, c4, a5, b7, d8, c6, a7, c8, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 211
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, f8, g6, h8, f7, e5, d7, b8, a6, b4, d5, b6, a8, c7, e8, d6, c8, a7, b5, a3, c4, a5, b7, d8, c6, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 212
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, f8, g6, h8, f7, e5, d7, b8, a6, b4, d5, b6, a8, c7, e8, d6, b7, d8, c6, a5, c4, a3, b5, a7, c8, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 213
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, f8, g6, h8, f7, e5, d7, b8, a6, b4, c6, d8, b7, a5, c4, a3, b5, a7, c8, d6, e8, c7, a8, b6, d5, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 214
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, f8, g6, h8, f7, e5, c6, d8, b7, a5, c4, a3, b5, a7, c8, d6, e8, c7, a8, b6, d7, b8, a6, b4, d5, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 215
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, f8, g6, h8, f7, g5, h7, f6, g8, e7, d5, b4, a6, b8, d7, e5, c6, d8, b7, a5, c4, a3, b5, a7, c8, b6, a8, c7, e8, d6, e4, g3, h1, 
Complete tour: 216
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, f8, g6, h8, f7, g5, h7, f6, g8, e7, c8, a7, b5, a3, c4, a5, b7, d8, c6, e5, d7, b8, a6, b4, d5, b6, a8, c7, e8, d6, e4, g3, h1, 
Complete tour: 217
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, f8, g6, h8, f7, d8, b7, a5, c4, a3, b5, d6, e8, c7, a8, b6, d5, b4, a6, b8, d7, e5, c6, a7, c8, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 218
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, f8, g6, h8, f7, d8, b7, a5, c4, a3, b5, d6, e8, c7, a8, b6, c8, a7, c6, e5, d7, b8, a6, b4, d5, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 219
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, f8, g6, h8, f7, d8, b7, a5, c4, a3, b5, a7, c6, e5, d7, b8, a6, b4, d5, b6, a8, c7, e8, d6, c8, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 220
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, f8, g6, h8, f7, d8, b7, a5, c4, a3, b5, a7, c8, d6, e8, c7, a8, b6, d5, b4, a6, b8, d7, e5, c6, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 221
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, f8, g6, h8, f7, d8, b7, a5, c4, a3, b5, a7, c8, d6, e8, c7, a8, b6, d7, e5, c6, b8, a6, b4, d5, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 222
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, f8, g6, h8, f7, d8, b7, a5, c6, b4, a6, b8, d7, e5, c4, a3, b5, a7, c8, d6, e8, c7, a8, b6, d5, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 223
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, f8, g6, h8, f7, d8, b7, a5, c6, e5, c4, a3, b5, a7, c8, d6, e8, c7, a8, b6, d7, b8, a6, b4, d5, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 224
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, f8, g6, h8, f7, d8, b7, a5, c6, e5, d7, b8, a6, b4, d5, b6, a8, c7, e8, d6, c4, a3, b5, a7, c8, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 225
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, f8, g6, h8, f7, d8, b7, a5, c6, a7, b5, a3, c4, e5, d7, b8, a6, b4, d5, b6, a8, c7, e8, d6, c8, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 226
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, f8, g6, h8, f7, d8, b7, a5, c6, a7, c8, b6, a8, c7, e8, d6, b5, a3, c4, e5, d7, b8, a6, b4, d5, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 227
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, f8, g6, h8, f7, d8, b7, d6, e8, c7, a8, b6, d5, b4, a6, b8, d7, e5, c6, a5, c4, a3, b5, a7, c8, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 228
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, f8, g6, h8, f7, d8, b7, d6, e8, c7, a8, b6, c8, a7, b5, a3, c4, a5, c6, e5, d7, b8, a6, b4, d5, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 229
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, f8, g6, h8, f7, d8, c6, a5, b7, d6, e8, c7, a8, b6, d5, b4, a6, b8, d7, e5, c4, a3, b5, a7, c8, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 230
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, f8, g6, h8, f7, d8, c6, a5, b7, d6, e8, c7, a8, b6, c8, a7, b5, a3, c4, e5, d7, b8, a6, b4, d5, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 231
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, f8, g6, h8, f7, d8, c6, e5, d7, b8, a6, b4, d5, b6, a8, c7, e8, d6, b7, a5, c4, a3, b5, a7, c8, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 232
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, f8, h7, f6, g8, e7, c6, d8, b7, a5, c4, a3, b5, a7, c8, d6, e8, c7, a8, b6, d5, b4, a6, b8, d7, e5, g6, h8, f7, g5, e4, g3, h1, 
Complete tour: 233
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, f8, h7, f6, g8, e7, d5, b4, a6, b8, c6, d8, b7, a5, c4, a3, b5, a7, c8, d6, e8, c7, a8, b6, d7, e5, g6, h8, f7, g5, e4, g3, h1, 
Complete tour: 234
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, f8, h7, f6, g8, e7, d5, b4, a6, b8, d7, b6, a8, c7, e8, d6, c8, a7, b5, a3, c4, a5, b7, d8, c6, e5, g6, h8, f7, g5, e4, g3, h1, 
Complete tour: 235
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, f8, h7, f6, g8, e7, d5, b6, a8, c7, e8, d6, c8, a7, b5, a3, c4, a5, b7, d8, c6, b4, a6, b8, d7, e5, g6, h8, f7, g5, e4, g3, h1, 
Complete tour: 236
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, f8, h7, f6, g8, e7, c8, a7, b5, a3, c4, a5, c6, d8, b7, d6, e8, c7, a8, b6, d5, b4, a6, b8, d7, e5, g6, h8, f7, g5, e4, g3, h1, 
Complete tour: 237
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, f8, h7, f6, g8, e7, c8, a7, c6, d8, b7, a5, c4, a3, b5, d6, e8, c7, a8, b6, d5, b4, a6, b8, d7, e5, g6, h8, f7, g5, e4, g3, h1, 
Complete tour: 238
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, f8, h7, g5, f7, h8, g6, e5, d7, b6, a8, c7, d5, b4, a6, b8, c6, d8, b7, a5, c4, a3, b5, a7, c8, e7, g8, f6, e8, d6, e4, g3, h1, 
Complete tour: 239
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, f8, h7, g5, f7, h8, g6, e5, d7, b6, a8, c7, e8, d6, c8, a7, b5, a3, c4, a5, b7, d8, c6, b8, a6, b4, d5, e7, g8, f6, e4, g3, h1, 
Complete tour: 240
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, f8, h7, g5, f7, h8, g6, e5, d7, b6, a8, c7, e8, f6, g8, e7, d5, b4, a6, b8, c6, d8, b7, a5, c4, a3, b5, a7, c8, d6, e4, g3, h1, 
Complete tour: 241
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, f8, h7, g5, f7, h8, g6, e5, d7, f6, g8, e7, d5, b4, a6, b8, c6, d8, b7, a5, c4, a3, b5, a7, c8, b6, a8, c7, e8, d6, e4, g3, h1, 
Complete tour: 242
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, f8, h7, g5, f7, h8, g6, e5, d7, f6, g8, e7, c8, a7, b5, a3, c4, a5, b7, d8, c6, b8, a6, b4, d5, b6, a8, c7, e8, d6, e4, g3, h1, 
Complete tour: 243
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, f8, h7, g5, f7, h8, g6, e5, d7, b8, a6, b4, d5, f6, g8, e7, c6, d8, b7, a5, c4, a3, b5, a7, c8, b6, a8, c7, e8, d6, e4, g3, h1, 
Complete tour: 244
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, f8, h7, g5, f7, h8, g6, e5, d7, b8, a6, b4, d5, e7, g8, f6, e8, c7, a8, b6, c8, a7, b5, a3, c4, a5, c6, d8, b7, d6, e4, g3, h1, 
Complete tour: 245
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, f8, h7, g5, f7, h8, g6, e5, d7, b8, a6, b4, d5, e7, g8, f6, e8, c7, a8, b6, c8, a7, c6, d8, b7, a5, c4, a3, b5, d6, e4, g3, h1, 
Complete tour: 246
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, f8, h7, g5, f7, h8, g6, e5, d7, b8, a6, b4, d5, c7, a8, b6, c8, a7, b5, a3, c4, a5, b7, d8, c6, e7, g8, f6, e8, d6, e4, g3, h1, 
Complete tour: 247
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, f8, h7, g5, f7, h8, g6, e5, d7, b8, a6, b4, d5, b6, a8, c7, b5, a3, c4, a5, b7, d8, c6, a7, c8, e7, g8, f6, e8, d6, e4, g3, h1, 
Complete tour: 248
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, f8, h7, g5, f7, h8, g6, e5, d7, b8, a6, b4, d5, b6, a8, c7, e8, d6, b5, a3, c4, a5, b7, d8, c6, a7, c8, e7, g8, f6, e4, g3, h1, 
Complete tour: 249
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, f8, h7, g5, f7, h8, g6, e5, d7, b8, a6, b4, d5, b6, a8, c7, e8, d6, c8, a7, b5, a3, c4, a5, b7, d8, c6, e7, g8, f6, e4, g3, h1, 
Complete tour: 250
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, f8, h7, g5, f7, h8, g6, e5, d7, b8, a6, b4, d5, b6, a8, c7, e8, d6, b7, d8, c6, a5, c4, a3, b5, a7, c8, e7, g8, f6, e4, g3, h1, 
Complete tour: 251
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, f8, h7, g5, f7, h8, g6, e5, d7, b8, a6, b4, d5, b6, a8, c7, e8, f6, g8, e7, c6, d8, b7, a5, c4, a3, b5, a7, c8, d6, e4, g3, h1, 
Complete tour: 252
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, f8, h7, g5, f7, h8, g6, e5, d7, b8, a6, b4, d5, b6, a8, c7, e8, f6, g8, e7, c8, a7, b5, a3, c4, a5, c6, d8, b7, d6, e4, g3, h1, 
Complete tour: 253
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, f8, h7, g5, f7, h8, g6, e5, d7, b8, a6, b4, d5, b6, a8, c7, e8, f6, g8, e7, c8, a7, c6, d8, b7, a5, c4, a3, b5, d6, e4, g3, h1, 
Complete tour: 254
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, f8, h7, g5, f7, h8, g6, e5, d7, b8, a6, b4, c6, d8, b7, a5, c4, a3, b5, a7, c8, b6, a8, c7, d5, e7, g8, f6, e8, d6, e4, g3, h1, 
Complete tour: 255
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, f8, h7, g5, f7, h8, g6, e5, d7, b8, a6, b4, c6, d8, b7, a5, c4, a3, b5, a7, c8, d6, e8, c7, a8, b6, d5, e7, g8, f6, e4, g3, h1, 
Complete tour: 256
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, f8, h7, g5, f7, h8, g6, e5, d7, b8, a6, b4, c6, d8, b7, a5, c4, a3, b5, a7, c8, e7, g8, f6, d5, b6, a8, c7, e8, d6, e4, g3, h1, 
Complete tour: 257
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, f8, h7, g5, f7, h8, g6, e5, d7, b8, a6, c7, a8, b6, d5, b4, c6, d8, b7, a5, c4, a3, b5, a7, c8, e7, g8, f6, e8, d6, e4, g3, h1, 
Complete tour: 258
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, f8, h7, g5, f7, h8, g6, e5, d7, b8, a6, c7, a8, b6, c8, a7, b5, a3, c4, a5, b7, d8, c6, b4, d5, e7, g8, f6, e8, d6, e4, g3, h1, 
Complete tour: 259
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, f8, h7, g5, f7, h8, g6, e5, d7, b8, c6, d8, b7, a5, c4, a3, b5, a7, c8, b6, a8, c7, a6, b4, d5, e7, g8, f6, e8, d6, e4, g3, h1, 
Complete tour: 260
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, f8, h7, g5, f7, h8, g6, e5, c6, d8, b7, a5, c4, a3, b5, a7, c8, d6, e8, c7, a8, b6, d7, b8, a6, b4, d5, e7, g8, f6, e4, g3, h1, 
Complete tour: 261
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, f8, h7, g5, f7, h8, g6, e5, c6, d8, b7, a5, c4, a3, b5, a7, c8, e7, g8, f6, d5, b4, a6, b8, d7, b6, a8, c7, e8, d6, e4, g3, h1, 
Complete tour: 262
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, f8, h7, g5, f7, h8, g6, e5, c6, d8, b7, a5, c4, a3, b5, a7, c8, e7, g8, f6, d7, b8, a6, b4, d5, b6, a8, c7, e8, d6, e4, g3, h1, 
Complete tour: 263
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, f8, h7, g5, f7, h8, g6, e7, g8, f6, d5, b4, a6, b8, d7, e5, c6, d8, b7, a5, c4, a3, b5, a7, c8, b6, a8, c7, e8, d6, e4, g3, h1, 
Complete tour: 264
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, f8, h7, g5, f7, h8, g6, e7, g8, f6, e8, c7, a8, b6, d5, b4, a6, b8, d7, e5, c6, d8, b7, a5, c4, a3, b5, a7, c8, d6, e4, g3, h1, 
Complete tour: 265
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c4, a3, b5, d6, f7, h8, g6, e5, c6, a7, c8, b6, a8, c7, e8, f6, g8, e7, d5, b4, a6, b8, d7, f8, h7, g5, e4, g3, h1, 
Complete tour: 266
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c4, a3, b5, d6, f7, h8, g6, e5, c6, a7, c8, e7, g8, f6, e8, c7, a8, b6, d5, b4, a6, b8, d7, f8, h7, g5, e4, g3, h1, 
Complete tour: 267
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c4, a3, b5, d6, e8, c7, a8, b6, d5, b4, a6, b8, c6, a7, c8, e7, g8, f6, h7, f8, d7, e5, g6, h8, f7, g5, e4, g3, h1, 
Complete tour: 268
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c4, a3, b5, d6, e8, c7, a8, b6, d5, b4, a6, b8, c6, a7, c8, e7, g8, f6, d7, e5, f7, h8, g6, f8, h7, g5, e4, g3, h1, 
Complete tour: 269
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c4, a3, b5, d6, e8, c7, a8, b6, d5, b4, a6, b8, d7, e5, c6, a7, c8, e7, g8, f6, h7, f8, g6, h8, f7, g5, e4, g3, h1, 
Complete tour: 270
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c4, a3, b5, d6, e8, c7, a8, b6, d5, b4, a6, b8, d7, f6, g8, e7, c8, a7, c6, e5, f7, h8, g6, f8, h7, g5, e4, g3, h1, 
Complete tour: 271
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c4, a3, b5, d6, e8, c7, a8, b6, d5, b4, a6, b8, d7, f8, g6, h8, f7, e5, c6, a7, c8, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 272
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c4, a3, b5, d6, e8, c7, a8, b6, d5, b4, a6, b8, d7, f8, h7, f6, g8, e7, c8, a7, c6, e5, g6, h8, f7, g5, e4, g3, h1, 
Complete tour: 273
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c4, a3, b5, d6, e8, c7, a8, b6, d5, b4, a6, b8, d7, f8, h7, g5, f7, h8, g6, e5, c6, a7, c8, e7, g8, f6, e4, g3, h1, 
Complete tour: 274
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c4, a3, b5, d6, e8, c7, a8, b6, d5, f6, g8, e7, c8, a7, c6, b4, a6, b8, d7, e5, f7, h8, g6, f8, h7, g5, e4, g3, h1, 
Complete tour: 275
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c4, a3, b5, d6, e8, c7, a8, b6, d7, b8, a6, b4, d5, f6, g8, e7, c8, a7, c6, e5, f7, h8, g6, f8, h7, g5, e4, g3, h1, 
Complete tour: 276
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c4, a3, b5, d6, e8, c7, a8, b6, c8, a7, c6, e5, g6, h8, f7, g5, h7, f8, d7, b8, a6, b4, d5, e7, g8, f6, e4, g3, h1, 
Complete tour: 277
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c4, a3, b5, d6, e8, c7, a8, b6, c8, a7, c6, e5, f7, h8, g6, f8, d7, b8, a6, b4, d5, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 278
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c4, a3, b5, d6, e8, c7, a8, b6, c8, a7, c6, e5, f7, h8, g6, e7, g8, f6, d5, b4, a6, b8, d7, f8, h7, g5, e4, g3, h1, 
Complete tour: 279
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c4, a3, b5, d6, e8, c7, a8, b6, c8, a7, c6, e5, d7, b8, a6, b4, d5, e7, g8, f6, h7, f8, g6, h8, f7, g5, e4, g3, h1, 
Complete tour: 280
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c4, a3, b5, d6, e8, c7, a8, b6, c8, a7, c6, e7, g8, f6, d5, b4, a6, b8, d7, e5, f7, h8, g6, f8, h7, g5, e4, g3, h1, 
Complete tour: 281
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c4, a3, b5, d6, e8, c7, a8, b6, c8, a7, c6, b8, a6, b4, d5, f6, g8, e7, g6, h8, f7, e5, d7, f8, h7, g5, e4, g3, h1, 
Complete tour: 282
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c4, a3, b5, d6, e8, c7, a8, b6, c8, a7, c6, b8, a6, b4, d5, e7, g8, f6, h7, f8, d7, e5, g6, h8, f7, g5, e4, g3, h1, 
Complete tour: 283
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c4, a3, b5, d6, e8, c7, a8, b6, c8, a7, c6, b8, a6, b4, d5, e7, g8, f6, d7, e5, f7, h8, g6, f8, h7, g5, e4, g3, h1, 
Complete tour: 284
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c4, a3, b5, d6, e8, f6, g8, e7, c6, a7, c8, b6, a8, c7, d5, b4, a6, b8, d7, e5, f7, h8, g6, f8, h7, g5, e4, g3, h1, 
Complete tour: 285
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c4, a3, b5, d6, e8, f6, g8, e7, d5, b4, c6, a7, c8, b6, a8, c7, a6, b8, d7, e5, f7, h8, g6, f8, h7, g5, e4, g3, h1, 
Complete tour: 286
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c4, a3, b5, d6, e8, f6, g8, e7, d5, b4, a6, c7, a8, b6, c8, a7, c6, b8, d7, e5, f7, h8, g6, f8, h7, g5, e4, g3, h1, 
Complete tour: 287
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c4, a3, b5, d6, e8, f6, g8, e7, d5, c7, a8, b6, c8, a7, c6, b4, a6, b8, d7, e5, f7, h8, g6, f8, h7, g5, e4, g3, h1, 
Complete tour: 288
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c4, a3, b5, d6, e8, f6, g8, e7, g6, h8, f7, e5, c6, a7, c8, b6, a8, c7, d5, b4, a6, b8, d7, f8, h7, g5, e4, g3, h1, 
Complete tour: 289
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c4, a3, b5, d6, e8, f6, g8, e7, c8, a7, c6, b4, d5, b6, a8, c7, a6, b8, d7, e5, f7, h8, g6, f8, h7, g5, e4, g3, h1, 
Complete tour: 290
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c4, a3, b5, d6, e8, f6, g8, e7, c8, a7, c6, b8, a6, b4, d5, c7, a8, b6, d7, e5, f7, h8, g6, f8, h7, g5, e4, g3, h1, 
Complete tour: 291
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c4, a3, b5, d6, c8, a7, c6, e5, f7, h8, g6, e7, g8, f6, e8, c7, a8, b6, d5, b4, a6, b8, d7, f8, h7, g5, e4, g3, h1, 
Complete tour: 292
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c4, a3, b5, d6, c8, a7, c6, e7, g8, f6, e8, c7, a8, b6, d5, b4, a6, b8, d7, e5, f7, h8, g6, f8, h7, g5, e4, g3, h1, 
Complete tour: 293
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c4, a3, b5, d6, c8, a7, c6, b8, a6, b4, d5, e7, g8, f6, e8, c7, a8, b6, d7, e5, f7, h8, g6, f8, h7, g5, e4, g3, h1, 
Complete tour: 294
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c4, a3, b5, d6, c8, a7, c6, b8, a6, b4, d5, b6, a8, c7, e8, f6, g8, e7, g6, h8, f7, e5, d7, f8, h7, g5, e4, g3, h1, 
Complete tour: 295
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c4, a3, b5, c7, a8, b6, d5, b4, a6, b8, c6, a7, c8, d6, e8, f6, g8, e7, g6, h8, f7, e5, d7, f8, h7, g5, e4, g3, h1, 
Complete tour: 296
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c4, a3, b5, c7, a8, b6, d5, b4, a6, b8, c6, a7, c8, e7, g8, f6, e8, d6, f7, h8, g6, e5, d7, f8, h7, g5, e4, g3, h1, 
Complete tour: 297
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c4, a3, b5, c7, a8, b6, d5, b4, a6, b8, d7, e5, c6, a7, c8, e7, g8, f6, e8, d6, f7, h8, g6, f8, h7, g5, e4, g3, h1, 
Complete tour: 298
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c4, a3, b5, c7, a8, b6, d5, b4, a6, b8, d7, f8, h7, g5, f7, h8, g6, e5, c6, a7, c8, e7, g8, f6, e8, d6, e4, g3, h1, 
Complete tour: 299
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c4, a3, b5, c7, a8, b6, d5, e7, g8, f6, e8, d6, c8, a7, c6, b4, a6, b8, d7, e5, f7, h8, g6, f8, h7, g5, e4, g3, h1, 
Complete tour: 300
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c4, a3, b5, c7, a8, b6, d7, b8, a6, b4, d5, e7, g8, f6, e8, d6, c8, a7, c6, e5, f7, h8, g6, f8, h7, g5, e4, g3, h1, 
Complete tour: 301
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c4, a3, b5, c7, a8, b6, c8, a7, c6, e5, g6, h8, f7, d6, e8, f6, g8, e7, d5, b4, a6, b8, d7, f8, h7, g5, e4, g3, h1, 
Complete tour: 302
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c4, a3, b5, c7, a8, b6, c8, a7, c6, e5, g6, h8, f7, g5, h7, f8, d7, b8, a6, b4, d5, e7, g8, f6, e8, d6, e4, g3, h1, 
Complete tour: 303
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c4, a3, b5, c7, a8, b6, c8, a7, c6, e5, d7, b8, a6, b4, d5, e7, g8, f6, e8, d6, f7, h8, g6, f8, h7, g5, e4, g3, h1, 
Complete tour: 304
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c4, a3, b5, c7, a8, b6, c8, a7, c6, b8, a6, b4, d5, e7, g8, f6, e8, d6, f7, h8, g6, e5, d7, f8, h7, g5, e4, g3, h1, 
Complete tour: 305
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c4, a3, b5, a7, c6, b4, d5, e7, g8, f6, e8, d6, c8, b6, a8, c7, a6, b8, d7, e5, f7, h8, g6, f8, h7, g5, e4, g3, h1, 
Complete tour: 306
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c4, a3, b5, a7, c6, e5, g6, h8, f7, d6, e8, c7, a8, b6, c8, e7, g8, f6, d5, b4, a6, b8, d7, f8, h7, g5, e4, g3, h1, 
Complete tour: 307
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c4, a3, b5, a7, c6, e5, g6, h8, f7, d6, e8, f6, g8, e7, c8, b6, a8, c7, d5, b4, a6, b8, d7, f8, h7, g5, e4, g3, h1, 
Complete tour: 308
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c4, a3, b5, a7, c6, e5, g6, h8, f7, d6, c8, b6, a8, c7, e8, f6, g8, e7, d5, b4, a6, b8, d7, f8, h7, g5, e4, g3, h1, 
Complete tour: 309
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c4, a3, b5, a7, c6, e5, g6, h8, f7, d6, c8, e7, g8, f6, e8, c7, a8, b6, d5, b4, a6, b8, d7, f8, h7, g5, e4, g3, h1, 
Complete tour: 310
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c4, a3, b5, a7, c6, e5, g6, h8, f7, g5, h7, f8, d7, b8, a6, b4, d5, f6, g8, e7, c8, b6, a8, c7, e8, d6, e4, g3, h1, 
Complete tour: 311
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c4, a3, b5, a7, c6, e5, g6, h8, f7, g5, h7, f8, d7, b8, a6, b4, d5, e7, g8, f6, e8, c7, a8, b6, c8, d6, e4, g3, h1, 
Complete tour: 312
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c4, a3, b5, a7, c6, e5, g6, h8, f7, g5, h7, f8, d7, b8, a6, b4, d5, c7, a8, b6, c8, e7, g8, f6, e8, d6, e4, g3, h1, 
Complete tour: 313
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c4, a3, b5, a7, c6, e5, g6, h8, f7, g5, h7, f8, d7, b8, a6, b4, d5, b6, a8, c7, e8, d6, c8, e7, g8, f6, e4, g3, h1, 
Complete tour: 314
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c4, a3, b5, a7, c6, e5, g6, h8, f7, g5, h7, f8, d7, b8, a6, b4, d5, b6, a8, c7, e8, f6, g8, e7, c8, d6, e4, g3, h1, 
Complete tour: 315
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c4, a3, b5, a7, c6, e5, f7, h8, g6, f8, d7, b8, a6, b4, d5, b6, a8, c7, e8, d6, c8, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 316
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c4, a3, b5, a7, c6, e5, f7, h8, g6, e7, g8, f6, e8, d6, c8, b6, a8, c7, d5, b4, a6, b8, d7, f8, h7, g5, e4, g3, h1, 
Complete tour: 317
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c4, a3, b5, a7, c6, e5, d7, b8, a6, b4, d5, f6, g8, e7, c8, b6, a8, c7, e8, d6, f7, h8, g6, f8, h7, g5, e4, g3, h1, 
Complete tour: 318
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c4, a3, b5, a7, c6, e5, d7, b8, a6, b4, d5, e7, g8, f6, e8, c7, a8, b6, c8, d6, f7, h8, g6, f8, h7, g5, e4, g3, h1, 
Complete tour: 319
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c4, a3, b5, a7, c6, e5, d7, b8, a6, b4, d5, c7, a8, b6, c8, e7, g8, f6, e8, d6, f7, h8, g6, f8, h7, g5, e4, g3, h1, 
Complete tour: 320
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c4, a3, b5, a7, c6, e5, d7, b8, a6, b4, d5, b6, a8, c7, e8, d6, c8, e7, g8, f6, h7, f8, g6, h8, f7, g5, e4, g3, h1, 
Complete tour: 321
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c4, a3, b5, a7, c6, e5, d7, b8, a6, b4, d5, b6, a8, c7, e8, f6, g8, e7, c8, d6, f7, h8, g6, f8, h7, g5, e4, g3, h1, 
Complete tour: 322
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c4, a3, b5, a7, c6, e7, g8, f6, e8, d6, c8, b6, a8, c7, d5, b4, a6, b8, d7, e5, f7, h8, g6, f8, h7, g5, e4, g3, h1, 
Complete tour: 323
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c4, a3, b5, a7, c6, b8, a6, b4, d5, f6, g8, e7, c8, b6, a8, c7, e8, d6, f7, h8, g6, e5, d7, f8, h7, g5, e4, g3, h1, 
Complete tour: 324
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c4, a3, b5, a7, c6, b8, a6, b4, d5, f6, g8, e7, c8, d6, e8, c7, a8, b6, d7, e5, f7, h8, g6, f8, h7, g5, e4, g3, h1, 
Complete tour: 325
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c4, a3, b5, a7, c6, b8, a6, b4, d5, e7, g8, f6, e8, c7, a8, b6, c8, d6, f7, h8, g6, e5, d7, f8, h7, g5, e4, g3, h1, 
Complete tour: 326
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c4, a3, b5, a7, c6, b8, a6, b4, d5, c7, a8, b6, c8, d6, e8, f6, g8, e7, g6, h8, f7, e5, d7, f8, h7, g5, e4, g3, h1, 
Complete tour: 327
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c4, a3, b5, a7, c6, b8, a6, b4, d5, c7, a8, b6, c8, e7, g8, f6, e8, d6, f7, h8, g6, e5, d7, f8, h7, g5, e4, g3, h1, 
Complete tour: 328
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c4, a3, b5, a7, c6, b8, a6, b4, d5, b6, a8, c7, e8, d6, c8, e7, g8, f6, h7, f8, d7, e5, g6, h8, f7, g5, e4, g3, h1, 
Complete tour: 329
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c4, a3, b5, a7, c6, b8, a6, b4, d5, b6, a8, c7, e8, d6, c8, e7, g8, f6, d7, e5, f7, h8, g6, f8, h7, g5, e4, g3, h1, 
Complete tour: 330
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c4, a3, b5, a7, c6, b8, a6, b4, d5, b6, a8, c7, e8, f6, g8, e7, c8, d6, f7, h8, g6, e5, d7, f8, h7, g5, e4, g3, h1, 
Complete tour: 331
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c4, a3, b5, a7, c8, b6, a8, c7, a6, b4, d5, e7, g8, f6, e8, d6, f7, h8, g6, e5, c6, b8, d7, f8, h7, g5, e4, g3, h1, 
Complete tour: 332
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c4, a3, b5, a7, c8, b6, a8, c7, a6, b8, c6, b4, d5, e7, g8, f6, e8, d6, f7, h8, g6, e5, d7, f8, h7, g5, e4, g3, h1, 
Complete tour: 333
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c4, a3, b5, a7, c8, b6, a8, c7, a6, b8, d7, e5, c6, b4, d5, e7, g8, f6, e8, d6, f7, h8, g6, f8, h7, g5, e4, g3, h1, 
Complete tour: 334
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c4, a3, b5, a7, c8, b6, a8, c7, a6, b8, d7, f8, h7, g5, f7, h8, g6, e5, c6, b4, d5, e7, g8, f6, e8, d6, e4, g3, h1, 
Complete tour: 335
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c4, a3, b5, a7, c8, b6, a8, c7, d5, b4, a6, b8, c6, e5, d7, f8, h7, g5, f7, h8, g6, e7, g8, f6, e8, d6, e4, g3, h1, 
Complete tour: 336
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c4, a3, b5, a7, c8, b6, a8, c7, d5, b4, a6, b8, c6, e7, g8, f6, e8, d6, f7, h8, g6, e5, d7, f8, h7, g5, e4, g3, h1, 
Complete tour: 337
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c4, a3, b5, a7, c8, b6, a8, c7, d5, b4, a6, b8, d7, e5, c6, e7, g8, f6, e8, d6, f7, h8, g6, f8, h7, g5, e4, g3, h1, 
Complete tour: 338
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c4, a3, b5, a7, c8, b6, a8, c7, d5, b4, a6, b8, d7, f8, h7, g5, f7, h8, g6, e5, c6, e7, g8, f6, e8, d6, e4, g3, h1, 
Complete tour: 339
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c4, a3, b5, a7, c8, b6, a8, c7, d5, e7, g8, f6, e8, d6, f7, h8, g6, e5, c6, b4, a6, b8, d7, f8, h7, g5, e4, g3, h1, 
Complete tour: 340
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c4, a3, b5, a7, c8, b6, a8, c7, e8, d6, f7, h8, g6, e5, c6, e7, g8, f6, d5, b4, a6, b8, d7, f8, h7, g5, e4, g3, h1, 
Complete tour: 341
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c4, a3, b5, a7, c8, b6, a8, c7, e8, d6, f7, h8, g6, e5, c6, b8, a6, b4, d5, e7, g8, f6, d7, f8, h7, g5, e4, g3, h1, 
Complete tour: 342
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c4, a3, b5, a7, c8, b6, a8, c7, e8, d6, f7, h8, g6, f8, d7, e5, c6, b8, a6, b4, d5, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 343
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c4, a3, b5, a7, c8, b6, a8, c7, e8, d6, f7, h8, g6, e7, g8, f6, d5, b4, a6, b8, c6, e5, d7, f8, h7, g5, e4, g3, h1, 
Complete tour: 344
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c4, a3, b5, a7, c8, d6, f7, h8, g6, e5, c6, e7, g8, f6, e8, c7, a8, b6, d5, b4, a6, b8, d7, f8, h7, g5, e4, g3, h1, 
Complete tour: 345
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c4, a3, b5, a7, c8, d6, f7, h8, g6, e5, c6, b8, a6, b4, d5, e7, g8, f6, e8, c7, a8, b6, d7, f8, h7, g5, e4, g3, h1, 
Complete tour: 346
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c4, a3, b5, a7, c8, d6, f7, h8, g6, e7, g8, f6, e8, c7, a8, b6, d5, b4, a6, b8, c6, e5, d7, f8, h7, g5, e4, g3, h1, 
Complete tour: 347
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c4, a3, b5, a7, c8, d6, e8, c7, a8, b6, d5, b4, a6, b8, c6, e5, f7, h8, g6, e7, g8, f6, d7, f8, h7, g5, e4, g3, h1, 
Complete tour: 348
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c4, a3, b5, a7, c8, d6, e8, c7, a8, b6, d5, b4, a6, b8, c6, e5, d7, f8, h7, f6, g8, e7, g6, h8, f7, g5, e4, g3, h1, 
Complete tour: 349
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c4, a3, b5, a7, c8, d6, e8, c7, a8, b6, d5, b4, a6, b8, c6, e5, d7, f8, h7, g5, f7, h8, g6, e7, g8, f6, e4, g3, h1, 
Complete tour: 350
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c4, a3, b5, a7, c8, d6, e8, c7, a8, b6, d5, b4, a6, b8, c6, e7, g8, f6, h7, f8, d7, e5, g6, h8, f7, g5, e4, g3, h1, 
Complete tour: 351
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c4, a3, b5, a7, c8, d6, e8, c7, a8, b6, d5, b4, a6, b8, c6, e7, g8, f6, d7, e5, f7, h8, g6, f8, h7, g5, e4, g3, h1, 
Complete tour: 352
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c4, a3, b5, a7, c8, d6, e8, c7, a8, b6, d5, b4, a6, b8, d7, e5, c6, e7, g8, f6, h7, f8, g6, h8, f7, g5, e4, g3, h1, 
Complete tour: 353
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c4, a3, b5, a7, c8, d6, e8, c7, a8, b6, d5, b4, a6, b8, d7, f6, g8, e7, c6, e5, f7, h8, g6, f8, h7, g5, e4, g3, h1, 
Complete tour: 354
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c4, a3, b5, a7, c8, d6, e8, c7, a8, b6, d5, b4, a6, b8, d7, f8, g6, h8, f7, e5, c6, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 355
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c4, a3, b5, a7, c8, d6, e8, c7, a8, b6, d5, b4, a6, b8, d7, f8, h7, f6, g8, e7, c6, e5, g6, h8, f7, g5, e4, g3, h1, 
Complete tour: 356
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c4, a3, b5, a7, c8, d6, e8, c7, a8, b6, d5, b4, a6, b8, d7, f8, h7, g5, f7, h8, g6, e5, c6, e7, g8, f6, e4, g3, h1, 
Complete tour: 357
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c4, a3, b5, a7, c8, d6, e8, c7, a8, b6, d5, f6, g8, e7, c6, b4, a6, b8, d7, e5, f7, h8, g6, f8, h7, g5, e4, g3, h1, 
Complete tour: 358
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c4, a3, b5, a7, c8, d6, e8, c7, a8, b6, d5, f6, g8, e7, g6, h8, f7, e5, c6, b4, a6, b8, d7, f8, h7, g5, e4, g3, h1, 
Complete tour: 359
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c4, a3, b5, a7, c8, d6, e8, c7, a8, b6, d5, e7, g8, f6, h7, f8, d7, b8, a6, b4, c6, e5, g6, h8, f7, g5, e4, g3, h1, 
Complete tour: 360
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c4, a3, b5, a7, c8, d6, e8, c7, a8, b6, d5, e7, g8, f6, d7, b8, a6, b4, c6, e5, f7, h8, g6, f8, h7, g5, e4, g3, h1, 
Complete tour: 361
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c4, a3, b5, a7, c8, d6, e8, c7, a8, b6, d7, e5, c6, b8, a6, b4, d5, e7, g8, f6, h7, f8, g6, h8, f7, g5, e4, g3, h1, 
Complete tour: 362
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c4, a3, b5, a7, c8, d6, e8, c7, a8, b6, d7, f6, g8, e7, d5, b4, a6, b8, c6, e5, f7, h8, g6, f8, h7, g5, e4, g3, h1, 
Complete tour: 363
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c4, a3, b5, a7, c8, d6, e8, c7, a8, b6, d7, f8, g6, h8, f7, e5, c6, b8, a6, b4, d5, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 364
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c4, a3, b5, a7, c8, d6, e8, c7, a8, b6, d7, f8, h7, f6, g8, e7, d5, b4, a6, b8, c6, e5, g6, h8, f7, g5, e4, g3, h1, 
Complete tour: 365
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c4, a3, b5, a7, c8, d6, e8, c7, a8, b6, d7, f8, h7, g5, f7, h8, g6, e5, c6, b8, a6, b4, d5, e7, g8, f6, e4, g3, h1, 
Complete tour: 366
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c4, a3, b5, a7, c8, d6, e8, c7, a8, b6, d7, b8, a6, b4, d5, f6, g8, e7, c6, e5, f7, h8, g6, f8, h7, g5, e4, g3, h1, 
Complete tour: 367
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c4, a3, b5, a7, c8, d6, e8, f6, g8, e7, c6, b4, d5, b6, a8, c7, a6, b8, d7, e5, f7, h8, g6, f8, h7, g5, e4, g3, h1, 
Complete tour: 368
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c4, a3, b5, a7, c8, d6, e8, f6, g8, e7, c6, b8, a6, b4, d5, c7, a8, b6, d7, e5, f7, h8, g6, f8, h7, g5, e4, g3, h1, 
Complete tour: 369
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c4, a3, b5, a7, c8, d6, e8, f6, g8, e7, d5, b4, c6, b8, a6, c7, a8, b6, d7, e5, f7, h8, g6, f8, h7, g5, e4, g3, h1, 
Complete tour: 370
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c4, a3, b5, a7, c8, d6, e8, f6, g8, e7, d5, b4, a6, c7, a8, b6, d7, b8, c6, e5, f7, h8, g6, f8, h7, g5, e4, g3, h1, 
Complete tour: 371
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c4, a3, b5, a7, c8, d6, e8, f6, g8, e7, d5, c7, a8, b6, d7, b8, a6, b4, c6, e5, f7, h8, g6, f8, h7, g5, e4, g3, h1, 
Complete tour: 372
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c4, a3, b5, a7, c8, d6, e8, f6, g8, e7, d5, b6, a8, c7, a6, b4, c6, b8, d7, e5, f7, h8, g6, f8, h7, g5, e4, g3, h1, 
Complete tour: 373
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c4, a3, b5, a7, c8, d6, e8, f6, g8, e7, g6, h8, f7, e5, c6, b4, d5, b6, a8, c7, a6, b8, d7, f8, h7, g5, e4, g3, h1, 
Complete tour: 374
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c4, a3, b5, a7, c8, d6, e8, f6, g8, e7, g6, h8, f7, e5, c6, b8, a6, b4, d5, c7, a8, b6, d7, f8, h7, g5, e4, g3, h1, 
Complete tour: 375
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c4, a3, b5, a7, c8, e7, g8, f6, d5, b4, a6, b8, c6, e5, g6, h8, f7, d6, e8, c7, a8, b6, d7, f8, h7, g5, e4, g3, h1, 
Complete tour: 376
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c4, a3, b5, a7, c8, e7, g8, f6, d5, b4, a6, b8, c6, e5, g6, h8, f7, g5, h7, f8, d7, b6, a8, c7, e8, d6, e4, g3, h1, 
Complete tour: 377
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c4, a3, b5, a7, c8, e7, g8, f6, d5, b4, a6, b8, c6, e5, d7, b6, a8, c7, e8, d6, f7, h8, g6, f8, h7, g5, e4, g3, h1, 
Complete tour: 378
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c4, a3, b5, a7, c8, e7, g8, f6, d5, b6, a8, c7, e8, d6, f7, h8, g6, e5, c6, b4, a6, b8, d7, f8, h7, g5, e4, g3, h1, 
Complete tour: 379
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c4, a3, b5, a7, c8, e7, g8, f6, h7, g5, f7, h8, g6, f8, d7, e5, c6, b8, a6, b4, d5, b6, a8, c7, e8, d6, e4, g3, h1, 
Complete tour: 380
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c4, a3, b5, a7, c8, e7, g8, f6, e8, d6, f7, h8, g6, e5, c6, b4, d5, b6, a8, c7, a6, b8, d7, f8, h7, g5, e4, g3, h1, 
Complete tour: 381
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c4, a3, b5, a7, c8, e7, g8, f6, e8, d6, f7, h8, g6, e5, c6, b8, a6, b4, d5, c7, a8, b6, d7, f8, h7, g5, e4, g3, h1, 
Complete tour: 382
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c4, a3, b5, a7, c8, e7, g8, f6, d7, e5, c6, b8, a6, b4, d5, b6, a8, c7, e8, d6, f7, h8, g6, f8, h7, g5, e4, g3, h1, 
Complete tour: 383
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c4, a3, b5, a7, c8, e7, g8, f6, d7, f8, h7, g5, f7, h8, g6, e5, c6, b8, a6, b4, d5, b6, a8, c7, e8, d6, e4, g3, h1, 
Complete tour: 384
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c6, b4, d5, e7, g8, f6, e8, d6, c4, a3, b5, a7, c8, b6, a8, c7, a6, b8, d7, e5, f7, h8, g6, f8, h7, g5, e4, g3, h1, 
Complete tour: 385
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c6, b4, d5, e7, g8, f6, e8, d6, f7, h8, g6, e5, c4, a3, b5, a7, c8, b6, a8, c7, a6, b8, d7, f8, h7, g5, e4, g3, h1, 
Complete tour: 386
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c6, b4, d5, e7, g8, f6, e8, d6, c8, a7, b5, a3, c4, b6, a8, c7, a6, b8, d7, e5, f7, h8, g6, f8, h7, g5, e4, g3, h1, 
Complete tour: 387
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c6, b4, d5, b6, a8, c7, a6, b8, d7, e5, c4, a3, b5, a7, c8, e7, g8, f6, e8, d6, f7, h8, g6, f8, h7, g5, e4, g3, h1, 
Complete tour: 388
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c6, b4, d5, b6, a8, c7, a6, b8, d7, f8, h7, g5, f7, h8, g6, e5, c4, a3, b5, a7, c8, e7, g8, f6, e8, d6, e4, g3, h1, 
Complete tour: 389
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c6, b4, a6, b8, d7, b6, a8, c7, d5, e7, g8, f6, e8, d6, c8, a7, b5, a3, c4, e5, f7, h8, g6, f8, h7, g5, e4, g3, h1, 
Complete tour: 390
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c6, b4, a6, b8, d7, e5, c4, a3, b5, a7, c8, b6, a8, c7, d5, e7, g8, f6, e8, d6, f7, h8, g6, f8, h7, g5, e4, g3, h1, 
Complete tour: 391
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c6, b4, a6, b8, d7, e5, c4, a3, b5, a7, c8, d6, e8, c7, a8, b6, d5, e7, g8, f6, h7, f8, g6, h8, f7, g5, e4, g3, h1, 
Complete tour: 392
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c6, b4, a6, b8, d7, e5, c4, a3, b5, a7, c8, e7, g8, f6, d5, b6, a8, c7, e8, d6, f7, h8, g6, f8, h7, g5, e4, g3, h1, 
Complete tour: 393
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c6, b4, a6, b8, d7, f6, g8, e7, d5, b6, a8, c7, e8, d6, c8, a7, b5, a3, c4, e5, f7, h8, g6, f8, h7, g5, e4, g3, h1, 
Complete tour: 394
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c6, b4, a6, b8, d7, f8, g6, h8, f7, e5, c4, a3, b5, a7, c8, d6, e8, c7, a8, b6, d5, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 395
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c6, b4, a6, b8, d7, f8, h7, f6, g8, e7, d5, b6, a8, c7, e8, d6, c8, a7, b5, a3, c4, e5, g6, h8, f7, g5, e4, g3, h1, 
Complete tour: 396
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c6, b4, a6, b8, d7, f8, h7, g5, f7, h8, g6, e5, c4, a3, b5, a7, c8, b6, a8, c7, d5, e7, g8, f6, e8, d6, e4, g3, h1, 
Complete tour: 397
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c6, b4, a6, b8, d7, f8, h7, g5, f7, h8, g6, e5, c4, a3, b5, a7, c8, d6, e8, c7, a8, b6, d5, e7, g8, f6, e4, g3, h1, 
Complete tour: 398
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c6, b4, a6, b8, d7, f8, h7, g5, f7, h8, g6, e5, c4, a3, b5, a7, c8, e7, g8, f6, d5, b6, a8, c7, e8, d6, e4, g3, h1, 
Complete tour: 399
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c6, e5, c4, a3, b5, a7, c8, b6, a8, c7, d5, b4, a6, b8, d7, f8, h7, g5, f7, h8, g6, e7, g8, f6, e8, d6, e4, g3, h1, 
Complete tour: 400
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c6, e5, c4, a3, b5, a7, c8, b6, a8, c7, e8, d6, f7, h8, g6, f8, d7, b8, a6, b4, d5, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 401
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c6, e5, c4, a3, b5, a7, c8, b6, a8, c7, e8, d6, f7, h8, g6, e7, g8, f6, d5, b4, a6, b8, d7, f8, h7, g5, e4, g3, h1, 
Complete tour: 402
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c6, e5, c4, a3, b5, a7, c8, d6, f7, h8, g6, e7, g8, f6, e8, c7, a8, b6, d5, b4, a6, b8, d7, f8, h7, g5, e4, g3, h1, 
Complete tour: 403
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c6, e5, c4, a3, b5, a7, c8, d6, e8, c7, a8, b6, d5, b4, a6, b8, d7, f8, h7, f6, g8, e7, g6, h8, f7, g5, e4, g3, h1, 
Complete tour: 404
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c6, e5, c4, a3, b5, a7, c8, d6, e8, c7, a8, b6, d5, b4, a6, b8, d7, f8, h7, g5, f7, h8, g6, e7, g8, f6, e4, g3, h1, 
Complete tour: 405
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c6, e5, c4, a3, b5, a7, c8, d6, e8, c7, a8, b6, d7, b8, a6, b4, d5, e7, g8, f6, h7, f8, g6, h8, f7, g5, e4, g3, h1, 
Complete tour: 406
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c6, e5, c4, a3, b5, a7, c8, e7, g8, f6, d5, b4, a6, b8, d7, b6, a8, c7, e8, d6, f7, h8, g6, f8, h7, g5, e4, g3, h1, 
Complete tour: 407
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c6, e5, c4, a3, b5, a7, c8, e7, g8, f6, h7, g5, f7, h8, g6, f8, d7, b8, a6, b4, d5, b6, a8, c7, e8, d6, e4, g3, h1, 
Complete tour: 408
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c6, e5, c4, a3, b5, a7, c8, e7, g8, f6, d7, b8, a6, b4, d5, b6, a8, c7, e8, d6, f7, h8, g6, f8, h7, g5, e4, g3, h1, 
Complete tour: 409
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c6, e5, g6, h8, f7, d6, c4, a3, b5, a7, c8, b6, a8, c7, e8, f6, g8, e7, d5, b4, a6, b8, d7, f8, h7, g5, e4, g3, h1, 
Complete tour: 410
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c6, e5, g6, h8, f7, d6, c4, a3, b5, a7, c8, e7, g8, f6, e8, c7, a8, b6, d5, b4, a6, b8, d7, f8, h7, g5, e4, g3, h1, 
Complete tour: 411
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c6, e5, g6, h8, f7, d6, e8, c7, a8, b6, c4, a3, b5, a7, c8, e7, g8, f6, d5, b4, a6, b8, d7, f8, h7, g5, e4, g3, h1, 
Complete tour: 412
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c6, e5, g6, h8, f7, d6, e8, f6, g8, e7, c8, a7, b5, a3, c4, b6, a8, c7, d5, b4, a6, b8, d7, f8, h7, g5, e4, g3, h1, 
Complete tour: 413
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c6, e5, g6, h8, f7, d6, c8, a7, b5, a3, c4, b6, a8, c7, e8, f6, g8, e7, d5, b4, a6, b8, d7, f8, h7, g5, e4, g3, h1, 
Complete tour: 414
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c6, e5, g6, h8, f7, g5, h7, f8, d7, b8, a6, b4, d5, f6, g8, e7, c8, a7, b5, a3, c4, b6, a8, c7, e8, d6, e4, g3, h1, 
Complete tour: 415
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c6, e5, g6, h8, f7, g5, h7, f8, d7, b8, a6, b4, d5, e7, g8, f6, e8, c7, a8, b6, c4, a3, b5, a7, c8, d6, e4, g3, h1, 
Complete tour: 416
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c6, e5, g6, h8, f7, g5, h7, f8, d7, b8, a6, b4, d5, e7, g8, f6, e8, c7, a8, b6, c8, a7, b5, a3, c4, d6, e4, g3, h1, 
Complete tour: 417
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c6, e5, g6, h8, f7, g5, h7, f8, d7, b8, a6, b4, d5, c7, a8, b6, c4, a3, b5, a7, c8, e7, g8, f6, e8, d6, e4, g3, h1, 
Complete tour: 418
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c6, e5, g6, h8, f7, g5, h7, f8, d7, b8, a6, b4, d5, b6, a8, c7, e8, d6, c4, a3, b5, a7, c8, e7, g8, f6, e4, g3, h1, 
Complete tour: 419
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c6, e5, g6, h8, f7, g5, h7, f8, d7, b8, a6, b4, d5, b6, a8, c7, e8, f6, g8, e7, c8, a7, b5, a3, c4, d6, e4, g3, h1, 
Complete tour: 420
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c6, e5, f7, h8, g6, f8, d7, b8, a6, b4, d5, b6, a8, c7, e8, d6, c4, a3, b5, a7, c8, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 421
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c6, e5, f7, h8, g6, e7, g8, f6, e8, d6, c4, a3, b5, a7, c8, b6, a8, c7, d5, b4, a6, b8, d7, f8, h7, g5, e4, g3, h1, 
Complete tour: 422
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c6, e5, f7, h8, g6, e7, g8, f6, e8, d6, c8, a7, b5, a3, c4, b6, a8, c7, d5, b4, a6, b8, d7, f8, h7, g5, e4, g3, h1, 
Complete tour: 423
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c6, e5, d7, b8, a6, b4, d5, f6, g8, e7, c8, a7, b5, a3, c4, b6, a8, c7, e8, d6, f7, h8, g6, f8, h7, g5, e4, g3, h1, 
Complete tour: 424
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c6, e5, d7, b8, a6, b4, d5, e7, g8, f6, e8, c7, a8, b6, c4, a3, b5, a7, c8, d6, f7, h8, g6, f8, h7, g5, e4, g3, h1, 
Complete tour: 425
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c6, e5, d7, b8, a6, b4, d5, e7, g8, f6, e8, c7, a8, b6, c8, a7, b5, a3, c4, d6, f7, h8, g6, f8, h7, g5, e4, g3, h1, 
Complete tour: 426
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c6, e5, d7, b8, a6, b4, d5, c7, a8, b6, c4, a3, b5, a7, c8, e7, g8, f6, e8, d6, f7, h8, g6, f8, h7, g5, e4, g3, h1, 
Complete tour: 427
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c6, e5, d7, b8, a6, b4, d5, b6, a8, c7, e8, d6, c4, a3, b5, a7, c8, e7, g8, f6, h7, f8, g6, h8, f7, g5, e4, g3, h1, 
Complete tour: 428
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c6, e5, d7, b8, a6, b4, d5, b6, a8, c7, e8, f6, g8, e7, c8, a7, b5, a3, c4, d6, f7, h8, g6, f8, h7, g5, e4, g3, h1, 
Complete tour: 429
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c6, e7, g8, f6, d5, b4, a6, b8, d7, b6, a8, c7, e8, d6, c8, a7, b5, a3, c4, e5, f7, h8, g6, f8, h7, g5, e4, g3, h1, 
Complete tour: 430
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c6, e7, g8, f6, d5, b4, a6, b8, d7, e5, c4, a3, b5, a7, c8, b6, a8, c7, e8, d6, f7, h8, g6, f8, h7, g5, e4, g3, h1, 
Complete tour: 431
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c6, e7, g8, f6, d5, b4, a6, b8, d7, f8, h7, g5, f7, h8, g6, e5, c4, a3, b5, a7, c8, b6, a8, c7, e8, d6, e4, g3, h1, 
Complete tour: 432
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c6, e7, g8, f6, h7, f8, d7, b8, a6, b4, d5, b6, a8, c7, e8, d6, c8, a7, b5, a3, c4, e5, g6, h8, f7, g5, e4, g3, h1, 
Complete tour: 433
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c6, e7, g8, f6, e8, c7, a8, b6, d5, b4, a6, b8, d7, e5, c4, a3, b5, a7, c8, d6, f7, h8, g6, f8, h7, g5, e4, g3, h1, 
Complete tour: 434
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c6, e7, g8, f6, e8, c7, a8, b6, d5, b4, a6, b8, d7, f8, h7, g5, f7, h8, g6, e5, c4, a3, b5, a7, c8, d6, e4, g3, h1, 
Complete tour: 435
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c6, e7, g8, f6, e8, d6, c4, a3, b5, a7, c8, b6, a8, c7, d5, b4, a6, b8, d7, e5, f7, h8, g6, f8, h7, g5, e4, g3, h1, 
Complete tour: 436
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c6, e7, g8, f6, e8, d6, f7, h8, g6, e5, c4, a3, b5, a7, c8, b6, a8, c7, d5, b4, a6, b8, d7, f8, h7, g5, e4, g3, h1, 
Complete tour: 437
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c6, e7, g8, f6, e8, d6, c8, a7, b5, a3, c4, b6, a8, c7, d5, b4, a6, b8, d7, e5, f7, h8, g6, f8, h7, g5, e4, g3, h1, 
Complete tour: 438
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c6, e7, g8, f6, d7, b8, a6, b4, d5, b6, a8, c7, e8, d6, c8, a7, b5, a3, c4, e5, f7, h8, g6, f8, h7, g5, e4, g3, h1, 
Complete tour: 439
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c6, b8, a6, b4, d5, f6, g8, e7, g6, h8, f7, d6, e8, c7, a8, b6, c8, a7, b5, a3, c4, e5, d7, f8, h7, g5, e4, g3, h1, 
Complete tour: 440
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c6, b8, a6, b4, d5, f6, g8, e7, g6, h8, f7, e5, c4, a3, b5, a7, c8, d6, e8, c7, a8, b6, d7, f8, h7, g5, e4, g3, h1, 
Complete tour: 441
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c6, b8, a6, b4, d5, f6, g8, e7, g6, h8, f7, g5, h7, f8, d7, e5, c4, a3, b5, a7, c8, b6, a8, c7, e8, d6, e4, g3, h1, 
Complete tour: 442
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c6, b8, a6, b4, d5, f6, g8, e7, c8, a7, b5, a3, c4, e5, g6, h8, f7, d6, e8, c7, a8, b6, d7, f8, h7, g5, e4, g3, h1, 
Complete tour: 443
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c6, b8, a6, b4, d5, f6, g8, e7, c8, a7, b5, a3, c4, e5, g6, h8, f7, g5, h7, f8, d7, b6, a8, c7, e8, d6, e4, g3, h1, 
Complete tour: 444
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c6, b8, a6, b4, d5, f6, g8, e7, c8, a7, b5, a3, c4, e5, d7, b6, a8, c7, e8, d6, f7, h8, g6, f8, h7, g5, e4, g3, h1, 
Complete tour: 445
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c6, b8, a6, b4, d5, f6, g8, e7, c8, a7, b5, a3, c4, d6, e8, c7, a8, b6, d7, e5, f7, h8, g6, f8, h7, g5, e4, g3, h1, 
Complete tour: 446
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c6, b8, a6, b4, d5, f6, g8, e7, c8, a7, b5, a3, c4, b6, a8, c7, e8, d6, f7, h8, g6, e5, d7, f8, h7, g5, e4, g3, h1, 
Complete tour: 447
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c6, b8, a6, b4, d5, e7, g8, f6, h7, g5, f7, h8, g6, f8, d7, e5, c4, a3, b5, a7, c8, b6, a8, c7, e8, d6, e4, g3, h1, 
Complete tour: 448
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c6, b8, a6, b4, d5, e7, g8, f6, h7, f8, d7, b6, a8, c7, e8, d6, c8, a7, b5, a3, c4, e5, g6, h8, f7, g5, e4, g3, h1, 
Complete tour: 449
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c6, b8, a6, b4, d5, e7, g8, f6, e8, c7, a8, b6, c4, a3, b5, a7, c8, d6, f7, h8, g6, e5, d7, f8, h7, g5, e4, g3, h1, 
Complete tour: 450
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c6, b8, a6, b4, d5, e7, g8, f6, e8, c7, a8, b6, d7, e5, c4, a3, b5, a7, c8, d6, f7, h8, g6, f8, h7, g5, e4, g3, h1, 
Complete tour: 451
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c6, b8, a6, b4, d5, e7, g8, f6, e8, c7, a8, b6, d7, f8, h7, g5, f7, h8, g6, e5, c4, a3, b5, a7, c8, d6, e4, g3, h1, 
Complete tour: 452
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c6, b8, a6, b4, d5, e7, g8, f6, e8, c7, a8, b6, c8, a7, b5, a3, c4, d6, f7, h8, g6, e5, d7, f8, h7, g5, e4, g3, h1, 
Complete tour: 453
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c6, b8, a6, b4, d5, e7, g8, f6, d7, b6, a8, c7, e8, d6, c8, a7, b5, a3, c4, e5, f7, h8, g6, f8, h7, g5, e4, g3, h1, 
Complete tour: 454
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c6, b8, a6, b4, d5, e7, g8, f6, d7, e5, c4, a3, b5, a7, c8, b6, a8, c7, e8, d6, f7, h8, g6, f8, h7, g5, e4, g3, h1, 
Complete tour: 455
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c6, b8, a6, b4, d5, e7, g8, f6, d7, f8, h7, g5, f7, h8, g6, e5, c4, a3, b5, a7, c8, b6, a8, c7, e8, d6, e4, g3, h1, 
Complete tour: 456
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c6, b8, a6, b4, d5, c7, a8, b6, c4, a3, b5, a7, c8, d6, e8, f6, g8, e7, g6, h8, f7, e5, d7, f8, h7, g5, e4, g3, h1, 
Complete tour: 457
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c6, b8, a6, b4, d5, c7, a8, b6, c4, a3, b5, a7, c8, e7, g8, f6, e8, d6, f7, h8, g6, e5, d7, f8, h7, g5, e4, g3, h1, 
Complete tour: 458
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c6, b8, a6, b4, d5, c7, a8, b6, d7, e5, c4, a3, b5, a7, c8, e7, g8, f6, e8, d6, f7, h8, g6, f8, h7, g5, e4, g3, h1, 
Complete tour: 459
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c6, b8, a6, b4, d5, c7, a8, b6, d7, f8, h7, g5, f7, h8, g6, e5, c4, a3, b5, a7, c8, e7, g8, f6, e8, d6, e4, g3, h1, 
Complete tour: 460
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c6, b8, a6, b4, d5, c7, a8, b6, c8, a7, b5, a3, c4, e5, d7, f8, h7, g5, f7, h8, g6, e7, g8, f6, e8, d6, e4, g3, h1, 
Complete tour: 461
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c6, b8, a6, b4, d5, c7, a8, b6, c8, a7, b5, a3, c4, d6, e8, f6, g8, e7, g6, h8, f7, e5, d7, f8, h7, g5, e4, g3, h1, 
Complete tour: 462
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c6, b8, a6, b4, d5, b6, a8, c7, e8, d6, c4, a3, b5, a7, c8, e7, g8, f6, h7, f8, d7, e5, g6, h8, f7, g5, e4, g3, h1, 
Complete tour: 463
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c6, b8, a6, b4, d5, b6, a8, c7, e8, d6, c4, a3, b5, a7, c8, e7, g8, f6, d7, e5, f7, h8, g6, f8, h7, g5, e4, g3, h1, 
Complete tour: 464
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c6, b8, a6, b4, d5, b6, a8, c7, e8, d6, f7, h8, g6, e5, c4, a3, b5, a7, c8, e7, g8, f6, d7, f8, h7, g5, e4, g3, h1, 
Complete tour: 465
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c6, b8, a6, b4, d5, b6, a8, c7, e8, d6, f7, h8, g6, f8, d7, e5, c4, a3, b5, a7, c8, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 466
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c6, b8, a6, b4, d5, b6, a8, c7, e8, d6, c8, a7, b5, a3, c4, e5, f7, h8, g6, e7, g8, f6, d7, f8, h7, g5, e4, g3, h1, 
Complete tour: 467
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c6, b8, a6, b4, d5, b6, a8, c7, e8, d6, c8, a7, b5, a3, c4, e5, d7, f8, h7, f6, g8, e7, g6, h8, f7, g5, e4, g3, h1, 
Complete tour: 468
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c6, b8, a6, b4, d5, b6, a8, c7, e8, d6, c8, a7, b5, a3, c4, e5, d7, f8, h7, g5, f7, h8, g6, e7, g8, f6, e4, g3, h1, 
Complete tour: 469
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c6, b8, a6, b4, d5, b6, a8, c7, e8, f6, g8, e7, g6, h8, f7, d6, c8, a7, b5, a3, c4, e5, d7, f8, h7, g5, e4, g3, h1, 
Complete tour: 470
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c6, b8, a6, b4, d5, b6, a8, c7, e8, f6, g8, e7, g6, h8, f7, g5, h7, f8, d7, e5, c4, a3, b5, a7, c8, d6, e4, g3, h1, 
Complete tour: 471
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c6, b8, a6, b4, d5, b6, a8, c7, e8, f6, g8, e7, c8, a7, b5, a3, c4, d6, f7, h8, g6, e5, d7, f8, h7, g5, e4, g3, h1, 
Complete tour: 472
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c6, b8, d7, b6, a8, c7, a6, b4, d5, e7, g8, f6, e8, d6, c8, a7, b5, a3, c4, e5, f7, h8, g6, f8, h7, g5, e4, g3, h1, 
Complete tour: 473
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c6, b8, d7, e5, c4, a3, b5, a7, c8, b6, a8, c7, a6, b4, d5, e7, g8, f6, e8, d6, f7, h8, g6, f8, h7, g5, e4, g3, h1, 
Complete tour: 474
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c6, b8, d7, f8, h7, g5, f7, h8, g6, e5, c4, a3, b5, a7, c8, b6, a8, c7, a6, b4, d5, e7, g8, f6, e8, d6, e4, g3, h1, 
Complete tour: 475
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c6, a7, b5, a3, c4, e5, g6, h8, f7, d6, e8, c7, a8, b6, c8, e7, g8, f6, d5, b4, a6, b8, d7, f8, h7, g5, e4, g3, h1, 
Complete tour: 476
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c6, a7, b5, a3, c4, e5, g6, h8, f7, d6, e8, f6, g8, e7, c8, b6, a8, c7, d5, b4, a6, b8, d7, f8, h7, g5, e4, g3, h1, 
Complete tour: 477
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c6, a7, b5, a3, c4, e5, g6, h8, f7, d6, c8, b6, a8, c7, e8, f6, g8, e7, d5, b4, a6, b8, d7, f8, h7, g5, e4, g3, h1, 
Complete tour: 478
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c6, a7, b5, a3, c4, e5, g6, h8, f7, d6, c8, e7, g8, f6, e8, c7, a8, b6, d5, b4, a6, b8, d7, f8, h7, g5, e4, g3, h1, 
Complete tour: 479
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c6, a7, b5, a3, c4, e5, g6, h8, f7, g5, h7, f8, d7, b8, a6, b4, d5, f6, g8, e7, c8, b6, a8, c7, e8, d6, e4, g3, h1, 
Complete tour: 480
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c6, a7, b5, a3, c4, e5, g6, h8, f7, g5, h7, f8, d7, b8, a6, b4, d5, e7, g8, f6, e8, c7, a8, b6, c8, d6, e4, g3, h1, 
Complete tour: 481
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c6, a7, b5, a3, c4, e5, g6, h8, f7, g5, h7, f8, d7, b8, a6, b4, d5, c7, a8, b6, c8, e7, g8, f6, e8, d6, e4, g3, h1, 
Complete tour: 482
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c6, a7, b5, a3, c4, e5, g6, h8, f7, g5, h7, f8, d7, b8, a6, b4, d5, b6, a8, c7, e8, d6, c8, e7, g8, f6, e4, g3, h1, 
Complete tour: 483
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c6, a7, b5, a3, c4, e5, g6, h8, f7, g5, h7, f8, d7, b8, a6, b4, d5, b6, a8, c7, e8, f6, g8, e7, c8, d6, e4, g3, h1, 
Complete tour: 484
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c6, a7, b5, a3, c4, e5, f7, h8, g6, f8, d7, b8, a6, b4, d5, b6, a8, c7, e8, d6, c8, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 485
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c6, a7, b5, a3, c4, e5, f7, h8, g6, e7, g8, f6, e8, d6, c8, b6, a8, c7, d5, b4, a6, b8, d7, f8, h7, g5, e4, g3, h1, 
Complete tour: 486
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c6, a7, b5, a3, c4, e5, d7, b8, a6, b4, d5, f6, g8, e7, c8, b6, a8, c7, e8, d6, f7, h8, g6, f8, h7, g5, e4, g3, h1, 
Complete tour: 487
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c6, a7, b5, a3, c4, e5, d7, b8, a6, b4, d5, e7, g8, f6, e8, c7, a8, b6, c8, d6, f7, h8, g6, f8, h7, g5, e4, g3, h1, 
Complete tour: 488
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c6, a7, b5, a3, c4, e5, d7, b8, a6, b4, d5, c7, a8, b6, c8, e7, g8, f6, e8, d6, f7, h8, g6, f8, h7, g5, e4, g3, h1, 
Complete tour: 489
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c6, a7, b5, a3, c4, e5, d7, b8, a6, b4, d5, b6, a8, c7, e8, d6, c8, e7, g8, f6, h7, f8, g6, h8, f7, g5, e4, g3, h1, 
Complete tour: 490
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c6, a7, b5, a3, c4, e5, d7, b8, a6, b4, d5, b6, a8, c7, e8, f6, g8, e7, c8, d6, f7, h8, g6, f8, h7, g5, e4, g3, h1, 
Complete tour: 491
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c6, a7, b5, a3, c4, d6, e8, c7, a8, b6, c8, e7, g8, f6, d5, b4, a6, b8, d7, e5, f7, h8, g6, f8, h7, g5, e4, g3, h1, 
Complete tour: 492
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c6, a7, b5, a3, c4, d6, e8, f6, g8, e7, c8, b6, a8, c7, d5, b4, a6, b8, d7, e5, f7, h8, g6, f8, h7, g5, e4, g3, h1, 
Complete tour: 493
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c6, a7, b5, a3, c4, d6, c8, b6, a8, c7, e8, f6, g8, e7, d5, b4, a6, b8, d7, e5, f7, h8, g6, f8, h7, g5, e4, g3, h1, 
Complete tour: 494
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c6, a7, b5, a3, c4, d6, c8, e7, g8, f6, e8, c7, a8, b6, d5, b4, a6, b8, d7, e5, f7, h8, g6, f8, h7, g5, e4, g3, h1, 
Complete tour: 495
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c6, a7, b5, a3, c4, b6, a8, c7, e8, d6, c8, e7, g8, f6, d5, b4, a6, b8, d7, e5, f7, h8, g6, f8, h7, g5, e4, g3, h1, 
Complete tour: 496
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c6, a7, c8, b6, a8, c7, b5, a3, c4, e5, g6, h8, f7, d6, e8, f6, g8, e7, d5, b4, a6, b8, d7, f8, h7, g5, e4, g3, h1, 
Complete tour: 497
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c6, a7, c8, b6, a8, c7, b5, a3, c4, e5, g6, h8, f7, g5, h7, f8, d7, b8, a6, b4, d5, e7, g8, f6, e8, d6, e4, g3, h1, 
Complete tour: 498
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c6, a7, c8, b6, a8, c7, b5, a3, c4, e5, d7, b8, a6, b4, d5, e7, g8, f6, e8, d6, f7, h8, g6, f8, h7, g5, e4, g3, h1, 
Complete tour: 499
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c6, a7, c8, b6, a8, c7, b5, a3, c4, d6, e8, f6, g8, e7, d5, b4, a6, b8, d7, e5, f7, h8, g6, f8, h7, g5, e4, g3, h1, 
Complete tour: 500
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c6, a7, c8, b6, a8, c7, e8, d6, b5, a3, c4, e5, g6, h8, f7, g5, h7, f8, d7, b8, a6, b4, d5, e7, g8, f6, e4, g3, h1, 
Complete tour: 501
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c6, a7, c8, b6, a8, c7, e8, d6, b5, a3, c4, e5, f7, h8, g6, f8, d7, b8, a6, b4, d5, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 502
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c6, a7, c8, b6, a8, c7, e8, d6, b5, a3, c4, e5, f7, h8, g6, e7, g8, f6, d5, b4, a6, b8, d7, f8, h7, g5, e4, g3, h1, 
Complete tour: 503
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c6, a7, c8, b6, a8, c7, e8, d6, b5, a3, c4, e5, d7, b8, a6, b4, d5, e7, g8, f6, h7, f8, g6, h8, f7, g5, e4, g3, h1, 
Complete tour: 504
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c6, a7, c8, b6, a8, c7, e8, f6, g8, e7, d5, b4, a6, b8, d7, e5, c4, a3, b5, d6, f7, h8, g6, f8, h7, g5, e4, g3, h1, 
Complete tour: 505
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c6, a7, c8, b6, a8, c7, e8, f6, g8, e7, d5, b4, a6, b8, d7, f8, h7, g5, f7, h8, g6, e5, c4, a3, b5, d6, e4, g3, h1, 
Complete tour: 506
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c6, a7, c8, d6, b5, a3, c4, e5, f7, h8, g6, e7, g8, f6, e8, c7, a8, b6, d5, b4, a6, b8, d7, f8, h7, g5, e4, g3, h1, 
Complete tour: 507
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c6, a7, c8, d6, b5, a3, c4, b6, a8, c7, e8, f6, g8, e7, d5, b4, a6, b8, d7, e5, f7, h8, g6, f8, h7, g5, e4, g3, h1, 
Complete tour: 508
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c6, a7, c8, d6, e8, f6, g8, e7, d5, b4, a6, b8, d7, b6, a8, c7, b5, a3, c4, e5, f7, h8, g6, f8, h7, g5, e4, g3, h1, 
Complete tour: 509
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c6, a7, c8, d6, e8, f6, g8, e7, g6, h8, f7, e5, c4, a3, b5, c7, a8, b6, d5, b4, a6, b8, d7, f8, h7, g5, e4, g3, h1, 
Complete tour: 510
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c6, a7, c8, e7, g8, f6, d5, b4, a6, b8, d7, b6, a8, c7, e8, d6, b5, a3, c4, e5, f7, h8, g6, f8, h7, g5, e4, g3, h1, 
Complete tour: 511
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c6, a7, c8, e7, g8, f6, h7, f8, d7, b8, a6, b4, d5, b6, a8, c7, e8, d6, b5, a3, c4, e5, g6, h8, f7, g5, e4, g3, h1, 
Complete tour: 512
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c6, a7, c8, e7, g8, f6, e8, c7, a8, b6, d5, b4, a6, b8, d7, e5, c4, a3, b5, d6, f7, h8, g6, f8, h7, g5, e4, g3, h1, 
Complete tour: 513
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c6, a7, c8, e7, g8, f6, e8, c7, a8, b6, d5, b4, a6, b8, d7, f8, h7, g5, f7, h8, g6, e5, c4, a3, b5, d6, e4, g3, h1, 
Complete tour: 514
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c6, a7, c8, e7, g8, f6, e8, d6, b5, a3, c4, b6, a8, c7, d5, b4, a6, b8, d7, e5, f7, h8, g6, f8, h7, g5, e4, g3, h1, 
Complete tour: 515
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c6, a7, c8, e7, g8, f6, e8, d6, c4, a3, b5, c7, a8, b6, d5, b4, a6, b8, d7, e5, f7, h8, g6, f8, h7, g5, e4, g3, h1, 
Complete tour: 516
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c6, a7, c8, e7, g8, f6, e8, d6, f7, h8, g6, e5, c4, a3, b5, c7, a8, b6, d5, b4, a6, b8, d7, f8, h7, g5, e4, g3, h1, 
Complete tour: 517
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, a5, c6, a7, c8, e7, g8, f6, d7, b8, a6, b4, d5, b6, a8, c7, e8, d6, b5, a3, c4, e5, f7, h8, g6, f8, h7, g5, e4, g3, h1, 
Complete tour: 518
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, d6, b5, a3, c4, a5, c6, a7, c8, b6, a8, c7, e8, f6, g8, e7, d5, b4, a6, b8, d7, e5, f7, h8, g6, f8, h7, g5, e4, g3, h1, 
Complete tour: 519
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, d6, b5, a3, c4, a5, c6, a7, c8, e7, g8, f6, e8, c7, a8, b6, d5, b4, a6, b8, d7, e5, f7, h8, g6, f8, h7, g5, e4, g3, h1, 
Complete tour: 520
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, d6, f7, h8, g6, e5, c6, a5, c4, a3, b5, a7, c8, b6, a8, c7, e8, f6, g8, e7, d5, b4, a6, b8, d7, f8, h7, g5, e4, g3, h1, 
Complete tour: 521
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, d6, f7, h8, g6, e5, c6, a5, c4, a3, b5, a7, c8, e7, g8, f6, e8, c7, a8, b6, d5, b4, a6, b8, d7, f8, h7, g5, e4, g3, h1, 
Complete tour: 522
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, d6, e8, c7, a8, b6, d5, b4, a6, b8, c6, a5, c4, a3, b5, a7, c8, e7, g8, f6, h7, f8, d7, e5, g6, h8, f7, g5, e4, g3, h1, 
Complete tour: 523
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, d6, e8, c7, a8, b6, d5, b4, a6, b8, c6, a5, c4, a3, b5, a7, c8, e7, g8, f6, d7, e5, f7, h8, g6, f8, h7, g5, e4, g3, h1, 
Complete tour: 524
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, d6, e8, c7, a8, b6, d5, b4, a6, b8, d7, e5, c6, a5, c4, a3, b5, a7, c8, e7, g8, f6, h7, f8, g6, h8, f7, g5, e4, g3, h1, 
Complete tour: 525
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, d6, e8, c7, a8, b6, d5, b4, a6, b8, d7, f6, g8, e7, c8, a7, b5, a3, c4, a5, c6, e5, f7, h8, g6, f8, h7, g5, e4, g3, h1, 
Complete tour: 526
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, d6, e8, c7, a8, b6, d5, b4, a6, b8, d7, f8, g6, h8, f7, e5, c6, a5, c4, a3, b5, a7, c8, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 527
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, d6, e8, c7, a8, b6, d5, b4, a6, b8, d7, f8, h7, f6, g8, e7, c8, a7, b5, a3, c4, a5, c6, e5, g6, h8, f7, g5, e4, g3, h1, 
Complete tour: 528
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, d6, e8, c7, a8, b6, d5, b4, a6, b8, d7, f8, h7, g5, f7, h8, g6, e5, c6, a5, c4, a3, b5, a7, c8, e7, g8, f6, e4, g3, h1, 
Complete tour: 529
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, d6, e8, c7, a8, b6, d5, f6, g8, e7, c8, a7, b5, a3, c4, a5, c6, b4, a6, b8, d7, e5, f7, h8, g6, f8, h7, g5, e4, g3, h1, 
Complete tour: 530
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, d6, e8, c7, a8, b6, d7, b8, a6, b4, d5, f6, g8, e7, c8, a7, b5, a3, c4, a5, c6, e5, f7, h8, g6, f8, h7, g5, e4, g3, h1, 
Complete tour: 531
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, d6, e8, c7, a8, b6, c8, a7, b5, a3, c4, a5, c6, e5, g6, h8, f7, g5, h7, f8, d7, b8, a6, b4, d5, e7, g8, f6, e4, g3, h1, 
Complete tour: 532
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, d6, e8, c7, a8, b6, c8, a7, b5, a3, c4, a5, c6, e5, f7, h8, g6, f8, d7, b8, a6, b4, d5, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 533
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, d6, e8, c7, a8, b6, c8, a7, b5, a3, c4, a5, c6, e5, f7, h8, g6, e7, g8, f6, d5, b4, a6, b8, d7, f8, h7, g5, e4, g3, h1, 
Complete tour: 534
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, d6, e8, c7, a8, b6, c8, a7, b5, a3, c4, a5, c6, e5, d7, b8, a6, b4, d5, e7, g8, f6, h7, f8, g6, h8, f7, g5, e4, g3, h1, 
Complete tour: 535
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, d6, e8, c7, a8, b6, c8, a7, b5, a3, c4, a5, c6, e7, g8, f6, d5, b4, a6, b8, d7, e5, f7, h8, g6, f8, h7, g5, e4, g3, h1, 
Complete tour: 536
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, d6, e8, c7, a8, b6, c8, a7, b5, a3, c4, a5, c6, b8, a6, b4, d5, f6, g8, e7, g6, h8, f7, e5, d7, f8, h7, g5, e4, g3, h1, 
Complete tour: 537
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, d6, e8, c7, a8, b6, c8, a7, b5, a3, c4, a5, c6, b8, a6, b4, d5, e7, g8, f6, h7, f8, d7, e5, g6, h8, f7, g5, e4, g3, h1, 
Complete tour: 538
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, d6, e8, c7, a8, b6, c8, a7, b5, a3, c4, a5, c6, b8, a6, b4, d5, e7, g8, f6, d7, e5, f7, h8, g6, f8, h7, g5, e4, g3, h1, 
Complete tour: 539
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, d6, e8, f6, g8, e7, c6, a5, c4, a3, b5, a7, c8, b6, a8, c7, d5, b4, a6, b8, d7, e5, f7, h8, g6, f8, h7, g5, e4, g3, h1, 
Complete tour: 540
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, d6, e8, f6, g8, e7, d5, b4, c6, a5, c4, a3, b5, a7, c8, b6, a8, c7, a6, b8, d7, e5, f7, h8, g6, f8, h7, g5, e4, g3, h1, 
Complete tour: 541
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, d6, e8, f6, g8, e7, d5, b4, a6, c7, a8, b6, c8, a7, b5, a3, c4, a5, c6, b8, d7, e5, f7, h8, g6, f8, h7, g5, e4, g3, h1, 
Complete tour: 542
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, d6, e8, f6, g8, e7, d5, c7, a8, b6, c8, a7, b5, a3, c4, a5, c6, b4, a6, b8, d7, e5, f7, h8, g6, f8, h7, g5, e4, g3, h1, 
Complete tour: 543
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, d6, e8, f6, g8, e7, g6, h8, f7, e5, c6, a5, c4, a3, b5, a7, c8, b6, a8, c7, d5, b4, a6, b8, d7, f8, h7, g5, e4, g3, h1, 
Complete tour: 544
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, d6, e8, f6, g8, e7, c8, a7, b5, a3, c4, a5, c6, b4, d5, b6, a8, c7, a6, b8, d7, e5, f7, h8, g6, f8, h7, g5, e4, g3, h1, 
Complete tour: 545
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, d6, e8, f6, g8, e7, c8, a7, b5, a3, c4, a5, c6, b8, a6, b4, d5, c7, a8, b6, d7, e5, f7, h8, g6, f8, h7, g5, e4, g3, h1, 
Complete tour: 546
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, d6, e8, f6, g8, e7, c8, a7, c6, a5, c4, a3, b5, c7, a8, b6, d5, b4, a6, b8, d7, e5, f7, h8, g6, f8, h7, g5, e4, g3, h1, 
Complete tour: 547
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, d6, c8, a7, b5, a3, c4, a5, c6, e5, f7, h8, g6, e7, g8, f6, e8, c7, a8, b6, d5, b4, a6, b8, d7, f8, h7, g5, e4, g3, h1, 
Complete tour: 548
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, d6, c8, a7, b5, a3, c4, a5, c6, e7, g8, f6, e8, c7, a8, b6, d5, b4, a6, b8, d7, e5, f7, h8, g6, f8, h7, g5, e4, g3, h1, 
Complete tour: 549
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, d6, c8, a7, b5, a3, c4, a5, c6, b8, a6, b4, d5, e7, g8, f6, e8, c7, a8, b6, d7, e5, f7, h8, g6, f8, h7, g5, e4, g3, h1, 
Complete tour: 550
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, b7, d6, c8, a7, b5, a3, c4, a5, c6, b8, a6, b4, d5, b6, a8, c7, e8, f6, g8, e7, g6, h8, f7, e5, d7, f8, h7, g5, e4, g3, h1, 
Complete tour: 551
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, c6, a5, b7, d6, c4, a3, b5, a7, c8, b6, a8, c7, e8, f6, g8, e7, d5, b4, a6, b8, d7, e5, f7, h8, g6, f8, h7, g5, e4, g3, h1, 
Complete tour: 552
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, c6, a5, b7, d6, c4, a3, b5, a7, c8, e7, g8, f6, e8, c7, a8, b6, d5, b4, a6, b8, d7, e5, f7, h8, g6, f8, h7, g5, e4, g3, h1, 
Complete tour: 553
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, c6, a5, b7, d6, f7, h8, g6, e5, c4, a3, b5, a7, c8, b6, a8, c7, e8, f6, g8, e7, d5, b4, a6, b8, d7, f8, h7, g5, e4, g3, h1, 
Complete tour: 554
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, c6, a5, b7, d6, f7, h8, g6, e5, c4, a3, b5, a7, c8, e7, g8, f6, e8, c7, a8, b6, d5, b4, a6, b8, d7, f8, h7, g5, e4, g3, h1, 
Complete tour: 555
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, c6, a5, b7, d6, e8, c7, a8, b6, c4, a3, b5, a7, c8, e7, g8, f6, d5, b4, a6, b8, d7, e5, f7, h8, g6, f8, h7, g5, e4, g3, h1, 
Complete tour: 556
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, c6, a5, b7, d6, e8, c7, a8, b6, d5, b4, a6, b8, d7, e5, c4, a3, b5, a7, c8, e7, g8, f6, h7, f8, g6, h8, f7, g5, e4, g3, h1, 
Complete tour: 557
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, c6, a5, b7, d6, e8, c7, a8, b6, d5, b4, a6, b8, d7, f6, g8, e7, c8, a7, b5, a3, c4, e5, f7, h8, g6, f8, h7, g5, e4, g3, h1, 
Complete tour: 558
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, c6, a5, b7, d6, e8, c7, a8, b6, d5, b4, a6, b8, d7, f8, g6, h8, f7, e5, c4, a3, b5, a7, c8, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 559
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, c6, a5, b7, d6, e8, c7, a8, b6, d5, b4, a6, b8, d7, f8, h7, f6, g8, e7, c8, a7, b5, a3, c4, e5, g6, h8, f7, g5, e4, g3, h1, 
Complete tour: 560
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, c6, a5, b7, d6, e8, c7, a8, b6, d5, b4, a6, b8, d7, f8, h7, g5, f7, h8, g6, e5, c4, a3, b5, a7, c8, e7, g8, f6, e4, g3, h1, 
Complete tour: 561
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, c6, a5, b7, d6, e8, c7, a8, b6, d7, b8, a6, b4, d5, f6, g8, e7, c8, a7, b5, a3, c4, e5, f7, h8, g6, f8, h7, g5, e4, g3, h1, 
Complete tour: 562
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, c6, a5, b7, d6, e8, c7, a8, b6, c8, a7, b5, a3, c4, e5, g6, h8, f7, g5, h7, f8, d7, b8, a6, b4, d5, e7, g8, f6, e4, g3, h1, 
Complete tour: 563
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, c6, a5, b7, d6, e8, c7, a8, b6, c8, a7, b5, a3, c4, e5, f7, h8, g6, f8, d7, b8, a6, b4, d5, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 564
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, c6, a5, b7, d6, e8, c7, a8, b6, c8, a7, b5, a3, c4, e5, f7, h8, g6, e7, g8, f6, d5, b4, a6, b8, d7, f8, h7, g5, e4, g3, h1, 
Complete tour: 565
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, c6, a5, b7, d6, e8, c7, a8, b6, c8, a7, b5, a3, c4, e5, d7, b8, a6, b4, d5, e7, g8, f6, h7, f8, g6, h8, f7, g5, e4, g3, h1, 
Complete tour: 566
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, c6, a5, b7, d6, e8, f6, g8, e7, g6, h8, f7, e5, c4, a3, b5, a7, c8, b6, a8, c7, d5, b4, a6, b8, d7, f8, h7, g5, e4, g3, h1, 
Complete tour: 567
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, c6, a5, b7, d6, e8, f6, g8, e7, c8, a7, b5, a3, c4, b6, a8, c7, d5, b4, a6, b8, d7, e5, f7, h8, g6, f8, h7, g5, e4, g3, h1, 
Complete tour: 568
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, c6, a5, b7, d6, c8, a7, b5, a3, c4, e5, f7, h8, g6, e7, g8, f6, e8, c7, a8, b6, d5, b4, a6, b8, d7, f8, h7, g5, e4, g3, h1, 
Complete tour: 569
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, c6, a5, b7, d6, c8, a7, b5, a3, c4, b6, a8, c7, e8, f6, g8, e7, d5, b4, a6, b8, d7, e5, f7, h8, g6, f8, h7, g5, e4, g3, h1, 
Complete tour: 570
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, c6, b4, d5, e7, g8, f6, e8, d6, b7, a5, c4, a3, b5, a7, c8, b6, a8, c7, a6, b8, d7, e5, f7, h8, g6, f8, h7, g5, e4, g3, h1, 
Complete tour: 571
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, c6, e5, g6, h8, f7, d6, b7, a5, c4, a3, b5, a7, c8, b6, a8, c7, e8, f6, g8, e7, d5, b4, a6, b8, d7, f8, h7, g5, e4, g3, h1, 
Complete tour: 572
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, c6, e5, g6, h8, f7, d6, b7, a5, c4, a3, b5, a7, c8, e7, g8, f6, e8, c7, a8, b6, d5, b4, a6, b8, d7, f8, h7, g5, e4, g3, h1, 
Complete tour: 573
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, c6, e5, g6, h8, f7, g5, h7, f8, d7, b8, a6, b4, d5, e7, g8, f6, e8, c7, a8, b6, c8, a7, b5, a3, c4, a5, b7, d6, e4, g3, h1, 
Complete tour: 574
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, c6, e5, g6, h8, f7, g5, h7, f8, d7, b8, a6, b4, d5, b6, a8, c7, e8, d6, b7, a5, c4, a3, b5, a7, c8, e7, g8, f6, e4, g3, h1, 
Complete tour: 575
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, c6, e5, g6, h8, f7, g5, h7, f8, d7, b8, a6, b4, d5, b6, a8, c7, e8, f6, g8, e7, c8, a7, b5, a3, c4, a5, b7, d6, e4, g3, h1, 
Complete tour: 576
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, c6, e5, f7, h8, g6, f8, d7, b8, a6, b4, d5, b6, a8, c7, e8, d6, b7, a5, c4, a3, b5, a7, c8, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 577
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, c6, e5, f7, h8, g6, e7, g8, f6, e8, d6, b7, a5, c4, a3, b5, a7, c8, b6, a8, c7, d5, b4, a6, b8, d7, f8, h7, g5, e4, g3, h1, 
Complete tour: 578
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, c6, e5, d7, b8, a6, b4, d5, e7, g8, f6, e8, c7, a8, b6, c8, a7, b5, a3, c4, a5, b7, d6, f7, h8, g6, f8, h7, g5, e4, g3, h1, 
Complete tour: 579
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, c6, e5, d7, b8, a6, b4, d5, b6, a8, c7, e8, d6, b7, a5, c4, a3, b5, a7, c8, e7, g8, f6, h7, f8, g6, h8, f7, g5, e4, g3, h1, 
Complete tour: 580
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, c6, e5, d7, b8, a6, b4, d5, b6, a8, c7, e8, f6, g8, e7, c8, a7, b5, a3, c4, a5, b7, d6, f7, h8, g6, f8, h7, g5, e4, g3, h1, 
Complete tour: 581
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, c6, e7, g8, f6, e8, d6, b7, a5, c4, a3, b5, a7, c8, b6, a8, c7, d5, b4, a6, b8, d7, e5, f7, h8, g6, f8, h7, g5, e4, g3, h1, 
Complete tour: 582
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, c6, b8, a6, b4, d5, f6, g8, e7, c8, a7, b5, a3, c4, a5, b7, d6, e8, c7, a8, b6, d7, e5, f7, h8, g6, f8, h7, g5, e4, g3, h1, 
Complete tour: 583
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, c6, b8, a6, b4, d5, e7, g8, f6, e8, c7, a8, b6, c8, a7, b5, a3, c4, a5, b7, d6, f7, h8, g6, e5, d7, f8, h7, g5, e4, g3, h1, 
Complete tour: 584
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, c6, b8, a6, b4, d5, c7, a8, b6, c8, a7, b5, a3, c4, a5, b7, d6, e8, f6, g8, e7, g6, h8, f7, e5, d7, f8, h7, g5, e4, g3, h1, 
Complete tour: 585
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, c6, b8, a6, b4, d5, b6, a8, c7, e8, d6, b7, a5, c4, a3, b5, a7, c8, e7, g8, f6, h7, f8, d7, e5, g6, h8, f7, g5, e4, g3, h1, 
Complete tour: 586
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, c6, b8, a6, b4, d5, b6, a8, c7, e8, d6, b7, a5, c4, a3, b5, a7, c8, e7, g8, f6, d7, e5, f7, h8, g6, f8, h7, g5, e4, g3, h1, 
Complete tour: 587
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, c6, b8, a6, b4, d5, b6, a8, c7, e8, f6, g8, e7, c8, a7, b5, a3, c4, a5, b7, d6, f7, h8, g6, e5, d7, f8, h7, g5, e4, g3, h1, 
Complete tour: 588
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, c6, a7, b5, a3, c4, a5, b7, d6, e8, c7, a8, b6, c8, e7, g8, f6, d5, b4, a6, b8, d7, e5, f7, h8, g6, f8, h7, g5, e4, g3, h1, 
Complete tour: 589
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, c6, a7, b5, a3, c4, a5, b7, d6, e8, f6, g8, e7, c8, b6, a8, c7, d5, b4, a6, b8, d7, e5, f7, h8, g6, f8, h7, g5, e4, g3, h1, 
Complete tour: 590
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, c6, a7, b5, a3, c4, a5, b7, d6, c8, b6, a8, c7, e8, f6, g8, e7, d5, b4, a6, b8, d7, e5, f7, h8, g6, f8, h7, g5, e4, g3, h1, 
Complete tour: 591
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, c6, a7, b5, a3, c4, a5, b7, d6, c8, e7, g8, f6, e8, c7, a8, b6, d5, b4, a6, b8, d7, e5, f7, h8, g6, f8, h7, g5, e4, g3, h1, 
Complete tour: 592
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, c6, a7, c8, b6, a8, c7, b5, a3, c4, a5, b7, d6, e8, f6, g8, e7, d5, b4, a6, b8, d7, e5, f7, h8, g6, f8, h7, g5, e4, g3, h1, 
Complete tour: 593
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, c6, a7, c8, e7, g8, f6, e8, d6, b7, a5, c4, a3, b5, c7, a8, b6, d5, b4, a6, b8, d7, e5, f7, h8, g6, f8, h7, g5, e4, g3, h1, 
Complete tour: 594
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, f7, h8, g6, e5, c4, a3, b5, d6, b7, a5, c6, a7, c8, b6, a8, c7, e8, f6, g8, e7, d5, b4, a6, b8, d7, f8, h7, g5, e4, g3, h1, 
Complete tour: 595
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, f7, h8, g6, e5, c4, a3, b5, d6, b7, a5, c6, a7, c8, e7, g8, f6, e8, c7, a8, b6, d5, b4, a6, b8, d7, f8, h7, g5, e4, g3, h1, 
Complete tour: 596
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, f7, h8, g6, e5, c4, a3, b5, c7, a8, b6, c8, a7, c6, a5, b7, d6, e8, f6, g8, e7, d5, b4, a6, b8, d7, f8, h7, g5, e4, g3, h1, 
Complete tour: 597
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, f7, h8, g6, e5, c4, a3, b5, a7, c6, a5, b7, d6, e8, c7, a8, b6, c8, e7, g8, f6, d5, b4, a6, b8, d7, f8, h7, g5, e4, g3, h1, 
Complete tour: 598
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, f7, h8, g6, e5, c4, a3, b5, a7, c6, a5, b7, d6, e8, f6, g8, e7, c8, b6, a8, c7, d5, b4, a6, b8, d7, f8, h7, g5, e4, g3, h1, 
Complete tour: 599
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, f7, h8, g6, e5, c4, a3, b5, a7, c6, a5, b7, d6, c8, b6, a8, c7, e8, f6, g8, e7, d5, b4, a6, b8, d7, f8, h7, g5, e4, g3, h1, 
Complete tour: 600
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, f7, h8, g6, e5, c4, a3, b5, a7, c6, a5, b7, d6, c8, e7, g8, f6, e8, c7, a8, b6, d5, b4, a6, b8, d7, f8, h7, g5, e4, g3, h1, 
Complete tour: 601
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, f7, h8, g6, e5, c4, a3, b5, a7, c8, b6, a8, c7, a6, b4, d5, e7, g8, f6, e8, d6, b7, a5, c6, b8, d7, f8, h7, g5, e4, g3, h1, 
Complete tour: 602
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, f7, h8, g6, e5, c4, a3, b5, a7, c8, b6, a8, c7, d5, e7, g8, f6, e8, d6, b7, a5, c6, b4, a6, b8, d7, f8, h7, g5, e4, g3, h1, 
Complete tour: 603
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, f7, h8, g6, e5, c4, a3, b5, a7, c8, b6, a8, c7, e8, d6, b7, a5, c6, e7, g8, f6, d5, b4, a6, b8, d7, f8, h7, g5, e4, g3, h1, 
Complete tour: 604
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, f7, h8, g6, e5, c4, a3, b5, a7, c8, b6, a8, c7, e8, d6, b7, a5, c6, b8, a6, b4, d5, e7, g8, f6, d7, f8, h7, g5, e4, g3, h1, 
Complete tour: 605
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, f7, h8, g6, e5, c4, a3, b5, a7, c8, d6, b7, a5, c6, e7, g8, f6, e8, c7, a8, b6, d5, b4, a6, b8, d7, f8, h7, g5, e4, g3, h1, 
Complete tour: 606
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, f7, h8, g6, e5, c4, a3, b5, a7, c8, d6, b7, a5, c6, b8, a6, b4, d5, e7, g8, f6, e8, c7, a8, b6, d7, f8, h7, g5, e4, g3, h1, 
Complete tour: 607
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, f7, h8, g6, e5, c4, a3, b5, a7, c8, e7, g8, f6, d5, b4, a6, b8, c6, a5, b7, d6, e8, c7, a8, b6, d7, f8, h7, g5, e4, g3, h1, 
Complete tour: 608
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, f7, h8, g6, e5, c4, a3, b5, a7, c8, e7, g8, f6, d5, b6, a8, c7, e8, d6, b7, a5, c6, b4, a6, b8, d7, f8, h7, g5, e4, g3, h1, 
Complete tour: 609
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, f7, h8, g6, e5, c4, a3, b5, a7, c8, e7, g8, f6, e8, d6, b7, a5, c6, b4, d5, b6, a8, c7, a6, b8, d7, f8, h7, g5, e4, g3, h1, 
Complete tour: 610
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, f7, h8, g6, e5, c4, a3, b5, a7, c8, e7, g8, f6, e8, d6, b7, a5, c6, b8, a6, b4, d5, c7, a8, b6, d7, f8, h7, g5, e4, g3, h1, 
Complete tour: 611
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, f7, h8, g6, e5, c6, a5, b7, d6, c4, a3, b5, a7, c8, b6, a8, c7, e8, f6, g8, e7, d5, b4, a6, b8, d7, f8, h7, g5, e4, g3, h1, 
Complete tour: 612
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, f7, h8, g6, e5, c6, a5, b7, d6, c4, a3, b5, a7, c8, e7, g8, f6, e8, c7, a8, b6, d5, b4, a6, b8, d7, f8, h7, g5, e4, g3, h1, 
Complete tour: 613
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, f7, h8, g6, e5, c6, a5, b7, d6, e8, c7, a8, b6, c4, a3, b5, a7, c8, e7, g8, f6, d5, b4, a6, b8, d7, f8, h7, g5, e4, g3, h1, 
Complete tour: 614
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, f7, h8, g6, e5, c6, a5, b7, d6, e8, f6, g8, e7, c8, a7, b5, a3, c4, b6, a8, c7, d5, b4, a6, b8, d7, f8, h7, g5, e4, g3, h1, 
Complete tour: 615
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, f7, h8, g6, e5, c6, a5, b7, d6, c8, a7, b5, a3, c4, b6, a8, c7, e8, f6, g8, e7, d5, b4, a6, b8, d7, f8, h7, g5, e4, g3, h1, 
Complete tour: 616
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, f7, h8, g6, e5, c6, b4, d5, e7, g8, f6, e8, d6, b7, a5, c4, a3, b5, a7, c8, b6, a8, c7, a6, b8, d7, f8, h7, g5, e4, g3, h1, 
Complete tour: 617
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, f7, h8, g6, e5, c6, e7, g8, f6, e8, d6, b7, a5, c4, a3, b5, a7, c8, b6, a8, c7, d5, b4, a6, b8, d7, f8, h7, g5, e4, g3, h1, 
Complete tour: 618
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, f7, h8, g6, e5, c6, b8, a6, b4, d5, f6, g8, e7, c8, a7, b5, a3, c4, a5, b7, d6, e8, c7, a8, b6, d7, f8, h7, g5, e4, g3, h1, 
Complete tour: 619
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, f7, h8, g6, e5, c6, b8, a6, b4, d5, b6, a8, c7, e8, d6, b7, a5, c4, a3, b5, a7, c8, e7, g8, f6, d7, f8, h7, g5, e4, g3, h1, 
Complete tour: 620
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, f7, h8, g6, e5, c6, a7, b5, a3, c4, a5, b7, d6, e8, c7, a8, b6, c8, e7, g8, f6, d5, b4, a6, b8, d7, f8, h7, g5, e4, g3, h1, 
Complete tour: 621
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, f7, h8, g6, e5, c6, a7, b5, a3, c4, a5, b7, d6, e8, f6, g8, e7, c8, b6, a8, c7, d5, b4, a6, b8, d7, f8, h7, g5, e4, g3, h1, 
Complete tour: 622
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, f7, h8, g6, e5, c6, a7, b5, a3, c4, a5, b7, d6, c8, b6, a8, c7, e8, f6, g8, e7, d5, b4, a6, b8, d7, f8, h7, g5, e4, g3, h1, 
Complete tour: 623
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, f7, h8, g6, e5, c6, a7, b5, a3, c4, a5, b7, d6, c8, e7, g8, f6, e8, c7, a8, b6, d5, b4, a6, b8, d7, f8, h7, g5, e4, g3, h1, 
Complete tour: 624
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, f7, h8, g6, e5, c6, a7, c8, b6, a8, c7, b5, a3, c4, a5, b7, d6, e8, f6, g8, e7, d5, b4, a6, b8, d7, f8, h7, g5, e4, g3, h1, 
Complete tour: 625
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, f7, h8, g6, e5, c6, a7, c8, e7, g8, f6, e8, d6, b7, a5, c4, a3, b5, c7, a8, b6, d5, b4, a6, b8, d7, f8, h7, g5, e4, g3, h1, 
Complete tour: 626
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, f7, h8, g6, f8, d7, e5, c4, a3, b5, a7, c8, b6, a8, c7, e8, d6, b7, a5, c6, b8, a6, b4, d5, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 627
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, f7, h8, g6, f8, d7, e5, c6, b8, a6, b4, d5, b6, a8, c7, e8, d6, b7, a5, c4, a3, b5, a7, c8, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 628
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, f7, h8, g6, f8, d7, b8, a6, b4, d5, b6, a8, c7, e8, d6, b7, a5, c6, e5, c4, a3, b5, a7, c8, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 629
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, f7, h8, g6, e7, g8, f6, d5, b4, a6, b8, c6, a5, b7, d6, e8, c7, a8, b6, c8, a7, b5, a3, c4, e5, d7, f8, h7, g5, e4, g3, h1, 
Complete tour: 630
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, f7, h8, g6, e7, g8, f6, e8, c7, a8, b6, d5, b4, a6, b8, c6, a5, b7, d6, c8, a7, b5, a3, c4, e5, d7, f8, h7, g5, e4, g3, h1, 
Complete tour: 631
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, f7, h8, g6, e7, g8, f6, e8, d6, b7, a5, c4, a3, b5, a7, c8, b6, a8, c7, d5, b4, a6, b8, c6, e5, d7, f8, h7, g5, e4, g3, h1, 
Complete tour: 632
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, f7, h8, g6, e7, g8, f6, e8, d6, b7, a5, c6, e5, c4, a3, b5, a7, c8, b6, a8, c7, d5, b4, a6, b8, d7, f8, h7, g5, e4, g3, h1, 
Complete tour: 633
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, d8, f7, h8, g6, e7, g8, f6, e8, d6, b7, a5, c6, b8, a6, b4, d5, c7, a8, b6, c8, a7, b5, a3, c4, e5, d7, f8, h7, g5, e4, g3, h1, 
Complete tour: 634
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, c7, a8, b6, c4, a3, b5, a7, c8, d6, e8, f6, g8, e7, d5, b4, a6, b8, c6, a5, b7, d8, f7, h8, g6, e5, d7, f8, h7, g5, e4, g3, h1, 
Complete tour: 635
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, c7, a8, b6, c4, a3, b5, a7, c8, d6, e8, f6, g8, e7, d5, b4, a6, b8, d7, e5, c6, a5, b7, d8, f7, h8, g6, f8, h7, g5, e4, g3, h1, 
Complete tour: 636
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, c7, a8, b6, d5, b4, a6, b8, c6, a5, c4, a3, b5, a7, c8, e7, g8, f6, e8, d6, b7, d8, f7, h8, g6, e5, d7, f8, h7, g5, e4, g3, h1, 
Complete tour: 637
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, c7, a8, b6, d5, b4, a6, b8, c6, a5, b7, d8, f7, h8, g6, e7, g8, f6, e8, d6, c8, a7, b5, a3, c4, e5, d7, f8, h7, g5, e4, g3, h1, 
Complete tour: 638
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, c7, a8, b6, d5, b4, a6, b8, c6, e7, g8, f6, e8, d6, c8, a7, b5, a3, c4, a5, b7, d8, f7, h8, g6, e5, d7, f8, h7, g5, e4, g3, h1, 
Complete tour: 639
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, c7, a8, b6, d5, b4, a6, b8, c6, d8, b7, a5, c4, a3, b5, a7, c8, d6, e8, f6, g8, e7, g6, h8, f7, e5, d7, f8, h7, g5, e4, g3, h1, 
Complete tour: 640
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, c7, a8, b6, d5, b4, a6, b8, c6, d8, b7, a5, c4, a3, b5, a7, c8, e7, g8, f6, e8, d6, f7, h8, g6, e5, d7, f8, h7, g5, e4, g3, h1, 
Complete tour: 641
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, c7, a8, b6, d5, b4, a6, b8, c6, a7, c8, e7, g8, f6, e8, d6, b5, a3, c4, a5, b7, d8, f7, h8, g6, e5, d7, f8, h7, g5, e4, g3, h1, 
Complete tour: 642
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, c7, a8, b6, d5, b4, a6, b8, d7, e5, c4, a3, b5, d6, e8, f6, g8, e7, c8, a7, c6, a5, b7, d8, f7, h8, g6, f8, h7, g5, e4, g3, h1, 
Complete tour: 643
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, c7, a8, b6, d5, b4, a6, b8, d7, e5, c4, a3, b5, a7, c8, d6, e8, f6, g8, e7, c6, a5, b7, d8, f7, h8, g6, f8, h7, g5, e4, g3, h1, 
Complete tour: 644
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, c7, a8, b6, d5, b4, a6, b8, d7, e5, c4, a3, b5, a7, c8, e7, g8, f6, e8, d6, b7, a5, c6, d8, f7, h8, g6, f8, h7, g5, e4, g3, h1, 
Complete tour: 645
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, c7, a8, b6, d5, b4, a6, b8, d7, e5, c6, a5, c4, a3, b5, a7, c8, e7, g8, f6, e8, d6, b7, d8, f7, h8, g6, f8, h7, g5, e4, g3, h1, 
Complete tour: 646
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, c7, a8, b6, d5, b4, a6, b8, d7, e5, c6, e7, g8, f6, e8, d6, c8, a7, b5, a3, c4, a5, b7, d8, f7, h8, g6, f8, h7, g5, e4, g3, h1, 
Complete tour: 647
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, c7, a8, b6, d5, b4, a6, b8, d7, e5, c6, d8, b7, a5, c4, a3, b5, a7, c8, e7, g8, f6, e8, d6, f7, h8, g6, f8, h7, g5, e4, g3, h1, 
Complete tour: 648
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, c7, a8, b6, d5, b4, a6, b8, d7, e5, c6, a7, c8, e7, g8, f6, e8, d6, b5, a3, c4, a5, b7, d8, f7, h8, g6, f8, h7, g5, e4, g3, h1, 
Complete tour: 649
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, c7, a8, b6, d5, b4, a6, b8, d7, f8, h7, g5, f7, h8, g6, e5, c6, d8, b7, a5, c4, a3, b5, a7, c8, e7, g8, f6, e8, d6, e4, g3, h1, 
Complete tour: 650
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, c7, a8, b6, d5, e7, g8, f6, e8, d6, c8, a7, b5, a3, c4, e5, g6, h8, f7, d8, b7, a5, c6, b4, a6, b8, d7, f8, h7, g5, e4, g3, h1, 
Complete tour: 651
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, c7, a8, b6, d5, e7, g8, f6, e8, d6, c8, a7, b5, a3, c4, e5, d7, b8, a6, b4, c6, a5, b7, d8, f7, h8, g6, f8, h7, g5, e4, g3, h1, 
Complete tour: 652
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, c7, a8, b6, d5, e7, g8, f6, e8, d6, c8, a7, b5, a3, c4, a5, b7, d8, c6, b4, a6, b8, d7, e5, f7, h8, g6, f8, h7, g5, e4, g3, h1, 
Complete tour: 653
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, c7, a8, b6, d5, e7, g8, f6, e8, d6, c8, a7, b5, a3, c4, a5, b7, d8, f7, h8, g6, e5, c6, b4, a6, b8, d7, f8, h7, g5, e4, g3, h1, 
Complete tour: 654
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, c7, a8, b6, d7, e5, c4, a3, b5, a7, c8, d6, e8, f6, g8, e7, d5, b4, a6, b8, c6, a5, b7, d8, f7, h8, g6, f8, h7, g5, e4, g3, h1, 
Complete tour: 655
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, c7, a8, b6, d7, e5, c6, b8, a6, b4, d5, e7, g8, f6, e8, d6, c8, a7, b5, a3, c4, a5, b7, d8, f7, h8, g6, f8, h7, g5, e4, g3, h1, 
Complete tour: 656
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, c7, a8, b6, d7, b8, a6, b4, d5, e7, g8, f6, e8, d6, c8, a7, b5, a3, c4, e5, c6, a5, b7, d8, f7, h8, g6, f8, h7, g5, e4, g3, h1, 
Complete tour: 657
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, c7, a8, b6, d7, b8, a6, b4, d5, e7, g8, f6, e8, d6, c8, a7, b5, a3, c4, a5, b7, d8, c6, e5, f7, h8, g6, f8, h7, g5, e4, g3, h1, 
Complete tour: 658
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, c7, a8, b6, c8, a7, b5, a3, c4, e5, g6, h8, f7, d8, c6, a5, b7, d6, e8, f6, g8, e7, d5, b4, a6, b8, d7, f8, h7, g5, e4, g3, h1, 
Complete tour: 659
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, c7, a8, b6, c8, a7, b5, a3, c4, e5, d7, b8, a6, b4, d5, e7, g8, f6, e8, d6, b7, a5, c6, d8, f7, h8, g6, f8, h7, g5, e4, g3, h1, 
Complete tour: 660
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, c7, a8, b6, c8, a7, b5, a3, c4, d6, e8, f6, g8, e7, d5, b4, a6, b8, c6, a5, b7, d8, f7, h8, g6, e5, d7, f8, h7, g5, e4, g3, h1, 
Complete tour: 661
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, c7, a8, b6, c8, a7, b5, a3, c4, d6, e8, f6, g8, e7, d5, b4, a6, b8, d7, e5, c6, a5, b7, d8, f7, h8, g6, f8, h7, g5, e4, g3, h1, 
Complete tour: 662
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, c7, a8, b6, c8, a7, b5, a3, c4, a5, c6, e5, g6, h8, f7, d8, b7, d6, e8, f6, g8, e7, d5, b4, a6, b8, d7, f8, h7, g5, e4, g3, h1, 
Complete tour: 663
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, c7, a8, b6, c8, a7, b5, a3, c4, a5, c6, e5, d7, b8, a6, b4, d5, e7, g8, f6, e8, d6, b7, d8, f7, h8, g6, f8, h7, g5, e4, g3, h1, 
Complete tour: 664
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, c7, a8, b6, c8, a7, b5, a3, c4, a5, c6, d8, b7, d6, e8, f6, g8, e7, d5, b4, a6, b8, d7, e5, f7, h8, g6, f8, h7, g5, e4, g3, h1, 
Complete tour: 665
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, c7, a8, b6, c8, a7, b5, a3, c4, a5, c6, b8, a6, b4, d5, e7, g8, f6, e8, d6, b7, d8, f7, h8, g6, e5, d7, f8, h7, g5, e4, g3, h1, 
Complete tour: 666
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, c7, a8, b6, c8, a7, b5, a3, c4, a5, b7, d6, e8, f6, g8, e7, d5, b4, a6, b8, c6, d8, f7, h8, g6, e5, d7, f8, h7, g5, e4, g3, h1, 
Complete tour: 667
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, c7, a8, b6, c8, a7, b5, a3, c4, a5, b7, d6, e8, f6, g8, e7, d5, b4, a6, b8, d7, e5, c6, d8, f7, h8, g6, f8, h7, g5, e4, g3, h1, 
Complete tour: 668
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, c7, a8, b6, c8, a7, b5, a3, c4, a5, b7, d8, c6, e5, g6, h8, f7, d6, e8, f6, g8, e7, d5, b4, a6, b8, d7, f8, h7, g5, e4, g3, h1, 
Complete tour: 669
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, c7, a8, b6, c8, a7, b5, a3, c4, a5, b7, d8, c6, e5, g6, h8, f7, g5, h7, f8, d7, b8, a6, b4, d5, e7, g8, f6, e8, d6, e4, g3, h1, 
Complete tour: 670
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, c7, a8, b6, c8, a7, b5, a3, c4, a5, b7, d8, c6, e5, d7, b8, a6, b4, d5, e7, g8, f6, e8, d6, f7, h8, g6, f8, h7, g5, e4, g3, h1, 
Complete tour: 671
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, c7, a8, b6, c8, a7, b5, a3, c4, a5, b7, d8, c6, b8, a6, b4, d5, e7, g8, f6, e8, d6, f7, h8, g6, e5, d7, f8, h7, g5, e4, g3, h1, 
Complete tour: 672
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, c7, a8, b6, c8, a7, c6, a5, b7, d8, f7, h8, g6, e5, c4, a3, b5, d6, e8, f6, g8, e7, d5, b4, a6, b8, d7, f8, h7, g5, e4, g3, h1, 
Complete tour: 673
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, c7, a8, b6, c8, a7, c6, e5, g6, h8, f7, d8, b7, a5, c4, a3, b5, d6, e8, f6, g8, e7, d5, b4, a6, b8, d7, f8, h7, g5, e4, g3, h1, 
Complete tour: 674
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, c7, a8, b6, c8, a7, c6, e5, d7, b8, a6, b4, d5, e7, g8, f6, e8, d6, b5, a3, c4, a5, b7, d8, f7, h8, g6, f8, h7, g5, e4, g3, h1, 
Complete tour: 675
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, c7, a8, b6, c8, a7, c6, d8, b7, a5, c4, a3, b5, d6, e8, f6, g8, e7, d5, b4, a6, b8, d7, e5, f7, h8, g6, f8, h7, g5, e4, g3, h1, 
Complete tour: 676
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, c7, a8, b6, c8, a7, c6, b8, a6, b4, d5, e7, g8, f6, e8, d6, b5, a3, c4, a5, b7, d8, f7, h8, g6, e5, d7, f8, h7, g5, e4, g3, h1, 
Complete tour: 677
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, c7, a8, b6, c8, d6, e8, f6, g8, e7, d5, b4, a6, b8, c6, a7, b5, a3, c4, a5, b7, d8, f7, h8, g6, e5, d7, f8, h7, g5, e4, g3, h1, 
Complete tour: 678
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, c7, a8, b6, c8, d6, e8, f6, g8, e7, d5, b4, a6, b8, d7, e5, c4, a3, b5, a7, c6, a5, b7, d8, f7, h8, g6, f8, h7, g5, e4, g3, h1, 
Complete tour: 679
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e6, c7, a8, b6, c8, d6, e8, f6, g8, e7, d5, b4, a6, b8, d7, e5, c6, a7, b5, a3, c4, a5, b7, d8, f7, h8, g6, f8, h7, g5, e4, g3, h1, 
Complete tour: 680
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c4, a3, b5, d6, f7, h8, g6, e5, d7, b8, a6, b4, d5, f6, g8, e7, c8, a7, c6, a5, b7, d8, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 681
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c4, a3, b5, d6, c8, a7, c6, a5, b7, d8, e6, g5, h7, f8, g6, h8, f7, e5, d7, b8, a6, b4, d5, e7, g8, f6, e4, g3, h1, 
Complete tour: 682
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c4, a3, b5, d6, c8, a7, c6, a5, b7, d8, e6, f8, g6, h8, f7, e5, d7, b8, a6, b4, d5, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 683
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c4, a3, b5, d6, c8, a7, c6, a5, b7, d8, e6, f8, h7, f6, g8, e7, d5, b4, a6, b8, d7, e5, g6, h8, f7, g5, e4, g3, h1, 
Complete tour: 684
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c4, a3, b5, d6, c8, a7, c6, a5, b7, d8, e6, f8, h7, g5, f7, h8, g6, e5, d7, b8, a6, b4, d5, e7, g8, f6, e4, g3, h1, 
Complete tour: 685
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c4, a3, b5, d6, c8, a7, c6, a5, b7, d8, f7, h8, g6, e5, d7, b8, a6, b4, d5, e7, g8, f6, h7, f8, e6, g5, e4, g3, h1, 
Complete tour: 686
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c4, a3, b5, d6, b7, a5, c6, a7, c8, e7, g8, f6, d5, b4, a6, b8, d7, e5, g6, h8, f7, d8, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 687
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c4, a3, b5, a7, c6, a5, b7, d6, c8, e7, g8, f6, d5, b4, a6, b8, d7, e5, g6, h8, f7, d8, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 688
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c4, a3, b5, a7, c6, a5, b7, d8, e6, g5, h7, f8, g6, h8, f7, e5, d7, b8, a6, b4, d5, f6, g8, e7, c8, d6, e4, g3, h1, 
Complete tour: 689
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c4, a3, b5, a7, c6, a5, b7, d8, e6, f8, h7, g5, f7, h8, g6, e5, d7, b8, a6, b4, d5, f6, g8, e7, c8, d6, e4, g3, h1, 
Complete tour: 690
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c4, a3, b5, a7, c8, d6, f7, h8, g6, e5, d7, f6, g8, e7, d5, b4, a6, b8, c6, a5, b7, d8, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 691
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c4, a3, b5, a7, c8, d6, f7, h8, g6, e5, d7, f8, e6, d8, b7, a5, c6, b8, a6, b4, d5, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 692
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c4, a3, b5, a7, c8, d6, f7, h8, g6, e5, d7, f8, h7, f6, g8, e7, d5, b4, a6, b8, c6, a5, b7, d8, e6, g5, e4, g3, h1, 
Complete tour: 693
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c4, a3, b5, a7, c8, d6, f7, h8, g6, e5, d7, f8, h7, g5, e6, d8, b7, a5, c6, b8, a6, b4, d5, e7, g8, f6, e4, g3, h1, 
Complete tour: 694
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c4, a3, b5, a7, c8, d6, f7, h8, g6, e5, d7, b8, a6, b4, d5, f6, g8, e7, c6, a5, b7, d8, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 695
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c4, a3, b5, a7, c8, d6, f7, h8, g6, e5, c6, a5, b7, d8, e6, g5, h7, f8, d7, b8, a6, b4, d5, e7, g8, f6, e4, g3, h1, 
Complete tour: 696
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c4, a3, b5, a7, c8, d6, f7, h8, g6, e5, c6, a5, b7, d8, e6, f8, d7, b8, a6, b4, d5, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 697
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c4, a3, b5, a7, c8, d6, f7, h8, g6, f8, e6, d8, b7, a5, c6, e5, d7, b8, a6, b4, d5, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 698
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c4, a3, b5, a7, c8, d6, f7, h8, g6, f8, h7, f6, g8, e7, d5, b4, a6, b8, d7, e5, c6, a5, b7, d8, e6, g5, e4, g3, h1, 
Complete tour: 699
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c4, a3, b5, a7, c8, d6, f7, h8, g6, f8, h7, g5, e6, d8, b7, a5, c6, e5, d7, b8, a6, b4, d5, e7, g8, f6, e4, g3, h1, 
Complete tour: 700
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c4, a3, b5, a7, c8, d6, f7, h8, g6, e7, g8, f6, d5, b4, a6, b8, d7, e5, c6, a5, b7, d8, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 701
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c4, a3, b5, a7, c8, d6, b7, a5, c6, e5, g6, h8, f7, d8, e6, g5, h7, f8, d7, b8, a6, b4, d5, e7, g8, f6, e4, g3, h1, 
Complete tour: 702
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c4, a3, b5, a7, c8, d6, b7, a5, c6, e5, g6, h8, f7, d8, e6, f8, d7, b8, a6, b4, d5, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 703
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c4, a3, b5, a7, c8, d6, b7, a5, c6, e5, d7, b8, a6, b4, d5, f6, g8, e7, g6, h8, f7, d8, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 704
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c4, a3, b5, a7, c8, d6, b7, a5, c6, e5, d7, b8, a6, b4, d5, e7, g8, f6, h7, f8, g6, h8, f7, d8, e6, g5, e4, g3, h1, 
Complete tour: 705
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c4, a3, b5, a7, c8, d6, b7, a5, c6, e7, g8, f6, d5, b4, a6, b8, d7, e5, g6, h8, f7, d8, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 706
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c4, a3, b5, a7, c8, d6, b7, a5, c6, d8, e6, g5, h7, f8, g6, h8, f7, e5, d7, b8, a6, b4, d5, e7, g8, f6, e4, g3, h1, 
Complete tour: 707
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c4, a3, b5, a7, c8, d6, b7, a5, c6, d8, e6, f8, g6, h8, f7, e5, d7, b8, a6, b4, d5, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 708
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c4, a3, b5, a7, c8, d6, b7, a5, c6, d8, e6, f8, h7, f6, g8, e7, d5, b4, a6, b8, d7, e5, g6, h8, f7, g5, e4, g3, h1, 
Complete tour: 709
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c4, a3, b5, a7, c8, d6, b7, a5, c6, d8, e6, f8, h7, g5, f7, h8, g6, e5, d7, b8, a6, b4, d5, e7, g8, f6, e4, g3, h1, 
Complete tour: 710
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c4, a3, b5, a7, c8, d6, b7, a5, c6, d8, f7, h8, g6, e5, d7, b8, a6, b4, d5, e7, g8, f6, h7, f8, e6, g5, e4, g3, h1, 
Complete tour: 711
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c4, a3, b5, a7, c8, d6, b7, a5, c6, b8, a6, b4, d5, e7, g8, f6, h7, f8, d7, e5, g6, h8, f7, d8, e6, g5, e4, g3, h1, 
Complete tour: 712
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c4, a3, b5, a7, c8, d6, b7, a5, c6, b8, a6, b4, d5, e7, g8, f6, d7, e5, g6, h8, f7, d8, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 713
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c4, a3, b5, a7, c8, e7, g8, f6, d5, b4, a6, b8, c6, a5, b7, d8, e6, g5, h7, f8, d7, e5, g6, h8, f7, d6, e4, g3, h1, 
Complete tour: 714
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c4, a3, b5, a7, c8, e7, g8, f6, d5, b4, a6, b8, d7, e5, g6, h8, f7, d6, b7, a5, c6, d8, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 715
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c4, a3, b5, a7, c8, e7, g8, f6, d5, b4, a6, b8, d7, e5, g6, h8, f7, g5, h7, f8, e6, d8, c6, a5, b7, d6, e4, g3, h1, 
Complete tour: 716
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c4, a3, b5, a7, c8, e7, g8, f6, d5, b4, a6, b8, d7, e5, f7, h8, g6, f8, h7, g5, e6, d8, c6, a5, b7, d6, e4, g3, h1, 
Complete tour: 717
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c4, a3, b5, a7, c8, e7, g8, f6, d5, b4, a6, b8, d7, e5, c6, a5, b7, d8, e6, g5, h7, f8, g6, h8, f7, d6, e4, g3, h1, 
Complete tour: 718
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c4, a3, b5, a7, c8, e7, g8, f6, d5, b4, a6, b8, d7, f8, h7, g5, e6, d8, b7, a5, c6, e5, g6, h8, f7, d6, e4, g3, h1, 
Complete tour: 719
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c4, a3, b5, a7, c8, e7, g8, f6, d5, b4, a6, b8, d7, f8, h7, g5, e6, d8, f7, h8, g6, e5, c6, a5, b7, d6, e4, g3, h1, 
Complete tour: 720
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, c6, a5, c4, a3, b5, a7, c8, d6, b7, d8, e6, g5, h7, f8, d7, e5, f7, h8, g6, e7, g8, f6, e4, g3, h1, 
Complete tour: 721
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, c6, a5, c4, a3, b5, a7, c8, d6, b7, d8, e6, f8, d7, e5, f7, h8, g6, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 722
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, c6, a5, c4, a3, b5, a7, c8, e7, g8, f6, h7, g5, f7, h8, g6, e5, d7, f8, e6, d8, b7, d6, e4, g3, h1, 
Complete tour: 723
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, c6, a5, c4, a3, b5, a7, c8, e7, g8, f6, h7, g5, e6, f8, d7, e5, g6, h8, f7, d8, b7, d6, e4, g3, h1, 
Complete tour: 724
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, c6, a5, c4, a3, b5, a7, c8, e7, g8, f6, h7, f8, d7, e5, g6, h8, f7, d6, b7, d8, e6, g5, e4, g3, h1, 
Complete tour: 725
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, c6, a5, c4, a3, b5, a7, c8, e7, g8, f6, h7, f8, d7, e5, g6, h8, f7, g5, e6, d8, b7, d6, e4, g3, h1, 
Complete tour: 726
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, c6, a5, c4, a3, b5, a7, c8, e7, g8, f6, d7, e5, g6, h8, f7, d6, b7, d8, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 727
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, c6, a5, c4, a3, b5, a7, c8, e7, g8, f6, d7, e5, g6, h8, f7, g5, h7, f8, e6, d8, b7, d6, e4, g3, h1, 
Complete tour: 728
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, c6, a5, c4, a3, b5, a7, c8, e7, g8, f6, d7, e5, f7, h8, g6, f8, h7, g5, e6, d8, b7, d6, e4, g3, h1, 
Complete tour: 729
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, c6, a5, b7, d6, c4, a3, b5, a7, c8, e7, g8, f6, h7, f8, d7, e5, g6, h8, f7, d8, e6, g5, e4, g3, h1, 
Complete tour: 730
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, c6, a5, b7, d6, c4, a3, b5, a7, c8, e7, g8, f6, d7, e5, g6, h8, f7, d8, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 731
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, c6, a5, b7, d6, c8, a7, b5, a3, c4, e5, d7, f6, g8, e7, g6, h8, f7, d8, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 732
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, c6, a5, b7, d6, c8, a7, b5, a3, c4, e5, d7, f8, e6, d8, f7, h8, g6, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 733
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, c6, a5, b7, d6, c8, a7, b5, a3, c4, e5, d7, f8, h7, f6, g8, e7, g6, h8, f7, d8, e6, g5, e4, g3, h1, 
Complete tour: 734
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, c6, a5, b7, d6, c8, a7, b5, a3, c4, e5, d7, f8, h7, g5, e6, d8, f7, h8, g6, e7, g8, f6, e4, g3, h1, 
Complete tour: 735
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, c6, a5, b7, d8, e6, g5, h7, f6, g8, e7, c8, a7, b5, a3, c4, e5, d7, f8, g6, h8, f7, d6, e4, g3, h1, 
Complete tour: 736
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, c6, a5, b7, d8, e6, g5, h7, f8, d7, e5, c4, a3, b5, a7, c8, d6, f7, h8, g6, e7, g8, f6, e4, g3, h1, 
Complete tour: 737
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, c6, a5, b7, d8, e6, g5, h7, f8, d7, e5, g6, h8, f7, d6, c4, a3, b5, a7, c8, e7, g8, f6, e4, g3, h1, 
Complete tour: 738
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, c6, a5, b7, d8, e6, g5, h7, f8, d7, f6, g8, e7, g6, h8, f7, e5, c4, a3, b5, a7, c8, d6, e4, g3, h1, 
Complete tour: 739
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, c6, a5, b7, d8, e6, g5, h7, f8, d7, f6, g8, e7, c8, a7, b5, a3, c4, e5, g6, h8, f7, d6, e4, g3, h1, 
Complete tour: 740
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, c6, a5, b7, d8, e6, g5, h7, f8, g6, h8, f7, e5, d7, f6, g8, e7, c8, a7, b5, a3, c4, d6, e4, g3, h1, 
Complete tour: 741
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, c6, a5, b7, d8, e6, g5, f7, h8, g6, e5, d7, f8, h7, f6, g8, e7, c8, a7, b5, a3, c4, d6, e4, g3, h1, 
Complete tour: 742
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, c6, a5, b7, d8, e6, g5, f7, h8, g6, e7, g8, f6, h7, f8, d7, e5, c4, a3, b5, a7, c8, d6, e4, g3, h1, 
Complete tour: 743
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, c6, a5, b7, d8, e6, f8, d7, e5, c4, a3, b5, a7, c8, d6, f7, h8, g6, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 744
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, c6, a5, b7, d8, e6, f8, d7, e5, g6, h8, f7, d6, c4, a3, b5, a7, c8, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 745
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, c6, a5, b7, d8, e6, f8, d7, e5, g6, h8, f7, g5, h7, f6, g8, e7, c8, a7, b5, a3, c4, d6, e4, g3, h1, 
Complete tour: 746
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, c6, a5, b7, d8, e6, f8, h7, g5, f7, h8, g6, e5, d7, f6, g8, e7, c8, a7, b5, a3, c4, d6, e4, g3, h1, 
Complete tour: 747
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, c6, a5, b7, d8, e6, f8, h7, g5, f7, h8, g6, e7, g8, f6, d7, e5, c4, a3, b5, a7, c8, d6, e4, g3, h1, 
Complete tour: 748
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, c6, a5, b7, d8, f7, h8, g6, e5, d7, f8, e6, g5, h7, f6, g8, e7, c8, a7, b5, a3, c4, d6, e4, g3, h1, 
Complete tour: 749
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, c6, a5, b7, d8, f7, h8, g6, e7, g8, f6, h7, g5, e6, f8, d7, e5, c4, a3, b5, a7, c8, d6, e4, g3, h1, 
Complete tour: 750
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, c6, e5, g6, h8, f7, d8, e6, g5, h7, f8, d7, f6, g8, e7, c8, a7, b5, a3, c4, a5, b7, d6, e4, g3, h1, 
Complete tour: 751
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, c6, e5, f7, h8, g6, e7, g8, f6, d7, f8, h7, g5, e6, d8, b7, a5, c4, a3, b5, a7, c8, d6, e4, g3, h1, 
Complete tour: 752
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, c6, e5, d7, f6, g8, e7, g6, h8, f7, d6, c8, a7, b5, a3, c4, a5, b7, d8, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 753
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, c6, e5, d7, f6, g8, e7, g6, h8, f7, g5, h7, f8, e6, d8, b7, a5, c4, a3, b5, a7, c8, d6, e4, g3, h1, 
Complete tour: 754
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, c6, e5, d7, f6, g8, e7, c8, a7, b5, a3, c4, a5, b7, d8, e6, g5, h7, f8, g6, h8, f7, d6, e4, g3, h1, 
Complete tour: 755
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, c6, e5, d7, f8, e6, g5, h7, f6, g8, e7, g6, h8, f7, d8, b7, a5, c4, a3, b5, a7, c8, d6, e4, g3, h1, 
Complete tour: 756
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, c6, e5, d7, f8, e6, d8, b7, a5, c4, a3, b5, a7, c8, d6, f7, h8, g6, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 757
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, c6, e5, d7, f8, g6, h8, f7, d8, e6, g5, h7, f6, g8, e7, c8, a7, b5, a3, c4, a5, b7, d6, e4, g3, h1, 
Complete tour: 758
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, c6, e5, d7, f8, h7, f6, g8, e7, g6, h8, f7, d6, c8, a7, b5, a3, c4, a5, b7, d8, e6, g5, e4, g3, h1, 
Complete tour: 759
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, c6, e5, d7, f8, h7, f6, g8, e7, g6, h8, f7, g5, e6, d8, b7, a5, c4, a3, b5, a7, c8, d6, e4, g3, h1, 
Complete tour: 760
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, c6, e5, d7, f8, h7, g5, e6, d8, b7, a5, c4, a3, b5, a7, c8, d6, f7, h8, g6, e7, g8, f6, e4, g3, h1, 
Complete tour: 761
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, c6, e7, g8, f6, h7, g5, f7, h8, g6, e5, d7, f8, e6, d8, b7, a5, c4, a3, b5, a7, c8, d6, e4, g3, h1, 
Complete tour: 762
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, c6, e7, g8, f6, h7, g5, e6, f8, d7, e5, g6, h8, f7, d8, b7, a5, c4, a3, b5, a7, c8, d6, e4, g3, h1, 
Complete tour: 763
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, c6, e7, g8, f6, h7, f8, d7, e5, g6, h8, f7, d6, c8, a7, b5, a3, c4, a5, b7, d8, e6, g5, e4, g3, h1, 
Complete tour: 764
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, c6, e7, g8, f6, h7, f8, d7, e5, g6, h8, f7, g5, e6, d8, b7, a5, c4, a3, b5, a7, c8, d6, e4, g3, h1, 
Complete tour: 765
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, c6, e7, g8, f6, d7, e5, g6, h8, f7, d6, c8, a7, b5, a3, c4, a5, b7, d8, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 766
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, c6, e7, g8, f6, d7, e5, g6, h8, f7, g5, h7, f8, e6, d8, b7, a5, c4, a3, b5, a7, c8, d6, e4, g3, h1, 
Complete tour: 767
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, c6, e7, g8, f6, d7, e5, f7, h8, g6, f8, h7, g5, e6, d8, b7, a5, c4, a3, b5, a7, c8, d6, e4, g3, h1, 
Complete tour: 768
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, c6, d8, b7, a5, c4, a3, b5, a7, c8, e7, g8, f6, h7, g5, e6, f8, d7, e5, g6, h8, f7, d6, e4, g3, h1, 
Complete tour: 769
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, c6, d8, e6, g5, h7, f8, d7, e5, g6, h8, f7, d6, b7, a5, c4, a3, b5, a7, c8, e7, g8, f6, e4, g3, h1, 
Complete tour: 770
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, c6, d8, e6, g5, h7, f8, g6, h8, f7, e5, d7, f6, g8, e7, c8, a7, b5, a3, c4, a5, b7, d6, e4, g3, h1, 
Complete tour: 771
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, c6, d8, e6, g5, f7, h8, g6, e5, d7, f8, h7, f6, g8, e7, c8, a7, b5, a3, c4, a5, b7, d6, e4, g3, h1, 
Complete tour: 772
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, c6, d8, e6, f8, d7, e5, g6, h8, f7, d6, b7, a5, c4, a3, b5, a7, c8, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 773
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, c6, d8, e6, f8, d7, e5, g6, h8, f7, g5, h7, f6, g8, e7, c8, a7, b5, a3, c4, a5, b7, d6, e4, g3, h1, 
Complete tour: 774
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, c6, d8, e6, f8, h7, g5, f7, h8, g6, e5, d7, f6, g8, e7, c8, a7, b5, a3, c4, a5, b7, d6, e4, g3, h1, 
Complete tour: 775
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, c6, d8, f7, h8, g6, e5, d7, f8, e6, g5, h7, f6, g8, e7, c8, a7, b5, a3, c4, a5, b7, d6, e4, g3, h1, 
Complete tour: 776
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, c6, a7, b5, a3, c4, a5, b7, d6, c8, e7, g8, f6, h7, f8, d7, e5, g6, h8, f7, d8, e6, g5, e4, g3, h1, 
Complete tour: 777
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, c6, a7, b5, a3, c4, a5, b7, d6, c8, e7, g8, f6, d7, e5, g6, h8, f7, d8, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 778
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, c6, a7, b5, a3, c4, a5, b7, d8, e6, g5, h7, f8, d7, e5, g6, h8, f7, d6, c8, e7, g8, f6, e4, g3, h1, 
Complete tour: 779
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, c6, a7, b5, a3, c4, a5, b7, d8, e6, g5, h7, f8, g6, h8, f7, e5, d7, f6, g8, e7, c8, d6, e4, g3, h1, 
Complete tour: 780
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, c6, a7, b5, a3, c4, a5, b7, d8, e6, g5, f7, h8, g6, e5, d7, f8, h7, f6, g8, e7, c8, d6, e4, g3, h1, 
Complete tour: 781
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, c6, a7, b5, a3, c4, a5, b7, d8, e6, f8, d7, e5, g6, h8, f7, d6, c8, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 782
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, c6, a7, b5, a3, c4, a5, b7, d8, e6, f8, d7, e5, g6, h8, f7, g5, h7, f6, g8, e7, c8, d6, e4, g3, h1, 
Complete tour: 783
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, c6, a7, b5, a3, c4, a5, b7, d8, e6, f8, h7, g5, f7, h8, g6, e5, d7, f6, g8, e7, c8, d6, e4, g3, h1, 
Complete tour: 784
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, c6, a7, b5, a3, c4, a5, b7, d8, f7, h8, g6, e5, d7, f8, e6, g5, h7, f6, g8, e7, c8, d6, e4, g3, h1, 
Complete tour: 785
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, c6, a7, c8, d6, b5, a3, c4, a5, b7, d8, e6, g5, h7, f8, d7, e5, f7, h8, g6, e7, g8, f6, e4, g3, h1, 
Complete tour: 786
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, c6, a7, c8, d6, b5, a3, c4, a5, b7, d8, e6, f8, d7, e5, f7, h8, g6, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 787
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, c6, a7, c8, e7, g8, f6, h7, g5, f7, h8, g6, e5, d7, f8, e6, d8, b7, a5, c4, a3, b5, d6, e4, g3, h1, 
Complete tour: 788
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, c6, a7, c8, e7, g8, f6, h7, g5, e6, f8, d7, e5, g6, h8, f7, d8, b7, a5, c4, a3, b5, d6, e4, g3, h1, 
Complete tour: 789
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, c6, a7, c8, e7, g8, f6, h7, f8, d7, e5, g6, h8, f7, d6, b5, a3, c4, a5, b7, d8, e6, g5, e4, g3, h1, 
Complete tour: 790
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, c6, a7, c8, e7, g8, f6, h7, f8, d7, e5, g6, h8, f7, g5, e6, d8, b7, a5, c4, a3, b5, d6, e4, g3, h1, 
Complete tour: 791
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, c6, a7, c8, e7, g8, f6, d7, e5, g6, h8, f7, d6, b5, a3, c4, a5, b7, d8, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 792
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, c6, a7, c8, e7, g8, f6, d7, e5, g6, h8, f7, g5, h7, f8, e6, d8, b7, a5, c4, a3, b5, d6, e4, g3, h1, 
Complete tour: 793
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, c6, a7, c8, e7, g8, f6, d7, e5, f7, h8, g6, f8, h7, g5, e6, d8, b7, a5, c4, a3, b5, d6, e4, g3, h1, 
Complete tour: 794
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, e5, c4, a3, b5, d6, f7, h8, g6, f8, e6, d8, b7, a5, c6, a7, c8, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 795
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, e5, c4, a3, b5, d6, f7, h8, g6, f8, h7, f6, g8, e7, c8, a7, c6, a5, b7, d8, e6, g5, e4, g3, h1, 
Complete tour: 796
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, e5, c4, a3, b5, d6, f7, h8, g6, f8, h7, g5, e6, d8, b7, a5, c6, a7, c8, e7, g8, f6, e4, g3, h1, 
Complete tour: 797
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, e5, c4, a3, b5, d6, c8, a7, c6, a5, b7, d8, e6, f8, h7, f6, g8, e7, g6, h8, f7, g5, e4, g3, h1, 
Complete tour: 798
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, e5, c4, a3, b5, d6, c8, a7, c6, a5, b7, d8, e6, f8, h7, g5, f7, h8, g6, e7, g8, f6, e4, g3, h1, 
Complete tour: 799
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, e5, c4, a3, b5, d6, c8, a7, c6, a5, b7, d8, f7, h8, g6, e7, g8, f6, h7, f8, e6, g5, e4, g3, h1, 
Complete tour: 800
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, e5, c4, a3, b5, d6, b7, a5, c6, a7, c8, e7, g8, f6, h7, f8, g6, h8, f7, d8, e6, g5, e4, g3, h1, 
Complete tour: 801
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, e5, c4, a3, b5, a7, c6, a5, b7, d6, c8, e7, g8, f6, h7, f8, g6, h8, f7, d8, e6, g5, e4, g3, h1, 
Complete tour: 802
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, e5, c4, a3, b5, a7, c6, a5, b7, d8, e6, g5, h7, f8, g6, h8, f7, d6, c8, e7, g8, f6, e4, g3, h1, 
Complete tour: 803
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, e5, c4, a3, b5, a7, c6, a5, b7, d8, e6, g5, f7, h8, g6, f8, h7, f6, g8, e7, c8, d6, e4, g3, h1, 
Complete tour: 804
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, e5, c4, a3, b5, a7, c6, a5, b7, d8, e6, f8, g6, h8, f7, d6, c8, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 805
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, e5, c4, a3, b5, a7, c6, a5, b7, d8, e6, f8, g6, h8, f7, g5, h7, f6, g8, e7, c8, d6, e4, g3, h1, 
Complete tour: 806
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, e5, c4, a3, b5, a7, c6, a5, b7, d8, f7, h8, g6, f8, e6, g5, h7, f6, g8, e7, c8, d6, e4, g3, h1, 
Complete tour: 807
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, e5, c4, a3, b5, a7, c8, d6, f7, h8, g6, f8, e6, d8, b7, a5, c6, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 808
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, e5, c4, a3, b5, a7, c8, d6, f7, h8, g6, f8, h7, f6, g8, e7, c6, a5, b7, d8, e6, g5, e4, g3, h1, 
Complete tour: 809
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, e5, c4, a3, b5, a7, c8, d6, f7, h8, g6, f8, h7, g5, e6, d8, b7, a5, c6, e7, g8, f6, e4, g3, h1, 
Complete tour: 810
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, e5, c4, a3, b5, a7, c8, d6, b7, a5, c6, e7, g8, f6, h7, f8, g6, h8, f7, d8, e6, g5, e4, g3, h1, 
Complete tour: 811
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, e5, c4, a3, b5, a7, c8, d6, b7, a5, c6, d8, e6, f8, h7, f6, g8, e7, g6, h8, f7, g5, e4, g3, h1, 
Complete tour: 812
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, e5, c4, a3, b5, a7, c8, d6, b7, a5, c6, d8, e6, f8, h7, g5, f7, h8, g6, e7, g8, f6, e4, g3, h1, 
Complete tour: 813
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, e5, c4, a3, b5, a7, c8, d6, b7, a5, c6, d8, f7, h8, g6, e7, g8, f6, h7, f8, e6, g5, e4, g3, h1, 
Complete tour: 814
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, e5, c4, a3, b5, a7, c8, e7, g8, f6, h7, g5, f7, h8, g6, f8, e6, d8, c6, a5, b7, d6, e4, g3, h1, 
Complete tour: 815
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, e5, c4, a3, b5, a7, c8, e7, g8, f6, h7, g5, e6, f8, g6, h8, f7, d8, c6, a5, b7, d6, e4, g3, h1, 
Complete tour: 816
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, e5, c4, a3, b5, a7, c8, e7, g8, f6, h7, f8, g6, h8, f7, d6, b7, a5, c6, d8, e6, g5, e4, g3, h1, 
Complete tour: 817
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, e5, c4, a3, b5, a7, c8, e7, g8, f6, h7, f8, g6, h8, f7, g5, e6, d8, c6, a5, b7, d6, e4, g3, h1, 
Complete tour: 818
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, e5, g6, h8, f7, d6, b5, a3, c4, a5, b7, d8, c6, a7, c8, e7, g8, f6, h7, f8, e6, g5, e4, g3, h1, 
Complete tour: 819
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, e5, g6, h8, f7, d6, c8, a7, b5, a3, c4, a5, b7, d8, c6, e7, g8, f6, h7, f8, e6, g5, e4, g3, h1, 
Complete tour: 820
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, e5, g6, h8, f7, d6, b7, d8, c6, a5, c4, a3, b5, a7, c8, e7, g8, f6, h7, f8, e6, g5, e4, g3, h1, 
Complete tour: 821
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, e5, g6, h8, f7, g5, h7, f8, e6, d8, b7, a5, c4, a3, b5, d6, c8, a7, c6, e7, g8, f6, e4, g3, h1, 
Complete tour: 822
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, e5, g6, h8, f7, g5, h7, f8, e6, d8, b7, a5, c6, a7, b5, a3, c4, d6, c8, e7, g8, f6, e4, g3, h1, 
Complete tour: 823
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, e5, g6, h8, f7, g5, h7, f8, e6, d8, b7, d6, b5, a3, c4, a5, c6, a7, c8, e7, g8, f6, e4, g3, h1, 
Complete tour: 824
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, e5, g6, h8, f7, g5, h7, f8, e6, d8, b7, d6, c8, a7, b5, a3, c4, a5, c6, e7, g8, f6, e4, g3, h1, 
Complete tour: 825
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, e5, g6, h8, f7, g5, h7, f8, e6, d8, c6, a5, b7, d6, c4, a3, b5, a7, c8, e7, g8, f6, e4, g3, h1, 
Complete tour: 826
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, e5, g6, h8, f7, g5, h7, f8, e6, d8, c6, a7, b5, a3, c4, a5, b7, d6, c8, e7, g8, f6, e4, g3, h1, 
Complete tour: 827
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, e5, g6, h8, f7, g5, e6, f8, h7, f6, g8, e7, c6, d8, b7, a5, c4, a3, b5, a7, c8, d6, e4, g3, h1, 
Complete tour: 828
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, e5, g6, h8, f7, g5, e6, f8, h7, f6, g8, e7, c8, a7, b5, a3, c4, a5, c6, d8, b7, d6, e4, g3, h1, 
Complete tour: 829
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, e5, g6, h8, f7, g5, e6, f8, h7, f6, g8, e7, c8, a7, c6, d8, b7, a5, c4, a3, b5, d6, e4, g3, h1, 
Complete tour: 830
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, e5, g6, h8, f7, d8, b7, a5, c4, a3, b5, d6, c8, a7, c6, e7, g8, f6, h7, f8, e6, g5, e4, g3, h1, 
Complete tour: 831
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, e5, g6, h8, f7, d8, b7, a5, c6, a7, b5, a3, c4, d6, c8, e7, g8, f6, h7, f8, e6, g5, e4, g3, h1, 
Complete tour: 832
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, e5, g6, h8, f7, d8, b7, d6, b5, a3, c4, a5, c6, a7, c8, e7, g8, f6, h7, f8, e6, g5, e4, g3, h1, 
Complete tour: 833
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, e5, g6, h8, f7, d8, b7, d6, c8, a7, b5, a3, c4, a5, c6, e7, g8, f6, h7, f8, e6, g5, e4, g3, h1, 
Complete tour: 834
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, e5, g6, h8, f7, d8, c6, a5, b7, d6, c4, a3, b5, a7, c8, e7, g8, f6, h7, f8, e6, g5, e4, g3, h1, 
Complete tour: 835
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, e5, g6, h8, f7, d8, c6, a7, b5, a3, c4, a5, b7, d6, c8, e7, g8, f6, h7, f8, e6, g5, e4, g3, h1, 
Complete tour: 836
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, e5, f7, h8, g6, f8, e6, g5, h7, f6, g8, e7, c6, d8, b7, a5, c4, a3, b5, a7, c8, d6, e4, g3, h1, 
Complete tour: 837
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, e5, f7, h8, g6, f8, e6, g5, h7, f6, g8, e7, c8, a7, b5, a3, c4, a5, c6, d8, b7, d6, e4, g3, h1, 
Complete tour: 838
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, e5, f7, h8, g6, f8, e6, g5, h7, f6, g8, e7, c8, a7, c6, d8, b7, a5, c4, a3, b5, d6, e4, g3, h1, 
Complete tour: 839
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, e5, f7, h8, g6, f8, e6, d8, b7, a5, c4, a3, b5, d6, c8, a7, c6, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 840
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, e5, f7, h8, g6, f8, e6, d8, b7, a5, c6, a7, b5, a3, c4, d6, c8, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 841
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, e5, f7, h8, g6, f8, e6, d8, b7, d6, b5, a3, c4, a5, c6, a7, c8, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 842
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, e5, f7, h8, g6, f8, e6, d8, b7, d6, c8, a7, b5, a3, c4, a5, c6, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 843
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, e5, f7, h8, g6, f8, e6, d8, c6, a5, b7, d6, c4, a3, b5, a7, c8, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 844
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, e5, f7, h8, g6, f8, e6, d8, c6, a7, b5, a3, c4, a5, b7, d6, c8, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 845
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, e5, f7, h8, g6, f8, h7, f6, g8, e7, c6, a5, c4, a3, b5, a7, c8, d6, b7, d8, e6, g5, e4, g3, h1, 
Complete tour: 846
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, e5, f7, h8, g6, f8, h7, f6, g8, e7, c6, a7, c8, d6, b5, a3, c4, a5, b7, d8, e6, g5, e4, g3, h1, 
Complete tour: 847
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, e5, f7, h8, g6, f8, h7, f6, g8, e7, c8, a7, b5, a3, c4, d6, b7, a5, c6, d8, e6, g5, e4, g3, h1, 
Complete tour: 848
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, e5, f7, h8, g6, f8, h7, f6, g8, e7, c8, a7, c6, a5, c4, a3, b5, d6, b7, d8, e6, g5, e4, g3, h1, 
Complete tour: 849
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, e5, f7, h8, g6, f8, h7, f6, g8, e7, c8, d6, c4, a3, b5, a7, c6, a5, b7, d8, e6, g5, e4, g3, h1, 
Complete tour: 850
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, e5, f7, h8, g6, f8, h7, f6, g8, e7, c8, d6, b7, a5, c4, a3, b5, a7, c6, d8, e6, g5, e4, g3, h1, 
Complete tour: 851
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, e5, f7, h8, g6, f8, h7, g5, e6, d8, b7, a5, c4, a3, b5, d6, c8, a7, c6, e7, g8, f6, e4, g3, h1, 
Complete tour: 852
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, e5, f7, h8, g6, f8, h7, g5, e6, d8, b7, a5, c6, a7, b5, a3, c4, d6, c8, e7, g8, f6, e4, g3, h1, 
Complete tour: 853
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, e5, f7, h8, g6, f8, h7, g5, e6, d8, b7, d6, b5, a3, c4, a5, c6, a7, c8, e7, g8, f6, e4, g3, h1, 
Complete tour: 854
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, e5, f7, h8, g6, f8, h7, g5, e6, d8, b7, d6, c8, a7, b5, a3, c4, a5, c6, e7, g8, f6, e4, g3, h1, 
Complete tour: 855
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, e5, f7, h8, g6, f8, h7, g5, e6, d8, c6, a5, b7, d6, c4, a3, b5, a7, c8, e7, g8, f6, e4, g3, h1, 
Complete tour: 856
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, e5, f7, h8, g6, f8, h7, g5, e6, d8, c6, a7, b5, a3, c4, a5, b7, d6, c8, e7, g8, f6, e4, g3, h1, 
Complete tour: 857
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, e5, c6, a5, c4, a3, b5, a7, c8, d6, b7, d8, e6, f8, h7, f6, g8, e7, g6, h8, f7, g5, e4, g3, h1, 
Complete tour: 858
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, e5, c6, a5, c4, a3, b5, a7, c8, d6, b7, d8, e6, f8, h7, g5, f7, h8, g6, e7, g8, f6, e4, g3, h1, 
Complete tour: 859
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, e5, c6, a5, c4, a3, b5, a7, c8, d6, b7, d8, f7, h8, g6, e7, g8, f6, h7, f8, e6, g5, e4, g3, h1, 
Complete tour: 860
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, e5, c6, a5, c4, a3, b5, a7, c8, e7, g8, f6, h7, g5, f7, h8, g6, f8, e6, d8, b7, d6, e4, g3, h1, 
Complete tour: 861
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, e5, c6, a5, c4, a3, b5, a7, c8, e7, g8, f6, h7, g5, e6, f8, g6, h8, f7, d8, b7, d6, e4, g3, h1, 
Complete tour: 862
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, e5, c6, a5, c4, a3, b5, a7, c8, e7, g8, f6, h7, f8, g6, h8, f7, d6, b7, d8, e6, g5, e4, g3, h1, 
Complete tour: 863
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, e5, c6, a5, c4, a3, b5, a7, c8, e7, g8, f6, h7, f8, g6, h8, f7, g5, e6, d8, b7, d6, e4, g3, h1, 
Complete tour: 864
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, e5, c6, a5, b7, d6, c4, a3, b5, a7, c8, e7, g8, f6, h7, f8, g6, h8, f7, d8, e6, g5, e4, g3, h1, 
Complete tour: 865
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, e5, c6, a5, b7, d8, e6, g5, h7, f8, g6, h8, f7, d6, c4, a3, b5, a7, c8, e7, g8, f6, e4, g3, h1, 
Complete tour: 866
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, e5, c6, a5, b7, d8, e6, g5, f7, h8, g6, f8, h7, f6, g8, e7, c8, a7, b5, a3, c4, d6, e4, g3, h1, 
Complete tour: 867
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, e5, c6, a5, b7, d8, e6, f8, g6, h8, f7, d6, c4, a3, b5, a7, c8, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 868
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, e5, c6, a5, b7, d8, e6, f8, g6, h8, f7, g5, h7, f6, g8, e7, c8, a7, b5, a3, c4, d6, e4, g3, h1, 
Complete tour: 869
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, e5, c6, a5, b7, d8, f7, h8, g6, f8, e6, g5, h7, f6, g8, e7, c8, a7, b5, a3, c4, d6, e4, g3, h1, 
Complete tour: 870
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, e5, c6, e7, g8, f6, h7, g5, f7, h8, g6, f8, e6, d8, b7, a5, c4, a3, b5, a7, c8, d6, e4, g3, h1, 
Complete tour: 871
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, e5, c6, e7, g8, f6, h7, g5, e6, f8, g6, h8, f7, d8, b7, a5, c4, a3, b5, a7, c8, d6, e4, g3, h1, 
Complete tour: 872
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, e5, c6, e7, g8, f6, h7, f8, g6, h8, f7, d6, c8, a7, b5, a3, c4, a5, b7, d8, e6, g5, e4, g3, h1, 
Complete tour: 873
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, e5, c6, e7, g8, f6, h7, f8, g6, h8, f7, g5, e6, d8, b7, a5, c4, a3, b5, a7, c8, d6, e4, g3, h1, 
Complete tour: 874
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, e5, c6, d8, b7, a5, c4, a3, b5, a7, c8, d6, f7, h8, g6, e7, g8, f6, h7, f8, e6, g5, e4, g3, h1, 
Complete tour: 875
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, e5, c6, d8, b7, a5, c4, a3, b5, a7, c8, e7, g8, f6, h7, g5, e6, f8, g6, h8, f7, d6, e4, g3, h1, 
Complete tour: 876
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, e5, c6, d8, e6, g5, h7, f8, g6, h8, f7, d6, b7, a5, c4, a3, b5, a7, c8, e7, g8, f6, e4, g3, h1, 
Complete tour: 877
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, e5, c6, d8, e6, g5, f7, h8, g6, f8, h7, f6, g8, e7, c8, a7, b5, a3, c4, a5, b7, d6, e4, g3, h1, 
Complete tour: 878
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, e5, c6, d8, e6, f8, g6, h8, f7, d6, b7, a5, c4, a3, b5, a7, c8, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 879
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, e5, c6, d8, e6, f8, g6, h8, f7, g5, h7, f6, g8, e7, c8, a7, b5, a3, c4, a5, b7, d6, e4, g3, h1, 
Complete tour: 880
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, e5, c6, d8, f7, h8, g6, f8, e6, g5, h7, f6, g8, e7, c8, a7, b5, a3, c4, a5, b7, d6, e4, g3, h1, 
Complete tour: 881
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, e5, c6, a7, b5, a3, c4, a5, b7, d6, c8, e7, g8, f6, h7, f8, g6, h8, f7, d8, e6, g5, e4, g3, h1, 
Complete tour: 882
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, e5, c6, a7, b5, a3, c4, a5, b7, d8, e6, g5, h7, f8, g6, h8, f7, d6, c8, e7, g8, f6, e4, g3, h1, 
Complete tour: 883
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, e5, c6, a7, b5, a3, c4, a5, b7, d8, e6, g5, f7, h8, g6, f8, h7, f6, g8, e7, c8, d6, e4, g3, h1, 
Complete tour: 884
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, e5, c6, a7, b5, a3, c4, a5, b7, d8, e6, f8, g6, h8, f7, d6, c8, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 885
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, e5, c6, a7, b5, a3, c4, a5, b7, d8, e6, f8, g6, h8, f7, g5, h7, f6, g8, e7, c8, d6, e4, g3, h1, 
Complete tour: 886
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, e5, c6, a7, b5, a3, c4, a5, b7, d8, f7, h8, g6, f8, e6, g5, h7, f6, g8, e7, c8, d6, e4, g3, h1, 
Complete tour: 887
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, e5, c6, a7, c8, d6, b5, a3, c4, a5, b7, d8, e6, f8, h7, f6, g8, e7, g6, h8, f7, g5, e4, g3, h1, 
Complete tour: 888
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, e5, c6, a7, c8, d6, b5, a3, c4, a5, b7, d8, e6, f8, h7, g5, f7, h8, g6, e7, g8, f6, e4, g3, h1, 
Complete tour: 889
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, e5, c6, a7, c8, d6, b5, a3, c4, a5, b7, d8, f7, h8, g6, e7, g8, f6, h7, f8, e6, g5, e4, g3, h1, 
Complete tour: 890
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, e5, c6, a7, c8, e7, g8, f6, h7, g5, f7, h8, g6, f8, e6, d8, b7, a5, c4, a3, b5, d6, e4, g3, h1, 
Complete tour: 891
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, e5, c6, a7, c8, e7, g8, f6, h7, g5, e6, f8, g6, h8, f7, d8, b7, a5, c4, a3, b5, d6, e4, g3, h1, 
Complete tour: 892
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, e5, c6, a7, c8, e7, g8, f6, h7, f8, g6, h8, f7, d6, b5, a3, c4, a5, b7, d8, e6, g5, e4, g3, h1, 
Complete tour: 893
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, e5, c6, a7, c8, e7, g8, f6, h7, f8, g6, h8, f7, g5, e6, d8, b7, a5, c4, a3, b5, d6, e4, g3, h1, 
Complete tour: 894
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, f6, g8, e7, c6, a5, b7, d6, c8, a7, b5, a3, c4, e5, g6, h8, f7, d8, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 895
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, f6, g8, e7, c6, a5, b7, d8, e6, g5, h7, f8, g6, h8, f7, e5, c4, a3, b5, a7, c8, d6, e4, g3, h1, 
Complete tour: 896
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, f6, g8, e7, c6, a5, b7, d8, e6, f8, h7, g5, f7, h8, g6, e5, c4, a3, b5, a7, c8, d6, e4, g3, h1, 
Complete tour: 897
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, f6, g8, e7, c6, e5, g6, h8, f7, d6, c8, a7, b5, a3, c4, a5, b7, d8, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 898
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, f6, g8, e7, c6, e5, g6, h8, f7, g5, h7, f8, e6, d8, b7, a5, c4, a3, b5, a7, c8, d6, e4, g3, h1, 
Complete tour: 899
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, f6, g8, e7, c6, e5, f7, h8, g6, f8, h7, g5, e6, d8, b7, a5, c4, a3, b5, a7, c8, d6, e4, g3, h1, 
Complete tour: 900
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, f6, g8, e7, g6, h8, f7, d6, c8, a7, b5, a3, c4, e5, c6, a5, b7, d8, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 901
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, f6, g8, e7, g6, h8, f7, e5, c4, a3, b5, d6, c8, a7, c6, a5, b7, d8, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 902
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, f6, g8, e7, g6, h8, f7, e5, c4, a3, b5, a7, c8, d6, b7, a5, c6, d8, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 903
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, f6, g8, e7, g6, h8, f7, e5, c6, a5, c4, a3, b5, a7, c8, d6, b7, d8, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 904
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, f6, g8, e7, g6, h8, f7, e5, c6, a7, c8, d6, b5, a3, c4, a5, b7, d8, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 905
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, f6, g8, e7, g6, h8, f7, g5, h7, f8, e6, d8, b7, a5, c6, e5, c4, a3, b5, a7, c8, d6, e4, g3, h1, 
Complete tour: 906
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, f6, g8, e7, c8, a7, b5, a3, c4, e5, g6, h8, f7, d6, b7, a5, c6, d8, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 907
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, f6, g8, e7, c8, a7, b5, a3, c4, e5, g6, h8, f7, g5, h7, f8, e6, d8, c6, a5, b7, d6, e4, g3, h1, 
Complete tour: 908
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, f6, g8, e7, c8, a7, b5, a3, c4, e5, f7, h8, g6, f8, h7, g5, e6, d8, c6, a5, b7, d6, e4, g3, h1, 
Complete tour: 909
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, f6, g8, e7, c8, a7, b5, a3, c4, e5, c6, a5, b7, d8, e6, g5, h7, f8, g6, h8, f7, d6, e4, g3, h1, 
Complete tour: 910
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, f6, g8, e7, c8, a7, b5, a3, c4, d6, f7, h8, g6, e5, c6, a5, b7, d8, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 911
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, f6, g8, e7, c8, a7, b5, a3, c4, d6, b7, a5, c6, e5, g6, h8, f7, d8, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 912
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, f6, g8, e7, c8, a7, b5, a3, c4, a5, c6, e5, g6, h8, f7, d6, b7, d8, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 913
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, f6, g8, e7, c8, a7, b5, a3, c4, a5, c6, e5, g6, h8, f7, g5, h7, f8, e6, d8, b7, d6, e4, g3, h1, 
Complete tour: 914
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, f6, g8, e7, c8, a7, b5, a3, c4, a5, c6, e5, f7, h8, g6, f8, h7, g5, e6, d8, b7, d6, e4, g3, h1, 
Complete tour: 915
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, f6, g8, e7, c8, a7, b5, a3, c4, a5, b7, d6, f7, h8, g6, e5, c6, d8, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 916
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, f6, g8, e7, c8, a7, c6, a5, b7, d6, b5, a3, c4, e5, g6, h8, f7, d8, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 917
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, f6, g8, e7, c8, a7, c6, a5, b7, d8, e6, g5, h7, f8, g6, h8, f7, e5, c4, a3, b5, d6, e4, g3, h1, 
Complete tour: 918
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, f6, g8, e7, c8, a7, c6, a5, b7, d8, e6, f8, h7, g5, f7, h8, g6, e5, c4, a3, b5, d6, e4, g3, h1, 
Complete tour: 919
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, f6, g8, e7, c8, a7, c6, e5, g6, h8, f7, d6, b5, a3, c4, a5, b7, d8, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 920
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, f6, g8, e7, c8, a7, c6, e5, g6, h8, f7, g5, h7, f8, e6, d8, b7, a5, c4, a3, b5, d6, e4, g3, h1, 
Complete tour: 921
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, f6, g8, e7, c8, a7, c6, e5, f7, h8, g6, f8, h7, g5, e6, d8, b7, a5, c4, a3, b5, d6, e4, g3, h1, 
Complete tour: 922
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, f6, g8, e7, c8, d6, f7, h8, g6, e5, c4, a3, b5, a7, c6, a5, b7, d8, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 923
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, f6, g8, e7, c8, d6, f7, h8, g6, e5, c6, a7, b5, a3, c4, a5, b7, d8, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 924
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, f6, g8, e7, c8, d6, b7, a5, c4, a3, b5, a7, c6, e5, g6, h8, f7, d8, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 925
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, f6, g8, e7, c8, d6, b7, a5, c6, a7, b5, a3, c4, e5, g6, h8, f7, d8, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 926
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, f8, e6, g5, h7, f6, g8, e7, c6, a5, b7, d8, f7, h8, g6, e5, c4, a3, b5, a7, c8, d6, e4, g3, h1, 
Complete tour: 927
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, f8, e6, g5, h7, f6, g8, e7, c6, e5, g6, h8, f7, d8, b7, a5, c4, a3, b5, a7, c8, d6, e4, g3, h1, 
Complete tour: 928
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, f8, e6, g5, h7, f6, g8, e7, g6, h8, f7, e5, c6, d8, b7, a5, c4, a3, b5, a7, c8, d6, e4, g3, h1, 
Complete tour: 929
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, f8, e6, g5, h7, f6, g8, e7, g6, h8, f7, d8, b7, a5, c6, e5, c4, a3, b5, a7, c8, d6, e4, g3, h1, 
Complete tour: 930
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, f8, e6, g5, h7, f6, g8, e7, c8, a7, b5, a3, c4, e5, g6, h8, f7, d8, c6, a5, b7, d6, e4, g3, h1, 
Complete tour: 931
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, f8, e6, g5, h7, f6, g8, e7, c8, a7, b5, a3, c4, a5, c6, e5, g6, h8, f7, d8, b7, d6, e4, g3, h1, 
Complete tour: 932
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, f8, e6, g5, h7, f6, g8, e7, c8, a7, b5, a3, c4, a5, b7, d8, c6, e5, g6, h8, f7, d6, e4, g3, h1, 
Complete tour: 933
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, f8, e6, g5, h7, f6, g8, e7, c8, a7, c6, a5, b7, d8, f7, h8, g6, e5, c4, a3, b5, d6, e4, g3, h1, 
Complete tour: 934
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, f8, e6, g5, h7, f6, g8, e7, c8, a7, c6, e5, g6, h8, f7, d8, b7, a5, c4, a3, b5, d6, e4, g3, h1, 
Complete tour: 935
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, f8, e6, d8, b7, a5, c4, a3, b5, d6, f7, h8, g6, e5, c6, a7, c8, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 936
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, f8, e6, d8, b7, a5, c4, a3, b5, d6, c8, a7, c6, e5, f7, h8, g6, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 937
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, f8, e6, d8, b7, a5, c4, a3, b5, a7, c6, e5, g6, h8, f7, d6, c8, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 938
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, f8, e6, d8, b7, a5, c4, a3, b5, a7, c6, e5, g6, h8, f7, g5, h7, f6, g8, e7, c8, d6, e4, g3, h1, 
Complete tour: 939
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, f8, e6, d8, b7, a5, c4, a3, b5, a7, c8, d6, f7, h8, g6, e5, c6, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 940
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, f8, e6, d8, b7, a5, c6, e5, c4, a3, b5, a7, c8, d6, f7, h8, g6, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 941
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, f8, e6, d8, b7, a5, c6, e5, g6, h8, f7, d6, c4, a3, b5, a7, c8, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 942
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, f8, e6, d8, b7, a5, c6, e5, g6, h8, f7, g5, h7, f6, g8, e7, c8, a7, b5, a3, c4, d6, e4, g3, h1, 
Complete tour: 943
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, f8, e6, d8, b7, a5, c6, e7, g8, f6, h7, g5, f7, h8, g6, e5, c4, a3, b5, a7, c8, d6, e4, g3, h1, 
Complete tour: 944
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, f8, e6, d8, b7, a5, c6, a7, b5, a3, c4, e5, g6, h8, f7, d6, c8, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 945
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, f8, e6, d8, b7, a5, c6, a7, b5, a3, c4, e5, g6, h8, f7, g5, h7, f6, g8, e7, c8, d6, e4, g3, h1, 
Complete tour: 946
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, f8, e6, d8, b7, a5, c6, a7, c8, d6, b5, a3, c4, e5, f7, h8, g6, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 947
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, f8, e6, d8, b7, a5, c6, a7, c8, e7, g8, f6, h7, g5, f7, h8, g6, e5, c4, a3, b5, d6, e4, g3, h1, 
Complete tour: 948
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, f8, e6, d8, b7, d6, f7, h8, g6, e5, c6, a5, c4, a3, b5, a7, c8, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 949
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, f8, e6, d8, b7, d6, c8, a7, b5, a3, c4, a5, c6, e5, f7, h8, g6, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 950
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, f8, e6, d8, c6, a5, b7, d6, f7, h8, g6, e5, c4, a3, b5, a7, c8, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 951
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, f8, e6, d8, c6, a5, b7, d6, c8, a7, b5, a3, c4, e5, f7, h8, g6, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 952
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, f8, e6, d8, c6, e5, g6, h8, f7, d6, b7, a5, c4, a3, b5, a7, c8, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 953
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, f8, e6, d8, c6, e5, g6, h8, f7, g5, h7, f6, g8, e7, c8, a7, b5, a3, c4, a5, b7, d6, e4, g3, h1, 
Complete tour: 954
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, f8, e6, d8, f7, h8, g6, e5, c4, a3, b5, d6, b7, a5, c6, a7, c8, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 955
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, f8, e6, d8, f7, h8, g6, e5, c4, a3, b5, a7, c6, a5, b7, d6, c8, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 956
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, f8, e6, d8, f7, h8, g6, e5, c4, a3, b5, a7, c8, d6, b7, a5, c6, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 957
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, f8, e6, d8, f7, h8, g6, e5, c6, a5, b7, d6, c4, a3, b5, a7, c8, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 958
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, f8, e6, d8, f7, h8, g6, e5, c6, a7, b5, a3, c4, a5, b7, d6, c8, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 959
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, f8, g6, h8, f7, e5, c4, a3, b5, a7, c6, a5, b7, d8, e6, g5, h7, f6, g8, e7, c8, d6, e4, g3, h1, 
Complete tour: 960
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, f8, g6, h8, f7, e5, c4, a3, b5, a7, c8, e7, g8, f6, h7, g5, e6, d8, c6, a5, b7, d6, e4, g3, h1, 
Complete tour: 961
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, f8, g6, h8, f7, e5, c6, a5, c4, a3, b5, a7, c8, e7, g8, f6, h7, g5, e6, d8, b7, d6, e4, g3, h1, 
Complete tour: 962
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, f8, g6, h8, f7, e5, c6, a5, b7, d8, e6, g5, h7, f6, g8, e7, c8, a7, b5, a3, c4, d6, e4, g3, h1, 
Complete tour: 963
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, f8, g6, h8, f7, e5, c6, e7, g8, f6, h7, g5, e6, d8, b7, a5, c4, a3, b5, a7, c8, d6, e4, g3, h1, 
Complete tour: 964
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, f8, g6, h8, f7, e5, c6, d8, e6, g5, h7, f6, g8, e7, c8, a7, b5, a3, c4, a5, b7, d6, e4, g3, h1, 
Complete tour: 965
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, f8, g6, h8, f7, e5, c6, a7, b5, a3, c4, a5, b7, d8, e6, g5, h7, f6, g8, e7, c8, d6, e4, g3, h1, 
Complete tour: 966
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, f8, g6, h8, f7, e5, c6, a7, c8, e7, g8, f6, h7, g5, e6, d8, b7, a5, c4, a3, b5, d6, e4, g3, h1, 
Complete tour: 967
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, f8, g6, h8, f7, d8, e6, g5, h7, f6, g8, e7, c8, a7, b5, a3, c4, e5, c6, a5, b7, d6, e4, g3, h1, 
Complete tour: 968
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, f8, h7, f6, g8, e7, c6, a5, b7, d6, c8, a7, b5, a3, c4, e5, g6, h8, f7, d8, e6, g5, e4, g3, h1, 
Complete tour: 969
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, f8, h7, f6, g8, e7, c6, a5, b7, d8, e6, g5, f7, h8, g6, e5, c4, a3, b5, a7, c8, d6, e4, g3, h1, 
Complete tour: 970
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, f8, h7, f6, g8, e7, c6, e5, g6, h8, f7, d6, c8, a7, b5, a3, c4, a5, b7, d8, e6, g5, e4, g3, h1, 
Complete tour: 971
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, f8, h7, f6, g8, e7, c6, e5, g6, h8, f7, g5, e6, d8, b7, a5, c4, a3, b5, a7, c8, d6, e4, g3, h1, 
Complete tour: 972
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, f8, h7, f6, g8, e7, g6, h8, f7, d6, c8, a7, b5, a3, c4, e5, c6, a5, b7, d8, e6, g5, e4, g3, h1, 
Complete tour: 973
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, f8, h7, f6, g8, e7, g6, h8, f7, e5, c4, a3, b5, d6, c8, a7, c6, a5, b7, d8, e6, g5, e4, g3, h1, 
Complete tour: 974
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, f8, h7, f6, g8, e7, g6, h8, f7, e5, c4, a3, b5, a7, c8, d6, b7, a5, c6, d8, e6, g5, e4, g3, h1, 
Complete tour: 975
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, f8, h7, f6, g8, e7, g6, h8, f7, e5, c6, a5, c4, a3, b5, a7, c8, d6, b7, d8, e6, g5, e4, g3, h1, 
Complete tour: 976
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, f8, h7, f6, g8, e7, g6, h8, f7, e5, c6, a7, c8, d6, b5, a3, c4, a5, b7, d8, e6, g5, e4, g3, h1, 
Complete tour: 977
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, f8, h7, f6, g8, e7, g6, h8, f7, g5, e6, d8, b7, a5, c6, e5, c4, a3, b5, a7, c8, d6, e4, g3, h1, 
Complete tour: 978
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, f8, h7, f6, g8, e7, c8, a7, b5, a3, c4, e5, g6, h8, f7, d6, b7, a5, c6, d8, e6, g5, e4, g3, h1, 
Complete tour: 979
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, f8, h7, f6, g8, e7, c8, a7, b5, a3, c4, e5, g6, h8, f7, g5, e6, d8, c6, a5, b7, d6, e4, g3, h1, 
Complete tour: 980
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, f8, h7, f6, g8, e7, c8, a7, b5, a3, c4, d6, f7, h8, g6, e5, c6, a5, b7, d8, e6, g5, e4, g3, h1, 
Complete tour: 981
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, f8, h7, f6, g8, e7, c8, a7, b5, a3, c4, d6, b7, a5, c6, e5, g6, h8, f7, d8, e6, g5, e4, g3, h1, 
Complete tour: 982
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, f8, h7, f6, g8, e7, c8, a7, b5, a3, c4, a5, c6, e5, g6, h8, f7, d6, b7, d8, e6, g5, e4, g3, h1, 
Complete tour: 983
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, f8, h7, f6, g8, e7, c8, a7, b5, a3, c4, a5, c6, e5, g6, h8, f7, g5, e6, d8, b7, d6, e4, g3, h1, 
Complete tour: 984
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, f8, h7, f6, g8, e7, c8, a7, b5, a3, c4, a5, b7, d6, f7, h8, g6, e5, c6, d8, e6, g5, e4, g3, h1, 
Complete tour: 985
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, f8, h7, f6, g8, e7, c8, a7, c6, a5, b7, d6, b5, a3, c4, e5, g6, h8, f7, d8, e6, g5, e4, g3, h1, 
Complete tour: 986
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, f8, h7, f6, g8, e7, c8, a7, c6, a5, b7, d8, e6, g5, f7, h8, g6, e5, c4, a3, b5, d6, e4, g3, h1, 
Complete tour: 987
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, f8, h7, f6, g8, e7, c8, a7, c6, e5, g6, h8, f7, d6, b5, a3, c4, a5, b7, d8, e6, g5, e4, g3, h1, 
Complete tour: 988
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, f8, h7, f6, g8, e7, c8, a7, c6, e5, g6, h8, f7, g5, e6, d8, b7, a5, c4, a3, b5, d6, e4, g3, h1, 
Complete tour: 989
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, f8, h7, f6, g8, e7, c8, d6, f7, h8, g6, e5, c4, a3, b5, a7, c6, a5, b7, d8, e6, g5, e4, g3, h1, 
Complete tour: 990
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, f8, h7, f6, g8, e7, c8, d6, f7, h8, g6, e5, c6, a7, b5, a3, c4, a5, b7, d8, e6, g5, e4, g3, h1, 
Complete tour: 991
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, f8, h7, f6, g8, e7, c8, d6, b7, a5, c4, a3, b5, a7, c6, e5, g6, h8, f7, d8, e6, g5, e4, g3, h1, 
Complete tour: 992
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, f8, h7, f6, g8, e7, c8, d6, b7, a5, c6, a7, b5, a3, c4, e5, g6, h8, f7, d8, e6, g5, e4, g3, h1, 
Complete tour: 993
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, f8, h7, g5, e6, d8, b7, a5, c4, a3, b5, d6, f7, h8, g6, e5, c6, a7, c8, e7, g8, f6, e4, g3, h1, 
Complete tour: 994
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, f8, h7, g5, e6, d8, b7, a5, c4, a3, b5, d6, c8, a7, c6, e5, f7, h8, g6, e7, g8, f6, e4, g3, h1, 
Complete tour: 995
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, f8, h7, g5, e6, d8, b7, a5, c4, a3, b5, a7, c6, e5, g6, h8, f7, d6, c8, e7, g8, f6, e4, g3, h1, 
Complete tour: 996
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, f8, h7, g5, e6, d8, b7, a5, c4, a3, b5, a7, c8, d6, f7, h8, g6, e5, c6, e7, g8, f6, e4, g3, h1, 
Complete tour: 997
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, f8, h7, g5, e6, d8, b7, a5, c6, e5, c4, a3, b5, a7, c8, d6, f7, h8, g6, e7, g8, f6, e4, g3, h1, 
Complete tour: 998
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, f8, h7, g5, e6, d8, b7, a5, c6, e5, g6, h8, f7, d6, c4, a3, b5, a7, c8, e7, g8, f6, e4, g3, h1, 
Complete tour: 999
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, f8, h7, g5, e6, d8, b7, a5, c6, a7, b5, a3, c4, e5, g6, h8, f7, d6, c8, e7, g8, f6, e4, g3, h1, 
Complete tour: 1000
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, f8, h7, g5, e6, d8, b7, a5, c6, a7, c8, d6, b5, a3, c4, e5, f7, h8, g6, e7, g8, f6, e4, g3, h1, 
Complete tour: 1001
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, f8, h7, g5, e6, d8, b7, d6, f7, h8, g6, e5, c6, a5, c4, a3, b5, a7, c8, e7, g8, f6, e4, g3, h1, 
Complete tour: 1002
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, f8, h7, g5, e6, d8, b7, d6, c8, a7, b5, a3, c4, a5, c6, e5, f7, h8, g6, e7, g8, f6, e4, g3, h1, 
Complete tour: 1003
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, f8, h7, g5, e6, d8, c6, a5, b7, d6, f7, h8, g6, e5, c4, a3, b5, a7, c8, e7, g8, f6, e4, g3, h1, 
Complete tour: 1004
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, f8, h7, g5, e6, d8, c6, a5, b7, d6, c8, a7, b5, a3, c4, e5, f7, h8, g6, e7, g8, f6, e4, g3, h1, 
Complete tour: 1005
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, f8, h7, g5, e6, d8, c6, e5, g6, h8, f7, d6, b7, a5, c4, a3, b5, a7, c8, e7, g8, f6, e4, g3, h1, 
Complete tour: 1006
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, f8, h7, g5, e6, d8, f7, h8, g6, e5, c4, a3, b5, d6, b7, a5, c6, a7, c8, e7, g8, f6, e4, g3, h1, 
Complete tour: 1007
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, f8, h7, g5, e6, d8, f7, h8, g6, e5, c4, a3, b5, a7, c6, a5, b7, d6, c8, e7, g8, f6, e4, g3, h1, 
Complete tour: 1008
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, f8, h7, g5, e6, d8, f7, h8, g6, e5, c4, a3, b5, a7, c8, d6, b7, a5, c6, e7, g8, f6, e4, g3, h1, 
Complete tour: 1009
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, f8, h7, g5, e6, d8, f7, h8, g6, e5, c6, a5, b7, d6, c4, a3, b5, a7, c8, e7, g8, f6, e4, g3, h1, 
Complete tour: 1010
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, b4, a6, b8, d7, f8, h7, g5, e6, d8, f7, h8, g6, e5, c6, a7, b5, a3, c4, a5, b7, d6, c8, e7, g8, f6, e4, g3, h1, 
Complete tour: 1011
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, f6, g8, e7, c6, b4, a6, b8, d7, e5, g6, h8, f7, d6, c8, a7, b5, a3, c4, a5, b7, d8, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1012
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, f6, g8, e7, c6, b4, a6, b8, d7, e5, g6, h8, f7, g5, h7, f8, e6, d8, b7, a5, c4, a3, b5, a7, c8, d6, e4, g3, h1, 
Complete tour: 1013
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, f6, g8, e7, c6, b4, a6, b8, d7, e5, f7, h8, g6, f8, h7, g5, e6, d8, b7, a5, c4, a3, b5, a7, c8, d6, e4, g3, h1, 
Complete tour: 1014
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, f6, g8, e7, g6, h8, f7, d6, c8, a7, b5, a3, c4, e5, d7, b8, a6, b4, c6, a5, b7, d8, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1015
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, f6, g8, e7, g6, h8, f7, e5, d7, b8, a6, b4, c6, a5, c4, a3, b5, a7, c8, d6, b7, d8, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1016
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, f6, g8, e7, g6, h8, f7, e5, d7, b8, a6, b4, c6, a7, c8, d6, b5, a3, c4, a5, b7, d8, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1017
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, f6, g8, e7, g6, h8, f7, e5, c6, b4, a6, b8, d7, f8, h7, g5, e6, d8, b7, a5, c4, a3, b5, a7, c8, d6, e4, g3, h1, 
Complete tour: 1018
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, f6, g8, e7, g6, h8, f7, g5, h7, f8, e6, d8, b7, a5, c6, b4, a6, b8, d7, e5, c4, a3, b5, a7, c8, d6, e4, g3, h1, 
Complete tour: 1019
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, f6, g8, e7, c8, a7, b5, a3, c4, e5, g6, h8, f7, d8, e6, g5, h7, f8, d7, b8, a6, b4, c6, a5, b7, d6, e4, g3, h1, 
Complete tour: 1020
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, f6, g8, e7, c8, a7, b5, a3, c4, e5, d7, b8, a6, b4, c6, a5, b7, d8, e6, g5, h7, f8, g6, h8, f7, d6, e4, g3, h1, 
Complete tour: 1021
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, f6, g8, e7, c8, a7, b5, a3, c4, d6, f7, h8, g6, e5, d7, b8, a6, b4, c6, a5, b7, d8, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1022
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, f6, g8, e7, c8, a7, b5, a3, c4, d6, b7, a5, c6, b4, a6, b8, d7, e5, g6, h8, f7, d8, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1023
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, f6, g8, e7, c8, a7, b5, a3, c4, a5, c6, b4, a6, b8, d7, e5, g6, h8, f7, d6, b7, d8, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1024
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, f6, g8, e7, c8, a7, b5, a3, c4, a5, c6, b4, a6, b8, d7, e5, g6, h8, f7, g5, h7, f8, e6, d8, b7, d6, e4, g3, h1, 
Complete tour: 1025
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, f6, g8, e7, c8, a7, b5, a3, c4, a5, c6, b4, a6, b8, d7, e5, f7, h8, g6, f8, h7, g5, e6, d8, b7, d6, e4, g3, h1, 
Complete tour: 1026
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, f6, g8, e7, c8, a7, b5, a3, c4, a5, b7, d6, f7, h8, g6, e5, d7, b8, a6, b4, c6, d8, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1027
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, f6, g8, e7, c8, a7, b5, a3, c4, a5, b7, d8, e6, g5, h7, f8, d7, b8, a6, b4, c6, e5, g6, h8, f7, d6, e4, g3, h1, 
Complete tour: 1028
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, f6, g8, e7, c8, a7, c6, b4, a6, b8, d7, e5, g6, h8, f7, d6, b5, a3, c4, a5, b7, d8, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1029
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, f6, g8, e7, c8, a7, c6, b4, a6, b8, d7, e5, g6, h8, f7, g5, h7, f8, e6, d8, b7, a5, c4, a3, b5, d6, e4, g3, h1, 
Complete tour: 1030
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, f6, g8, e7, c8, a7, c6, b4, a6, b8, d7, e5, f7, h8, g6, f8, h7, g5, e6, d8, b7, a5, c4, a3, b5, d6, e4, g3, h1, 
Complete tour: 1031
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, f6, g8, e7, c8, d6, f7, h8, g6, e5, d7, b8, a6, b4, c6, a7, b5, a3, c4, a5, b7, d8, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1032
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, f6, g8, e7, c8, d6, b7, a5, c4, a3, b5, a7, c6, b4, a6, b8, d7, e5, g6, h8, f7, d8, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1033
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, e7, g8, f6, h7, g5, f7, h8, g6, e5, c6, b4, a6, b8, d7, f8, e6, d8, b7, a5, c4, a3, b5, a7, c8, d6, e4, g3, h1, 
Complete tour: 1034
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, e7, g8, f6, h7, g5, f7, h8, g6, f8, e6, d8, b7, a5, c6, b4, a6, b8, d7, e5, c4, a3, b5, a7, c8, d6, e4, g3, h1, 
Complete tour: 1035
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, e7, g8, f6, h7, g5, e6, f8, d7, b8, a6, b4, c6, a5, b7, d8, f7, h8, g6, e5, c4, a3, b5, a7, c8, d6, e4, g3, h1, 
Complete tour: 1036
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, e7, g8, f6, h7, g5, e6, f8, d7, b8, a6, b4, c6, e5, g6, h8, f7, d8, b7, a5, c4, a3, b5, a7, c8, d6, e4, g3, h1, 
Complete tour: 1037
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, e7, g8, f6, h7, g5, e6, f8, g6, h8, f7, e5, d7, b8, a6, b4, c6, d8, b7, a5, c4, a3, b5, a7, c8, d6, e4, g3, h1, 
Complete tour: 1038
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, e7, g8, f6, h7, g5, e6, f8, g6, h8, f7, d8, b7, a5, c6, b4, a6, b8, d7, e5, c4, a3, b5, a7, c8, d6, e4, g3, h1, 
Complete tour: 1039
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, e7, g8, f6, h7, g5, e6, d8, b7, a5, c6, b4, a6, b8, d7, f8, g6, h8, f7, e5, c4, a3, b5, a7, c8, d6, e4, g3, h1, 
Complete tour: 1040
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, e7, g8, f6, h7, f8, d7, b8, a6, b4, c6, a5, b7, d6, c8, a7, b5, a3, c4, e5, g6, h8, f7, d8, e6, g5, e4, g3, h1, 
Complete tour: 1041
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, e7, g8, f6, h7, f8, d7, b8, a6, b4, c6, a5, b7, d8, e6, g5, f7, h8, g6, e5, c4, a3, b5, a7, c8, d6, e4, g3, h1, 
Complete tour: 1042
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, e7, g8, f6, h7, f8, d7, b8, a6, b4, c6, e5, g6, h8, f7, d6, c8, a7, b5, a3, c4, a5, b7, d8, e6, g5, e4, g3, h1, 
Complete tour: 1043
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, e7, g8, f6, h7, f8, d7, b8, a6, b4, c6, e5, g6, h8, f7, g5, e6, d8, b7, a5, c4, a3, b5, a7, c8, d6, e4, g3, h1, 
Complete tour: 1044
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, e7, g8, f6, h7, f8, e6, g5, f7, h8, g6, e5, d7, b8, a6, b4, c6, d8, b7, a5, c4, a3, b5, a7, c8, d6, e4, g3, h1, 
Complete tour: 1045
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, e7, g8, f6, h7, f8, e6, d8, b7, a5, c4, a3, b5, d6, c8, a7, c6, b4, a6, b8, d7, e5, g6, h8, f7, g5, e4, g3, h1, 
Complete tour: 1046
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, e7, g8, f6, h7, f8, e6, d8, b7, d6, c8, a7, b5, a3, c4, a5, c6, b4, a6, b8, d7, e5, g6, h8, f7, g5, e4, g3, h1, 
Complete tour: 1047
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, e7, g8, f6, h7, f8, g6, h8, f7, d6, c8, a7, b5, a3, c4, e5, d7, b8, a6, b4, c6, a5, b7, d8, e6, g5, e4, g3, h1, 
Complete tour: 1048
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, e7, g8, f6, h7, f8, g6, h8, f7, e5, d7, b8, a6, b4, c6, a5, c4, a3, b5, a7, c8, d6, b7, d8, e6, g5, e4, g3, h1, 
Complete tour: 1049
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, e7, g8, f6, h7, f8, g6, h8, f7, e5, d7, b8, a6, b4, c6, a7, c8, d6, b5, a3, c4, a5, b7, d8, e6, g5, e4, g3, h1, 
Complete tour: 1050
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, e7, g8, f6, h7, f8, g6, h8, f7, g5, e6, d8, b7, a5, c6, b4, a6, b8, d7, e5, c4, a3, b5, a7, c8, d6, e4, g3, h1, 
Complete tour: 1051
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, e7, g8, f6, d7, b8, a6, b4, c6, a5, b7, d6, c8, a7, b5, a3, c4, e5, g6, h8, f7, d8, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1052
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, e7, g8, f6, d7, b8, a6, b4, c6, a5, b7, d8, e6, g5, h7, f8, g6, h8, f7, e5, c4, a3, b5, a7, c8, d6, e4, g3, h1, 
Complete tour: 1053
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, e7, g8, f6, d7, b8, a6, b4, c6, a5, b7, d8, e6, f8, h7, g5, f7, h8, g6, e5, c4, a3, b5, a7, c8, d6, e4, g3, h1, 
Complete tour: 1054
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, e7, g8, f6, d7, b8, a6, b4, c6, e5, g6, h8, f7, d6, c8, a7, b5, a3, c4, a5, b7, d8, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1055
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, e7, g8, f6, d7, b8, a6, b4, c6, e5, g6, h8, f7, g5, h7, f8, e6, d8, b7, a5, c4, a3, b5, a7, c8, d6, e4, g3, h1, 
Complete tour: 1056
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d5, e7, g8, f6, d7, b8, a6, b4, c6, e5, f7, h8, g6, f8, h7, g5, e6, d8, b7, a5, c4, a3, b5, a7, c8, d6, e4, g3, h1, 
Complete tour: 1057
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d7, e5, c4, a3, b5, a7, c8, d6, f7, h8, g6, f8, e6, d8, b7, a5, c6, b8, a6, b4, d5, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 1058
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d7, e5, c4, a3, b5, a7, c8, d6, f7, h8, g6, f8, h7, f6, g8, e7, d5, b4, a6, b8, c6, a5, b7, d8, e6, g5, e4, g3, h1, 
Complete tour: 1059
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d7, e5, c4, a3, b5, a7, c8, d6, f7, h8, g6, f8, h7, g5, e6, d8, b7, a5, c6, b8, a6, b4, d5, e7, g8, f6, e4, g3, h1, 
Complete tour: 1060
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d7, e5, c4, a3, b5, a7, c8, d6, f7, h8, g6, e7, g8, f6, d5, b4, a6, b8, c6, a5, b7, d8, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1061
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d7, e5, c4, a3, b5, a7, c8, d6, b7, a5, c6, b8, a6, b4, d5, f6, g8, e7, g6, h8, f7, d8, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1062
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d7, e5, c4, a3, b5, a7, c8, d6, b7, a5, c6, b8, a6, b4, d5, e7, g8, f6, h7, f8, g6, h8, f7, d8, e6, g5, e4, g3, h1, 
Complete tour: 1063
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d7, e5, c4, a3, b5, a7, c8, e7, g8, f6, d5, b4, a6, b8, c6, a5, b7, d8, e6, g5, h7, f8, g6, h8, f7, d6, e4, g3, h1, 
Complete tour: 1064
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d7, e5, g6, h8, f7, d6, c4, a3, b5, a7, c8, e7, g8, f6, d5, b4, a6, b8, c6, a5, b7, d8, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1065
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d7, e5, g6, h8, f7, d6, c8, a7, b5, a3, c4, a5, b7, d8, c6, b8, a6, b4, d5, e7, g8, f6, h7, f8, e6, g5, e4, g3, h1, 
Complete tour: 1066
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d7, e5, g6, h8, f7, d6, c8, e7, g8, f6, d5, b4, a6, b8, c6, a7, b5, a3, c4, a5, b7, d8, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1067
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d7, e5, g6, h8, f7, d6, b7, a5, c4, a3, b5, a7, c8, e7, g8, f6, d5, b4, a6, b8, c6, d8, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1068
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d7, e5, g6, h8, f7, g5, h7, f8, e6, d8, b7, a5, c4, a3, b5, d6, c8, a7, c6, b8, a6, b4, d5, e7, g8, f6, e4, g3, h1, 
Complete tour: 1069
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d7, e5, g6, h8, f7, g5, h7, f8, e6, d8, b7, a5, c4, a3, b5, a7, c6, b8, a6, b4, d5, f6, g8, e7, c8, d6, e4, g3, h1, 
Complete tour: 1070
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d7, e5, g6, h8, f7, g5, h7, f8, e6, d8, b7, a5, c6, b8, a6, b4, d5, f6, g8, e7, c8, a7, b5, a3, c4, d6, e4, g3, h1, 
Complete tour: 1071
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d7, e5, g6, h8, f7, g5, h7, f8, e6, d8, b7, d6, c8, a7, b5, a3, c4, a5, c6, b8, a6, b4, d5, e7, g8, f6, e4, g3, h1, 
Complete tour: 1072
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d7, e5, g6, h8, f7, g5, h7, f8, e6, d8, c6, b8, a6, b4, d5, f6, g8, e7, c8, a7, b5, a3, c4, a5, b7, d6, e4, g3, h1, 
Complete tour: 1073
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d7, e5, g6, h8, f7, g5, e6, f8, h7, f6, g8, e7, d5, b4, a6, b8, c6, d8, b7, a5, c4, a3, b5, a7, c8, d6, e4, g3, h1, 
Complete tour: 1074
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d7, e5, g6, h8, f7, d8, b7, a5, c4, a3, b5, d6, c8, a7, c6, b8, a6, b4, d5, e7, g8, f6, h7, f8, e6, g5, e4, g3, h1, 
Complete tour: 1075
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d7, e5, g6, h8, f7, d8, b7, d6, c8, a7, b5, a3, c4, a5, c6, b8, a6, b4, d5, e7, g8, f6, h7, f8, e6, g5, e4, g3, h1, 
Complete tour: 1076
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d7, e5, f7, h8, g6, f8, e6, g5, h7, f6, g8, e7, d5, b4, a6, b8, c6, d8, b7, a5, c4, a3, b5, a7, c8, d6, e4, g3, h1, 
Complete tour: 1077
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d7, e5, f7, h8, g6, f8, e6, d8, b7, a5, c4, a3, b5, d6, c8, a7, c6, b8, a6, b4, d5, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 1078
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d7, e5, f7, h8, g6, f8, e6, d8, b7, d6, c8, a7, b5, a3, c4, a5, c6, b8, a6, b4, d5, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 1079
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d7, e5, f7, h8, g6, f8, h7, f6, g8, e7, d5, b4, a6, b8, c6, a5, c4, a3, b5, a7, c8, d6, b7, d8, e6, g5, e4, g3, h1, 
Complete tour: 1080
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d7, e5, f7, h8, g6, f8, h7, f6, g8, e7, d5, b4, a6, b8, c6, a7, c8, d6, b5, a3, c4, a5, b7, d8, e6, g5, e4, g3, h1, 
Complete tour: 1081
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d7, e5, f7, h8, g6, f8, h7, g5, e6, d8, b7, a5, c4, a3, b5, d6, c8, a7, c6, b8, a6, b4, d5, e7, g8, f6, e4, g3, h1, 
Complete tour: 1082
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d7, e5, f7, h8, g6, f8, h7, g5, e6, d8, b7, a5, c4, a3, b5, a7, c6, b8, a6, b4, d5, f6, g8, e7, c8, d6, e4, g3, h1, 
Complete tour: 1083
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d7, e5, f7, h8, g6, f8, h7, g5, e6, d8, b7, a5, c6, b8, a6, b4, d5, f6, g8, e7, c8, a7, b5, a3, c4, d6, e4, g3, h1, 
Complete tour: 1084
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d7, e5, f7, h8, g6, f8, h7, g5, e6, d8, b7, d6, c8, a7, b5, a3, c4, a5, c6, b8, a6, b4, d5, e7, g8, f6, e4, g3, h1, 
Complete tour: 1085
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d7, e5, f7, h8, g6, f8, h7, g5, e6, d8, c6, b8, a6, b4, d5, f6, g8, e7, c8, a7, b5, a3, c4, a5, b7, d6, e4, g3, h1, 
Complete tour: 1086
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d7, e5, f7, h8, g6, e7, g8, f6, d5, b4, a6, b8, c6, a5, c4, a3, b5, a7, c8, d6, b7, d8, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1087
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d7, e5, f7, h8, g6, e7, g8, f6, d5, b4, a6, b8, c6, a7, c8, d6, b5, a3, c4, a5, b7, d8, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1088
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d7, e5, c6, b8, a6, b4, d5, f6, g8, e7, g6, h8, f7, d6, c8, a7, b5, a3, c4, a5, b7, d8, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1089
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d7, e5, c6, b8, a6, b4, d5, f6, g8, e7, g6, h8, f7, g5, h7, f8, e6, d8, b7, a5, c4, a3, b5, a7, c8, d6, e4, g3, h1, 
Complete tour: 1090
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d7, e5, c6, b8, a6, b4, d5, f6, g8, e7, c8, a7, b5, a3, c4, a5, b7, d8, e6, g5, h7, f8, g6, h8, f7, d6, e4, g3, h1, 
Complete tour: 1091
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d7, e5, c6, b8, a6, b4, d5, e7, g8, f6, h7, g5, f7, h8, g6, f8, e6, d8, b7, a5, c4, a3, b5, a7, c8, d6, e4, g3, h1, 
Complete tour: 1092
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d7, e5, c6, b8, a6, b4, d5, e7, g8, f6, h7, g5, e6, f8, g6, h8, f7, d8, b7, a5, c4, a3, b5, a7, c8, d6, e4, g3, h1, 
Complete tour: 1093
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d7, e5, c6, b8, a6, b4, d5, e7, g8, f6, h7, f8, g6, h8, f7, d6, c8, a7, b5, a3, c4, a5, b7, d8, e6, g5, e4, g3, h1, 
Complete tour: 1094
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d7, e5, c6, b8, a6, b4, d5, e7, g8, f6, h7, f8, g6, h8, f7, g5, e6, d8, b7, a5, c4, a3, b5, a7, c8, d6, e4, g3, h1, 
Complete tour: 1095
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d7, f6, g8, e7, d5, b4, a6, b8, c6, a5, b7, d6, c8, a7, b5, a3, c4, e5, g6, h8, f7, d8, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1096
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d7, f6, g8, e7, d5, b4, a6, b8, c6, a5, b7, d8, e6, g5, h7, f8, g6, h8, f7, e5, c4, a3, b5, a7, c8, d6, e4, g3, h1, 
Complete tour: 1097
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d7, f6, g8, e7, d5, b4, a6, b8, c6, a5, b7, d8, e6, f8, h7, g5, f7, h8, g6, e5, c4, a3, b5, a7, c8, d6, e4, g3, h1, 
Complete tour: 1098
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d7, f6, g8, e7, d5, b4, a6, b8, c6, e5, g6, h8, f7, d6, c8, a7, b5, a3, c4, a5, b7, d8, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1099
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d7, f6, g8, e7, d5, b4, a6, b8, c6, e5, g6, h8, f7, g5, h7, f8, e6, d8, b7, a5, c4, a3, b5, a7, c8, d6, e4, g3, h1, 
Complete tour: 1100
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d7, f6, g8, e7, d5, b4, a6, b8, c6, e5, f7, h8, g6, f8, h7, g5, e6, d8, b7, a5, c4, a3, b5, a7, c8, d6, e4, g3, h1, 
Complete tour: 1101
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d7, f8, e6, g5, h7, f6, g8, e7, d5, b4, a6, b8, c6, a5, b7, d8, f7, h8, g6, e5, c4, a3, b5, a7, c8, d6, e4, g3, h1, 
Complete tour: 1102
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d7, f8, e6, g5, h7, f6, g8, e7, d5, b4, a6, b8, c6, e5, g6, h8, f7, d8, b7, a5, c4, a3, b5, a7, c8, d6, e4, g3, h1, 
Complete tour: 1103
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d7, f8, e6, d8, b7, a5, c4, a3, b5, a7, c8, d6, f7, h8, g6, e5, c6, b8, a6, b4, d5, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 1104
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d7, f8, e6, d8, b7, a5, c6, b8, a6, b4, d5, e7, g8, f6, h7, g5, f7, h8, g6, e5, c4, a3, b5, a7, c8, d6, e4, g3, h1, 
Complete tour: 1105
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d7, f8, e6, d8, f7, h8, g6, e5, c4, a3, b5, a7, c8, d6, b7, a5, c6, b8, a6, b4, d5, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 1106
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d7, f8, g6, h8, f7, e5, c6, b8, a6, b4, d5, e7, g8, f6, h7, g5, e6, d8, b7, a5, c4, a3, b5, a7, c8, d6, e4, g3, h1, 
Complete tour: 1107
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d7, f8, h7, f6, g8, e7, d5, b4, a6, b8, c6, a5, b7, d6, c8, a7, b5, a3, c4, e5, g6, h8, f7, d8, e6, g5, e4, g3, h1, 
Complete tour: 1108
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d7, f8, h7, f6, g8, e7, d5, b4, a6, b8, c6, a5, b7, d8, e6, g5, f7, h8, g6, e5, c4, a3, b5, a7, c8, d6, e4, g3, h1, 
Complete tour: 1109
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d7, f8, h7, f6, g8, e7, d5, b4, a6, b8, c6, e5, g6, h8, f7, d6, c8, a7, b5, a3, c4, a5, b7, d8, e6, g5, e4, g3, h1, 
Complete tour: 1110
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d7, f8, h7, f6, g8, e7, d5, b4, a6, b8, c6, e5, g6, h8, f7, g5, e6, d8, b7, a5, c4, a3, b5, a7, c8, d6, e4, g3, h1, 
Complete tour: 1111
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d7, f8, h7, g5, e6, d8, b7, a5, c4, a3, b5, a7, c8, d6, f7, h8, g6, e5, c6, b8, a6, b4, d5, e7, g8, f6, e4, g3, h1, 
Complete tour: 1112
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d7, f8, h7, g5, e6, d8, b7, a5, c4, a3, b5, a7, c8, e7, g8, f6, d5, b4, a6, b8, c6, e5, g6, h8, f7, d6, e4, g3, h1, 
Complete tour: 1113
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d7, f8, h7, g5, e6, d8, b7, a5, c6, b8, a6, b4, d5, f6, g8, e7, g6, h8, f7, e5, c4, a3, b5, a7, c8, d6, e4, g3, h1, 
Complete tour: 1114
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d7, f8, h7, g5, e6, d8, b7, a5, c6, b8, a6, b4, d5, f6, g8, e7, c8, a7, b5, a3, c4, e5, g6, h8, f7, d6, e4, g3, h1, 
Complete tour: 1115
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d7, f8, h7, g5, e6, d8, f7, h8, g6, e5, c4, a3, b5, a7, c8, d6, b7, a5, c6, b8, a6, b4, d5, e7, g8, f6, e4, g3, h1, 
Complete tour: 1116
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d7, f8, h7, g5, e6, d8, f7, h8, g6, e5, c4, a3, b5, a7, c8, e7, g8, f6, d5, b4, a6, b8, c6, a5, b7, d6, e4, g3, h1, 
Complete tour: 1117
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d7, f8, h7, g5, e6, d8, f7, h8, g6, e5, c6, b8, a6, b4, d5, f6, g8, e7, c8, a7, b5, a3, c4, a5, b7, d6, e4, g3, h1, 
Complete tour: 1118
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d7, b8, a6, b4, d5, f6, g8, e7, c6, a5, b7, d6, c8, a7, b5, a3, c4, e5, g6, h8, f7, d8, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1119
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d7, b8, a6, b4, d5, f6, g8, e7, c6, a5, b7, d8, e6, g5, h7, f8, g6, h8, f7, e5, c4, a3, b5, a7, c8, d6, e4, g3, h1, 
Complete tour: 1120
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d7, b8, a6, b4, d5, f6, g8, e7, c6, a5, b7, d8, e6, f8, h7, g5, f7, h8, g6, e5, c4, a3, b5, a7, c8, d6, e4, g3, h1, 
Complete tour: 1121
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d7, b8, a6, b4, d5, f6, g8, e7, c6, e5, g6, h8, f7, d6, c8, a7, b5, a3, c4, a5, b7, d8, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1122
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d7, b8, a6, b4, d5, f6, g8, e7, c6, e5, g6, h8, f7, g5, h7, f8, e6, d8, b7, a5, c4, a3, b5, a7, c8, d6, e4, g3, h1, 
Complete tour: 1123
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d7, b8, a6, b4, d5, f6, g8, e7, c6, e5, f7, h8, g6, f8, h7, g5, e6, d8, b7, a5, c4, a3, b5, a7, c8, d6, e4, g3, h1, 
Complete tour: 1124
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d7, b8, a6, b4, d5, f6, g8, e7, g6, h8, f7, d6, c8, a7, b5, a3, c4, e5, c6, a5, b7, d8, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1125
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d7, b8, a6, b4, d5, f6, g8, e7, g6, h8, f7, e5, c4, a3, b5, d6, c8, a7, c6, a5, b7, d8, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1126
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d7, b8, a6, b4, d5, f6, g8, e7, g6, h8, f7, e5, c4, a3, b5, a7, c8, d6, b7, a5, c6, d8, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1127
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d7, b8, a6, b4, d5, f6, g8, e7, g6, h8, f7, e5, c6, a5, c4, a3, b5, a7, c8, d6, b7, d8, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1128
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d7, b8, a6, b4, d5, f6, g8, e7, g6, h8, f7, e5, c6, a7, c8, d6, b5, a3, c4, a5, b7, d8, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1129
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d7, b8, a6, b4, d5, f6, g8, e7, g6, h8, f7, g5, h7, f8, e6, d8, b7, a5, c6, e5, c4, a3, b5, a7, c8, d6, e4, g3, h1, 
Complete tour: 1130
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d7, b8, a6, b4, d5, f6, g8, e7, c8, a7, b5, a3, c4, e5, g6, h8, f7, d6, b7, a5, c6, d8, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1131
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d7, b8, a6, b4, d5, f6, g8, e7, c8, a7, b5, a3, c4, e5, g6, h8, f7, g5, h7, f8, e6, d8, c6, a5, b7, d6, e4, g3, h1, 
Complete tour: 1132
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d7, b8, a6, b4, d5, f6, g8, e7, c8, a7, b5, a3, c4, e5, f7, h8, g6, f8, h7, g5, e6, d8, c6, a5, b7, d6, e4, g3, h1, 
Complete tour: 1133
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d7, b8, a6, b4, d5, f6, g8, e7, c8, a7, b5, a3, c4, e5, c6, a5, b7, d8, e6, g5, h7, f8, g6, h8, f7, d6, e4, g3, h1, 
Complete tour: 1134
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d7, b8, a6, b4, d5, f6, g8, e7, c8, a7, b5, a3, c4, d6, f7, h8, g6, e5, c6, a5, b7, d8, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1135
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d7, b8, a6, b4, d5, f6, g8, e7, c8, a7, b5, a3, c4, d6, b7, a5, c6, e5, g6, h8, f7, d8, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1136
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d7, b8, a6, b4, d5, f6, g8, e7, c8, a7, b5, a3, c4, a5, c6, e5, g6, h8, f7, d6, b7, d8, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1137
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d7, b8, a6, b4, d5, f6, g8, e7, c8, a7, b5, a3, c4, a5, c6, e5, g6, h8, f7, g5, h7, f8, e6, d8, b7, d6, e4, g3, h1, 
Complete tour: 1138
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d7, b8, a6, b4, d5, f6, g8, e7, c8, a7, b5, a3, c4, a5, c6, e5, f7, h8, g6, f8, h7, g5, e6, d8, b7, d6, e4, g3, h1, 
Complete tour: 1139
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d7, b8, a6, b4, d5, f6, g8, e7, c8, a7, b5, a3, c4, a5, b7, d6, f7, h8, g6, e5, c6, d8, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1140
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d7, b8, a6, b4, d5, f6, g8, e7, c8, a7, c6, a5, b7, d6, b5, a3, c4, e5, g6, h8, f7, d8, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1141
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d7, b8, a6, b4, d5, f6, g8, e7, c8, a7, c6, a5, b7, d8, e6, g5, h7, f8, g6, h8, f7, e5, c4, a3, b5, d6, e4, g3, h1, 
Complete tour: 1142
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d7, b8, a6, b4, d5, f6, g8, e7, c8, a7, c6, a5, b7, d8, e6, f8, h7, g5, f7, h8, g6, e5, c4, a3, b5, d6, e4, g3, h1, 
Complete tour: 1143
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d7, b8, a6, b4, d5, f6, g8, e7, c8, a7, c6, e5, g6, h8, f7, d6, b5, a3, c4, a5, b7, d8, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1144
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d7, b8, a6, b4, d5, f6, g8, e7, c8, a7, c6, e5, g6, h8, f7, g5, h7, f8, e6, d8, b7, a5, c4, a3, b5, d6, e4, g3, h1, 
Complete tour: 1145
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d7, b8, a6, b4, d5, f6, g8, e7, c8, a7, c6, e5, f7, h8, g6, f8, h7, g5, e6, d8, b7, a5, c4, a3, b5, d6, e4, g3, h1, 
Complete tour: 1146
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d7, b8, a6, b4, d5, f6, g8, e7, c8, d6, f7, h8, g6, e5, c4, a3, b5, a7, c6, a5, b7, d8, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1147
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d7, b8, a6, b4, d5, f6, g8, e7, c8, d6, f7, h8, g6, e5, c6, a7, b5, a3, c4, a5, b7, d8, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1148
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d7, b8, a6, b4, d5, f6, g8, e7, c8, d6, b7, a5, c4, a3, b5, a7, c6, e5, g6, h8, f7, d8, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1149
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d7, b8, a6, b4, d5, f6, g8, e7, c8, d6, b7, a5, c6, a7, b5, a3, c4, e5, g6, h8, f7, d8, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1150
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d7, b8, a6, b4, d5, e7, g8, f6, h7, g5, f7, h8, g6, f8, e6, d8, b7, a5, c6, e5, c4, a3, b5, a7, c8, d6, e4, g3, h1, 
Complete tour: 1151
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d7, b8, a6, b4, d5, e7, g8, f6, h7, g5, e6, f8, g6, h8, f7, e5, c6, d8, b7, a5, c4, a3, b5, a7, c8, d6, e4, g3, h1, 
Complete tour: 1152
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d7, b8, a6, b4, d5, e7, g8, f6, h7, g5, e6, f8, g6, h8, f7, d8, b7, a5, c6, e5, c4, a3, b5, a7, c8, d6, e4, g3, h1, 
Complete tour: 1153
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d7, b8, a6, b4, d5, e7, g8, f6, h7, f8, e6, g5, f7, h8, g6, e5, c6, d8, b7, a5, c4, a3, b5, a7, c8, d6, e4, g3, h1, 
Complete tour: 1154
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d7, b8, a6, b4, d5, e7, g8, f6, h7, f8, e6, d8, b7, a5, c4, a3, b5, d6, c8, a7, c6, e5, g6, h8, f7, g5, e4, g3, h1, 
Complete tour: 1155
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d7, b8, a6, b4, d5, e7, g8, f6, h7, f8, e6, d8, b7, a5, c6, a7, c8, d6, b5, a3, c4, e5, g6, h8, f7, g5, e4, g3, h1, 
Complete tour: 1156
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d7, b8, a6, b4, d5, e7, g8, f6, h7, f8, e6, d8, b7, d6, c8, a7, b5, a3, c4, a5, c6, e5, g6, h8, f7, g5, e4, g3, h1, 
Complete tour: 1157
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d7, b8, a6, b4, d5, e7, g8, f6, h7, f8, e6, d8, c6, a5, b7, d6, c8, a7, b5, a3, c4, e5, g6, h8, f7, g5, e4, g3, h1, 
Complete tour: 1158
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d7, b8, a6, b4, d5, e7, g8, f6, h7, f8, g6, h8, f7, d6, c8, a7, b5, a3, c4, e5, c6, a5, b7, d8, e6, g5, e4, g3, h1, 
Complete tour: 1159
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d7, b8, a6, b4, d5, e7, g8, f6, h7, f8, g6, h8, f7, e5, c4, a3, b5, d6, c8, a7, c6, a5, b7, d8, e6, g5, e4, g3, h1, 
Complete tour: 1160
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d7, b8, a6, b4, d5, e7, g8, f6, h7, f8, g6, h8, f7, e5, c4, a3, b5, a7, c8, d6, b7, a5, c6, d8, e6, g5, e4, g3, h1, 
Complete tour: 1161
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d7, b8, a6, b4, d5, e7, g8, f6, h7, f8, g6, h8, f7, e5, c6, a5, c4, a3, b5, a7, c8, d6, b7, d8, e6, g5, e4, g3, h1, 
Complete tour: 1162
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d7, b8, a6, b4, d5, e7, g8, f6, h7, f8, g6, h8, f7, e5, c6, a7, c8, d6, b5, a3, c4, a5, b7, d8, e6, g5, e4, g3, h1, 
Complete tour: 1163
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, d7, b8, a6, b4, d5, e7, g8, f6, h7, f8, g6, h8, f7, g5, e6, d8, b7, a5, c6, e5, c4, a3, b5, a7, c8, d6, e4, g3, h1, 
Complete tour: 1164
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c8, a7, b5, a3, c4, e5, g6, h8, f7, d6, b7, a5, c6, d8, e6, g5, h7, f8, d7, b8, a6, b4, d5, e7, g8, f6, e4, g3, h1, 
Complete tour: 1165
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c8, a7, b5, a3, c4, e5, g6, h8, f7, d6, b7, a5, c6, d8, e6, f8, d7, b8, a6, b4, d5, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 1166
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c8, a7, b5, a3, c4, e5, g6, h8, f7, g5, h7, f6, g8, e7, d5, b4, a6, b8, d7, f8, e6, d8, c6, a5, b7, d6, e4, g3, h1, 
Complete tour: 1167
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c8, a7, b5, a3, c4, e5, g6, h8, f7, d8, e6, g5, h7, f8, d7, f6, g8, e7, d5, b4, a6, b8, c6, a5, b7, d6, e4, g3, h1, 
Complete tour: 1168
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c8, a7, b5, a3, c4, e5, g6, h8, f7, d8, e6, g5, h7, f8, d7, b8, a6, b4, d5, f6, g8, e7, c6, a5, b7, d6, e4, g3, h1, 
Complete tour: 1169
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c8, a7, b5, a3, c4, e5, f7, h8, g6, f8, d7, b8, a6, b4, d5, e7, g8, f6, h7, g5, e6, d8, c6, a5, b7, d6, e4, g3, h1, 
Complete tour: 1170
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c8, a7, b5, a3, c4, e5, f7, h8, g6, e7, g8, f6, d5, b4, a6, b8, d7, f8, h7, g5, e6, d8, c6, a5, b7, d6, e4, g3, h1, 
Complete tour: 1171
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c8, a7, b5, a3, c4, e5, d7, f6, g8, e7, d5, b4, a6, b8, c6, a5, b7, d8, e6, g5, h7, f8, g6, h8, f7, d6, e4, g3, h1, 
Complete tour: 1172
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c8, a7, b5, a3, c4, e5, d7, f8, g6, h8, f7, d8, e6, g5, h7, f6, g8, e7, d5, b4, a6, b8, c6, a5, b7, d6, e4, g3, h1, 
Complete tour: 1173
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c8, a7, b5, a3, c4, e5, d7, f8, h7, g5, e6, d8, b7, a5, c6, b8, a6, b4, d5, f6, g8, e7, g6, h8, f7, d6, e4, g3, h1, 
Complete tour: 1174
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c8, a7, b5, a3, c4, e5, d7, f8, h7, g5, e6, d8, f7, h8, g6, e7, g8, f6, d5, b4, a6, b8, c6, a5, b7, d6, e4, g3, h1, 
Complete tour: 1175
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c8, a7, b5, a3, c4, e5, d7, b8, a6, b4, d5, f6, g8, e7, c6, a5, b7, d8, e6, g5, h7, f8, g6, h8, f7, d6, e4, g3, h1, 
Complete tour: 1176
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c8, a7, b5, a3, c4, e5, d7, b8, a6, b4, d5, f6, g8, e7, g6, h8, f7, d6, b7, a5, c6, d8, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1177
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c8, a7, b5, a3, c4, e5, d7, b8, a6, b4, d5, f6, g8, e7, g6, h8, f7, g5, h7, f8, e6, d8, c6, a5, b7, d6, e4, g3, h1, 
Complete tour: 1178
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c8, a7, b5, a3, c4, e5, d7, b8, a6, b4, d5, e7, g8, f6, h7, g5, f7, h8, g6, f8, e6, d8, c6, a5, b7, d6, e4, g3, h1, 
Complete tour: 1179
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c8, a7, b5, a3, c4, e5, d7, b8, a6, b4, d5, e7, g8, f6, h7, g5, e6, f8, g6, h8, f7, d8, c6, a5, b7, d6, e4, g3, h1, 
Complete tour: 1180
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c8, a7, b5, a3, c4, e5, d7, b8, a6, b4, d5, e7, g8, f6, h7, f8, g6, h8, f7, d6, b7, a5, c6, d8, e6, g5, e4, g3, h1, 
Complete tour: 1181
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c8, a7, b5, a3, c4, e5, d7, b8, a6, b4, d5, e7, g8, f6, h7, f8, g6, h8, f7, g5, e6, d8, c6, a5, b7, d6, e4, g3, h1, 
Complete tour: 1182
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c8, a7, b5, a3, c4, e5, c6, a5, b7, d8, e6, g5, h7, f6, g8, e7, d5, b4, a6, b8, d7, f8, g6, h8, f7, d6, e4, g3, h1, 
Complete tour: 1183
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c8, a7, b5, a3, c4, e5, c6, a5, b7, d8, e6, g5, h7, f8, d7, b8, a6, b4, d5, f6, g8, e7, g6, h8, f7, d6, e4, g3, h1, 
Complete tour: 1184
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c8, a7, b5, a3, c4, d6, f7, h8, g6, e5, d7, f6, g8, e7, d5, b4, a6, b8, c6, a5, b7, d8, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1185
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c8, a7, b5, a3, c4, d6, f7, h8, g6, e5, d7, f8, e6, d8, b7, a5, c6, b8, a6, b4, d5, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 1186
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c8, a7, b5, a3, c4, d6, f7, h8, g6, e5, d7, f8, h7, f6, g8, e7, d5, b4, a6, b8, c6, a5, b7, d8, e6, g5, e4, g3, h1, 
Complete tour: 1187
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c8, a7, b5, a3, c4, d6, f7, h8, g6, e5, d7, f8, h7, g5, e6, d8, b7, a5, c6, b8, a6, b4, d5, e7, g8, f6, e4, g3, h1, 
Complete tour: 1188
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c8, a7, b5, a3, c4, d6, f7, h8, g6, e5, d7, b8, a6, b4, d5, f6, g8, e7, c6, a5, b7, d8, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1189
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c8, a7, b5, a3, c4, d6, f7, h8, g6, e5, c6, a5, b7, d8, e6, g5, h7, f8, d7, b8, a6, b4, d5, e7, g8, f6, e4, g3, h1, 
Complete tour: 1190
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c8, a7, b5, a3, c4, d6, f7, h8, g6, e5, c6, a5, b7, d8, e6, f8, d7, b8, a6, b4, d5, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 1191
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c8, a7, b5, a3, c4, d6, f7, h8, g6, f8, e6, d8, b7, a5, c6, e5, d7, b8, a6, b4, d5, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 1192
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c8, a7, b5, a3, c4, d6, f7, h8, g6, f8, h7, f6, g8, e7, d5, b4, a6, b8, d7, e5, c6, a5, b7, d8, e6, g5, e4, g3, h1, 
Complete tour: 1193
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c8, a7, b5, a3, c4, d6, f7, h8, g6, f8, h7, g5, e6, d8, b7, a5, c6, e5, d7, b8, a6, b4, d5, e7, g8, f6, e4, g3, h1, 
Complete tour: 1194
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c8, a7, b5, a3, c4, d6, f7, h8, g6, e7, g8, f6, d5, b4, a6, b8, d7, e5, c6, a5, b7, d8, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1195
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c8, a7, b5, a3, c4, d6, b7, a5, c6, e5, g6, h8, f7, d8, e6, g5, h7, f8, d7, b8, a6, b4, d5, e7, g8, f6, e4, g3, h1, 
Complete tour: 1196
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c8, a7, b5, a3, c4, d6, b7, a5, c6, e5, g6, h8, f7, d8, e6, f8, d7, b8, a6, b4, d5, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 1197
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c8, a7, b5, a3, c4, d6, b7, a5, c6, e5, d7, b8, a6, b4, d5, f6, g8, e7, g6, h8, f7, d8, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1198
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c8, a7, b5, a3, c4, d6, b7, a5, c6, e5, d7, b8, a6, b4, d5, e7, g8, f6, h7, f8, g6, h8, f7, d8, e6, g5, e4, g3, h1, 
Complete tour: 1199
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c8, a7, b5, a3, c4, d6, b7, a5, c6, e7, g8, f6, d5, b4, a6, b8, d7, e5, g6, h8, f7, d8, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1200
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c8, a7, b5, a3, c4, d6, b7, a5, c6, d8, e6, g5, h7, f8, g6, h8, f7, e5, d7, b8, a6, b4, d5, e7, g8, f6, e4, g3, h1, 
Complete tour: 1201
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c8, a7, b5, a3, c4, d6, b7, a5, c6, d8, e6, f8, g6, h8, f7, e5, d7, b8, a6, b4, d5, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 1202
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c8, a7, b5, a3, c4, d6, b7, a5, c6, d8, e6, f8, h7, f6, g8, e7, d5, b4, a6, b8, d7, e5, g6, h8, f7, g5, e4, g3, h1, 
Complete tour: 1203
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c8, a7, b5, a3, c4, d6, b7, a5, c6, d8, e6, f8, h7, g5, f7, h8, g6, e5, d7, b8, a6, b4, d5, e7, g8, f6, e4, g3, h1, 
Complete tour: 1204
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c8, a7, b5, a3, c4, d6, b7, a5, c6, d8, f7, h8, g6, e5, d7, b8, a6, b4, d5, e7, g8, f6, h7, f8, e6, g5, e4, g3, h1, 
Complete tour: 1205
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c8, a7, b5, a3, c4, d6, b7, a5, c6, b8, a6, b4, d5, e7, g8, f6, h7, f8, d7, e5, g6, h8, f7, d8, e6, g5, e4, g3, h1, 
Complete tour: 1206
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c8, a7, b5, a3, c4, d6, b7, a5, c6, b8, a6, b4, d5, e7, g8, f6, d7, e5, g6, h8, f7, d8, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1207
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c8, a7, b5, a3, c4, a5, c6, e5, g6, h8, f7, d6, b7, d8, e6, g5, h7, f8, d7, b8, a6, b4, d5, e7, g8, f6, e4, g3, h1, 
Complete tour: 1208
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c8, a7, b5, a3, c4, a5, c6, e5, g6, h8, f7, d6, b7, d8, e6, f8, d7, b8, a6, b4, d5, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 1209
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c8, a7, b5, a3, c4, a5, c6, e5, g6, h8, f7, g5, h7, f6, g8, e7, d5, b4, a6, b8, d7, f8, e6, d8, b7, d6, e4, g3, h1, 
Complete tour: 1210
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c8, a7, b5, a3, c4, a5, c6, e5, f7, h8, g6, f8, d7, b8, a6, b4, d5, e7, g8, f6, h7, g5, e6, d8, b7, d6, e4, g3, h1, 
Complete tour: 1211
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c8, a7, b5, a3, c4, a5, c6, e5, f7, h8, g6, e7, g8, f6, d5, b4, a6, b8, d7, f8, h7, g5, e6, d8, b7, d6, e4, g3, h1, 
Complete tour: 1212
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c8, a7, b5, a3, c4, a5, c6, e5, d7, b8, a6, b4, d5, f6, g8, e7, g6, h8, f7, d6, b7, d8, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1213
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c8, a7, b5, a3, c4, a5, c6, e5, d7, b8, a6, b4, d5, f6, g8, e7, g6, h8, f7, g5, h7, f8, e6, d8, b7, d6, e4, g3, h1, 
Complete tour: 1214
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c8, a7, b5, a3, c4, a5, c6, e5, d7, b8, a6, b4, d5, e7, g8, f6, h7, g5, f7, h8, g6, f8, e6, d8, b7, d6, e4, g3, h1, 
Complete tour: 1215
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c8, a7, b5, a3, c4, a5, c6, e5, d7, b8, a6, b4, d5, e7, g8, f6, h7, g5, e6, f8, g6, h8, f7, d8, b7, d6, e4, g3, h1, 
Complete tour: 1216
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c8, a7, b5, a3, c4, a5, c6, e5, d7, b8, a6, b4, d5, e7, g8, f6, h7, f8, g6, h8, f7, d6, b7, d8, e6, g5, e4, g3, h1, 
Complete tour: 1217
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c8, a7, b5, a3, c4, a5, c6, e5, d7, b8, a6, b4, d5, e7, g8, f6, h7, f8, g6, h8, f7, g5, e6, d8, b7, d6, e4, g3, h1, 
Complete tour: 1218
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c8, a7, b5, a3, c4, a5, c6, e7, g8, f6, d5, b4, a6, b8, d7, e5, g6, h8, f7, d6, b7, d8, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1219
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c8, a7, b5, a3, c4, a5, c6, e7, g8, f6, d5, b4, a6, b8, d7, e5, g6, h8, f7, g5, h7, f8, e6, d8, b7, d6, e4, g3, h1, 
Complete tour: 1220
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c8, a7, b5, a3, c4, a5, c6, e7, g8, f6, d5, b4, a6, b8, d7, e5, f7, h8, g6, f8, h7, g5, e6, d8, b7, d6, e4, g3, h1, 
Complete tour: 1221
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c8, a7, b5, a3, c4, a5, c6, d8, b7, d6, f7, h8, g6, e5, d7, b8, a6, b4, d5, e7, g8, f6, h7, f8, e6, g5, e4, g3, h1, 
Complete tour: 1222
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c8, a7, b5, a3, c4, a5, c6, b8, a6, b4, d5, f6, g8, e7, g6, h8, f7, e5, d7, f8, h7, g5, e6, d8, b7, d6, e4, g3, h1, 
Complete tour: 1223
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c8, a7, b5, a3, c4, a5, c6, b8, a6, b4, d5, e7, g8, f6, h7, g5, f7, h8, g6, e5, d7, f8, e6, d8, b7, d6, e4, g3, h1, 
Complete tour: 1224
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c8, a7, b5, a3, c4, a5, c6, b8, a6, b4, d5, e7, g8, f6, h7, g5, e6, f8, d7, e5, g6, h8, f7, d8, b7, d6, e4, g3, h1, 
Complete tour: 1225
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c8, a7, b5, a3, c4, a5, c6, b8, a6, b4, d5, e7, g8, f6, h7, f8, d7, e5, g6, h8, f7, d6, b7, d8, e6, g5, e4, g3, h1, 
Complete tour: 1226
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c8, a7, b5, a3, c4, a5, c6, b8, a6, b4, d5, e7, g8, f6, h7, f8, d7, e5, g6, h8, f7, g5, e6, d8, b7, d6, e4, g3, h1, 
Complete tour: 1227
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c8, a7, b5, a3, c4, a5, c6, b8, a6, b4, d5, e7, g8, f6, d7, e5, g6, h8, f7, d6, b7, d8, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1228
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c8, a7, b5, a3, c4, a5, c6, b8, a6, b4, d5, e7, g8, f6, d7, e5, g6, h8, f7, g5, h7, f8, e6, d8, b7, d6, e4, g3, h1, 
Complete tour: 1229
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c8, a7, b5, a3, c4, a5, c6, b8, a6, b4, d5, e7, g8, f6, d7, e5, f7, h8, g6, f8, h7, g5, e6, d8, b7, d6, e4, g3, h1, 
Complete tour: 1230
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c8, a7, b5, a3, c4, a5, b7, d6, f7, h8, g6, e5, d7, f6, g8, e7, d5, b4, a6, b8, c6, d8, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1231
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c8, a7, b5, a3, c4, a5, b7, d6, f7, h8, g6, e5, d7, f8, e6, d8, c6, b8, a6, b4, d5, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 1232
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c8, a7, b5, a3, c4, a5, b7, d6, f7, h8, g6, e5, d7, f8, h7, f6, g8, e7, d5, b4, a6, b8, c6, d8, e6, g5, e4, g3, h1, 
Complete tour: 1233
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c8, a7, b5, a3, c4, a5, b7, d6, f7, h8, g6, e5, d7, f8, h7, g5, e6, d8, c6, b8, a6, b4, d5, e7, g8, f6, e4, g3, h1, 
Complete tour: 1234
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c8, a7, b5, a3, c4, a5, b7, d6, f7, h8, g6, e5, d7, b8, a6, b4, d5, f6, g8, e7, c6, d8, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1235
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c8, a7, b5, a3, c4, a5, b7, d6, f7, h8, g6, e5, c6, d8, e6, g5, h7, f8, d7, b8, a6, b4, d5, e7, g8, f6, e4, g3, h1, 
Complete tour: 1236
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c8, a7, b5, a3, c4, a5, b7, d6, f7, h8, g6, e5, c6, d8, e6, f8, d7, b8, a6, b4, d5, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 1237
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c8, a7, b5, a3, c4, a5, b7, d6, f7, h8, g6, f8, e6, d8, c6, e5, d7, b8, a6, b4, d5, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 1238
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c8, a7, b5, a3, c4, a5, b7, d6, f7, h8, g6, f8, h7, f6, g8, e7, d5, b4, a6, b8, d7, e5, c6, d8, e6, g5, e4, g3, h1, 
Complete tour: 1239
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c8, a7, b5, a3, c4, a5, b7, d6, f7, h8, g6, f8, h7, g5, e6, d8, c6, e5, d7, b8, a6, b4, d5, e7, g8, f6, e4, g3, h1, 
Complete tour: 1240
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c8, a7, b5, a3, c4, a5, b7, d6, f7, h8, g6, e7, g8, f6, d5, b4, a6, b8, d7, e5, c6, d8, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1241
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c8, a7, b5, a3, c4, a5, b7, d8, c6, e5, d7, b8, a6, b4, d5, e7, g8, f6, h7, g5, e6, f8, g6, h8, f7, d6, e4, g3, h1, 
Complete tour: 1242
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c8, a7, b5, a3, c4, a5, b7, d8, c6, b8, a6, b4, d5, e7, g8, f6, h7, g5, e6, f8, d7, e5, g6, h8, f7, d6, e4, g3, h1, 
Complete tour: 1243
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c8, a7, b5, a3, c4, a5, b7, d8, e6, g5, h7, f6, g8, e7, d5, b4, a6, b8, c6, e5, d7, f8, g6, h8, f7, d6, e4, g3, h1, 
Complete tour: 1244
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c8, a7, b5, a3, c4, a5, b7, d8, e6, g5, h7, f8, d7, e5, c6, b8, a6, b4, d5, f6, g8, e7, g6, h8, f7, d6, e4, g3, h1, 
Complete tour: 1245
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c8, a7, b5, a3, c4, a5, b7, d8, e6, g5, h7, f8, d7, f6, g8, e7, d5, b4, a6, b8, c6, e5, g6, h8, f7, d6, e4, g3, h1, 
Complete tour: 1246
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c8, a7, b5, a3, c4, a5, b7, d8, e6, g5, h7, f8, d7, b8, a6, b4, d5, f6, g8, e7, c6, e5, g6, h8, f7, d6, e4, g3, h1, 
Complete tour: 1247
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c8, a7, c6, a5, c4, a3, b5, d6, b7, d8, e6, g5, h7, f8, g6, h8, f7, e5, d7, b8, a6, b4, d5, e7, g8, f6, e4, g3, h1, 
Complete tour: 1248
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c8, a7, c6, a5, c4, a3, b5, d6, b7, d8, e6, f8, g6, h8, f7, e5, d7, b8, a6, b4, d5, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 1249
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c8, a7, c6, a5, c4, a3, b5, d6, b7, d8, e6, f8, h7, f6, g8, e7, d5, b4, a6, b8, d7, e5, g6, h8, f7, g5, e4, g3, h1, 
Complete tour: 1250
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c8, a7, c6, a5, c4, a3, b5, d6, b7, d8, e6, f8, h7, g5, f7, h8, g6, e5, d7, b8, a6, b4, d5, e7, g8, f6, e4, g3, h1, 
Complete tour: 1251
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c8, a7, c6, a5, c4, a3, b5, d6, b7, d8, f7, h8, g6, e5, d7, b8, a6, b4, d5, e7, g8, f6, h7, f8, e6, g5, e4, g3, h1, 
Complete tour: 1252
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c8, a7, c6, a5, b7, d6, b5, a3, c4, e5, g6, h8, f7, d8, e6, g5, h7, f8, d7, b8, a6, b4, d5, e7, g8, f6, e4, g3, h1, 
Complete tour: 1253
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c8, a7, c6, a5, b7, d6, b5, a3, c4, e5, g6, h8, f7, d8, e6, f8, d7, b8, a6, b4, d5, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 1254
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c8, a7, c6, a5, b7, d6, b5, a3, c4, e5, d7, b8, a6, b4, d5, f6, g8, e7, g6, h8, f7, d8, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1255
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c8, a7, c6, a5, b7, d6, b5, a3, c4, e5, d7, b8, a6, b4, d5, e7, g8, f6, h7, f8, g6, h8, f7, d8, e6, g5, e4, g3, h1, 
Complete tour: 1256
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c8, a7, c6, a5, b7, d8, e6, g5, h7, f6, g8, e7, d5, b4, a6, b8, d7, f8, g6, h8, f7, e5, c4, a3, b5, d6, e4, g3, h1, 
Complete tour: 1257
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c8, a7, c6, a5, b7, d8, e6, g5, h7, f8, d7, b8, a6, b4, d5, f6, g8, e7, g6, h8, f7, e5, c4, a3, b5, d6, e4, g3, h1, 
Complete tour: 1258
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c8, a7, c6, a5, b7, d8, e6, g5, h7, f8, g6, h8, f7, d6, b5, a3, c4, e5, d7, b8, a6, b4, d5, e7, g8, f6, e4, g3, h1, 
Complete tour: 1259
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c8, a7, c6, a5, b7, d8, e6, g5, f7, h8, g6, f8, h7, f6, g8, e7, d5, b4, a6, b8, d7, e5, c4, a3, b5, d6, e4, g3, h1, 
Complete tour: 1260
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c8, a7, c6, a5, b7, d8, e6, f8, d7, b8, a6, b4, d5, e7, g8, f6, h7, g5, f7, h8, g6, e5, c4, a3, b5, d6, e4, g3, h1, 
Complete tour: 1261
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c8, a7, c6, a5, b7, d8, e6, f8, g6, h8, f7, d6, b5, a3, c4, e5, d7, b8, a6, b4, d5, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 1262
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c8, a7, c6, a5, b7, d8, e6, f8, g6, h8, f7, g5, h7, f6, g8, e7, d5, b4, a6, b8, d7, e5, c4, a3, b5, d6, e4, g3, h1, 
Complete tour: 1263
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c8, a7, c6, a5, b7, d8, e6, f8, h7, g5, f7, h8, g6, e7, g8, f6, d5, b4, a6, b8, d7, e5, c4, a3, b5, d6, e4, g3, h1, 
Complete tour: 1264
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c8, a7, c6, a5, b7, d8, f7, h8, g6, f8, e6, g5, h7, f6, g8, e7, d5, b4, a6, b8, d7, e5, c4, a3, b5, d6, e4, g3, h1, 
Complete tour: 1265
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c8, a7, c6, e5, g6, h8, f7, d6, b5, a3, c4, a5, b7, d8, e6, g5, h7, f8, d7, b8, a6, b4, d5, e7, g8, f6, e4, g3, h1, 
Complete tour: 1266
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c8, a7, c6, e5, g6, h8, f7, d6, b5, a3, c4, a5, b7, d8, e6, f8, d7, b8, a6, b4, d5, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 1267
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c8, a7, c6, e5, g6, h8, f7, g5, h7, f6, g8, e7, d5, b4, a6, b8, d7, f8, e6, d8, b7, a5, c4, a3, b5, d6, e4, g3, h1, 
Complete tour: 1268
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c8, a7, c6, e5, f7, h8, g6, f8, d7, b8, a6, b4, d5, e7, g8, f6, h7, g5, e6, d8, b7, a5, c4, a3, b5, d6, e4, g3, h1, 
Complete tour: 1269
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c8, a7, c6, e5, f7, h8, g6, e7, g8, f6, d5, b4, a6, b8, d7, f8, h7, g5, e6, d8, b7, a5, c4, a3, b5, d6, e4, g3, h1, 
Complete tour: 1270
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c8, a7, c6, e5, d7, b8, a6, b4, d5, f6, g8, e7, g6, h8, f7, d6, b5, a3, c4, a5, b7, d8, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1271
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c8, a7, c6, e5, d7, b8, a6, b4, d5, f6, g8, e7, g6, h8, f7, g5, h7, f8, e6, d8, b7, a5, c4, a3, b5, d6, e4, g3, h1, 
Complete tour: 1272
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c8, a7, c6, e5, d7, b8, a6, b4, d5, e7, g8, f6, h7, g5, f7, h8, g6, f8, e6, d8, b7, a5, c4, a3, b5, d6, e4, g3, h1, 
Complete tour: 1273
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c8, a7, c6, e5, d7, b8, a6, b4, d5, e7, g8, f6, h7, g5, e6, f8, g6, h8, f7, d8, b7, a5, c4, a3, b5, d6, e4, g3, h1, 
Complete tour: 1274
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c8, a7, c6, e5, d7, b8, a6, b4, d5, e7, g8, f6, h7, f8, g6, h8, f7, d6, b5, a3, c4, a5, b7, d8, e6, g5, e4, g3, h1, 
Complete tour: 1275
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c8, a7, c6, e5, d7, b8, a6, b4, d5, e7, g8, f6, h7, f8, g6, h8, f7, g5, e6, d8, b7, a5, c4, a3, b5, d6, e4, g3, h1, 
Complete tour: 1276
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c8, a7, c6, e7, g8, f6, d5, b4, a6, b8, d7, e5, g6, h8, f7, d6, b5, a3, c4, a5, b7, d8, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1277
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c8, a7, c6, e7, g8, f6, d5, b4, a6, b8, d7, e5, g6, h8, f7, g5, h7, f8, e6, d8, b7, a5, c4, a3, b5, d6, e4, g3, h1, 
Complete tour: 1278
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c8, a7, c6, e7, g8, f6, d5, b4, a6, b8, d7, e5, f7, h8, g6, f8, h7, g5, e6, d8, b7, a5, c4, a3, b5, d6, e4, g3, h1, 
Complete tour: 1279
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c8, a7, c6, d8, b7, a5, c4, a3, b5, d6, f7, h8, g6, e5, d7, b8, a6, b4, d5, e7, g8, f6, h7, f8, e6, g5, e4, g3, h1, 
Complete tour: 1280
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c8, a7, c6, b8, a6, b4, d5, f6, g8, e7, g6, h8, f7, e5, d7, f8, h7, g5, e6, d8, b7, a5, c4, a3, b5, d6, e4, g3, h1, 
Complete tour: 1281
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c8, a7, c6, b8, a6, b4, d5, e7, g8, f6, h7, g5, f7, h8, g6, e5, d7, f8, e6, d8, b7, a5, c4, a3, b5, d6, e4, g3, h1, 
Complete tour: 1282
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c8, a7, c6, b8, a6, b4, d5, e7, g8, f6, h7, g5, e6, f8, d7, e5, g6, h8, f7, d8, b7, a5, c4, a3, b5, d6, e4, g3, h1, 
Complete tour: 1283
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c8, a7, c6, b8, a6, b4, d5, e7, g8, f6, h7, f8, d7, e5, g6, h8, f7, d6, b5, a3, c4, a5, b7, d8, e6, g5, e4, g3, h1, 
Complete tour: 1284
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c8, a7, c6, b8, a6, b4, d5, e7, g8, f6, h7, f8, d7, e5, g6, h8, f7, g5, e6, d8, b7, a5, c4, a3, b5, d6, e4, g3, h1, 
Complete tour: 1285
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c8, a7, c6, b8, a6, b4, d5, e7, g8, f6, d7, e5, g6, h8, f7, d6, b5, a3, c4, a5, b7, d8, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1286
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c8, a7, c6, b8, a6, b4, d5, e7, g8, f6, d7, e5, g6, h8, f7, g5, h7, f8, e6, d8, b7, a5, c4, a3, b5, d6, e4, g3, h1, 
Complete tour: 1287
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c8, a7, c6, b8, a6, b4, d5, e7, g8, f6, d7, e5, f7, h8, g6, f8, h7, g5, e6, d8, b7, a5, c4, a3, b5, d6, e4, g3, h1, 
Complete tour: 1288
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c8, d6, c4, a3, b5, a7, c6, a5, b7, d8, e6, g5, h7, f8, g6, h8, f7, e5, d7, b8, a6, b4, d5, e7, g8, f6, e4, g3, h1, 
Complete tour: 1289
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c8, d6, c4, a3, b5, a7, c6, a5, b7, d8, e6, f8, g6, h8, f7, e5, d7, b8, a6, b4, d5, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 1290
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c8, d6, c4, a3, b5, a7, c6, a5, b7, d8, e6, f8, h7, f6, g8, e7, d5, b4, a6, b8, d7, e5, g6, h8, f7, g5, e4, g3, h1, 
Complete tour: 1291
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c8, d6, c4, a3, b5, a7, c6, a5, b7, d8, e6, f8, h7, g5, f7, h8, g6, e5, d7, b8, a6, b4, d5, e7, g8, f6, e4, g3, h1, 
Complete tour: 1292
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c8, d6, c4, a3, b5, a7, c6, a5, b7, d8, f7, h8, g6, e5, d7, b8, a6, b4, d5, e7, g8, f6, h7, f8, e6, g5, e4, g3, h1, 
Complete tour: 1293
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c8, d6, f7, h8, g6, e5, c4, a3, b5, a7, c6, a5, b7, d8, e6, g5, h7, f8, d7, b8, a6, b4, d5, e7, g8, f6, e4, g3, h1, 
Complete tour: 1294
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c8, d6, f7, h8, g6, e5, c4, a3, b5, a7, c6, a5, b7, d8, e6, f8, d7, b8, a6, b4, d5, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 1295
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c8, d6, f7, h8, g6, e5, d7, f6, g8, e7, d5, b4, a6, b8, c6, a7, b5, a3, c4, a5, b7, d8, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1296
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c8, d6, f7, h8, g6, e5, d7, f8, e6, d8, b7, a5, c4, a3, b5, a7, c6, b8, a6, b4, d5, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 1297
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c8, d6, f7, h8, g6, e5, d7, f8, h7, f6, g8, e7, d5, b4, a6, b8, c6, a7, b5, a3, c4, a5, b7, d8, e6, g5, e4, g3, h1, 
Complete tour: 1298
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c8, d6, f7, h8, g6, e5, d7, f8, h7, g5, e6, d8, b7, a5, c4, a3, b5, a7, c6, b8, a6, b4, d5, e7, g8, f6, e4, g3, h1, 
Complete tour: 1299
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c8, d6, f7, h8, g6, e5, d7, b8, a6, b4, d5, f6, g8, e7, c6, a7, b5, a3, c4, a5, b7, d8, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1300
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c8, d6, f7, h8, g6, e5, c6, a7, b5, a3, c4, a5, b7, d8, e6, g5, h7, f8, d7, b8, a6, b4, d5, e7, g8, f6, e4, g3, h1, 
Complete tour: 1301
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c8, d6, f7, h8, g6, e5, c6, a7, b5, a3, c4, a5, b7, d8, e6, f8, d7, b8, a6, b4, d5, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 1302
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c8, d6, f7, h8, g6, f8, e6, d8, b7, a5, c4, a3, b5, a7, c6, e5, d7, b8, a6, b4, d5, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 1303
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c8, d6, f7, h8, g6, f8, e6, d8, b7, a5, c6, a7, b5, a3, c4, e5, d7, b8, a6, b4, d5, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 1304
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c8, d6, f7, h8, g6, f8, h7, f6, g8, e7, d5, b4, a6, b8, d7, e5, c4, a3, b5, a7, c6, a5, b7, d8, e6, g5, e4, g3, h1, 
Complete tour: 1305
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c8, d6, f7, h8, g6, f8, h7, f6, g8, e7, d5, b4, a6, b8, d7, e5, c6, a7, b5, a3, c4, a5, b7, d8, e6, g5, e4, g3, h1, 
Complete tour: 1306
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c8, d6, f7, h8, g6, f8, h7, g5, e6, d8, b7, a5, c4, a3, b5, a7, c6, e5, d7, b8, a6, b4, d5, e7, g8, f6, e4, g3, h1, 
Complete tour: 1307
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c8, d6, f7, h8, g6, f8, h7, g5, e6, d8, b7, a5, c6, a7, b5, a3, c4, e5, d7, b8, a6, b4, d5, e7, g8, f6, e4, g3, h1, 
Complete tour: 1308
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c8, d6, f7, h8, g6, e7, g8, f6, d5, b4, a6, b8, d7, e5, c4, a3, b5, a7, c6, a5, b7, d8, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1309
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c8, d6, f7, h8, g6, e7, g8, f6, d5, b4, a6, b8, d7, e5, c6, a7, b5, a3, c4, a5, b7, d8, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1310
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c8, d6, b7, a5, c4, a3, b5, a7, c6, e5, g6, h8, f7, d8, e6, g5, h7, f8, d7, b8, a6, b4, d5, e7, g8, f6, e4, g3, h1, 
Complete tour: 1311
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c8, d6, b7, a5, c4, a3, b5, a7, c6, e5, g6, h8, f7, d8, e6, f8, d7, b8, a6, b4, d5, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 1312
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c8, d6, b7, a5, c4, a3, b5, a7, c6, e5, d7, b8, a6, b4, d5, f6, g8, e7, g6, h8, f7, d8, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1313
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c8, d6, b7, a5, c4, a3, b5, a7, c6, e5, d7, b8, a6, b4, d5, e7, g8, f6, h7, f8, g6, h8, f7, d8, e6, g5, e4, g3, h1, 
Complete tour: 1314
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c8, d6, b7, a5, c4, a3, b5, a7, c6, e7, g8, f6, d5, b4, a6, b8, d7, e5, g6, h8, f7, d8, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1315
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c8, d6, b7, a5, c4, a3, b5, a7, c6, d8, e6, g5, h7, f8, g6, h8, f7, e5, d7, b8, a6, b4, d5, e7, g8, f6, e4, g3, h1, 
Complete tour: 1316
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c8, d6, b7, a5, c4, a3, b5, a7, c6, d8, e6, f8, g6, h8, f7, e5, d7, b8, a6, b4, d5, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 1317
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c8, d6, b7, a5, c4, a3, b5, a7, c6, d8, e6, f8, h7, f6, g8, e7, d5, b4, a6, b8, d7, e5, g6, h8, f7, g5, e4, g3, h1, 
Complete tour: 1318
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c8, d6, b7, a5, c4, a3, b5, a7, c6, d8, e6, f8, h7, g5, f7, h8, g6, e5, d7, b8, a6, b4, d5, e7, g8, f6, e4, g3, h1, 
Complete tour: 1319
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c8, d6, b7, a5, c4, a3, b5, a7, c6, d8, f7, h8, g6, e5, d7, b8, a6, b4, d5, e7, g8, f6, h7, f8, e6, g5, e4, g3, h1, 
Complete tour: 1320
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c8, d6, b7, a5, c4, a3, b5, a7, c6, b8, a6, b4, d5, e7, g8, f6, h7, f8, d7, e5, g6, h8, f7, d8, e6, g5, e4, g3, h1, 
Complete tour: 1321
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c8, d6, b7, a5, c4, a3, b5, a7, c6, b8, a6, b4, d5, e7, g8, f6, d7, e5, g6, h8, f7, d8, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1322
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c8, d6, b7, a5, c6, a7, b5, a3, c4, e5, g6, h8, f7, d8, e6, g5, h7, f8, d7, b8, a6, b4, d5, e7, g8, f6, e4, g3, h1, 
Complete tour: 1323
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c8, d6, b7, a5, c6, a7, b5, a3, c4, e5, g6, h8, f7, d8, e6, f8, d7, b8, a6, b4, d5, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 1324
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c8, d6, b7, a5, c6, a7, b5, a3, c4, e5, d7, b8, a6, b4, d5, f6, g8, e7, g6, h8, f7, d8, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1325
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c8, d6, b7, a5, c6, a7, b5, a3, c4, e5, d7, b8, a6, b4, d5, e7, g8, f6, h7, f8, g6, h8, f7, d8, e6, g5, e4, g3, h1, 
Complete tour: 1326
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c8, e7, g8, f6, d5, b4, a6, b8, c6, a7, b5, a3, c4, a5, b7, d8, e6, g5, h7, f8, d7, e5, g6, h8, f7, d6, e4, g3, h1, 
Complete tour: 1327
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c8, e7, g8, f6, d5, b4, a6, b8, d7, e5, c4, a3, b5, a7, c6, a5, b7, d8, e6, g5, h7, f8, g6, h8, f7, d6, e4, g3, h1, 
Complete tour: 1328
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c8, e7, g8, f6, d5, b4, a6, b8, d7, e5, g6, h8, f7, d6, c4, a3, b5, a7, c6, a5, b7, d8, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1329
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c8, e7, g8, f6, d5, b4, a6, b8, d7, e5, g6, h8, f7, d6, b7, a5, c4, a3, b5, a7, c6, d8, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1330
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c8, e7, g8, f6, d5, b4, a6, b8, d7, e5, g6, h8, f7, g5, h7, f8, e6, d8, b7, a5, c6, a7, b5, a3, c4, d6, e4, g3, h1, 
Complete tour: 1331
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c8, e7, g8, f6, d5, b4, a6, b8, d7, e5, g6, h8, f7, g5, h7, f8, e6, d8, c6, a7, b5, a3, c4, a5, b7, d6, e4, g3, h1, 
Complete tour: 1332
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c8, e7, g8, f6, d5, b4, a6, b8, d7, e5, f7, h8, g6, f8, h7, g5, e6, d8, b7, a5, c6, a7, b5, a3, c4, d6, e4, g3, h1, 
Complete tour: 1333
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c8, e7, g8, f6, d5, b4, a6, b8, d7, e5, f7, h8, g6, f8, h7, g5, e6, d8, c6, a7, b5, a3, c4, a5, b7, d6, e4, g3, h1, 
Complete tour: 1334
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c8, e7, g8, f6, d5, b4, a6, b8, d7, e5, c6, a7, b5, a3, c4, a5, b7, d8, e6, g5, h7, f8, g6, h8, f7, d6, e4, g3, h1, 
Complete tour: 1335
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c8, e7, g8, f6, d5, b4, a6, b8, d7, f8, h7, g5, e6, d8, b7, a5, c4, a3, b5, a7, c6, e5, g6, h8, f7, d6, e4, g3, h1, 
Complete tour: 1336
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c8, e7, g8, f6, d5, b4, a6, b8, d7, f8, h7, g5, e6, d8, b7, a5, c6, a7, b5, a3, c4, e5, g6, h8, f7, d6, e4, g3, h1, 
Complete tour: 1337
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c8, e7, g8, f6, d5, b4, a6, b8, d7, f8, h7, g5, e6, d8, f7, h8, g6, e5, c4, a3, b5, a7, c6, a5, b7, d6, e4, g3, h1, 
Complete tour: 1338
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, c7, a8, b6, c8, e7, g8, f6, d5, b4, a6, b8, d7, f8, h7, g5, e6, d8, f7, h8, g6, e5, c6, a7, b5, a3, c4, a5, b7, d6, e4, g3, h1, 
Complete tour: 1339
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, b5, a3, c4, e5, g6, h8, f7, g5, h7, f8, d7, b8, a6, b4, d5, b6, a8, c7, e6, d8, b7, a5, c6, a7, c8, e7, g8, f6, e4, g3, h1, 
Complete tour: 1340
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, b5, a3, c4, e5, g6, h8, f7, d8, b7, a5, c6, a7, c8, b6, a8, c7, e6, g5, h7, f8, d7, b8, a6, b4, d5, e7, g8, f6, e4, g3, h1, 
Complete tour: 1341
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, b5, a3, c4, e5, g6, h8, f7, d8, b7, a5, c6, a7, c8, b6, a8, c7, e6, f8, d7, b8, a6, b4, d5, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 1342
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, b5, a3, c4, e5, g6, h8, f7, d8, b7, a5, c6, a7, c8, e7, g8, f6, d5, b4, a6, b8, d7, b6, a8, c7, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1343
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, b5, a3, c4, e5, g6, h8, f7, d8, b7, a5, c6, a7, c8, e7, g8, f6, h7, f8, d7, b8, a6, b4, d5, b6, a8, c7, e6, g5, e4, g3, h1, 
Complete tour: 1344
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, b5, a3, c4, e5, g6, h8, f7, d8, b7, a5, c6, a7, c8, e7, g8, f6, d7, b8, a6, b4, d5, b6, a8, c7, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1345
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, b5, a3, c4, e5, f7, h8, g6, f8, d7, b8, a6, b4, d5, b6, a8, c7, e6, d8, b7, a5, c6, a7, c8, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 1346
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, b5, a3, c4, e5, f7, h8, g6, e7, g8, f6, h7, f8, d7, b8, a6, b4, d5, c7, a8, b6, c8, a7, c6, a5, b7, d8, e6, g5, e4, g3, h1, 
Complete tour: 1347
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, b5, a3, c4, e5, f7, h8, g6, e7, g8, f6, d7, b8, a6, b4, d5, c7, a8, b6, c8, a7, c6, a5, b7, d8, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1348
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, b5, a3, c4, e5, d7, b8, a6, b4, d5, f6, g8, e7, g6, h8, f7, d8, b7, a5, c6, a7, c8, b6, a8, c7, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1349
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, b5, a3, c4, e5, d7, b8, a6, b4, d5, e7, g8, f6, h7, f8, g6, h8, f7, d8, b7, a5, c6, a7, c8, b6, a8, c7, e6, g5, e4, g3, h1, 
Complete tour: 1350
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, b5, a3, c4, e5, d7, b8, a6, b4, d5, c7, a8, b6, c8, a7, c6, a5, b7, d8, e6, f8, h7, f6, g8, e7, g6, h8, f7, g5, e4, g3, h1, 
Complete tour: 1351
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, b5, a3, c4, e5, d7, b8, a6, b4, d5, c7, a8, b6, c8, a7, c6, a5, b7, d8, e6, f8, h7, g5, f7, h8, g6, e7, g8, f6, e4, g3, h1, 
Complete tour: 1352
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, b5, a3, c4, e5, d7, b8, a6, b4, d5, c7, a8, b6, c8, a7, c6, a5, b7, d8, f7, h8, g6, e7, g8, f6, h7, f8, e6, g5, e4, g3, h1, 
Complete tour: 1353
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, b5, a3, c4, e5, d7, b8, a6, b4, d5, b6, a8, c7, e6, g5, h7, f8, g6, h8, f7, d8, b7, a5, c6, a7, c8, e7, g8, f6, e4, g3, h1, 
Complete tour: 1354
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, b5, a3, c4, e5, d7, b8, a6, b4, d5, b6, a8, c7, e6, f8, g6, h8, f7, d8, b7, a5, c6, a7, c8, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 1355
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, b5, a3, c4, e5, d7, b8, a6, b4, d5, b6, a8, c7, e6, d8, b7, a5, c6, a7, c8, e7, g8, f6, h7, f8, g6, h8, f7, g5, e4, g3, h1, 
Complete tour: 1356
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, b5, a3, c4, b6, a8, c7, d5, b4, a6, b8, d7, e5, g6, h8, f7, g5, h7, f8, e6, d8, b7, a5, c6, a7, c8, e7, g8, f6, e4, g3, h1, 
Complete tour: 1357
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, b5, a3, c4, b6, a8, c7, d5, b4, a6, b8, d7, e5, g6, h8, f7, d8, b7, a5, c6, a7, c8, e7, g8, f6, h7, f8, e6, g5, e4, g3, h1, 
Complete tour: 1358
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, b5, a3, c4, b6, a8, c7, d5, b4, a6, b8, d7, e5, f7, h8, g6, f8, e6, d8, b7, a5, c6, a7, c8, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 1359
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, b5, a3, c4, b6, a8, c7, d5, b4, a6, b8, d7, e5, f7, h8, g6, f8, h7, f6, g8, e7, c8, a7, c6, a5, b7, d8, e6, g5, e4, g3, h1, 
Complete tour: 1360
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, b5, a3, c4, b6, a8, c7, d5, b4, a6, b8, d7, e5, f7, h8, g6, f8, h7, g5, e6, d8, b7, a5, c6, a7, c8, e7, g8, f6, e4, g3, h1, 
Complete tour: 1361
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, b5, a3, c4, b6, a8, c7, e6, d8, b7, a5, c6, a7, c8, e7, g8, f6, d5, b4, a6, b8, d7, e5, f7, h8, g6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1362
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, b5, a3, c4, a5, b7, d8, c6, a7, c8, b6, a8, c7, d5, b4, a6, b8, d7, e5, f7, h8, g6, e7, g8, f6, h7, f8, e6, g5, e4, g3, h1, 
Complete tour: 1363
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, b5, a3, c4, a5, b7, d8, c6, a7, c8, b6, a8, c7, e6, g5, h7, f8, g6, h8, f7, e5, d7, b8, a6, b4, d5, e7, g8, f6, e4, g3, h1, 
Complete tour: 1364
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, b5, a3, c4, a5, b7, d8, c6, a7, c8, b6, a8, c7, e6, f8, g6, h8, f7, e5, d7, b8, a6, b4, d5, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 1365
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, b5, a3, c4, a5, b7, d8, c6, a7, c8, b6, a8, c7, e6, f8, h7, f6, g8, e7, d5, b4, a6, b8, d7, e5, g6, h8, f7, g5, e4, g3, h1, 
Complete tour: 1366
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, b5, a3, c4, a5, b7, d8, c6, a7, c8, b6, a8, c7, e6, f8, h7, g5, f7, h8, g6, e5, d7, b8, a6, b4, d5, e7, g8, f6, e4, g3, h1, 
Complete tour: 1367
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, b5, a3, c4, a5, b7, d8, c6, a7, c8, e7, g8, f6, h7, f8, e6, c7, a8, b6, d5, b4, a6, b8, d7, e5, g6, h8, f7, g5, e4, g3, h1, 
Complete tour: 1368
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, b5, a3, c4, a5, b7, d8, c6, a7, c8, e7, g8, f6, h7, f8, g6, h8, f7, e5, d7, b8, a6, b4, d5, b6, a8, c7, e6, g5, e4, g3, h1, 
Complete tour: 1369
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, b5, a3, c4, a5, b7, d8, e6, g5, h7, f8, d7, b8, a6, b4, d5, c7, a8, b6, c8, a7, c6, e5, f7, h8, g6, e7, g8, f6, e4, g3, h1, 
Complete tour: 1370
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, b5, a3, c4, a5, b7, d8, e6, g5, h7, f8, g6, h8, f7, e5, d7, b6, a8, c7, d5, b4, a6, b8, c6, a7, c8, e7, g8, f6, e4, g3, h1, 
Complete tour: 1371
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, b5, a3, c4, a5, b7, d8, e6, g5, h7, f8, g6, h8, f7, e5, d7, b8, a6, b4, d5, c7, a8, b6, c8, a7, c6, e7, g8, f6, e4, g3, h1, 
Complete tour: 1372
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, b5, a3, c4, a5, b7, d8, e6, g5, h7, f8, g6, h8, f7, e5, d7, b8, a6, b4, c6, a7, c8, b6, a8, c7, d5, e7, g8, f6, e4, g3, h1, 
Complete tour: 1373
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, b5, a3, c4, a5, b7, d8, e6, g5, h7, f8, g6, h8, f7, e5, d7, b8, a6, c7, a8, b6, d5, b4, c6, a7, c8, e7, g8, f6, e4, g3, h1, 
Complete tour: 1374
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, b5, a3, c4, a5, b7, d8, e6, g5, h7, f8, g6, h8, f7, e5, d7, b8, a6, c7, a8, b6, c8, a7, c6, b4, d5, e7, g8, f6, e4, g3, h1, 
Complete tour: 1375
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, b5, a3, c4, a5, b7, d8, e6, g5, h7, f8, g6, h8, f7, e5, d7, b8, c6, a7, c8, b6, a8, c7, a6, b4, d5, e7, g8, f6, e4, g3, h1, 
Complete tour: 1376
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, b5, a3, c4, a5, b7, d8, e6, f8, d7, b8, a6, b4, d5, c7, a8, b6, c8, a7, c6, e5, f7, h8, g6, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 1377
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, b5, a3, c4, a5, b7, d8, e6, f8, g6, h8, f7, e5, d7, b6, a8, c7, d5, b4, a6, b8, c6, a7, c8, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 1378
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, b5, a3, c4, a5, b7, d8, e6, f8, g6, h8, f7, e5, d7, b8, a6, b4, d5, c7, a8, b6, c8, a7, c6, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 1379
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, b5, a3, c4, a5, b7, d8, e6, f8, g6, h8, f7, e5, d7, b8, a6, b4, c6, a7, c8, b6, a8, c7, d5, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 1380
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, b5, a3, c4, a5, b7, d8, e6, f8, g6, h8, f7, e5, d7, b8, a6, c7, a8, b6, d5, b4, c6, a7, c8, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 1381
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, b5, a3, c4, a5, b7, d8, e6, f8, g6, h8, f7, e5, d7, b8, a6, c7, a8, b6, c8, a7, c6, b4, d5, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 1382
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, b5, a3, c4, a5, b7, d8, e6, f8, g6, h8, f7, e5, d7, b8, c6, a7, c8, b6, a8, c7, a6, b4, d5, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 1383
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, b5, a3, c4, a5, b7, d8, e6, f8, h7, f6, g8, e7, c6, a7, c8, b6, a8, c7, d5, b4, a6, b8, d7, e5, g6, h8, f7, g5, e4, g3, h1, 
Complete tour: 1384
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, b5, a3, c4, a5, b7, d8, e6, f8, h7, f6, g8, e7, d5, b4, c6, a7, c8, b6, a8, c7, a6, b8, d7, e5, g6, h8, f7, g5, e4, g3, h1, 
Complete tour: 1385
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, b5, a3, c4, a5, b7, d8, e6, f8, h7, f6, g8, e7, d5, b4, a6, c7, a8, b6, c8, a7, c6, b8, d7, e5, g6, h8, f7, g5, e4, g3, h1, 
Complete tour: 1386
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, b5, a3, c4, a5, b7, d8, e6, f8, h7, f6, g8, e7, d5, c7, a8, b6, c8, a7, c6, b4, a6, b8, d7, e5, g6, h8, f7, g5, e4, g3, h1, 
Complete tour: 1387
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, b5, a3, c4, a5, b7, d8, e6, f8, h7, f6, g8, e7, c8, a7, c6, b4, d5, b6, a8, c7, a6, b8, d7, e5, g6, h8, f7, g5, e4, g3, h1, 
Complete tour: 1388
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, b5, a3, c4, a5, b7, d8, e6, f8, h7, f6, g8, e7, c8, a7, c6, b8, a6, b4, d5, c7, a8, b6, d7, e5, g6, h8, f7, g5, e4, g3, h1, 
Complete tour: 1389
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, b5, a3, c4, a5, b7, d8, e6, f8, h7, g5, f7, h8, g6, e5, d7, b6, a8, c7, d5, b4, a6, b8, c6, a7, c8, e7, g8, f6, e4, g3, h1, 
Complete tour: 1390
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, b5, a3, c4, a5, b7, d8, e6, f8, h7, g5, f7, h8, g6, e5, d7, b8, a6, b4, d5, c7, a8, b6, c8, a7, c6, e7, g8, f6, e4, g3, h1, 
Complete tour: 1391
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, b5, a3, c4, a5, b7, d8, e6, f8, h7, g5, f7, h8, g6, e5, d7, b8, a6, b4, c6, a7, c8, b6, a8, c7, d5, e7, g8, f6, e4, g3, h1, 
Complete tour: 1392
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, b5, a3, c4, a5, b7, d8, e6, f8, h7, g5, f7, h8, g6, e5, d7, b8, a6, c7, a8, b6, d5, b4, c6, a7, c8, e7, g8, f6, e4, g3, h1, 
Complete tour: 1393
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, b5, a3, c4, a5, b7, d8, e6, f8, h7, g5, f7, h8, g6, e5, d7, b8, a6, c7, a8, b6, c8, a7, c6, b4, d5, e7, g8, f6, e4, g3, h1, 
Complete tour: 1394
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, b5, a3, c4, a5, b7, d8, e6, f8, h7, g5, f7, h8, g6, e5, d7, b8, c6, a7, c8, b6, a8, c7, a6, b4, d5, e7, g8, f6, e4, g3, h1, 
Complete tour: 1395
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, b5, a3, c4, a5, b7, d8, e6, c7, a8, b6, d5, b4, a6, b8, c6, a7, c8, e7, g8, f6, h7, f8, d7, e5, g6, h8, f7, g5, e4, g3, h1, 
Complete tour: 1396
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, b5, a3, c4, a5, b7, d8, e6, c7, a8, b6, d5, b4, a6, b8, c6, a7, c8, e7, g8, f6, d7, e5, f7, h8, g6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1397
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, b5, a3, c4, a5, b7, d8, e6, c7, a8, b6, d5, b4, a6, b8, d7, e5, c6, a7, c8, e7, g8, f6, h7, f8, g6, h8, f7, g5, e4, g3, h1, 
Complete tour: 1398
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, b5, a3, c4, a5, b7, d8, e6, c7, a8, b6, d5, b4, a6, b8, d7, f6, g8, e7, c8, a7, c6, e5, f7, h8, g6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1399
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, b5, a3, c4, a5, b7, d8, e6, c7, a8, b6, d5, b4, a6, b8, d7, f8, g6, h8, f7, e5, c6, a7, c8, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 1400
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, b5, a3, c4, a5, b7, d8, e6, c7, a8, b6, d5, b4, a6, b8, d7, f8, h7, f6, g8, e7, c8, a7, c6, e5, g6, h8, f7, g5, e4, g3, h1, 
Complete tour: 1401
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, b5, a3, c4, a5, b7, d8, e6, c7, a8, b6, d5, b4, a6, b8, d7, f8, h7, g5, f7, h8, g6, e5, c6, a7, c8, e7, g8, f6, e4, g3, h1, 
Complete tour: 1402
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, b5, a3, c4, a5, b7, d8, e6, c7, a8, b6, d5, f6, g8, e7, c8, a7, c6, b4, a6, b8, d7, e5, f7, h8, g6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1403
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, b5, a3, c4, a5, b7, d8, e6, c7, a8, b6, d7, b8, a6, b4, d5, f6, g8, e7, c8, a7, c6, e5, f7, h8, g6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1404
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, b5, a3, c4, a5, b7, d8, e6, c7, a8, b6, c8, a7, c6, e5, g6, h8, f7, g5, h7, f8, d7, b8, a6, b4, d5, e7, g8, f6, e4, g3, h1, 
Complete tour: 1405
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, b5, a3, c4, a5, b7, d8, e6, c7, a8, b6, c8, a7, c6, e5, f7, h8, g6, f8, d7, b8, a6, b4, d5, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 1406
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, b5, a3, c4, a5, b7, d8, e6, c7, a8, b6, c8, a7, c6, e5, f7, h8, g6, e7, g8, f6, d5, b4, a6, b8, d7, f8, h7, g5, e4, g3, h1, 
Complete tour: 1407
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, b5, a3, c4, a5, b7, d8, e6, c7, a8, b6, c8, a7, c6, e5, d7, b8, a6, b4, d5, e7, g8, f6, h7, f8, g6, h8, f7, g5, e4, g3, h1, 
Complete tour: 1408
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, b5, a3, c4, a5, b7, d8, e6, c7, a8, b6, c8, a7, c6, e7, g8, f6, d5, b4, a6, b8, d7, e5, f7, h8, g6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1409
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, b5, a3, c4, a5, b7, d8, e6, c7, a8, b6, c8, a7, c6, b8, a6, b4, d5, f6, g8, e7, g6, h8, f7, e5, d7, f8, h7, g5, e4, g3, h1, 
Complete tour: 1410
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, b5, a3, c4, a5, b7, d8, e6, c7, a8, b6, c8, a7, c6, b8, a6, b4, d5, e7, g8, f6, h7, f8, d7, e5, g6, h8, f7, g5, e4, g3, h1, 
Complete tour: 1411
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, b5, a3, c4, a5, b7, d8, e6, c7, a8, b6, c8, a7, c6, b8, a6, b4, d5, e7, g8, f6, d7, e5, f7, h8, g6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1412
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, b5, a3, c4, a5, b7, d8, f7, h8, g6, e5, d7, b6, a8, c7, d5, b4, a6, b8, c6, a7, c8, e7, g8, f6, h7, f8, e6, g5, e4, g3, h1, 
Complete tour: 1413
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, b5, a3, c4, a5, b7, d8, f7, h8, g6, e5, d7, f6, g8, e7, d5, b4, a6, b8, c6, a7, c8, b6, a8, c7, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1414
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, b5, a3, c4, a5, b7, d8, f7, h8, g6, e5, d7, f6, g8, e7, c8, a7, c6, b8, a6, b4, d5, b6, a8, c7, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1415
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, b5, a3, c4, a5, b7, d8, f7, h8, g6, e5, d7, f8, e6, c7, a8, b6, d5, b4, a6, b8, c6, a7, c8, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 1416
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, b5, a3, c4, a5, b7, d8, f7, h8, g6, e5, d7, f8, e6, c7, a8, b6, c8, a7, c6, b8, a6, b4, d5, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 1417
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, b5, a3, c4, a5, b7, d8, f7, h8, g6, e5, d7, f8, h7, f6, g8, e7, d5, b4, a6, b8, c6, a7, c8, b6, a8, c7, e6, g5, e4, g3, h1, 
Complete tour: 1418
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, b5, a3, c4, a5, b7, d8, f7, h8, g6, e5, d7, f8, h7, f6, g8, e7, c8, a7, c6, b8, a6, b4, d5, b6, a8, c7, e6, g5, e4, g3, h1, 
Complete tour: 1419
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, b5, a3, c4, a5, b7, d8, f7, h8, g6, e5, d7, f8, h7, g5, e6, c7, a8, b6, d5, b4, a6, b8, c6, a7, c8, e7, g8, f6, e4, g3, h1, 
Complete tour: 1420
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, b5, a3, c4, a5, b7, d8, f7, h8, g6, e5, d7, f8, h7, g5, e6, c7, a8, b6, c8, a7, c6, b8, a6, b4, d5, e7, g8, f6, e4, g3, h1, 
Complete tour: 1421
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, b5, a3, c4, a5, b7, d8, f7, h8, g6, e5, d7, b8, a6, b4, d5, f6, g8, e7, c6, a7, c8, b6, a8, c7, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1422
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, b5, a3, c4, a5, b7, d8, f7, h8, g6, e5, d7, b8, a6, b4, d5, c7, a8, b6, c8, a7, c6, e7, g8, f6, h7, f8, e6, g5, e4, g3, h1, 
Complete tour: 1423
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, b5, a3, c4, a5, b7, d8, f7, h8, g6, e5, d7, b8, a6, b4, c6, a7, c8, b6, a8, c7, d5, e7, g8, f6, h7, f8, e6, g5, e4, g3, h1, 
Complete tour: 1424
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, b5, a3, c4, a5, b7, d8, f7, h8, g6, e5, d7, b8, a6, b4, c6, a7, c8, e7, g8, f6, d5, b6, a8, c7, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1425
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, b5, a3, c4, a5, b7, d8, f7, h8, g6, e5, d7, b8, a6, c7, a8, b6, d5, b4, c6, a7, c8, e7, g8, f6, h7, f8, e6, g5, e4, g3, h1, 
Complete tour: 1426
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, b5, a3, c4, a5, b7, d8, f7, h8, g6, e5, d7, b8, a6, c7, a8, b6, c8, a7, c6, b4, d5, e7, g8, f6, h7, f8, e6, g5, e4, g3, h1, 
Complete tour: 1427
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, b5, a3, c4, a5, b7, d8, f7, h8, g6, e5, d7, b8, c6, a7, c8, b6, a8, c7, a6, b4, d5, e7, g8, f6, h7, f8, e6, g5, e4, g3, h1, 
Complete tour: 1428
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, b5, a3, c4, a5, b7, d8, f7, h8, g6, e5, c6, a7, c8, b6, a8, c7, e6, g5, h7, f8, d7, b8, a6, b4, d5, e7, g8, f6, e4, g3, h1, 
Complete tour: 1429
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, b5, a3, c4, a5, b7, d8, f7, h8, g6, e5, c6, a7, c8, b6, a8, c7, e6, f8, d7, b8, a6, b4, d5, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 1430
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, b5, a3, c4, a5, b7, d8, f7, h8, g6, e5, c6, a7, c8, e7, g8, f6, d5, b4, a6, b8, d7, b6, a8, c7, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1431
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, b5, a3, c4, a5, b7, d8, f7, h8, g6, e5, c6, a7, c8, e7, g8, f6, h7, f8, d7, b8, a6, b4, d5, b6, a8, c7, e6, g5, e4, g3, h1, 
Complete tour: 1432
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, b5, a3, c4, a5, b7, d8, f7, h8, g6, e5, c6, a7, c8, e7, g8, f6, d7, b8, a6, b4, d5, b6, a8, c7, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1433
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, b5, a3, c4, a5, b7, d8, f7, h8, g6, f8, e6, c7, a8, b6, d5, b4, a6, b8, d7, e5, c6, a7, c8, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 1434
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, b5, a3, c4, a5, b7, d8, f7, h8, g6, f8, e6, c7, a8, b6, c8, a7, c6, e5, d7, b8, a6, b4, d5, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 1435
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, b5, a3, c4, a5, b7, d8, f7, h8, g6, f8, h7, f6, g8, e7, d5, b4, a6, b8, d7, e5, c6, a7, c8, b6, a8, c7, e6, g5, e4, g3, h1, 
Complete tour: 1436
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, b5, a3, c4, a5, b7, d8, f7, h8, g6, f8, h7, f6, g8, e7, c8, a7, c6, e5, d7, b8, a6, b4, d5, b6, a8, c7, e6, g5, e4, g3, h1, 
Complete tour: 1437
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, b5, a3, c4, a5, b7, d8, f7, h8, g6, f8, h7, g5, e6, c7, a8, b6, d5, b4, a6, b8, d7, e5, c6, a7, c8, e7, g8, f6, e4, g3, h1, 
Complete tour: 1438
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, b5, a3, c4, a5, b7, d8, f7, h8, g6, f8, h7, g5, e6, c7, a8, b6, c8, a7, c6, e5, d7, b8, a6, b4, d5, e7, g8, f6, e4, g3, h1, 
Complete tour: 1439
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, b5, a3, c4, a5, b7, d8, f7, h8, g6, e7, g8, f6, d5, b4, a6, b8, d7, e5, c6, a7, c8, b6, a8, c7, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1440
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c4, a3, b5, c7, a8, b6, d5, b4, a6, b8, d7, e5, g6, h8, f7, g5, h7, f8, e6, d8, b7, a5, c6, a7, c8, e7, g8, f6, e4, g3, h1, 
Complete tour: 1441
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c4, a3, b5, c7, a8, b6, d5, b4, a6, b8, d7, e5, g6, h8, f7, d8, b7, a5, c6, a7, c8, e7, g8, f6, h7, f8, e6, g5, e4, g3, h1, 
Complete tour: 1442
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c4, a3, b5, c7, a8, b6, d5, b4, a6, b8, d7, e5, f7, h8, g6, f8, e6, d8, b7, a5, c6, a7, c8, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 1443
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c4, a3, b5, c7, a8, b6, d5, b4, a6, b8, d7, e5, f7, h8, g6, f8, h7, f6, g8, e7, c8, a7, c6, a5, b7, d8, e6, g5, e4, g3, h1, 
Complete tour: 1444
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c4, a3, b5, c7, a8, b6, d5, b4, a6, b8, d7, e5, f7, h8, g6, f8, h7, g5, e6, d8, b7, a5, c6, a7, c8, e7, g8, f6, e4, g3, h1, 
Complete tour: 1445
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c4, a3, b5, c7, a8, b6, c8, a7, c6, a5, b7, d8, e6, g5, h7, f8, g6, h8, f7, e5, d7, b8, a6, b4, d5, e7, g8, f6, e4, g3, h1, 
Complete tour: 1446
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c4, a3, b5, c7, a8, b6, c8, a7, c6, a5, b7, d8, e6, f8, g6, h8, f7, e5, d7, b8, a6, b4, d5, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 1447
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c4, a3, b5, c7, a8, b6, c8, a7, c6, a5, b7, d8, e6, f8, h7, f6, g8, e7, d5, b4, a6, b8, d7, e5, g6, h8, f7, g5, e4, g3, h1, 
Complete tour: 1448
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c4, a3, b5, c7, a8, b6, c8, a7, c6, a5, b7, d8, e6, f8, h7, g5, f7, h8, g6, e5, d7, b8, a6, b4, d5, e7, g8, f6, e4, g3, h1, 
Complete tour: 1449
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c4, a3, b5, c7, a8, b6, c8, a7, c6, a5, b7, d8, f7, h8, g6, e5, d7, b8, a6, b4, d5, e7, g8, f6, h7, f8, e6, g5, e4, g3, h1, 
Complete tour: 1450
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c4, a3, b5, a7, c6, a5, b7, d8, e6, g5, h7, f8, g6, h8, f7, e5, d7, b8, a6, b4, d5, c7, a8, b6, c8, e7, g8, f6, e4, g3, h1, 
Complete tour: 1451
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c4, a3, b5, a7, c6, a5, b7, d8, e6, f8, g6, h8, f7, e5, d7, b8, a6, b4, d5, c7, a8, b6, c8, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 1452
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c4, a3, b5, a7, c6, a5, b7, d8, e6, f8, h7, f6, g8, e7, c8, b6, a8, c7, d5, b4, a6, b8, d7, e5, g6, h8, f7, g5, e4, g3, h1, 
Complete tour: 1453
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c4, a3, b5, a7, c6, a5, b7, d8, e6, f8, h7, g5, f7, h8, g6, e5, d7, b8, a6, b4, d5, c7, a8, b6, c8, e7, g8, f6, e4, g3, h1, 
Complete tour: 1454
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c4, a3, b5, a7, c6, a5, b7, d8, e6, c7, a8, b6, c8, e7, g8, f6, d5, b4, a6, b8, d7, e5, f7, h8, g6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1455
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c4, a3, b5, a7, c6, a5, b7, d8, f7, h8, g6, e5, d7, b8, a6, b4, d5, f6, g8, e7, c8, b6, a8, c7, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1456
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c4, a3, b5, a7, c6, a5, b7, d8, f7, h8, g6, e5, d7, b8, a6, b4, d5, c7, a8, b6, c8, e7, g8, f6, h7, f8, e6, g5, e4, g3, h1, 
Complete tour: 1457
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c4, a3, b5, a7, c8, b6, a8, c7, a6, b4, d5, f6, g8, e7, g6, h8, f7, e5, d7, b8, c6, a5, b7, d8, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1458
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c4, a3, b5, a7, c8, b6, a8, c7, a6, b4, d5, e7, g8, f6, h7, f8, e6, d8, b7, a5, c6, b8, d7, e5, g6, h8, f7, g5, e4, g3, h1, 
Complete tour: 1459
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c4, a3, b5, a7, c8, b6, a8, c7, a6, b4, d5, e7, g8, f6, h7, f8, g6, h8, f7, e5, d7, b8, c6, a5, b7, d8, e6, g5, e4, g3, h1, 
Complete tour: 1460
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c4, a3, b5, a7, c8, b6, a8, c7, a6, b8, d7, e5, g6, h8, f7, g5, h7, f8, e6, d8, b7, a5, c6, b4, d5, e7, g8, f6, e4, g3, h1, 
Complete tour: 1461
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c4, a3, b5, a7, c8, b6, a8, c7, a6, b8, d7, e5, g6, h8, f7, d8, b7, a5, c6, b4, d5, e7, g8, f6, h7, f8, e6, g5, e4, g3, h1, 
Complete tour: 1462
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c4, a3, b5, a7, c8, b6, a8, c7, a6, b8, d7, e5, f7, h8, g6, f8, e6, d8, b7, a5, c6, b4, d5, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 1463
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c4, a3, b5, a7, c8, b6, a8, c7, a6, b8, d7, e5, f7, h8, g6, f8, h7, f6, g8, e7, d5, b4, c6, a5, b7, d8, e6, g5, e4, g3, h1, 
Complete tour: 1464
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c4, a3, b5, a7, c8, b6, a8, c7, a6, b8, d7, e5, f7, h8, g6, f8, h7, g5, e6, d8, b7, a5, c6, b4, d5, e7, g8, f6, e4, g3, h1, 
Complete tour: 1465
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c4, a3, b5, a7, c8, b6, a8, c7, a6, b8, d7, e5, f7, h8, g6, e7, g8, f6, d5, b4, c6, a5, b7, d8, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1466
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c4, a3, b5, a7, c8, b6, a8, c7, d5, b4, a6, b8, c6, a5, b7, d8, e6, g5, h7, f8, d7, e5, f7, h8, g6, e7, g8, f6, e4, g3, h1, 
Complete tour: 1467
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c4, a3, b5, a7, c8, b6, a8, c7, d5, b4, a6, b8, c6, a5, b7, d8, e6, f8, d7, e5, f7, h8, g6, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 1468
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c4, a3, b5, a7, c8, b6, a8, c7, d5, b4, a6, b8, d7, e5, g6, h8, f7, g5, h7, f8, e6, d8, b7, a5, c6, e7, g8, f6, e4, g3, h1, 
Complete tour: 1469
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c4, a3, b5, a7, c8, b6, a8, c7, d5, b4, a6, b8, d7, e5, g6, h8, f7, d8, b7, a5, c6, e7, g8, f6, h7, f8, e6, g5, e4, g3, h1, 
Complete tour: 1470
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c4, a3, b5, a7, c8, b6, a8, c7, d5, b4, a6, b8, d7, e5, f7, h8, g6, f8, e6, d8, b7, a5, c6, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 1471
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c4, a3, b5, a7, c8, b6, a8, c7, d5, b4, a6, b8, d7, e5, f7, h8, g6, f8, h7, f6, g8, e7, c6, a5, b7, d8, e6, g5, e4, g3, h1, 
Complete tour: 1472
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c4, a3, b5, a7, c8, b6, a8, c7, d5, b4, a6, b8, d7, e5, f7, h8, g6, f8, h7, g5, e6, d8, b7, a5, c6, e7, g8, f6, e4, g3, h1, 
Complete tour: 1473
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c4, a3, b5, a7, c8, b6, a8, c7, d5, b4, a6, b8, d7, e5, c6, a5, b7, d8, e6, f8, h7, f6, g8, e7, g6, h8, f7, g5, e4, g3, h1, 
Complete tour: 1474
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c4, a3, b5, a7, c8, b6, a8, c7, d5, b4, a6, b8, d7, e5, c6, a5, b7, d8, e6, f8, h7, g5, f7, h8, g6, e7, g8, f6, e4, g3, h1, 
Complete tour: 1475
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c4, a3, b5, a7, c8, b6, a8, c7, d5, b4, a6, b8, d7, e5, c6, a5, b7, d8, f7, h8, g6, e7, g8, f6, h7, f8, e6, g5, e4, g3, h1, 
Complete tour: 1476
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c4, a3, b5, a7, c8, b6, a8, c7, d5, b4, a6, b8, d7, f6, g8, e7, g6, h8, f7, e5, c6, a5, b7, d8, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1477
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c4, a3, b5, a7, c8, b6, a8, c7, d5, b4, a6, b8, d7, f8, e6, d8, b7, a5, c6, e5, f7, h8, g6, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 1478
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c4, a3, b5, a7, c8, b6, a8, c7, d5, b4, a6, b8, d7, f8, h7, f6, g8, e7, g6, h8, f7, e5, c6, a5, b7, d8, e6, g5, e4, g3, h1, 
Complete tour: 1479
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c4, a3, b5, a7, c8, b6, a8, c7, d5, b4, a6, b8, d7, f8, h7, g5, e6, d8, b7, a5, c6, e5, f7, h8, g6, e7, g8, f6, e4, g3, h1, 
Complete tour: 1480
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c4, a3, b5, a7, c8, b6, a8, c7, d5, f6, g8, e7, g6, h8, f7, e5, d7, b8, a6, b4, c6, a5, b7, d8, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1481
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c4, a3, b5, a7, c8, b6, a8, c7, d5, e7, g8, f6, h7, f8, e6, d8, b7, a5, c6, b4, a6, b8, d7, e5, g6, h8, f7, g5, e4, g3, h1, 
Complete tour: 1482
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c4, a3, b5, a7, c8, b6, a8, c7, d5, e7, g8, f6, h7, f8, g6, h8, f7, e5, d7, b8, a6, b4, c6, a5, b7, d8, e6, g5, e4, g3, h1, 
Complete tour: 1483
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c4, a3, b5, a7, c8, b6, a8, c7, e6, g5, h7, f8, d7, e5, g6, h8, f7, d8, b7, a5, c6, b8, a6, b4, d5, e7, g8, f6, e4, g3, h1, 
Complete tour: 1484
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c4, a3, b5, a7, c8, b6, a8, c7, e6, g5, h7, f8, g6, h8, f7, d8, b7, a5, c6, e5, d7, b8, a6, b4, d5, e7, g8, f6, e4, g3, h1, 
Complete tour: 1485
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c4, a3, b5, a7, c8, b6, a8, c7, e6, f8, d7, e5, g6, h8, f7, d8, b7, a5, c6, b8, a6, b4, d5, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 1486
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c4, a3, b5, a7, c8, b6, a8, c7, e6, f8, g6, h8, f7, d8, b7, a5, c6, e5, d7, b8, a6, b4, d5, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 1487
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c4, a3, b5, a7, c8, b6, a8, c7, e6, d8, b7, a5, c6, e5, g6, h8, f7, g5, h7, f8, d7, b8, a6, b4, d5, e7, g8, f6, e4, g3, h1, 
Complete tour: 1488
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c4, a3, b5, a7, c8, b6, a8, c7, e6, d8, b7, a5, c6, e5, f7, h8, g6, f8, d7, b8, a6, b4, d5, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 1489
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c4, a3, b5, a7, c8, b6, a8, c7, e6, d8, b7, a5, c6, e5, f7, h8, g6, e7, g8, f6, d5, b4, a6, b8, d7, f8, h7, g5, e4, g3, h1, 
Complete tour: 1490
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c4, a3, b5, a7, c8, b6, a8, c7, e6, d8, b7, a5, c6, e5, d7, b8, a6, b4, d5, e7, g8, f6, h7, f8, g6, h8, f7, g5, e4, g3, h1, 
Complete tour: 1491
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c4, a3, b5, a7, c8, b6, a8, c7, e6, d8, b7, a5, c6, e7, g8, f6, d5, b4, a6, b8, d7, e5, f7, h8, g6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1492
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c4, a3, b5, a7, c8, b6, a8, c7, e6, d8, b7, a5, c6, b8, a6, b4, d5, f6, g8, e7, g6, h8, f7, e5, d7, f8, h7, g5, e4, g3, h1, 
Complete tour: 1493
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c4, a3, b5, a7, c8, b6, a8, c7, e6, d8, b7, a5, c6, b8, a6, b4, d5, e7, g8, f6, h7, f8, d7, e5, g6, h8, f7, g5, e4, g3, h1, 
Complete tour: 1494
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c4, a3, b5, a7, c8, b6, a8, c7, e6, d8, b7, a5, c6, b8, a6, b4, d5, e7, g8, f6, d7, e5, f7, h8, g6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1495
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c4, a3, b5, a7, c8, e7, g8, f6, d5, b4, a6, b8, c6, a5, b7, d8, e6, c7, a8, b6, d7, e5, f7, h8, g6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1496
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c4, a3, b5, a7, c8, e7, g8, f6, d5, b4, a6, b8, c6, a5, b7, d8, f7, h8, g6, e5, d7, b6, a8, c7, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1497
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c4, a3, b5, a7, c8, e7, g8, f6, d5, b4, a6, b8, d7, b6, a8, c7, e6, d8, b7, a5, c6, e5, f7, h8, g6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1498
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c4, a3, b5, a7, c8, e7, g8, f6, d5, b6, a8, c7, e6, d8, b7, a5, c6, b4, a6, b8, d7, e5, f7, h8, g6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1499
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c4, a3, b5, a7, c8, e7, g8, f6, h7, f8, d7, e5, g6, h8, f7, d8, b7, a5, c6, b8, a6, b4, d5, b6, a8, c7, e6, g5, e4, g3, h1, 
Complete tour: 1500
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c4, a3, b5, a7, c8, e7, g8, f6, h7, f8, d7, b8, a6, b4, d5, b6, a8, c7, e6, d8, b7, a5, c6, e5, g6, h8, f7, g5, e4, g3, h1, 
Complete tour: 1501
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c4, a3, b5, a7, c8, e7, g8, f6, h7, f8, e6, d8, b7, a5, c6, b4, d5, b6, a8, c7, a6, b8, d7, e5, g6, h8, f7, g5, e4, g3, h1, 
Complete tour: 1502
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c4, a3, b5, a7, c8, e7, g8, f6, h7, f8, e6, d8, b7, a5, c6, b8, a6, b4, d5, c7, a8, b6, d7, e5, g6, h8, f7, g5, e4, g3, h1, 
Complete tour: 1503
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c4, a3, b5, a7, c8, e7, g8, f6, h7, f8, g6, h8, f7, e5, d7, b6, a8, c7, d5, b4, a6, b8, c6, a5, b7, d8, e6, g5, e4, g3, h1, 
Complete tour: 1504
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c4, a3, b5, a7, c8, e7, g8, f6, h7, f8, g6, h8, f7, e5, d7, b8, a6, c7, a8, b6, d5, b4, c6, a5, b7, d8, e6, g5, e4, g3, h1, 
Complete tour: 1505
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c4, a3, b5, a7, c8, e7, g8, f6, h7, f8, g6, h8, f7, d8, b7, a5, c6, e5, d7, b8, a6, b4, d5, b6, a8, c7, e6, g5, e4, g3, h1, 
Complete tour: 1506
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c4, a3, b5, a7, c8, e7, g8, f6, d7, e5, g6, h8, f7, d8, b7, a5, c6, b8, a6, b4, d5, b6, a8, c7, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1507
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c4, a3, b5, a7, c8, e7, g8, f6, d7, b8, a6, b4, d5, b6, a8, c7, e6, d8, b7, a5, c6, e5, f7, h8, g6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1508
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, f7, h8, g6, e5, c4, a3, b5, c7, a8, b6, d5, b4, a6, b8, d7, f6, g8, e7, c8, a7, c6, a5, b7, d8, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1509
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, f7, h8, g6, e5, c4, a3, b5, c7, a8, b6, d5, b4, a6, b8, d7, f8, e6, d8, b7, a5, c6, a7, c8, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 1510
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, f7, h8, g6, e5, c4, a3, b5, c7, a8, b6, d5, b4, a6, b8, d7, f8, h7, f6, g8, e7, c8, a7, c6, a5, b7, d8, e6, g5, e4, g3, h1, 
Complete tour: 1511
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, f7, h8, g6, e5, c4, a3, b5, c7, a8, b6, d5, b4, a6, b8, d7, f8, h7, g5, e6, d8, b7, a5, c6, a7, c8, e7, g8, f6, e4, g3, h1, 
Complete tour: 1512
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, f7, h8, g6, e5, c4, a3, b5, c7, a8, b6, d7, b8, a6, b4, d5, f6, g8, e7, c8, a7, c6, a5, b7, d8, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1513
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, f7, h8, g6, e5, c4, a3, b5, c7, a8, b6, c8, a7, c6, a5, b7, d8, e6, g5, h7, f8, d7, b8, a6, b4, d5, e7, g8, f6, e4, g3, h1, 
Complete tour: 1514
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, f7, h8, g6, e5, c4, a3, b5, c7, a8, b6, c8, a7, c6, a5, b7, d8, e6, f8, d7, b8, a6, b4, d5, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 1515
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, f7, h8, g6, e5, c4, a3, b5, a7, c6, a5, b7, d8, e6, g5, h7, f8, d7, b8, a6, b4, d5, c7, a8, b6, c8, e7, g8, f6, e4, g3, h1, 
Complete tour: 1516
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, f7, h8, g6, e5, c4, a3, b5, a7, c6, a5, b7, d8, e6, f8, d7, b8, a6, b4, d5, c7, a8, b6, c8, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 1517
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, f7, h8, g6, e5, c4, a3, b5, a7, c6, a5, b7, d8, e6, c7, a8, b6, c8, e7, g8, f6, d5, b4, a6, b8, d7, f8, h7, g5, e4, g3, h1, 
Complete tour: 1518
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, f7, h8, g6, e5, c4, a3, b5, a7, c8, b6, a8, c7, a6, b4, d5, e7, g8, f6, h7, f8, d7, b8, c6, a5, b7, d8, e6, g5, e4, g3, h1, 
Complete tour: 1519
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, f7, h8, g6, e5, c4, a3, b5, a7, c8, b6, a8, c7, a6, b4, d5, e7, g8, f6, d7, b8, c6, a5, b7, d8, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1520
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, f7, h8, g6, e5, c4, a3, b5, a7, c8, b6, a8, c7, a6, b8, d7, f6, g8, e7, d5, b4, c6, a5, b7, d8, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1521
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, f7, h8, g6, e5, c4, a3, b5, a7, c8, b6, a8, c7, a6, b8, d7, f8, e6, d8, b7, a5, c6, b4, d5, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 1522
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, f7, h8, g6, e5, c4, a3, b5, a7, c8, b6, a8, c7, a6, b8, d7, f8, h7, f6, g8, e7, d5, b4, c6, a5, b7, d8, e6, g5, e4, g3, h1, 
Complete tour: 1523
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, f7, h8, g6, e5, c4, a3, b5, a7, c8, b6, a8, c7, a6, b8, d7, f8, h7, g5, e6, d8, b7, a5, c6, b4, d5, e7, g8, f6, e4, g3, h1, 
Complete tour: 1524
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, f7, h8, g6, e5, c4, a3, b5, a7, c8, b6, a8, c7, d5, b4, a6, b8, d7, f6, g8, e7, c6, a5, b7, d8, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1525
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, f7, h8, g6, e5, c4, a3, b5, a7, c8, b6, a8, c7, d5, b4, a6, b8, d7, f8, e6, d8, b7, a5, c6, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 1526
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, f7, h8, g6, e5, c4, a3, b5, a7, c8, b6, a8, c7, d5, b4, a6, b8, d7, f8, h7, f6, g8, e7, c6, a5, b7, d8, e6, g5, e4, g3, h1, 
Complete tour: 1527
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, f7, h8, g6, e5, c4, a3, b5, a7, c8, b6, a8, c7, d5, b4, a6, b8, d7, f8, h7, g5, e6, d8, b7, a5, c6, e7, g8, f6, e4, g3, h1, 
Complete tour: 1528
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, f7, h8, g6, e5, c4, a3, b5, a7, c8, b6, a8, c7, d5, e7, g8, f6, h7, f8, d7, b8, a6, b4, c6, a5, b7, d8, e6, g5, e4, g3, h1, 
Complete tour: 1529
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, f7, h8, g6, e5, c4, a3, b5, a7, c8, b6, a8, c7, d5, e7, g8, f6, d7, b8, a6, b4, c6, a5, b7, d8, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1530
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, f7, h8, g6, e5, c4, a3, b5, a7, c8, b6, a8, c7, e6, d8, b7, a5, c6, e7, g8, f6, d5, b4, a6, b8, d7, f8, h7, g5, e4, g3, h1, 
Complete tour: 1531
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, f7, h8, g6, e5, c4, a3, b5, a7, c8, b6, a8, c7, e6, d8, b7, a5, c6, b8, a6, b4, d5, e7, g8, f6, d7, f8, h7, g5, e4, g3, h1, 
Complete tour: 1532
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, f7, h8, g6, e5, c4, a3, b5, a7, c8, e7, g8, f6, d5, b4, a6, c7, a8, b6, d7, b8, c6, a5, b7, d8, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1533
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, f7, h8, g6, e5, c4, a3, b5, a7, c8, e7, g8, f6, d5, b4, a6, b8, c6, a5, b7, d8, e6, c7, a8, b6, d7, f8, h7, g5, e4, g3, h1, 
Complete tour: 1534
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, f7, h8, g6, e5, c4, a3, b5, a7, c8, e7, g8, f6, d5, c7, a8, b6, d7, b8, a6, b4, c6, a5, b7, d8, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1535
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, f7, h8, g6, e5, c4, a3, b5, a7, c8, e7, g8, f6, d5, b6, a8, c7, e6, d8, b7, a5, c6, b4, a6, b8, d7, f8, h7, g5, e4, g3, h1, 
Complete tour: 1536
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, f7, h8, g6, e5, c4, a3, b5, a7, c8, e7, g8, f6, h7, f8, d7, b6, a8, c7, d5, b4, a6, b8, c6, a5, b7, d8, e6, g5, e4, g3, h1, 
Complete tour: 1537
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, f7, h8, g6, e5, c4, a3, b5, a7, c8, e7, g8, f6, h7, f8, d7, b8, a6, c7, a8, b6, d5, b4, c6, a5, b7, d8, e6, g5, e4, g3, h1, 
Complete tour: 1538
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, f7, h8, g6, e5, c4, a3, b5, a7, c8, e7, g8, f6, d7, b6, a8, c7, d5, b4, a6, b8, c6, a5, b7, d8, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1539
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, f7, h8, g6, e5, c4, a3, b5, a7, c8, e7, g8, f6, d7, b8, a6, c7, a8, b6, d5, b4, c6, a5, b7, d8, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1540
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, f7, h8, g6, e5, d7, b6, a8, c7, a6, b8, c6, b4, d5, f6, g8, e7, c8, a7, b5, a3, c4, a5, b7, d8, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1541
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, f7, h8, g6, e5, d7, b6, a8, c7, d5, b4, a6, b8, c6, d8, b7, a5, c4, a3, b5, a7, c8, e7, g8, f6, h7, f8, e6, g5, e4, g3, h1, 
Complete tour: 1542
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, f7, h8, g6, e5, d7, f6, g8, e7, c6, b8, a6, b4, d5, c7, a8, b6, c8, a7, b5, a3, c4, a5, b7, d8, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1543
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, f7, h8, g6, e5, d7, f6, g8, e7, d5, b4, c6, b8, a6, c7, a8, b6, c8, a7, b5, a3, c4, a5, b7, d8, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1544
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, f7, h8, g6, e5, d7, f6, g8, e7, d5, b4, a6, b8, c6, d8, b7, a5, c4, a3, b5, a7, c8, b6, a8, c7, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1545
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, f7, h8, g6, e5, d7, f6, g8, e7, d5, b4, a6, b8, c6, a7, c8, b6, a8, c7, b5, a3, c4, a5, b7, d8, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1546
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, f7, h8, g6, e5, d7, f6, g8, e7, c8, a7, b5, a3, c4, b6, a8, c7, d5, b4, a6, b8, c6, a5, b7, d8, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1547
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, f7, h8, g6, e5, d7, f6, g8, e7, c8, a7, b5, a3, c4, a5, b7, d8, c6, b8, a6, b4, d5, b6, a8, c7, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1548
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, f7, h8, g6, e5, d7, f6, g8, e7, c8, a7, c6, b8, a6, b4, d5, b6, a8, c7, b5, a3, c4, a5, b7, d8, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1549
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, f7, h8, g6, e5, d7, f6, g8, e7, c8, b6, a8, c7, d5, b4, a6, b8, c6, a7, b5, a3, c4, a5, b7, d8, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1550
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, f7, h8, g6, e5, d7, f8, e6, d8, b7, a5, c4, a3, b5, c7, a8, b6, d5, b4, a6, b8, c6, a7, c8, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 1551
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, f7, h8, g6, e5, d7, f8, e6, d8, b7, a5, c4, a3, b5, c7, a8, b6, c8, a7, c6, b8, a6, b4, d5, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 1552
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, f7, h8, g6, e5, d7, f8, e6, d8, b7, a5, c4, a3, b5, a7, c6, b8, a6, b4, d5, c7, a8, b6, c8, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 1553
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, f7, h8, g6, e5, d7, f8, e6, d8, b7, a5, c4, a3, b5, a7, c8, b6, a8, c7, a6, b8, c6, b4, d5, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 1554
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, f7, h8, g6, e5, d7, f8, e6, d8, b7, a5, c4, a3, b5, a7, c8, b6, a8, c7, d5, b4, a6, b8, c6, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 1555
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, f7, h8, g6, e5, d7, f8, e6, d8, b7, a5, c6, b8, a6, b4, d5, c7, a8, b6, c4, a3, b5, a7, c8, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 1556
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, f7, h8, g6, e5, d7, f8, e6, c7, a8, b6, d5, b4, a6, b8, c6, d8, b7, a5, c4, a3, b5, a7, c8, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 1557
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, f7, h8, g6, e5, d7, f8, e6, c7, a8, b6, c8, a7, b5, a3, c4, a5, b7, d8, c6, b8, a6, b4, d5, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 1558
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, f7, h8, g6, e5, d7, f8, h7, f6, g8, e7, c6, b8, a6, b4, d5, c7, a8, b6, c8, a7, b5, a3, c4, a5, b7, d8, e6, g5, e4, g3, h1, 
Complete tour: 1559
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, f7, h8, g6, e5, d7, f8, h7, f6, g8, e7, d5, b4, c6, b8, a6, c7, a8, b6, c8, a7, b5, a3, c4, a5, b7, d8, e6, g5, e4, g3, h1, 
Complete tour: 1560
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, f7, h8, g6, e5, d7, f8, h7, f6, g8, e7, d5, b4, a6, b8, c6, d8, b7, a5, c4, a3, b5, a7, c8, b6, a8, c7, e6, g5, e4, g3, h1, 
Complete tour: 1561
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, f7, h8, g6, e5, d7, f8, h7, f6, g8, e7, d5, b4, a6, b8, c6, a7, c8, b6, a8, c7, b5, a3, c4, a5, b7, d8, e6, g5, e4, g3, h1, 
Complete tour: 1562
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, f7, h8, g6, e5, d7, f8, h7, f6, g8, e7, c8, a7, b5, a3, c4, b6, a8, c7, d5, b4, a6, b8, c6, a5, b7, d8, e6, g5, e4, g3, h1, 
Complete tour: 1563
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, f7, h8, g6, e5, d7, f8, h7, f6, g8, e7, c8, a7, b5, a3, c4, a5, b7, d8, c6, b8, a6, b4, d5, b6, a8, c7, e6, g5, e4, g3, h1, 
Complete tour: 1564
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, f7, h8, g6, e5, d7, f8, h7, f6, g8, e7, c8, a7, c6, b8, a6, b4, d5, b6, a8, c7, b5, a3, c4, a5, b7, d8, e6, g5, e4, g3, h1, 
Complete tour: 1565
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, f7, h8, g6, e5, d7, f8, h7, f6, g8, e7, c8, b6, a8, c7, d5, b4, a6, b8, c6, a7, b5, a3, c4, a5, b7, d8, e6, g5, e4, g3, h1, 
Complete tour: 1566
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, f7, h8, g6, e5, d7, f8, h7, g5, e6, d8, b7, a5, c4, a3, b5, c7, a8, b6, d5, b4, a6, b8, c6, a7, c8, e7, g8, f6, e4, g3, h1, 
Complete tour: 1567
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, f7, h8, g6, e5, d7, f8, h7, g5, e6, d8, b7, a5, c4, a3, b5, c7, a8, b6, c8, a7, c6, b8, a6, b4, d5, e7, g8, f6, e4, g3, h1, 
Complete tour: 1568
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, f7, h8, g6, e5, d7, f8, h7, g5, e6, d8, b7, a5, c4, a3, b5, a7, c6, b8, a6, b4, d5, c7, a8, b6, c8, e7, g8, f6, e4, g3, h1, 
Complete tour: 1569
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, f7, h8, g6, e5, d7, f8, h7, g5, e6, d8, b7, a5, c4, a3, b5, a7, c8, b6, a8, c7, a6, b8, c6, b4, d5, e7, g8, f6, e4, g3, h1, 
Complete tour: 1570
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, f7, h8, g6, e5, d7, f8, h7, g5, e6, d8, b7, a5, c4, a3, b5, a7, c8, b6, a8, c7, d5, b4, a6, b8, c6, e7, g8, f6, e4, g3, h1, 
Complete tour: 1571
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, f7, h8, g6, e5, d7, f8, h7, g5, e6, d8, b7, a5, c6, b8, a6, b4, d5, c7, a8, b6, c4, a3, b5, a7, c8, e7, g8, f6, e4, g3, h1, 
Complete tour: 1572
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, f7, h8, g6, e5, d7, f8, h7, g5, e6, c7, a8, b6, d5, b4, a6, b8, c6, d8, b7, a5, c4, a3, b5, a7, c8, e7, g8, f6, e4, g3, h1, 
Complete tour: 1573
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, f7, h8, g6, e5, d7, f8, h7, g5, e6, c7, a8, b6, c8, a7, b5, a3, c4, a5, b7, d8, c6, b8, a6, b4, d5, e7, g8, f6, e4, g3, h1, 
Complete tour: 1574
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, f7, h8, g6, e5, d7, b8, a6, b4, d5, f6, g8, e7, c6, d8, b7, a5, c4, a3, b5, a7, c8, b6, a8, c7, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1575
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, f7, h8, g6, e5, d7, b8, a6, b4, d5, f6, g8, e7, c6, a7, c8, b6, a8, c7, b5, a3, c4, a5, b7, d8, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1576
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, f7, h8, g6, e5, d7, b8, a6, b4, d5, c7, a8, b6, c8, a7, b5, a3, c4, a5, b7, d8, c6, e7, g8, f6, h7, f8, e6, g5, e4, g3, h1, 
Complete tour: 1577
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, f7, h8, g6, e5, d7, b8, a6, b4, d5, b6, a8, c7, b5, a3, c4, a5, b7, d8, c6, a7, c8, e7, g8, f6, h7, f8, e6, g5, e4, g3, h1, 
Complete tour: 1578
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, f7, h8, g6, e5, d7, b8, a6, b4, c6, e7, g8, f6, d5, c7, a8, b6, c8, a7, b5, a3, c4, a5, b7, d8, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1579
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, f7, h8, g6, e5, d7, b8, a6, b4, c6, d8, b7, a5, c4, a3, b5, a7, c8, b6, a8, c7, d5, e7, g8, f6, h7, f8, e6, g5, e4, g3, h1, 
Complete tour: 1580
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, f7, h8, g6, e5, d7, b8, a6, b4, c6, d8, b7, a5, c4, a3, b5, a7, c8, e7, g8, f6, d5, b6, a8, c7, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1581
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, f7, h8, g6, e5, d7, b8, a6, b4, c6, a7, c8, e7, g8, f6, d5, b6, a8, c7, b5, a3, c4, a5, b7, d8, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1582
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, f7, h8, g6, e5, d7, b8, a6, c7, a8, b6, c4, a3, b5, a7, c8, e7, g8, f6, d5, b4, c6, a5, b7, d8, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1583
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, f7, h8, g6, e5, d7, b8, a6, c7, a8, b6, d5, b4, c6, d8, b7, a5, c4, a3, b5, a7, c8, e7, g8, f6, h7, f8, e6, g5, e4, g3, h1, 
Complete tour: 1584
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, f7, h8, g6, e5, d7, b8, a6, c7, a8, b6, c8, a7, b5, a3, c4, a5, b7, d8, c6, b4, d5, e7, g8, f6, h7, f8, e6, g5, e4, g3, h1, 
Complete tour: 1585
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, f7, h8, g6, e5, d7, b8, a6, c7, a8, b6, c8, e7, g8, f6, d5, b4, c6, a7, b5, a3, c4, a5, b7, d8, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1586
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, f7, h8, g6, e5, d7, b8, c6, b4, a6, c7, a8, b6, d5, f6, g8, e7, c8, a7, b5, a3, c4, a5, b7, d8, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1587
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, f7, h8, g6, e5, d7, b8, c6, e7, g8, f6, d5, b4, a6, c7, a8, b6, c8, a7, b5, a3, c4, a5, b7, d8, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1588
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, f7, h8, g6, e5, d7, b8, c6, d8, b7, a5, c4, a3, b5, a7, c8, b6, a8, c7, a6, b4, d5, e7, g8, f6, h7, f8, e6, g5, e4, g3, h1, 
Complete tour: 1589
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, f7, h8, g6, e5, c6, a5, b7, d8, e6, g5, h7, f8, d7, b8, a6, b4, d5, c7, a8, b6, c4, a3, b5, a7, c8, e7, g8, f6, e4, g3, h1, 
Complete tour: 1590
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, f7, h8, g6, e5, c6, a5, b7, d8, e6, f8, d7, b8, a6, b4, d5, c7, a8, b6, c4, a3, b5, a7, c8, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 1591
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, f7, h8, g6, e5, c6, a5, b7, d8, e6, c7, a8, b6, c4, a3, b5, a7, c8, e7, g8, f6, d5, b4, a6, b8, d7, f8, h7, g5, e4, g3, h1, 
Complete tour: 1592
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, f7, h8, g6, e5, c6, b4, d5, e7, g8, f6, h7, f8, d7, b8, a6, c7, a8, b6, c8, a7, b5, a3, c4, a5, b7, d8, e6, g5, e4, g3, h1, 
Complete tour: 1593
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, f7, h8, g6, e5, c6, b4, d5, e7, g8, f6, d7, b8, a6, c7, a8, b6, c8, a7, b5, a3, c4, a5, b7, d8, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1594
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, f7, h8, g6, e5, c6, b4, d5, b6, a8, c7, a6, b8, d7, f6, g8, e7, c8, a7, b5, a3, c4, a5, b7, d8, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1595
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, f7, h8, g6, e5, c6, b4, d5, b6, a8, c7, a6, b8, d7, f8, e6, d8, b7, a5, c4, a3, b5, a7, c8, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 1596
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, f7, h8, g6, e5, c6, b4, d5, b6, a8, c7, a6, b8, d7, f8, h7, f6, g8, e7, c8, a7, b5, a3, c4, a5, b7, d8, e6, g5, e4, g3, h1, 
Complete tour: 1597
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, f7, h8, g6, e5, c6, b4, d5, b6, a8, c7, a6, b8, d7, f8, h7, g5, e6, d8, b7, a5, c4, a3, b5, a7, c8, e7, g8, f6, e4, g3, h1, 
Complete tour: 1598
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, f7, h8, g6, e5, c6, b4, a6, b8, d7, b6, a8, c7, d5, f6, g8, e7, c8, a7, b5, a3, c4, a5, b7, d8, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1599
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, f7, h8, g6, e5, c6, b4, a6, b8, d7, f6, g8, e7, d5, c7, a8, b6, c8, a7, b5, a3, c4, a5, b7, d8, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1600
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, f7, h8, g6, e5, c6, b4, a6, b8, d7, f8, e6, d8, b7, a5, c4, a3, b5, a7, c8, b6, a8, c7, d5, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 1601
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, f7, h8, g6, e5, c6, b4, a6, b8, d7, f8, h7, f6, g8, e7, d5, c7, a8, b6, c8, a7, b5, a3, c4, a5, b7, d8, e6, g5, e4, g3, h1, 
Complete tour: 1602
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, f7, h8, g6, e5, c6, b4, a6, b8, d7, f8, h7, g5, e6, d8, b7, a5, c4, a3, b5, a7, c8, b6, a8, c7, d5, e7, g8, f6, e4, g3, h1, 
Complete tour: 1603
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, f7, h8, g6, e5, c6, e7, g8, f6, h7, f8, d7, b8, a6, b4, d5, c7, a8, b6, c8, a7, b5, a3, c4, a5, b7, d8, e6, g5, e4, g3, h1, 
Complete tour: 1604
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, f7, h8, g6, e5, c6, e7, g8, f6, d7, b8, a6, b4, d5, c7, a8, b6, c8, a7, b5, a3, c4, a5, b7, d8, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1605
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, f7, h8, g6, e5, c6, d8, b7, a5, c4, a3, b5, a7, c8, b6, a8, c7, e6, g5, h7, f8, d7, b8, a6, b4, d5, e7, g8, f6, e4, g3, h1, 
Complete tour: 1606
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, f7, h8, g6, e5, c6, d8, b7, a5, c4, a3, b5, a7, c8, b6, a8, c7, e6, f8, d7, b8, a6, b4, d5, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 1607
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, f7, h8, g6, e5, c6, d8, b7, a5, c4, a3, b5, a7, c8, e7, g8, f6, d5, b4, a6, b8, d7, b6, a8, c7, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1608
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, f7, h8, g6, e5, c6, d8, b7, a5, c4, a3, b5, a7, c8, e7, g8, f6, h7, f8, d7, b8, a6, b4, d5, b6, a8, c7, e6, g5, e4, g3, h1, 
Complete tour: 1609
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, f7, h8, g6, e5, c6, d8, b7, a5, c4, a3, b5, a7, c8, e7, g8, f6, d7, b8, a6, b4, d5, b6, a8, c7, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1610
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, f7, h8, g6, e5, c6, b8, a6, b4, d5, f6, g8, e7, c8, a7, b5, a3, c4, a5, b7, d8, e6, c7, a8, b6, d7, f8, h7, g5, e4, g3, h1, 
Complete tour: 1611
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, f7, h8, g6, e5, c6, b8, a6, b4, d5, c7, a8, b6, d7, f6, g8, e7, c8, a7, b5, a3, c4, a5, b7, d8, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1612
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, f7, h8, g6, e5, c6, b8, a6, b4, d5, c7, a8, b6, d7, f8, e6, d8, b7, a5, c4, a3, b5, a7, c8, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 1613
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, f7, h8, g6, e5, c6, b8, a6, b4, d5, c7, a8, b6, d7, f8, h7, f6, g8, e7, c8, a7, b5, a3, c4, a5, b7, d8, e6, g5, e4, g3, h1, 
Complete tour: 1614
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, f7, h8, g6, e5, c6, b8, a6, b4, d5, c7, a8, b6, d7, f8, h7, g5, e6, d8, b7, a5, c4, a3, b5, a7, c8, e7, g8, f6, e4, g3, h1, 
Complete tour: 1615
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, f7, h8, g6, e5, c6, b8, a6, b4, d5, b6, a8, c7, e6, d8, b7, a5, c4, a3, b5, a7, c8, e7, g8, f6, d7, f8, h7, g5, e4, g3, h1, 
Complete tour: 1616
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, f7, h8, g6, e5, c6, b8, d7, b6, a8, c7, a6, b4, d5, f6, g8, e7, c8, a7, b5, a3, c4, a5, b7, d8, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1617
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, f7, h8, g6, e5, c6, b8, d7, f6, g8, e7, d5, b4, a6, c7, a8, b6, c8, a7, b5, a3, c4, a5, b7, d8, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1618
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, f7, h8, g6, e5, c6, b8, d7, f8, e6, d8, b7, a5, c4, a3, b5, a7, c8, b6, a8, c7, a6, b4, d5, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 1619
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, f7, h8, g6, e5, c6, b8, d7, f8, h7, f6, g8, e7, d5, b4, a6, c7, a8, b6, c8, a7, b5, a3, c4, a5, b7, d8, e6, g5, e4, g3, h1, 
Complete tour: 1620
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, f7, h8, g6, e5, c6, b8, d7, f8, h7, g5, e6, d8, b7, a5, c4, a3, b5, a7, c8, b6, a8, c7, a6, b4, d5, e7, g8, f6, e4, g3, h1, 
Complete tour: 1621
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, f7, h8, g6, e5, c6, a7, b5, a3, c4, a5, b7, d8, e6, g5, h7, f8, d7, b8, a6, b4, d5, c7, a8, b6, c8, e7, g8, f6, e4, g3, h1, 
Complete tour: 1622
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, f7, h8, g6, e5, c6, a7, b5, a3, c4, a5, b7, d8, e6, f8, d7, b8, a6, b4, d5, c7, a8, b6, c8, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 1623
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, f7, h8, g6, e5, c6, a7, b5, a3, c4, a5, b7, d8, e6, c7, a8, b6, c8, e7, g8, f6, d5, b4, a6, b8, d7, f8, h7, g5, e4, g3, h1, 
Complete tour: 1624
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, f7, h8, g6, e5, c6, a7, c8, b6, a8, c7, b5, a3, c4, a5, b7, d8, e6, g5, h7, f8, d7, b8, a6, b4, d5, e7, g8, f6, e4, g3, h1, 
Complete tour: 1625
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, f7, h8, g6, e5, c6, a7, c8, b6, a8, c7, b5, a3, c4, a5, b7, d8, e6, f8, d7, b8, a6, b4, d5, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 1626
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, f7, h8, g6, e5, c6, a7, c8, e7, g8, f6, d5, b4, a6, b8, d7, b6, a8, c7, b5, a3, c4, a5, b7, d8, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1627
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, f7, h8, g6, e5, c6, a7, c8, e7, g8, f6, h7, f8, d7, b8, a6, b4, d5, b6, a8, c7, b5, a3, c4, a5, b7, d8, e6, g5, e4, g3, h1, 
Complete tour: 1628
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, f7, h8, g6, e5, c6, a7, c8, e7, g8, f6, d7, b8, a6, b4, d5, b6, a8, c7, b5, a3, c4, a5, b7, d8, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1629
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, f7, h8, g6, f8, d7, e5, c4, a3, b5, a7, c8, b6, a8, c7, e6, d8, b7, a5, c6, b8, a6, b4, d5, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 1630
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, f7, h8, g6, f8, d7, e5, c6, b8, a6, b4, d5, b6, a8, c7, e6, d8, b7, a5, c4, a3, b5, a7, c8, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 1631
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, f7, h8, g6, f8, d7, b8, a6, b4, d5, b6, a8, c7, e6, d8, b7, a5, c6, e5, c4, a3, b5, a7, c8, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 1632
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, f7, h8, g6, f8, e6, d8, b7, a5, c4, a3, b5, c7, a8, b6, d5, b4, a6, b8, d7, e5, c6, a7, c8, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 1633
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, f7, h8, g6, f8, e6, d8, b7, a5, c4, a3, b5, c7, a8, b6, c8, a7, c6, e5, d7, b8, a6, b4, d5, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 1634
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, f7, h8, g6, f8, e6, d8, b7, a5, c4, a3, b5, a7, c6, e5, d7, b8, a6, b4, d5, c7, a8, b6, c8, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 1635
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, f7, h8, g6, f8, e6, d8, b7, a5, c4, a3, b5, a7, c8, b6, a8, c7, a6, b8, d7, e5, c6, b4, d5, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 1636
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, f7, h8, g6, f8, e6, d8, b7, a5, c4, a3, b5, a7, c8, b6, a8, c7, d5, b4, a6, b8, d7, e5, c6, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 1637
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, f7, h8, g6, f8, e6, d8, b7, a5, c6, b4, d5, b6, a8, c7, a6, b8, d7, e5, c4, a3, b5, a7, c8, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 1638
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, f7, h8, g6, f8, e6, d8, b7, a5, c6, b4, a6, b8, d7, e5, c4, a3, b5, a7, c8, b6, a8, c7, d5, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 1639
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, f7, h8, g6, f8, e6, d8, b7, a5, c6, e5, d7, b8, a6, b4, d5, c7, a8, b6, c4, a3, b5, a7, c8, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 1640
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, f7, h8, g6, f8, e6, d8, b7, a5, c6, b8, a6, b4, d5, c7, a8, b6, d7, e5, c4, a3, b5, a7, c8, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 1641
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, f7, h8, g6, f8, e6, d8, b7, a5, c6, b8, d7, e5, c4, a3, b5, a7, c8, b6, a8, c7, a6, b4, d5, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 1642
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, f7, h8, g6, f8, e6, d8, b7, a5, c6, a7, b5, a3, c4, e5, d7, b8, a6, b4, d5, c7, a8, b6, c8, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 1643
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, f7, h8, g6, f8, e6, d8, b7, a5, c6, a7, c8, b6, a8, c7, b5, a3, c4, e5, d7, b8, a6, b4, d5, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 1644
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, f7, h8, g6, f8, e6, c7, a8, b6, d5, b4, a6, b8, d7, e5, c6, d8, b7, a5, c4, a3, b5, a7, c8, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 1645
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, f7, h8, g6, f8, e6, c7, a8, b6, c8, a7, b5, a3, c4, a5, b7, d8, c6, e5, d7, b8, a6, b4, d5, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 1646
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, f7, h8, g6, f8, h7, f6, g8, e7, c6, e5, d7, b8, a6, b4, d5, c7, a8, b6, c8, a7, b5, a3, c4, a5, b7, d8, e6, g5, e4, g3, h1, 
Complete tour: 1647
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, f7, h8, g6, f8, h7, f6, g8, e7, d5, b4, c6, e5, d7, b8, a6, c7, a8, b6, c8, a7, b5, a3, c4, a5, b7, d8, e6, g5, e4, g3, h1, 
Complete tour: 1648
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, f7, h8, g6, f8, h7, f6, g8, e7, d5, b4, a6, c7, a8, b6, c8, a7, b5, a3, c4, e5, d7, b8, c6, a5, b7, d8, e6, g5, e4, g3, h1, 
Complete tour: 1649
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, f7, h8, g6, f8, h7, f6, g8, e7, d5, b4, a6, b8, d7, e5, c4, a3, b5, c7, a8, b6, c8, a7, c6, a5, b7, d8, e6, g5, e4, g3, h1, 
Complete tour: 1650
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, f7, h8, g6, f8, h7, f6, g8, e7, d5, b4, a6, b8, d7, e5, c6, d8, b7, a5, c4, a3, b5, a7, c8, b6, a8, c7, e6, g5, e4, g3, h1, 
Complete tour: 1651
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, f7, h8, g6, f8, h7, f6, g8, e7, d5, b4, a6, b8, d7, e5, c6, a7, c8, b6, a8, c7, b5, a3, c4, a5, b7, d8, e6, g5, e4, g3, h1, 
Complete tour: 1652
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, f7, h8, g6, f8, h7, f6, g8, e7, d5, c7, a8, b6, c8, a7, b5, a3, c4, e5, d7, b8, a6, b4, c6, a5, b7, d8, e6, g5, e4, g3, h1, 
Complete tour: 1653
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, f7, h8, g6, f8, h7, f6, g8, e7, c8, a7, b5, a3, c4, e5, d7, b6, a8, c7, d5, b4, a6, b8, c6, a5, b7, d8, e6, g5, e4, g3, h1, 
Complete tour: 1654
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, f7, h8, g6, f8, h7, f6, g8, e7, c8, a7, b5, a3, c4, e5, d7, b8, a6, c7, a8, b6, d5, b4, c6, a5, b7, d8, e6, g5, e4, g3, h1, 
Complete tour: 1655
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, f7, h8, g6, f8, h7, f6, g8, e7, c8, a7, b5, a3, c4, b6, a8, c7, d5, b4, a6, b8, d7, e5, c6, a5, b7, d8, e6, g5, e4, g3, h1, 
Complete tour: 1656
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, f7, h8, g6, f8, h7, f6, g8, e7, c8, a7, b5, a3, c4, a5, b7, d8, c6, e5, d7, b8, a6, b4, d5, b6, a8, c7, e6, g5, e4, g3, h1, 
Complete tour: 1657
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, f7, h8, g6, f8, h7, f6, g8, e7, c8, a7, c6, e5, d7, b8, a6, b4, d5, b6, a8, c7, b5, a3, c4, a5, b7, d8, e6, g5, e4, g3, h1, 
Complete tour: 1658
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, f7, h8, g6, f8, h7, f6, g8, e7, c8, b6, a8, c7, d5, b4, a6, b8, d7, e5, c4, a3, b5, a7, c6, a5, b7, d8, e6, g5, e4, g3, h1, 
Complete tour: 1659
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, f7, h8, g6, f8, h7, f6, g8, e7, c8, b6, a8, c7, d5, b4, a6, b8, d7, e5, c6, a7, b5, a3, c4, a5, b7, d8, e6, g5, e4, g3, h1, 
Complete tour: 1660
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, f7, h8, g6, f8, h7, g5, e6, d8, b7, a5, c4, a3, b5, c7, a8, b6, d5, b4, a6, b8, d7, e5, c6, a7, c8, e7, g8, f6, e4, g3, h1, 
Complete tour: 1661
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, f7, h8, g6, f8, h7, g5, e6, d8, b7, a5, c4, a3, b5, c7, a8, b6, c8, a7, c6, e5, d7, b8, a6, b4, d5, e7, g8, f6, e4, g3, h1, 
Complete tour: 1662
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, f7, h8, g6, f8, h7, g5, e6, d8, b7, a5, c4, a3, b5, a7, c6, e5, d7, b8, a6, b4, d5, c7, a8, b6, c8, e7, g8, f6, e4, g3, h1, 
Complete tour: 1663
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, f7, h8, g6, f8, h7, g5, e6, d8, b7, a5, c4, a3, b5, a7, c8, b6, a8, c7, a6, b8, d7, e5, c6, b4, d5, e7, g8, f6, e4, g3, h1, 
Complete tour: 1664
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, f7, h8, g6, f8, h7, g5, e6, d8, b7, a5, c4, a3, b5, a7, c8, b6, a8, c7, d5, b4, a6, b8, d7, e5, c6, e7, g8, f6, e4, g3, h1, 
Complete tour: 1665
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, f7, h8, g6, f8, h7, g5, e6, d8, b7, a5, c6, b4, d5, b6, a8, c7, a6, b8, d7, e5, c4, a3, b5, a7, c8, e7, g8, f6, e4, g3, h1, 
Complete tour: 1666
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, f7, h8, g6, f8, h7, g5, e6, d8, b7, a5, c6, b4, a6, b8, d7, e5, c4, a3, b5, a7, c8, b6, a8, c7, d5, e7, g8, f6, e4, g3, h1, 
Complete tour: 1667
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, f7, h8, g6, f8, h7, g5, e6, d8, b7, a5, c6, e5, d7, b8, a6, b4, d5, c7, a8, b6, c4, a3, b5, a7, c8, e7, g8, f6, e4, g3, h1, 
Complete tour: 1668
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, f7, h8, g6, f8, h7, g5, e6, d8, b7, a5, c6, b8, a6, b4, d5, c7, a8, b6, d7, e5, c4, a3, b5, a7, c8, e7, g8, f6, e4, g3, h1, 
Complete tour: 1669
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, f7, h8, g6, f8, h7, g5, e6, d8, b7, a5, c6, b8, d7, e5, c4, a3, b5, a7, c8, b6, a8, c7, a6, b4, d5, e7, g8, f6, e4, g3, h1, 
Complete tour: 1670
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, f7, h8, g6, f8, h7, g5, e6, d8, b7, a5, c6, a7, b5, a3, c4, e5, d7, b8, a6, b4, d5, c7, a8, b6, c8, e7, g8, f6, e4, g3, h1, 
Complete tour: 1671
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, f7, h8, g6, f8, h7, g5, e6, d8, b7, a5, c6, a7, c8, b6, a8, c7, b5, a3, c4, e5, d7, b8, a6, b4, d5, e7, g8, f6, e4, g3, h1, 
Complete tour: 1672
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, f7, h8, g6, f8, h7, g5, e6, c7, a8, b6, d5, b4, a6, b8, d7, e5, c6, d8, b7, a5, c4, a3, b5, a7, c8, e7, g8, f6, e4, g3, h1, 
Complete tour: 1673
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, f7, h8, g6, f8, h7, g5, e6, c7, a8, b6, c8, a7, b5, a3, c4, a5, b7, d8, c6, e5, d7, b8, a6, b4, d5, e7, g8, f6, e4, g3, h1, 
Complete tour: 1674
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, f7, h8, g6, e7, g8, f6, d5, b4, c6, e5, d7, b8, a6, c7, a8, b6, c8, a7, b5, a3, c4, a5, b7, d8, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1675
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, f7, h8, g6, e7, g8, f6, d5, b4, a6, c7, a8, b6, c8, a7, b5, a3, c4, e5, d7, b8, c6, a5, b7, d8, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1676
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, f7, h8, g6, e7, g8, f6, d5, b4, a6, b8, c6, a5, b7, d8, e6, c7, a8, b6, c8, a7, b5, a3, c4, e5, d7, f8, h7, g5, e4, g3, h1, 
Complete tour: 1677
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, f7, h8, g6, e7, g8, f6, d5, b4, a6, b8, d7, e5, c4, a3, b5, c7, a8, b6, c8, a7, c6, a5, b7, d8, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1678
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, f7, h8, g6, e7, g8, f6, d5, b4, a6, b8, d7, e5, c6, d8, b7, a5, c4, a3, b5, a7, c8, b6, a8, c7, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1679
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, f7, h8, g6, e7, g8, f6, d5, b4, a6, b8, d7, e5, c6, a7, c8, b6, a8, c7, b5, a3, c4, a5, b7, d8, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1680
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, f7, h8, g6, e7, g8, f6, d5, c7, a8, b6, c8, a7, b5, a3, c4, e5, d7, b8, a6, b4, c6, a5, b7, d8, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1681
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, f7, h8, g6, e7, g8, f6, h7, f8, d7, e5, c4, a3, b5, a7, c8, b6, a8, c7, d5, b4, a6, b8, c6, a5, b7, d8, e6, g5, e4, g3, h1, 
Complete tour: 1682
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, f7, h8, g6, e7, g8, f6, h7, f8, d7, e5, c6, b8, a6, b4, d5, c7, a8, b6, c8, a7, b5, a3, c4, a5, b7, d8, e6, g5, e4, g3, h1, 
Complete tour: 1683
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, f7, h8, g6, e7, g8, f6, h7, f8, d7, b8, a6, b4, d5, c7, a8, b6, c8, a7, b5, a3, c4, e5, c6, a5, b7, d8, e6, g5, e4, g3, h1, 
Complete tour: 1684
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, f7, h8, g6, e7, g8, f6, d7, e5, c4, a3, b5, a7, c8, b6, a8, c7, d5, b4, a6, b8, c6, a5, b7, d8, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1685
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, f7, h8, g6, e7, g8, f6, d7, e5, c6, b8, a6, b4, d5, c7, a8, b6, c8, a7, b5, a3, c4, a5, b7, d8, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1686
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, f7, h8, g6, e7, g8, f6, d7, b8, a6, b4, d5, c7, a8, b6, c8, a7, b5, a3, c4, e5, c6, a5, b7, d8, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1687
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, e5, g6, h8, f7, g5, h7, f8, d7, b6, a8, c7, e6, d8, b7, a5, c6, b8, a6, b4, d5, e7, g8, f6, e4, g3, h1, 
Complete tour: 1688
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, e5, g6, h8, f7, g5, h7, f8, d7, b8, a6, b4, d5, b6, a8, c7, e6, d8, b7, a5, c6, e7, g8, f6, e4, g3, h1, 
Complete tour: 1689
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, e5, g6, h8, f7, g5, h7, f8, d7, b8, a6, b4, c6, a5, b7, d8, e6, c7, a8, b6, d5, e7, g8, f6, e4, g3, h1, 
Complete tour: 1690
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, e5, g6, h8, f7, g5, h7, f8, e6, d8, b7, a5, c6, b4, a6, b8, d7, b6, a8, c7, d5, e7, g8, f6, e4, g3, h1, 
Complete tour: 1691
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, e5, g6, h8, f7, g5, h7, f8, e6, d8, b7, a5, c6, b8, d7, b6, a8, c7, a6, b4, d5, e7, g8, f6, e4, g3, h1, 
Complete tour: 1692
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, e5, g6, h8, f7, d8, b7, a5, c6, b4, a6, b8, d7, b6, a8, c7, d5, e7, g8, f6, h7, f8, e6, g5, e4, g3, h1, 
Complete tour: 1693
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, e5, g6, h8, f7, d8, b7, a5, c6, b4, a6, b8, d7, f6, g8, e7, d5, b6, a8, c7, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1694
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, e5, g6, h8, f7, d8, b7, a5, c6, b4, a6, b8, d7, f8, e6, c7, a8, b6, d5, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 1695
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, e5, g6, h8, f7, d8, b7, a5, c6, b4, a6, b8, d7, f8, h7, f6, g8, e7, d5, b6, a8, c7, e6, g5, e4, g3, h1, 
Complete tour: 1696
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, e5, g6, h8, f7, d8, b7, a5, c6, b4, a6, b8, d7, f8, h7, g5, e6, c7, a8, b6, d5, e7, g8, f6, e4, g3, h1, 
Complete tour: 1697
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, e5, g6, h8, f7, d8, b7, a5, c6, e7, g8, f6, d5, b4, a6, b8, d7, b6, a8, c7, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1698
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, e5, g6, h8, f7, d8, b7, a5, c6, e7, g8, f6, h7, f8, d7, b8, a6, b4, d5, b6, a8, c7, e6, g5, e4, g3, h1, 
Complete tour: 1699
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, e5, g6, h8, f7, d8, b7, a5, c6, e7, g8, f6, d7, b8, a6, b4, d5, b6, a8, c7, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1700
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, e5, g6, h8, f7, d8, b7, a5, c6, b8, a6, b4, d5, e7, g8, f6, h7, f8, d7, b6, a8, c7, e6, g5, e4, g3, h1, 
Complete tour: 1701
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, e5, g6, h8, f7, d8, b7, a5, c6, b8, a6, b4, d5, e7, g8, f6, d7, b6, a8, c7, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1702
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, e5, g6, h8, f7, d8, b7, a5, c6, b8, d7, b6, a8, c7, a6, b4, d5, e7, g8, f6, h7, f8, e6, g5, e4, g3, h1, 
Complete tour: 1703
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, e5, f7, h8, g6, f8, d7, b6, a8, c7, e6, d8, b7, a5, c6, b8, a6, b4, d5, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 1704
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, e5, f7, h8, g6, f8, d7, b8, a6, b4, d5, b6, a8, c7, e6, d8, b7, a5, c6, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 1705
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, e5, f7, h8, g6, f8, d7, b8, a6, b4, c6, a5, b7, d8, e6, c7, a8, b6, d5, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 1706
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, e5, f7, h8, g6, f8, e6, d8, b7, a5, c6, b4, a6, b8, d7, b6, a8, c7, d5, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 1707
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, e5, f7, h8, g6, f8, e6, d8, b7, a5, c6, b8, d7, b6, a8, c7, a6, b4, d5, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 1708
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, e5, f7, h8, g6, f8, h7, f6, g8, e7, d5, b4, a6, c7, a8, b6, d7, b8, c6, a5, b7, d8, e6, g5, e4, g3, h1, 
Complete tour: 1709
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, e5, f7, h8, g6, f8, h7, f6, g8, e7, d5, c7, a8, b6, d7, b8, a6, b4, c6, a5, b7, d8, e6, g5, e4, g3, h1, 
Complete tour: 1710
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, e5, f7, h8, g6, f8, h7, g5, e6, d8, b7, a5, c6, b4, a6, b8, d7, b6, a8, c7, d5, e7, g8, f6, e4, g3, h1, 
Complete tour: 1711
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, e5, f7, h8, g6, f8, h7, g5, e6, d8, b7, a5, c6, b8, d7, b6, a8, c7, a6, b4, d5, e7, g8, f6, e4, g3, h1, 
Complete tour: 1712
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, e5, f7, h8, g6, e7, g8, f6, d5, b4, a6, c7, a8, b6, d7, b8, c6, a5, b7, d8, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1713
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, e5, f7, h8, g6, e7, g8, f6, d5, b4, a6, b8, c6, a5, b7, d8, e6, c7, a8, b6, d7, f8, h7, g5, e4, g3, h1, 
Complete tour: 1714
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, e5, f7, h8, g6, e7, g8, f6, d5, c7, a8, b6, d7, b8, a6, b4, c6, a5, b7, d8, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1715
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, e5, f7, h8, g6, e7, g8, f6, d5, b6, a8, c7, e6, d8, b7, a5, c6, b4, a6, b8, d7, f8, h7, g5, e4, g3, h1, 
Complete tour: 1716
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, e5, f7, h8, g6, e7, g8, f6, h7, f8, d7, b6, a8, c7, d5, b4, a6, b8, c6, a5, b7, d8, e6, g5, e4, g3, h1, 
Complete tour: 1717
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, e5, f7, h8, g6, e7, g8, f6, h7, f8, d7, b8, a6, c7, a8, b6, d5, b4, c6, a5, b7, d8, e6, g5, e4, g3, h1, 
Complete tour: 1718
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, e5, f7, h8, g6, e7, g8, f6, d7, b6, a8, c7, d5, b4, a6, b8, c6, a5, b7, d8, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1719
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, e5, f7, h8, g6, e7, g8, f6, d7, b8, a6, c7, a8, b6, d5, b4, c6, a5, b7, d8, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1720
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, e5, d7, b6, a8, c7, d5, b4, a6, b8, c6, a5, b7, d8, e6, f8, h7, f6, g8, e7, g6, h8, f7, g5, e4, g3, h1, 
Complete tour: 1721
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, e5, d7, b6, a8, c7, d5, b4, a6, b8, c6, a5, b7, d8, e6, f8, h7, g5, f7, h8, g6, e7, g8, f6, e4, g3, h1, 
Complete tour: 1722
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, e5, d7, b6, a8, c7, d5, b4, a6, b8, c6, a5, b7, d8, f7, h8, g6, e7, g8, f6, h7, f8, e6, g5, e4, g3, h1, 
Complete tour: 1723
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, e5, d7, b6, a8, c7, e6, g5, h7, f8, g6, h8, f7, d8, b7, a5, c6, b8, a6, b4, d5, e7, g8, f6, e4, g3, h1, 
Complete tour: 1724
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, e5, d7, b6, a8, c7, e6, f8, g6, h8, f7, d8, b7, a5, c6, b8, a6, b4, d5, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 1725
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, e5, d7, b6, a8, c7, e6, d8, b7, a5, c6, b8, a6, b4, d5, e7, g8, f6, h7, f8, g6, h8, f7, g5, e4, g3, h1, 
Complete tour: 1726
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, e5, d7, f6, g8, e7, g6, h8, f7, d8, b7, a5, c6, b8, a6, b4, d5, b6, a8, c7, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1727
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, e5, d7, f8, e6, c7, a8, b6, d5, b4, a6, b8, c6, a5, b7, d8, f7, h8, g6, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 1728
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, e5, d7, f8, h7, f6, g8, e7, g6, h8, f7, d8, b7, a5, c6, b8, a6, b4, d5, b6, a8, c7, e6, g5, e4, g3, h1, 
Complete tour: 1729
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, e5, d7, f8, h7, g5, e6, c7, a8, b6, d5, b4, a6, b8, c6, a5, b7, d8, f7, h8, g6, e7, g8, f6, e4, g3, h1, 
Complete tour: 1730
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, e5, d7, b8, a6, b4, d5, b6, a8, c7, e6, g5, h7, f8, g6, h8, f7, d8, b7, a5, c6, e7, g8, f6, e4, g3, h1, 
Complete tour: 1731
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, e5, d7, b8, a6, b4, d5, b6, a8, c7, e6, f8, g6, h8, f7, d8, b7, a5, c6, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 1732
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, e5, d7, b8, a6, b4, d5, b6, a8, c7, e6, d8, b7, a5, c6, e7, g8, f6, h7, f8, g6, h8, f7, g5, e4, g3, h1, 
Complete tour: 1733
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, e5, d7, b8, a6, b4, c6, a5, b7, d8, e6, c7, a8, b6, d5, e7, g8, f6, h7, f8, g6, h8, f7, g5, e4, g3, h1, 
Complete tour: 1734
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, e5, d7, b8, a6, b4, c6, a5, b7, d8, f7, h8, g6, f8, e6, c7, a8, b6, d5, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 1735
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, e5, d7, b8, a6, b4, c6, a5, b7, d8, f7, h8, g6, f8, h7, f6, g8, e7, d5, b6, a8, c7, e6, g5, e4, g3, h1, 
Complete tour: 1736
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, e5, d7, b8, a6, b4, c6, a5, b7, d8, f7, h8, g6, f8, h7, g5, e6, c7, a8, b6, d5, e7, g8, f6, e4, g3, h1, 
Complete tour: 1737
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, e5, d7, b8, a6, b4, c6, a5, b7, d8, f7, h8, g6, e7, g8, f6, d5, b6, a8, c7, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1738
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, e5, d7, b8, a6, c7, a8, b6, d5, b4, c6, a5, b7, d8, e6, f8, h7, f6, g8, e7, g6, h8, f7, g5, e4, g3, h1, 
Complete tour: 1739
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, e5, d7, b8, a6, c7, a8, b6, d5, b4, c6, a5, b7, d8, e6, f8, h7, g5, f7, h8, g6, e7, g8, f6, e4, g3, h1, 
Complete tour: 1740
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, e5, d7, b8, a6, c7, a8, b6, d5, b4, c6, a5, b7, d8, f7, h8, g6, e7, g8, f6, h7, f8, e6, g5, e4, g3, h1, 
Complete tour: 1741
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, e5, c6, a5, b7, d8, e6, c7, a8, b6, d5, b4, a6, b8, d7, f8, h7, f6, g8, e7, g6, h8, f7, g5, e4, g3, h1, 
Complete tour: 1742
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, e5, c6, a5, b7, d8, e6, c7, a8, b6, d5, b4, a6, b8, d7, f8, h7, g5, f7, h8, g6, e7, g8, f6, e4, g3, h1, 
Complete tour: 1743
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, e5, c6, a5, b7, d8, e6, c7, a8, b6, d7, b8, a6, b4, d5, e7, g8, f6, h7, f8, g6, h8, f7, g5, e4, g3, h1, 
Complete tour: 1744
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, e5, c6, a5, b7, d8, f7, h8, g6, f8, e6, c7, a8, b6, d7, b8, a6, b4, d5, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 1745
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, e5, c6, a5, b7, d8, f7, h8, g6, f8, h7, f6, g8, e7, d5, b4, a6, b8, d7, b6, a8, c7, e6, g5, e4, g3, h1, 
Complete tour: 1746
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, e5, c6, a5, b7, d8, f7, h8, g6, f8, h7, g5, e6, c7, a8, b6, d7, b8, a6, b4, d5, e7, g8, f6, e4, g3, h1, 
Complete tour: 1747
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, e5, c6, a5, b7, d8, f7, h8, g6, e7, g8, f6, d5, b4, a6, b8, d7, b6, a8, c7, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1748
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, e5, c6, a5, b7, d8, f7, h8, g6, e7, g8, f6, h7, f8, d7, b8, a6, b4, d5, b6, a8, c7, e6, g5, e4, g3, h1, 
Complete tour: 1749
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, e5, c6, a5, b7, d8, f7, h8, g6, e7, g8, f6, d7, b8, a6, b4, d5, b6, a8, c7, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1750
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, b6, a8, c7, a6, b4, d5, f6, g8, e7, g6, h8, f7, e5, d7, b8, c6, a5, b7, d8, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1751
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, b6, a8, c7, a6, b4, d5, e7, g8, f6, h7, f8, e6, d8, b7, a5, c6, b8, d7, e5, g6, h8, f7, g5, e4, g3, h1, 
Complete tour: 1752
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, b6, a8, c7, a6, b4, d5, e7, g8, f6, h7, f8, g6, h8, f7, e5, d7, b8, c6, a5, b7, d8, e6, g5, e4, g3, h1, 
Complete tour: 1753
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, b6, a8, c7, a6, b8, d7, e5, g6, h8, f7, g5, h7, f8, e6, d8, b7, a5, c6, b4, d5, e7, g8, f6, e4, g3, h1, 
Complete tour: 1754
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, b6, a8, c7, a6, b8, d7, e5, g6, h8, f7, d8, b7, a5, c6, b4, d5, e7, g8, f6, h7, f8, e6, g5, e4, g3, h1, 
Complete tour: 1755
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, b6, a8, c7, a6, b8, d7, e5, f7, h8, g6, f8, e6, d8, b7, a5, c6, b4, d5, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 1756
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, b6, a8, c7, a6, b8, d7, e5, f7, h8, g6, f8, h7, f6, g8, e7, d5, b4, c6, a5, b7, d8, e6, g5, e4, g3, h1, 
Complete tour: 1757
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, b6, a8, c7, a6, b8, d7, e5, f7, h8, g6, f8, h7, g5, e6, d8, b7, a5, c6, b4, d5, e7, g8, f6, e4, g3, h1, 
Complete tour: 1758
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, b6, a8, c7, a6, b8, d7, e5, f7, h8, g6, e7, g8, f6, d5, b4, c6, a5, b7, d8, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1759
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, b6, a8, c7, d5, b4, a6, b8, c6, a5, b7, d8, e6, g5, h7, f8, d7, e5, f7, h8, g6, e7, g8, f6, e4, g3, h1, 
Complete tour: 1760
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, b6, a8, c7, d5, b4, a6, b8, c6, a5, b7, d8, e6, f8, d7, e5, f7, h8, g6, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 1761
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, b6, a8, c7, d5, b4, a6, b8, d7, e5, g6, h8, f7, g5, h7, f8, e6, d8, b7, a5, c6, e7, g8, f6, e4, g3, h1, 
Complete tour: 1762
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, b6, a8, c7, d5, b4, a6, b8, d7, e5, g6, h8, f7, d8, b7, a5, c6, e7, g8, f6, h7, f8, e6, g5, e4, g3, h1, 
Complete tour: 1763
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, b6, a8, c7, d5, b4, a6, b8, d7, e5, f7, h8, g6, f8, e6, d8, b7, a5, c6, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 1764
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, b6, a8, c7, d5, b4, a6, b8, d7, e5, f7, h8, g6, f8, h7, f6, g8, e7, c6, a5, b7, d8, e6, g5, e4, g3, h1, 
Complete tour: 1765
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, b6, a8, c7, d5, b4, a6, b8, d7, e5, f7, h8, g6, f8, h7, g5, e6, d8, b7, a5, c6, e7, g8, f6, e4, g3, h1, 
Complete tour: 1766
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, b6, a8, c7, d5, b4, a6, b8, d7, e5, c6, a5, b7, d8, e6, f8, h7, f6, g8, e7, g6, h8, f7, g5, e4, g3, h1, 
Complete tour: 1767
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, b6, a8, c7, d5, b4, a6, b8, d7, e5, c6, a5, b7, d8, e6, f8, h7, g5, f7, h8, g6, e7, g8, f6, e4, g3, h1, 
Complete tour: 1768
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, b6, a8, c7, d5, b4, a6, b8, d7, e5, c6, a5, b7, d8, f7, h8, g6, e7, g8, f6, h7, f8, e6, g5, e4, g3, h1, 
Complete tour: 1769
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, b6, a8, c7, d5, b4, a6, b8, d7, f6, g8, e7, g6, h8, f7, e5, c6, a5, b7, d8, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1770
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, b6, a8, c7, d5, b4, a6, b8, d7, f8, e6, d8, b7, a5, c6, e5, f7, h8, g6, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 1771
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, b6, a8, c7, d5, b4, a6, b8, d7, f8, h7, f6, g8, e7, g6, h8, f7, e5, c6, a5, b7, d8, e6, g5, e4, g3, h1, 
Complete tour: 1772
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, b6, a8, c7, d5, b4, a6, b8, d7, f8, h7, g5, e6, d8, b7, a5, c6, e5, f7, h8, g6, e7, g8, f6, e4, g3, h1, 
Complete tour: 1773
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, b6, a8, c7, d5, f6, g8, e7, g6, h8, f7, e5, d7, b8, a6, b4, c6, a5, b7, d8, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1774
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, b6, a8, c7, d5, e7, g8, f6, h7, f8, e6, d8, b7, a5, c6, b4, a6, b8, d7, e5, g6, h8, f7, g5, e4, g3, h1, 
Complete tour: 1775
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, b6, a8, c7, d5, e7, g8, f6, h7, f8, g6, h8, f7, e5, d7, b8, a6, b4, c6, a5, b7, d8, e6, g5, e4, g3, h1, 
Complete tour: 1776
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, b6, a8, c7, e6, g5, h7, f8, d7, e5, g6, h8, f7, d8, b7, a5, c6, b8, a6, b4, d5, e7, g8, f6, e4, g3, h1, 
Complete tour: 1777
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, b6, a8, c7, e6, g5, h7, f8, g6, h8, f7, d8, b7, a5, c6, e5, d7, b8, a6, b4, d5, e7, g8, f6, e4, g3, h1, 
Complete tour: 1778
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, b6, a8, c7, e6, f8, d7, e5, g6, h8, f7, d8, b7, a5, c6, b8, a6, b4, d5, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 1779
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, b6, a8, c7, e6, f8, g6, h8, f7, d8, b7, a5, c6, e5, d7, b8, a6, b4, d5, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 1780
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, b6, a8, c7, e6, d8, b7, a5, c6, e5, g6, h8, f7, g5, h7, f8, d7, b8, a6, b4, d5, e7, g8, f6, e4, g3, h1, 
Complete tour: 1781
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, b6, a8, c7, e6, d8, b7, a5, c6, e5, f7, h8, g6, f8, d7, b8, a6, b4, d5, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 1782
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, b6, a8, c7, e6, d8, b7, a5, c6, e5, f7, h8, g6, e7, g8, f6, d5, b4, a6, b8, d7, f8, h7, g5, e4, g3, h1, 
Complete tour: 1783
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, b6, a8, c7, e6, d8, b7, a5, c6, e5, d7, b8, a6, b4, d5, e7, g8, f6, h7, f8, g6, h8, f7, g5, e4, g3, h1, 
Complete tour: 1784
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, b6, a8, c7, e6, d8, b7, a5, c6, e7, g8, f6, d5, b4, a6, b8, d7, e5, f7, h8, g6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1785
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, b6, a8, c7, e6, d8, b7, a5, c6, b8, a6, b4, d5, f6, g8, e7, g6, h8, f7, e5, d7, f8, h7, g5, e4, g3, h1, 
Complete tour: 1786
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, b6, a8, c7, e6, d8, b7, a5, c6, b8, a6, b4, d5, e7, g8, f6, h7, f8, d7, e5, g6, h8, f7, g5, e4, g3, h1, 
Complete tour: 1787
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, b6, a8, c7, e6, d8, b7, a5, c6, b8, a6, b4, d5, e7, g8, f6, d7, e5, f7, h8, g6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1788
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, a5, b7, d8, c6, b4, d5, b6, a8, c7, a6, b8, d7, e5, f7, h8, g6, e7, g8, f6, h7, f8, e6, g5, e4, g3, h1, 
Complete tour: 1789
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, a5, b7, d8, c6, b4, a6, b8, d7, e5, g6, h8, f7, g5, h7, f8, e6, c7, a8, b6, d5, e7, g8, f6, e4, g3, h1, 
Complete tour: 1790
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, a5, b7, d8, c6, b4, a6, b8, d7, e5, f7, h8, g6, f8, e6, c7, a8, b6, d5, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 1791
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, a5, b7, d8, c6, b4, a6, b8, d7, e5, f7, h8, g6, f8, h7, f6, g8, e7, d5, b6, a8, c7, e6, g5, e4, g3, h1, 
Complete tour: 1792
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, a5, b7, d8, c6, b4, a6, b8, d7, e5, f7, h8, g6, f8, h7, g5, e6, c7, a8, b6, d5, e7, g8, f6, e4, g3, h1, 
Complete tour: 1793
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, a5, b7, d8, c6, b4, a6, b8, d7, e5, f7, h8, g6, e7, g8, f6, d5, b6, a8, c7, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1794
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, a5, b7, d8, c6, e5, g6, h8, f7, g5, h7, f8, e6, c7, a8, b6, d7, b8, a6, b4, d5, e7, g8, f6, e4, g3, h1, 
Complete tour: 1795
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, a5, b7, d8, c6, e5, f7, h8, g6, f8, e6, c7, a8, b6, d7, b8, a6, b4, d5, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 1796
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, a5, b7, d8, c6, e5, f7, h8, g6, f8, h7, f6, g8, e7, d5, b4, a6, b8, d7, b6, a8, c7, e6, g5, e4, g3, h1, 
Complete tour: 1797
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, a5, b7, d8, c6, e5, f7, h8, g6, f8, h7, g5, e6, c7, a8, b6, d7, b8, a6, b4, d5, e7, g8, f6, e4, g3, h1, 
Complete tour: 1798
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, a5, b7, d8, c6, e5, f7, h8, g6, e7, g8, f6, d5, b4, a6, b8, d7, b6, a8, c7, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1799
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, a5, b7, d8, c6, e5, f7, h8, g6, e7, g8, f6, h7, f8, d7, b8, a6, b4, d5, b6, a8, c7, e6, g5, e4, g3, h1, 
Complete tour: 1800
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, a5, b7, d8, c6, e5, f7, h8, g6, e7, g8, f6, d7, b8, a6, b4, d5, b6, a8, c7, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1801
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, a5, b7, d8, c6, e5, d7, b8, a6, b4, d5, b6, a8, c7, e6, f8, h7, f6, g8, e7, g6, h8, f7, g5, e4, g3, h1, 
Complete tour: 1802
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, a5, b7, d8, c6, e5, d7, b8, a6, b4, d5, b6, a8, c7, e6, f8, h7, g5, f7, h8, g6, e7, g8, f6, e4, g3, h1, 
Complete tour: 1803
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, a5, b7, d8, c6, e7, g8, f6, h7, f8, e6, c7, a8, b6, d5, b4, a6, b8, d7, e5, g6, h8, f7, g5, e4, g3, h1, 
Complete tour: 1804
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, a5, b7, d8, c6, e7, g8, f6, h7, f8, g6, h8, f7, e5, d7, b8, a6, b4, d5, b6, a8, c7, e6, g5, e4, g3, h1, 
Complete tour: 1805
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, a5, b7, d8, c6, b8, a6, b4, d5, f6, g8, e7, g6, h8, f7, e5, d7, b6, a8, c7, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1806
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, a5, b7, d8, c6, b8, a6, b4, d5, e7, g8, f6, h7, f8, e6, c7, a8, b6, d7, e5, g6, h8, f7, g5, e4, g3, h1, 
Complete tour: 1807
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, a5, b7, d8, c6, b8, a6, b4, d5, e7, g8, f6, h7, f8, g6, h8, f7, e5, d7, b6, a8, c7, e6, g5, e4, g3, h1, 
Complete tour: 1808
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, a5, b7, d8, c6, b8, a6, b4, d5, c7, a8, b6, d7, e5, f7, h8, g6, e7, g8, f6, h7, f8, e6, g5, e4, g3, h1, 
Complete tour: 1809
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, a5, b7, d8, c6, b8, a6, b4, d5, b6, a8, c7, e6, g5, h7, f8, d7, e5, f7, h8, g6, e7, g8, f6, e4, g3, h1, 
Complete tour: 1810
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, a5, b7, d8, c6, b8, a6, b4, d5, b6, a8, c7, e6, f8, d7, e5, f7, h8, g6, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 1811
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, a5, b7, d8, e6, g5, h7, f8, d7, b6, a8, c7, d5, b4, a6, b8, c6, e5, f7, h8, g6, e7, g8, f6, e4, g3, h1, 
Complete tour: 1812
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, a5, b7, d8, e6, g5, h7, f8, d7, b8, a6, c7, a8, b6, d5, b4, c6, e5, f7, h8, g6, e7, g8, f6, e4, g3, h1, 
Complete tour: 1813
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, a5, b7, d8, e6, g5, h7, f8, g6, h8, f7, e5, d7, b6, a8, c7, a6, b8, c6, b4, d5, e7, g8, f6, e4, g3, h1, 
Complete tour: 1814
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, a5, b7, d8, e6, g5, h7, f8, g6, h8, f7, e5, d7, b6, a8, c7, d5, b4, a6, b8, c6, e7, g8, f6, e4, g3, h1, 
Complete tour: 1815
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, a5, b7, d8, e6, g5, h7, f8, g6, h8, f7, e5, d7, b8, a6, c7, a8, b6, d5, b4, c6, e7, g8, f6, e4, g3, h1, 
Complete tour: 1816
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, a5, b7, d8, e6, g5, h7, f8, g6, h8, f7, e5, d7, b8, c6, b4, a6, c7, a8, b6, d5, e7, g8, f6, e4, g3, h1, 
Complete tour: 1817
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, a5, b7, d8, e6, g5, h7, f8, g6, h8, f7, e5, c6, b4, a6, b8, d7, b6, a8, c7, d5, e7, g8, f6, e4, g3, h1, 
Complete tour: 1818
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, a5, b7, d8, e6, g5, h7, f8, g6, h8, f7, e5, c6, b8, d7, b6, a8, c7, a6, b4, d5, e7, g8, f6, e4, g3, h1, 
Complete tour: 1819
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, a5, b7, d8, e6, f8, d7, b6, a8, c7, d5, b4, a6, b8, c6, e5, f7, h8, g6, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 1820
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, a5, b7, d8, e6, f8, d7, b8, a6, c7, a8, b6, d5, b4, c6, e5, f7, h8, g6, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 1821
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, a5, b7, d8, e6, f8, g6, h8, f7, e5, d7, b6, a8, c7, a6, b8, c6, b4, d5, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 1822
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, a5, b7, d8, e6, f8, g6, h8, f7, e5, d7, b6, a8, c7, d5, b4, a6, b8, c6, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 1823
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, a5, b7, d8, e6, f8, g6, h8, f7, e5, d7, b8, a6, c7, a8, b6, d5, b4, c6, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 1824
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, a5, b7, d8, e6, f8, g6, h8, f7, e5, d7, b8, c6, b4, a6, c7, a8, b6, d5, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 1825
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, a5, b7, d8, e6, f8, g6, h8, f7, e5, c6, b4, a6, b8, d7, b6, a8, c7, d5, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 1826
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, a5, b7, d8, e6, f8, g6, h8, f7, e5, c6, b8, d7, b6, a8, c7, a6, b4, d5, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 1827
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, a5, b7, d8, e6, f8, h7, f6, g8, e7, c6, b4, d5, b6, a8, c7, a6, b8, d7, e5, g6, h8, f7, g5, e4, g3, h1, 
Complete tour: 1828
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, a5, b7, d8, e6, f8, h7, f6, g8, e7, c6, b8, a6, b4, d5, c7, a8, b6, d7, e5, g6, h8, f7, g5, e4, g3, h1, 
Complete tour: 1829
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, a5, b7, d8, e6, f8, h7, f6, g8, e7, d5, b4, c6, b8, a6, c7, a8, b6, d7, e5, g6, h8, f7, g5, e4, g3, h1, 
Complete tour: 1830
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, a5, b7, d8, e6, f8, h7, f6, g8, e7, d5, b4, a6, c7, a8, b6, d7, b8, c6, e5, g6, h8, f7, g5, e4, g3, h1, 
Complete tour: 1831
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, a5, b7, d8, e6, f8, h7, f6, g8, e7, d5, c7, a8, b6, d7, b8, a6, b4, c6, e5, g6, h8, f7, g5, e4, g3, h1, 
Complete tour: 1832
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, a5, b7, d8, e6, f8, h7, f6, g8, e7, d5, b6, a8, c7, a6, b4, c6, b8, d7, e5, g6, h8, f7, g5, e4, g3, h1, 
Complete tour: 1833
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, a5, b7, d8, e6, f8, h7, g5, f7, h8, g6, e5, d7, b6, a8, c7, a6, b8, c6, b4, d5, e7, g8, f6, e4, g3, h1, 
Complete tour: 1834
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, a5, b7, d8, e6, f8, h7, g5, f7, h8, g6, e5, d7, b6, a8, c7, d5, b4, a6, b8, c6, e7, g8, f6, e4, g3, h1, 
Complete tour: 1835
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, a5, b7, d8, e6, f8, h7, g5, f7, h8, g6, e5, d7, b8, a6, c7, a8, b6, d5, b4, c6, e7, g8, f6, e4, g3, h1, 
Complete tour: 1836
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, a5, b7, d8, e6, f8, h7, g5, f7, h8, g6, e5, d7, b8, c6, b4, a6, c7, a8, b6, d5, e7, g8, f6, e4, g3, h1, 
Complete tour: 1837
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, a5, b7, d8, e6, f8, h7, g5, f7, h8, g6, e5, c6, b4, a6, b8, d7, b6, a8, c7, d5, e7, g8, f6, e4, g3, h1, 
Complete tour: 1838
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, a5, b7, d8, e6, f8, h7, g5, f7, h8, g6, e5, c6, b8, d7, b6, a8, c7, a6, b4, d5, e7, g8, f6, e4, g3, h1, 
Complete tour: 1839
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, a5, b7, d8, e6, c7, a8, b6, d5, b4, a6, b8, c6, e5, f7, h8, g6, e7, g8, f6, d7, f8, h7, g5, e4, g3, h1, 
Complete tour: 1840
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, a5, b7, d8, e6, c7, a8, b6, d5, b4, a6, b8, c6, e5, d7, f8, h7, f6, g8, e7, g6, h8, f7, g5, e4, g3, h1, 
Complete tour: 1841
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, a5, b7, d8, e6, c7, a8, b6, d5, b4, a6, b8, c6, e5, d7, f8, h7, g5, f7, h8, g6, e7, g8, f6, e4, g3, h1, 
Complete tour: 1842
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, a5, b7, d8, e6, c7, a8, b6, d5, b4, a6, b8, c6, e7, g8, f6, h7, f8, d7, e5, g6, h8, f7, g5, e4, g3, h1, 
Complete tour: 1843
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, a5, b7, d8, e6, c7, a8, b6, d5, b4, a6, b8, c6, e7, g8, f6, d7, e5, f7, h8, g6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1844
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, a5, b7, d8, e6, c7, a8, b6, d5, b4, a6, b8, d7, e5, c6, e7, g8, f6, h7, f8, g6, h8, f7, g5, e4, g3, h1, 
Complete tour: 1845
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, a5, b7, d8, e6, c7, a8, b6, d5, b4, a6, b8, d7, f6, g8, e7, c6, e5, f7, h8, g6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1846
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, a5, b7, d8, e6, c7, a8, b6, d5, b4, a6, b8, d7, f8, g6, h8, f7, e5, c6, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 1847
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, a5, b7, d8, e6, c7, a8, b6, d5, b4, a6, b8, d7, f8, h7, f6, g8, e7, c6, e5, g6, h8, f7, g5, e4, g3, h1, 
Complete tour: 1848
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, a5, b7, d8, e6, c7, a8, b6, d5, b4, a6, b8, d7, f8, h7, g5, f7, h8, g6, e5, c6, e7, g8, f6, e4, g3, h1, 
Complete tour: 1849
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, a5, b7, d8, e6, c7, a8, b6, d5, f6, g8, e7, c6, b4, a6, b8, d7, e5, f7, h8, g6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1850
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, a5, b7, d8, e6, c7, a8, b6, d5, f6, g8, e7, g6, h8, f7, e5, c6, b4, a6, b8, d7, f8, h7, g5, e4, g3, h1, 
Complete tour: 1851
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, a5, b7, d8, e6, c7, a8, b6, d5, e7, g8, f6, h7, f8, d7, b8, a6, b4, c6, e5, g6, h8, f7, g5, e4, g3, h1, 
Complete tour: 1852
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, a5, b7, d8, e6, c7, a8, b6, d5, e7, g8, f6, d7, b8, a6, b4, c6, e5, f7, h8, g6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1853
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, a5, b7, d8, e6, c7, a8, b6, d7, e5, c6, b8, a6, b4, d5, e7, g8, f6, h7, f8, g6, h8, f7, g5, e4, g3, h1, 
Complete tour: 1854
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, a5, b7, d8, e6, c7, a8, b6, d7, f6, g8, e7, d5, b4, a6, b8, c6, e5, f7, h8, g6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1855
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, a5, b7, d8, e6, c7, a8, b6, d7, f8, g6, h8, f7, e5, c6, b8, a6, b4, d5, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 1856
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, a5, b7, d8, e6, c7, a8, b6, d7, f8, h7, f6, g8, e7, d5, b4, a6, b8, c6, e5, g6, h8, f7, g5, e4, g3, h1, 
Complete tour: 1857
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, a5, b7, d8, e6, c7, a8, b6, d7, f8, h7, g5, f7, h8, g6, e5, c6, b8, a6, b4, d5, e7, g8, f6, e4, g3, h1, 
Complete tour: 1858
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, a5, b7, d8, e6, c7, a8, b6, d7, b8, a6, b4, d5, f6, g8, e7, c6, e5, f7, h8, g6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1859
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, a5, b7, d8, f7, h8, g6, e5, d7, b6, a8, c7, a6, b8, c6, b4, d5, e7, g8, f6, h7, f8, e6, g5, e4, g3, h1, 
Complete tour: 1860
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, a5, b7, d8, f7, h8, g6, e5, d7, b6, a8, c7, d5, b4, a6, b8, c6, e7, g8, f6, h7, f8, e6, g5, e4, g3, h1, 
Complete tour: 1861
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, a5, b7, d8, f7, h8, g6, e5, d7, f6, g8, e7, c6, b8, a6, b4, d5, b6, a8, c7, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1862
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, a5, b7, d8, f7, h8, g6, e5, d7, f8, e6, c7, a8, b6, d5, b4, a6, b8, c6, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 1863
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, a5, b7, d8, f7, h8, g6, e5, d7, f8, h7, f6, g8, e7, c6, b8, a6, b4, d5, b6, a8, c7, e6, g5, e4, g3, h1, 
Complete tour: 1864
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, a5, b7, d8, f7, h8, g6, e5, d7, f8, h7, g5, e6, c7, a8, b6, d5, b4, a6, b8, c6, e7, g8, f6, e4, g3, h1, 
Complete tour: 1865
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, a5, b7, d8, f7, h8, g6, e5, d7, b8, a6, b4, c6, e7, g8, f6, d5, b6, a8, c7, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1866
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, a5, b7, d8, f7, h8, g6, e5, d7, b8, a6, c7, a8, b6, d5, b4, c6, e7, g8, f6, h7, f8, e6, g5, e4, g3, h1, 
Complete tour: 1867
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, a5, b7, d8, f7, h8, g6, e5, d7, b8, c6, b4, a6, c7, a8, b6, d5, e7, g8, f6, h7, f8, e6, g5, e4, g3, h1, 
Complete tour: 1868
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, a5, b7, d8, f7, h8, g6, e5, c6, b4, a6, b8, d7, b6, a8, c7, d5, e7, g8, f6, h7, f8, e6, g5, e4, g3, h1, 
Complete tour: 1869
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, a5, b7, d8, f7, h8, g6, e5, c6, b4, a6, b8, d7, f6, g8, e7, d5, b6, a8, c7, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1870
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, a5, b7, d8, f7, h8, g6, e5, c6, b4, a6, b8, d7, f8, e6, c7, a8, b6, d5, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 1871
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, a5, b7, d8, f7, h8, g6, e5, c6, b4, a6, b8, d7, f8, h7, f6, g8, e7, d5, b6, a8, c7, e6, g5, e4, g3, h1, 
Complete tour: 1872
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, a5, b7, d8, f7, h8, g6, e5, c6, b4, a6, b8, d7, f8, h7, g5, e6, c7, a8, b6, d5, e7, g8, f6, e4, g3, h1, 
Complete tour: 1873
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, a5, b7, d8, f7, h8, g6, e5, c6, e7, g8, f6, d5, b4, a6, b8, d7, b6, a8, c7, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1874
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, a5, b7, d8, f7, h8, g6, e5, c6, e7, g8, f6, h7, f8, d7, b8, a6, b4, d5, b6, a8, c7, e6, g5, e4, g3, h1, 
Complete tour: 1875
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, a5, b7, d8, f7, h8, g6, e5, c6, e7, g8, f6, d7, b8, a6, b4, d5, b6, a8, c7, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1876
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, a5, b7, d8, f7, h8, g6, e5, c6, b8, a6, b4, d5, e7, g8, f6, h7, f8, d7, b6, a8, c7, e6, g5, e4, g3, h1, 
Complete tour: 1877
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, a5, b7, d8, f7, h8, g6, e5, c6, b8, a6, b4, d5, e7, g8, f6, d7, b6, a8, c7, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1878
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, a5, b7, d8, f7, h8, g6, e5, c6, b8, d7, b6, a8, c7, a6, b4, d5, e7, g8, f6, h7, f8, e6, g5, e4, g3, h1, 
Complete tour: 1879
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, a5, b7, d8, f7, h8, g6, f8, e6, c7, a8, b6, d5, b4, a6, b8, d7, e5, c6, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 1880
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, a5, b7, d8, f7, h8, g6, f8, e6, c7, a8, b6, d7, e5, c6, b8, a6, b4, d5, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 1881
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, a5, b7, d8, f7, h8, g6, f8, h7, f6, g8, e7, c6, e5, d7, b8, a6, b4, d5, b6, a8, c7, e6, g5, e4, g3, h1, 
Complete tour: 1882
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, a5, b7, d8, f7, h8, g6, f8, h7, f6, g8, e7, d5, b4, a6, b8, c6, e5, d7, b6, a8, c7, e6, g5, e4, g3, h1, 
Complete tour: 1883
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, a5, b7, d8, f7, h8, g6, f8, h7, g5, e6, c7, a8, b6, d5, b4, a6, b8, d7, e5, c6, e7, g8, f6, e4, g3, h1, 
Complete tour: 1884
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, a5, b7, d8, f7, h8, g6, f8, h7, g5, e6, c7, a8, b6, d7, e5, c6, b8, a6, b4, d5, e7, g8, f6, e4, g3, h1, 
Complete tour: 1885
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, a5, b7, d8, f7, h8, g6, e7, g8, f6, d5, b4, a6, b8, c6, e5, d7, b6, a8, c7, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1886
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, a5, b7, d8, f7, h8, g6, e7, g8, f6, h7, f8, d7, e5, c6, b8, a6, b4, d5, b6, a8, c7, e6, g5, e4, g3, h1, 
Complete tour: 1887
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, b5, a3, c4, a5, b7, d8, f7, h8, g6, e7, g8, f6, d7, e5, c6, b8, a6, b4, d5, b6, a8, c7, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1888
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, c6, a5, b7, d8, e6, g5, h7, f8, d7, b8, a6, b4, d5, b6, a8, c7, b5, a3, c4, e5, f7, h8, g6, e7, g8, f6, e4, g3, h1, 
Complete tour: 1889
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, c6, a5, b7, d8, e6, g5, h7, f8, g6, h8, f7, e5, c4, a3, b5, c7, a8, b6, d7, b8, a6, b4, d5, e7, g8, f6, e4, g3, h1, 
Complete tour: 1890
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, c6, a5, b7, d8, e6, f8, d7, b8, a6, b4, d5, b6, a8, c7, b5, a3, c4, e5, f7, h8, g6, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 1891
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, c6, a5, b7, d8, e6, f8, g6, h8, f7, e5, c4, a3, b5, c7, a8, b6, d7, b8, a6, b4, d5, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 1892
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, c6, a5, b7, d8, e6, f8, h7, f6, g8, e7, d5, b4, a6, b8, d7, b6, a8, c7, b5, a3, c4, e5, g6, h8, f7, g5, e4, g3, h1, 
Complete tour: 1893
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, c6, a5, b7, d8, e6, f8, h7, g5, f7, h8, g6, e5, c4, a3, b5, c7, a8, b6, d7, b8, a6, b4, d5, e7, g8, f6, e4, g3, h1, 
Complete tour: 1894
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, c6, a5, b7, d8, f7, h8, g6, e5, c4, a3, b5, c7, a8, b6, d7, b8, a6, b4, d5, e7, g8, f6, h7, f8, e6, g5, e4, g3, h1, 
Complete tour: 1895
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, c6, b4, a6, b8, d7, e5, g6, h8, f7, g5, h7, f8, e6, d8, b7, a5, c4, a3, b5, c7, a8, b6, d5, e7, g8, f6, e4, g3, h1, 
Complete tour: 1896
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, c6, b4, a6, b8, d7, e5, g6, h8, f7, d8, b7, a5, c4, a3, b5, c7, a8, b6, d5, e7, g8, f6, h7, f8, e6, g5, e4, g3, h1, 
Complete tour: 1897
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, c6, b4, a6, b8, d7, e5, f7, h8, g6, f8, e6, d8, b7, a5, c4, a3, b5, c7, a8, b6, d5, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 1898
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, c6, b4, a6, b8, d7, e5, f7, h8, g6, f8, h7, f6, g8, e7, d5, b6, a8, c7, b5, a3, c4, a5, b7, d8, e6, g5, e4, g3, h1, 
Complete tour: 1899
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, c6, b4, a6, b8, d7, e5, f7, h8, g6, f8, h7, g5, e6, d8, b7, a5, c4, a3, b5, c7, a8, b6, d5, e7, g8, f6, e4, g3, h1, 
Complete tour: 1900
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, c6, b4, a6, b8, d7, e5, f7, h8, g6, e7, g8, f6, d5, b6, a8, c7, b5, a3, c4, a5, b7, d8, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1901
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, c6, e5, g6, h8, f7, g5, h7, f8, e6, d8, b7, a5, c4, a3, b5, c7, a8, b6, d7, b8, a6, b4, d5, e7, g8, f6, e4, g3, h1, 
Complete tour: 1902
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, c6, e5, g6, h8, f7, d8, b7, a5, c4, a3, b5, c7, a8, b6, d7, b8, a6, b4, d5, e7, g8, f6, h7, f8, e6, g5, e4, g3, h1, 
Complete tour: 1903
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, c6, e5, f7, h8, g6, f8, e6, d8, b7, a5, c4, a3, b5, c7, a8, b6, d7, b8, a6, b4, d5, e7, g8, f6, h7, g5, e4, g3, h1, 
Complete tour: 1904
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, c6, e5, f7, h8, g6, f8, h7, f6, g8, e7, d5, b4, a6, b8, d7, b6, a8, c7, b5, a3, c4, a5, b7, d8, e6, g5, e4, g3, h1, 
Complete tour: 1905
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, c6, e5, f7, h8, g6, f8, h7, g5, e6, d8, b7, a5, c4, a3, b5, c7, a8, b6, d7, b8, a6, b4, d5, e7, g8, f6, e4, g3, h1, 
Complete tour: 1906
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, c6, e5, f7, h8, g6, e7, g8, f6, d5, b4, a6, b8, d7, b6, a8, c7, b5, a3, c4, a5, b7, d8, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1907
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, c6, e5, f7, h8, g6, e7, g8, f6, h7, f8, d7, b8, a6, b4, d5, b6, a8, c7, b5, a3, c4, a5, b7, d8, e6, g5, e4, g3, h1, 
Complete tour: 1908
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, c6, e5, f7, h8, g6, e7, g8, f6, d7, b8, a6, b4, d5, b6, a8, c7, b5, a3, c4, a5, b7, d8, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1909
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, c6, e5, d7, b8, a6, b4, d5, b6, a8, c7, b5, a3, c4, a5, b7, d8, e6, f8, h7, f6, g8, e7, g6, h8, f7, g5, e4, g3, h1, 
Complete tour: 1910
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, c6, e5, d7, b8, a6, b4, d5, b6, a8, c7, b5, a3, c4, a5, b7, d8, e6, f8, h7, g5, f7, h8, g6, e7, g8, f6, e4, g3, h1, 
Complete tour: 1911
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, c6, e5, d7, b8, a6, b4, d5, b6, a8, c7, b5, a3, c4, a5, b7, d8, f7, h8, g6, e7, g8, f6, h7, f8, e6, g5, e4, g3, h1, 
Complete tour: 1912
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, c6, e7, g8, f6, h7, f8, e6, d8, b7, a5, c4, a3, b5, c7, a8, b6, d5, b4, a6, b8, d7, e5, g6, h8, f7, g5, e4, g3, h1, 
Complete tour: 1913
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, c6, e7, g8, f6, h7, f8, g6, h8, f7, e5, d7, b8, a6, b4, d5, b6, a8, c7, b5, a3, c4, a5, b7, d8, e6, g5, e4, g3, h1, 
Complete tour: 1914
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, c6, d8, b7, a5, c4, a3, b5, c7, a8, b6, d5, b4, a6, b8, d7, e5, f7, h8, g6, e7, g8, f6, h7, f8, e6, g5, e4, g3, h1, 
Complete tour: 1915
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, c6, b8, a6, b4, d5, f6, g8, e7, g6, h8, f7, e5, d7, b6, a8, c7, b5, a3, c4, a5, b7, d8, e6, f8, h7, g5, e4, g3, h1, 
Complete tour: 1916
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, c6, b8, a6, b4, d5, e7, g8, f6, h7, f8, e6, d8, b7, a5, c4, a3, b5, c7, a8, b6, d7, e5, g6, h8, f7, g5, e4, g3, h1, 
Complete tour: 1917
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, c6, b8, a6, b4, d5, e7, g8, f6, h7, f8, g6, h8, f7, e5, d7, b6, a8, c7, b5, a3, c4, a5, b7, d8, e6, g5, e4, g3, h1, 
Complete tour: 1918
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, c6, b8, a6, b4, d5, b6, a8, c7, b5, a3, c4, a5, b7, d8, e6, g5, h7, f8, d7, e5, f7, h8, g6, e7, g8, f6, e4, g3, h1, 
Complete tour: 1919
a1, c2, e1, g2, h4, f3, d2, b1, c3, a2, c1, e2, g1, h3, f2, d1, e3, f1, h2, g4, h6, f5, d4, b3, c5, a4, b2, d3, f4, h5, g7, e8, d6, c8, a7, c6, b8, a6, b4, d5, b6, a8, c7, b5, a3, c4, a5, b7, d8, e6, f8, d7, e5, f7, h8, g6, e7, g8, f6, h7, g5, e4, g3, h1, 
