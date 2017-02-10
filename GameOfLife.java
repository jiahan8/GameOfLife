
public class GameOfLife {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		boolean [][] cells = new boolean [24][80] ;
		boolean [][] currentCells= new boolean[24][80];
		boolean [][] newCells = new boolean [24][80] ;

		for( int row =  0; row < 24 ; row++){
			for( int col = 0; col < 80 ; col++ ){
				
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

			}
		}
		
		// show all cells every round
		int round=1;
		boolean currentCell = false;
		for(int i = 0; i< 600 ; i++){
				
//				currentCells[row][col]=false;
				System.out.println(round);
				
//					System.out.println(round);
					showAllCells(cells);

					
					for(int row =  0; row < 24 ; row++){
						for(int col = 0; col < 80 ; col++ ){
							currentCells[row][col]=cells[row][col];
//							cells[row][col]=currentCells[row][col];						
						}
					}
//					
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
//									
								}

						}
					}
//					
					for(int row =  0; row < 24 ; row++){
						for(int col = 0; col < 80 ; col++ ){
							cells[row][col]=newCells[row][col];
//							cells[row][col]=currentCells[row][col];						
						}
					}
					System.out.println();
					round++;
//				}
//				round++;
				System.out.println();
//				System.out.println();
			
		}
	}
	
	
	public static void showAllCells(boolean [][] cell){
//		checkNeighbors(cell);
		boolean [][] cells = new boolean [24][80];
//		boolean cell = false;

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
	}
	public static int checkNeighbors(int row, int col, boolean [][] cell){
		int alive = 0;
		int dead = 0;
		boolean cells[][] = new boolean[24][80];
		
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
	    }
		
		  return alive;  
		
	}
	

}

