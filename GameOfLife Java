
public class GameOfLife {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		boolean [][] cells = new boolean [24][80] ;
		boolean [][] currentCells= new boolean[24][80];
		boolean [][] newCells = new boolean [24][80] ;

//		int alivenum=0;
		
//		boolean [] singlecell = false;
//		boolean[] cells = new boolean[80];
		
		// read alive cells
//		int row;
//		int col;
		for( int row =  0; row < 24 ; row++){
			for( int col = 0; col < 80 ; col++ ){
//				cells[0][1] = true;
//				cells[6][8] = true;
//				cells[9][9] = true;
//				cells[9][10]= true;
				
				// 371 collides each other
				// 463 steady state
				cells[1][2]=true;
				cells[3][2]=true;
				cells[4][3]=true;
				cells[4][4]=true;
				cells[1][5]=true;
				cells[4][5]=true;
				cells[2][6]=true;
				cells[3][6]=true;
				cells[4][6]=true;
				cells[0][15]=true;
				cells[1][16]=true;
				cells[2][14]=true;
				cells[2][15]=true;
				cells[2][16]=true;

				// testing
//				cells[6][6]=true;
//				cells[7][6]=true;
//				cells[8][6]=true;
//				cells[9][6]=true;
//				cells[6][7]=true;
//				cells[7][7]=true;
//				cells[8][7]=true;
//				cells[9][7]=true;
//				cells[6][8]=true;
//				cells[7][8]=true;
//				cells[8][8]=true;
//				cells[9][8]=true;
//				{{2, 1},
//				{2, 3},
//				{3, 4}, {4, 4}, {5, 1}, {5, 4}, {6, 2}, {6, 3} ,{6, 4}, {15, 0} ,
//				{16, 1}, {14, 2}, {15, 2}, {16, 2}};

			}
		}
		
		// show all cells every round
		int round=1;
		boolean currentCell = false;
//		for(int row =  0; row < cells.length ; row++){
//			for(int col = 0; col < cells[row].length ; col++ ){
//		while(cells[row][col]==true){
		for(int i = 0; i< 600 ; i++){
				
//				currentCells[row][col]=false;
				System.out.println(round);
//				System.out.println(cells.length);
//				System.out.println(cells[row].length);
				
//					System.out.println(round);
					showAllCells(cells);
//			currentCells[row][col] = cells[row][col];
//					System.out.println(cells[2][6]+" oriori");
//					System.out.println(cells[3][6]+" oriori");
//					System.out.println(cells[3][5]+" oriori 2");
//					System.out.println(cells[3][7]+" oriori 2");

					
					for(int row =  0; row < 24 ; row++){
						for(int col = 0; col < 80 ; col++ ){
							currentCells[row][col]=cells[row][col];
//							cells[row][col]=currentCells[row][col];						
						}
					}
//					System.out.println(currentCells[2][6]+" oriori");
//					System.out.println(currentCells[3][6]+" oriori");
//					System.out.println(currentCells[3][5]+" oriori 2");
//					System.out.println(currentCells[3][7]+" oriori 2");
					for(int row =  0; row < 24 ; row++){
						for(int col = 0; col < 80 ; col++ ){
							int alivenum=0;
							alivenum = checkNeighbors(row, col, currentCells);	
							 
//							 System.out.println(alivenum);
								if(currentCells[row][col]==true){ // if current cell is alive
									if(alivenum < 2 || alivenum > 3){
										newCells[row][col]=false;
									}
									else{
										newCells[row][col]=true;
									}
									
//									if(alivenum == 2 || alivenum == 3){
//										newCells[row][col]=true;
//									}
//									else {
//										newCells[row][col]=false;
//									}
									
//									if(alivenum > 3 || alivenum < 2){
//										newCells[row][col]=false;
////										return false;
//									}
//									else if(alivenum==2 || alivenum==3)
//										newCells[row][col]=true;
//									else{
//										newCells[row][col]=true;
//									}
								}
								else if(currentCells[row][col]==false){ // if current cell is not alive
									if(alivenum == 3){
										newCells[row][col]=true;
									}
									else{
										newCells[row][col]=false;
									}
								}
								else{
//									if(alivenum == 3){
//										newCells[row][col]=true;
//									}
//									else{
//										newCells[row][col]=false;
//									}
								}
//							cells[row][col]=currentCells[row][col];						

						}
					}
//					
					for(int row =  0; row < 24 ; row++){
						for(int col = 0; col < 80 ; col++ ){
							cells[row][col]=newCells[row][col];
//							cells[row][col]=currentCells[row][col];						
						}
					}
//					showAllCells(currentCells);

//					showAllCells(cells);
					
//					cells[10][20]=true;
					
					System.out.println();
//					System.out.println(cells[2][6]+" oriori");
//					System.out.println(cells[3][6]+" oriori");
//					System.out.println(cells[3][5]+" oriori 2");
//					System.out.println(cells[3][7]+" oriori 2");
					
//					checkNeighbors(currentCells);
//					cells[row][col]=checkNeighbors(currentCells);
//					cells=currentCells;
					
//			cells[row][col] = currentCells[row][col];
					round++;
//				}
//				round++;
				System.out.println();
//				System.out.println();
				
//			}
		}

//		boolean[][] nextCells = new boolean [24][80];
//		for(int row =  0; row < cells.length ; row++){
//			for(int col = 0; col < cells[row].length ; col++ ){
////				nextCells[row][col]=checkNeighbors(cells);
//			}
//		}
		
		
		
//		}
		
	}
