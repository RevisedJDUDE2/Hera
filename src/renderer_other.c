#include "renderer.h"

//util functions
void INITIALIZE_VECTOR2(vec2* arr, int max_n, float default_x, float default_y) {
  // static int calls = 0;
  // calls++;
  // printf("EXTERN SUCCESS %d\n", calls);
  for(int positions_in_arr = 0; positions_in_arr < max_n; positions_in_arr++) {
    arr[positions_in_arr][0] = default_x;
    arr[positions_in_arr][1] = default_y;
  }
};
static inline void set_mesh(float *mesh_array, float x, float y) {
  //to Ez?
  //const int vertex_count = 6;
  //for(int y_idx = 0; y < 5; y_idx++) {
  //  for(int x_idx = 0; x < 3; x_idx++) {
  //    //pass!
  //    if(y_idx == 0 && x_idx == 0)
  //      mesh_array[x_idx][y_idx] = -x;
  //    if(y_idx == 0 && x_idx == 1)
  //      mesh_array[x_idx][y_idx] = -y;
  //    if(y_idx == 1 && x_idx == 1)
  //      mesh_array[x_idx][y_idx] = -y;
  //  }
  //}
  mesh_array[0] = -x; mesh_array[1] = -y;
  mesh_array[2] = x;  mesh_array[3] = -y;
  mesh_array[4] = x;  mesh_array[5] = y;
  mesh_array[6] = -x; mesh_array[7] = -y;
  mesh_array[8] = -x; mesh_array[9] = y;
  mesh_array[10] = x; mesh_array[11] = y;
};
