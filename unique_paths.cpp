
// Helper function to find unique paths recursively
int uniPathRec(int i, int j, vector<vector<int>>& grid) {
    int r = grid.size(), c = grid[0].size();

	// If out of bounds, return 0
	if(i == r || j == c) {
		return 0;
	}

	// If cell is an obstacle, return 0
	if(grid[i][j] == 1) {
		return 0;
	}

	// If reached the bottom-right cell, return 1
	if(i == r-1 && j == c-1) {
		return 1;
	}

	// Recur for the cell below and the cell to the right
	return uniPathRec(i+1, j, grid) +
	       uniPathRec(i, j+1, grid);
}

// Function to find unique paths with obstacles
int uniquePaths(vector<vector<int>>& grid) {
	return uniPathRec(0, 0, grid);
}
