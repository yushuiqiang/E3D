// Extrude 3D model (e3d) Copyright ©2011 Adrian Kennard
// Make extrude path for each slice
// Released under GPL 3.0 http://www.gnu.org/copyleft/gpl.html

#include "e3d.h"

void fill_perimeter (slice_t *, poly_dim_t width, int loops, int fast);	// create perimeter and remaining fill area
void fill_area (stl_t * stl, poly_dim_t width, int layers);	// Break down fill areas based on layers
void fill_extrude (stl_t * stl, poly_dim_t width, double density);	// Generate extrude path for fills
void fill_anchor (stl_t * stl, int loops, poly_dim_t width, poly_dim_t offset, poly_dim_t step);	// Add anchor to layer 0
