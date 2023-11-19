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