//	public static boolean currentCell(boolean [][] cells){
//		for(int row =  0; row < 24 ; row++){
//			for(int col = 0; col < 80 ; col++ ){
//				if(cells[row][col] == true)
//					System.out.print("O");
//				else if(cells[row][col] == false)
//					System.out.print(".");
//				else
//					System.out.print("V");
//			}
//			System.out.println();
//		}
//		
//		return false;
//	}
	public static void showAllCells(boolean [][] cell){
//		checkNeighbors(cell);
		boolean [][] cells = new boolean [24][80];
//		boolean cell = false;
//		int row=0;
//		int col=0;
		for(int row =  0; row < cell.length   ; row++){
			for(int col = 0; col < cell[row].length   ; col++ ){
				if(cell[row][col] == true)
					System.out.print("O");
				else if(cell[row][col] == false)
					System.out.print(" ");
				else
					System.out.print("V");
			}
			System.out.println();
		}
		
		
//		System.out.println("copy");
//		for(int row =  0; row < cell.length   ; row++){
//			for(int col = 0; col < cell[row].length   ; col++ ){
//
//				checkNeighbors(cell);
//				
//				cells[row][col]=cell[row][col];
//			}
//		}
//		System.out.println("copy complete");
		
		
		
//		checkNeighbors(cells);
//		for(int row =  0; row < cells.length   ; row++){
//			for(int col = 0; col < cells[row].length   ; col++ ){
//
//				
////				checkNeighbors(cells);
//
//				if(cells[row][col] == true)
//					System.out.print("O");
//				else if(cells[row][col] == false)
//					System.out.print(".");
//				else
//					System.out.print("V");
//			}
//			System.out.println();
//		}
//		checkNeighbors(cells);
//		
//		for(int row =  0; row < cell.length   ; row++){
//			for(int col = 0; col < cell[row].length   ; col++ ){
//				cell[row][col]=cells[row][col];
//			}
//		}
		
//		showAllCells(cell);
//		cell=cells;
		//		System.out.println();
	}
	public static int checkNeighbors(int row, int col, boolean [][] cell){
		int alive = 0;
		int dead = 0;
		boolean cells[][] = new boolean[24][80];
//		int row=0;
//		int col=0;
//		for(int row =  0   ; row < 24   ; row++){
//			for(int col = 0   ; col < 80   ; col++ ){
//				if(cells[row][col]=true){ // current cell is alive
//				if(cell[row][col]=true){ // current cell is alive
////					
//					if(cell[row-1][col-1]==false){ // top left
//						dead++;
//					}
//					else if(cell[row-1][col-1]==true){ // top left
//						alive++;
//					}
//					else{
//						
//					}
//						
//					if(cell[row-1][col ]==false) // top
//						dead++;
//					else if(cell[row-1][col]==true) // top
//						alive++;
//					else{
//						
//					}
//						
//					if(cell[row-1][col+1]==false) // top right
//						dead++;
//					else if(cell[row-1][col+1]==false) // top right
//						alive++;
//					else{
//						
//					}
//					if(cell[row][col-1]==false) // left
//						dead++;
//					else if(cell[row][col-1]==false) // left
//						alive++;
//					else{
//						
//					}
//					if(cell[row][col+1]==false) // right
//						dead++;
//					else if(cell[row][col+1]==false) // right
//						alive++;
//					else{
//						
//					}
//					if(cell[row+1][col-1]==false) // bottom right
//						dead++;
//					else if(cell[row+1][col-1]==false) // bottom right
//						alive++;
//					else{
//						
//					}
//					if(cell[row+1][col]==false) // bottom
//						dead++;
//					else if(cell[row+1][col]==false) // bottom
//						alive++;
//					else{
//						
//					}
//					if(cell[row+1][col+1]==false) // bottom left					
//						dead++;
//					else if(cell[row+1][col+1]==false) // bottom left					
//						alive++;
//					else{
//						
//					}
//				}
//				else if(cell[row][col]=false){
//					if(cell[row-1][col-1]==false) // top left
//						dead++;
//					else
//						alive++;
//					if(cell[row-1][col]==false) // top
//						dead++;
//					else
//						alive++;
//					if(cell[row-1][col+1]==false) // top right
//						dead++;
//					else
//						alive++;
//					if(cell[row][col-1]==false) // left
//						dead++;
//					else
//						alive++;
//					if(cell[row][col+1]==false) // right
//						dead++;
//					else
//						alive++;
//					if(cell[row+1][col-1]==false) // bottom right
//						dead++;
//					else
//						alive++;
//					if(cell[row+1][col]==false) // bottom
//						dead++;
//					else
//						alive++;
//					if(cell[row+1][col+1]==false) // bottom left					
//						dead++;
//					else
//						alive++;
//				}
//				else{
//					
//				}
		
		
		if (cell[ (row -1+24)%24 ][(col - 1+80)%80] == true) {
	        alive++;
	    }
	    ;
	    if (cell[(row - 1+24)%24][col] == true) {
	        alive++;
	    }
	    ;
	    if ( cell[(row - 1+24)%24][(col + 1+80)%80] == true) {
	        alive++;
	    }
	    ;
	    if (cell[row][(col - 1+80)%80] == true) {
	        alive++;
	    }
	    ;
	    if (cell[row][(col + 1+80)%80] == true) {
	        alive++;
	    }
	    ;
	    if ( cell[(row + 1+24)%24][(col - 1+80)%80] == true) {
	        alive++;
	    }
	    ;
	    if (cell[(row + 1+24)%24][col] == true) {
	        alive++;
	    }
	    ;
	    if (cell[(row + 1+24)%24][(col + 1+80)%80] == true) {
	        alive++;
//	        System.out.println("yeahyeah");
	    }
			
		
		
//				if (row > 0 && col > 0 && cell[row - 1][col - 1] == true) {
//			        alive++;
//			    }
//			    ;
//			    if (row > 0 && cell[row - 1][col] == true) {
//			        alive++;
//			    }
//			    ;
//			    if (row > 0 && col < 72 && cell[row - 1][col + 1] == true) {
//			        alive++;
//			    }
//			    ;
//			    if (col > 0 && cell[row][col - 1] == true) {
//			        alive++;
//			    }
//			    ;
//			    if (col < 72 && cell[row][col + 1] == true) {
//			        alive++;
//			    }
//			    ;
//			    if (col > 0 && row < 22 && cell[row + 1][col - 1] == true) {
//			        alive++;
//			    }
//			    ;
//			    if (row < 22 && cell[row + 1][col] == true) {
//			        alive++;
//			    }
//			    ;
//			    if (row < 22 && col < 72 && cell[row + 1][col + 1] == true) {
//			        alive++;
////			        System.out.println("yeahyeah");
//			    }
		
		
		
//		 int count = 0;
//		    for(int i = row - 1; i <= row + 1; i++){
//		        if (i >= 0 && i < cell.length){ // fixed here
//		        	for(int j = col - 1; j <= col + 1; j++){
//		        		if (j >= 0 && j < cell[i].length){ // fixed here
//		        			if (i != row || j != col){
//		        				if (cell[i][j] == true) 
//		        					count++;
//		        			}
//		        		}
//		        	} // end for
//		        }
//		    } // end for
//
//		    return count;
		    
		
		
//		    int numLiveNeighbors = 0; 
//			for(int x = row - 1; x < row + 2; x++){
//				for(int y = col - 1; y < col + 2; y++){
//					if(x == row && y == col) continue;
//					numLiveNeighbors += isAlive(x,y);
//				}
//			}
//			return numLiveNeighbors;
		    
		
//		    int neighbours = 0;
//		    for (int xOffset = -1; xOffset < 2; xOffset++) {
//		        for (int yOffset = -1; yOffset < 2; yOffset++) {
//		            if ((xOffset != 0 || yOffset != 0)
//		                  && board.get(row + yOffset, col + xOffset)) {
//		                neighbours++;
//		            }
//		        }
//		    }
//		    return neighbours;
		    
		    
//		        int cnt = 0;
//		        for (int[] offset : NEIGHBOURS) {
//		            if (cells.getTile(x + offset[1], y + offset[0]) {
//		               cnt++;
//		            }
//		        }
//		        return cnt;

		        
			    
//				for( int row =  0; row < 24 ; row++){
//					for( int col = 0; col < 80 ; col++ ){
//						if(cell[row][col]==true){ // if current cell is alive
//							if(alive > 3 || alive < 2){
//								cell[row][col]=false;
////								return false;
//							}
//							else{
//								cell[row][row]=true;
//							}
//						}
//						else if(cell[row][col]==false){ // if current cell is not alive
//							if(alive == 3){
//								cell[row][col]=true;
//							}
//							else{
//								cell[row][row]=false;
//							}
//						}
//						else{
//							
//						}
//					}
//				}
			  return alive;  
			    
			
//		}// end double for loop
//		return false;
		
		//count alive/dead neighbors
//		for( int row =  0; row < 24 ; row++){
//			for( int col = 0; col < 80 ; col++ ){
//				if(cell[row][col]==true){ // if current cell is alive
//					if(alive > 3 || alive < 2){
//						cell[row][col]=false;
////						return false;
//					}
//					else{
//						cell[row][row]=true;
//					}
//				}
//				else if(cell[row][col]==false){ // if current cell is not alive
//					if(alive == 3){
//						cell[row][col]=true;
//					}
//					else{
//						cell[row][row]=false;
//					}
//				}
//				else{
//					
//				}
//			}
//		}
//		return false;
		
//		return cells[row][col];
		
//		for(int row =  0; row < 24 ; row++){
//			for(int col = 0; col < 80 ; col++ ){
//
//				}
//			}
//		}
		
//		showAllCells(cell);
		
	}
	

}






