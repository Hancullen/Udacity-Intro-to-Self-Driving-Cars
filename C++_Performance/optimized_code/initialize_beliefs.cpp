#include "headers/initialize_beliefs.h"

using namespace std;

// OPTIMIZATION: pass large variables by reference
vector< vector <float> > initialize_beliefs(vector< vector <char> > &grid) {

	// OPTIMIZATION: Which of these variables are necessary?
	// OPTIMIZATION: Reserve space in memory for vectors
  	vector< vector <float> > newGrid;
	int i, height, width;
	float total, prob_per_cell;

	height = grid.size();
	width = grid[0].size();
  	newGrid.reserve(height);

  	prob_per_cell = 1.0 / (height * width) ;

  	// OPTIMIZATION: Is there a way to get the same results 	// without nested for loops?
  	vector<float> newRow(width, prob_per_cell);
	/*for (j=0; j<grid[0].size(); j++) {
		newRow.push_back(prob_per_cell);
	}  */
	for (i=0; i<grid.size(); i++) {
		newGrid.push_back(newRow);
	}
  	
	return newGrid;
}