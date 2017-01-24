 
#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>
#include <stdlib.h>


#define ROWARRAY 24
#define COLARRAY 80

 void showAllCells(bool cell[24][80]){
//		checkNeighbors(cell);
   //bool cells[24][80];
//		boolean cell = false;
//		int row=0;
//		int col=0;
   int row;
   int col;
   for( row =  0; row <  24   ; row++){
     for( col = 0; col <  80   ; col++ ){
       if(cell[row][col] == true)
	 printf("O");
       else if(cell[row][col] == false)
	 printf(" ");
       else
	 printf("X");
     }
     printf("\n");
   }

   // 371 collides   463 steady state
   // 2 1 2 3 3 4 4 4 5 1 5 4 6 2 6 3 6 4 15 0 16 1 14 2 15 2 16 2
   // 812 steady state
   //1 5 2 5 1 6 2 6 11 5 11 6 11 7 12 4 12 8 13 3 13 9 14 3 14 9 15 6 16 4 16 8 17 5 17 6 17 7 18 6 21 3 21 4 21 5 22 3 22 4 22 5 23 2 23 6 25 1 25 2 25 6 25 7 35 3 35 4 36 3 36 4		
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
 int checkNeighbors(int row, int col,  bool cell[24][80]){
   int alive = 0;
   //int dead = 0;
   //bool cells[24][80];
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










int main (int argc, char *argv[]){

        //boolean [][] cells = new boolean [24][80] ;
	//boolean [][] currentCells= new boolean[24][80];
       	//boolean [][] newCells = new boolean [24][80] ;
  //bool xxx[rowarray][colarray];

  bool cells[24][80];
    bool currentCells[24][80];
  bool newCells[24][80];

//		int alivenum=0;
		
//		boolean [] singlecell = false;
//		boolean[] cells = new boolean[80];
		
		// read alive cells
		int row;
		int col;

for( row =  0; row <  ROWARRAY   ; row++){
     for( col = 0; col <  COLARRAY    ; col++ ){
       cells[row][col]=false;
   }
 }
		int i;
		int x;
		int y;
		for(i = 1; i< argc; i+=2){
		  x = atoi(argv[i]);
		  y = atoi(argv[i+1]);
		  cells[y][x]=true;
		}


		//for(  row =  0; row < 24 ; row++){
		//for(  col = 0; col < 80 ; col++ ){
	    //				cells[0][1] = true;
	    //				cells[6][8] = true;
	    //				cells[9][9] = true;
	    //				cells[9][10]= true;
				
	    // 371 collides each other
	    // 463 steady state
		//cells[1][2]=true;
		//cells[3][2]=true;
		//cells[4][3]=true;
		//cells[4][4]=true;
		//cells[1][5]=true;
		//cells[4][5]=true;
		//cells[2][6]=true;
		//cells[3][6]=true;
		//cells[4][6]=true;
		//cells[0][15]=true;
		//cells[1][16]=true;
		//cells[2][14]=true;
		//cells[2][15]=true;
		//cells[2][16]=true;

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

		//}
		//}
		
	// show all cells every round
	int round=1;
	//bool currentCell = false;
	//int i;
	//		for(int row =  0; row < cells.length ; row++){
	//			for(int col = 0; col < cells[row].length ; col++ ){
	//		while(cells[row][col]==true){
	

//for( i = 0; i< 600 ; i++){
	while(1){			
	  //				currentCells[row][col]=false;
	  printf("%d\n", round);
	  //				System.out.println(cells.length);
	  //				System.out.println(cells[row].length);
				
	  //					System.out.println(round);
	  showAllCells(cells);
	  //			currentCells[row][col] = cells[row][col];
	  //					System.out.println(cells[2][6]+" oriori");
	  //					System.out.println(cells[3][6]+" oriori");
	  //					System.out.println(cells[3][5]+" oriori 2");
	  //					System.out.println(cells[3][7]+" oriori 2");

	  int row1;
	  int col1;			
	  for( row1 =  0; row1 < 24 ; row1++){
	    for( col1 = 0; col1 < 80 ; col1++ ){
	      currentCells[row1][col1]=cells[row1][col1];
	      //	cells[row][col]=currentCells[row][col];		
	    }
	  }
	  //					System.out.println(currentCells[2][6]+" oriori");
	  //					System.out.println(currentCells[3][6]+" oriori");
	  //					System.out.println(currentCells[3][5]+" oriori 2");
	  //					System.out.println(currentCells[3][7]+" oriori 2");

	  int row2;
	  int col2;
	  for( row2 =  0; row2 < 24 ; row2++){
	    for( col2 = 0; col2 < 80 ; col2++ ){
	      int alivenum=0;
	      alivenum = checkNeighbors(row2, col2, currentCells);	
							 
	      //							 System.out.println(alivenum);
	      if(currentCells[row2][col2]==true){ // if current cell is alive
		if(alivenum < 2 || alivenum > 3){
		  newCells[row2][col2]=false;
		}
		else{
		  newCells[row2][col2]=true;
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
	      else if(currentCells[row2][col2]==false){ // if current cell is not alive
		if(alivenum == 3){
		  newCells[row2][col2]=true;
		}
		else{
		  newCells[row2][col2]=false;
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
	  int row3;
	  int col3;					
	  for( row3 =  0; row3 < 24 ; row3++){
	    for( col3 = 0; col3 < 80 ; col3++ ){
	      cells[row3][col3]=newCells[row3][col3];
	      //							cells[row][col]=currentCells[row][col];						
	    }
	  }
	  //					showAllCells(currentCells);

	  //					showAllCells(cells);
					
	  //					cells[10][20]=true;
					
	  printf("\n");
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
	  printf("\n");
	  //				System.out.println();
				
	  //			}


	  
	  usleep(83333);


	}
	return 0;
}