//import java.io.*;
//import java.util.Random;
//
//public class GameOfLife {
//
//private boolean[][] cells;
//
//public static void main( String[] args ) {
//  GameOfLife generation = new GameOfLife( );
////  317
////  463
//  for (int i = 0; i < 600; i++) {
//	  System.out.println(i);
//    System.out.println( generation );
//    generation.next( );
//  }
//}
//// Constructors
//
//public void next (){
//
//  int SIZE;
//  SIZE=cells.length;
////  System.out.println(SIZE);
//  boolean[][] tempCells = new boolean [24] [80]; 
//
////  for( int i=0; i<SIZE; i++ ) {
//// for( int j=0; j<SIZE; j++ ) {
////  tempCells[i][j] = cells[i][j];
//// }
////  } 
//  for (int row = 0; row < cells.length ; row++){
//	    for (int col = 0 ; col < cells[row].length ; col++) {
//	       int n = neighbours(row,col);
//
//	       if (n > 3  ||  n < 2)
//	           tempCells[row][col] = false;
//	       else if (n == 3)
//	           tempCells[row][col] = true;
//	       else
//	           tempCells[row][col] = cells[row][col];
//	    }
//  cells = tempCells;
//  }
//
//}
//
//
//public int neighbours (int row, int col) {
//  int acc=0;
//  for ( int i = row -1; i <= row + 1 ; i++)
//    {
//     for (int j = col -1 ; j <= col + 1 ; j++)
//       {
//       try {
//         if (cells[i][j]==true && (i != row || j!=col))
//         {
//           acc++;
//         }          
//       } 
//       catch ( 
//    		   ArrayIndexOutOfBoundsException f
//    		   )
//       {
//       continue;
//       }
//     }
//  }
//  return acc;
//}
//
//
//// Initialises 6 * 6 grid with Glider pattern.
//public GameOfLife( ) {
//final int SIZE =24;
//final int size2 = 80;
//// Arguably, this should have been a class (static) array.
//final int[][] pairs = {{2, 1}, {2, 3}, {3, 4}, {4, 4}, {5, 1}, {5, 4}, {6, 2}, {6, 3} ,{6, 4}, {15, 0} ,{16, 1}, {14, 2}, {15, 2}, {16, 2}};
////{2,4},{3,3},{1,2},{2,2},{3,2}
////2 1 2 3 3 4 4 4 5 1 5 4 6 2 6 3 6 4 15 0 16 1 14 2 15 2 16 2
////{2, 1}, {2, 3}, {3, 4}, {4, 4}, {5, 1}, {5, 4}, {6, 2}, {6, 3} ,{6, 4}, {15, 0} ,{16, 1}, {14, 2}, {15, 2}, {16, 2}
//
//cells = new boolean[ SIZE ][size2 ];
//for (int row = 0; row < SIZE; row ++) {
//cells[ row ] = new boolean[ size2 ];//
//}
//for (int pair = 0; pair < pairs.length; pair ++) {
//final int row = pairs[ pair ][ 0 ];
//final int col = pairs[ pair ][ 1 ];
//cells[ col ][ row ] = true;
//}
//}
////  Initialise size * size grid with random cells.
////public Life( int size ) {
////final Random rand = new Random( );
////cells = new boolean[ size ][ ];
////for (int row = 0; row < size; row ++) {
////cells[ row ] = new boolean[ size ];
////for (int col = 0; col < size; col ++) {
////cells[ row ][ col ] = (rand.nextInt( 2 ) == 0);
////}
////}
////}
//// Public methods and helper methods.
//
//@Override
//public String toString( ) {
//String result = "";
//for (int row = 0; row < cells.length; row ++) {
//final boolean[] column = cells[ row ];
//for (int col = 0; col < column.length; col ++) {
//result = result + (column[ col ] ? "O" : ".");
//}
//result = result + "\n";
//}
//return result;
//}
//}
