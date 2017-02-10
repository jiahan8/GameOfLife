Game Of Life

the program was initialily created in Java, then in C
there are 2 methods and 1 main method

checkNeighbors take row, col and 2d array boolean as arguments
it counts alive cells around every cells in the map
it returns the alive cells as an integer
to reach evry neighbors in the cells, remainder is used

showAllCells take 2d array boolean as argument
this method display a new 2d array map everytime it runs
in the map, the cells changes everytime until steady state

main method calculate the total alive neighbors of each cells
store the array to a new array
usleep was use to display the map automatically


(wrap around) cells will continue in display even they reach the end of the map

(in C) the 2d array has to be asigned false before display
