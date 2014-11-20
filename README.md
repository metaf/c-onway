c-onway
=======

Conway's Game of Life in C.
Uses a handy library from [Notre Dame](http://www3.nd.edu/~dthain/courses/cse20211/fall2013/gfx/).

I'm planning on adding a feature to let you step backwards, rather than just forwards.  This is an interesting problem because there can be more than one possible backwards step.

I'm imagining a couple possible modes of operation.  One in which you get to manually select which possible backwards step to take, another in which it automatically picks one, and a final mode where it'll branch on each step and end up creating a tree of possible moves for a given number of backward steps.  That last one probably gets exponential, so maybe I'll try and do some dynamic programming type thing.
