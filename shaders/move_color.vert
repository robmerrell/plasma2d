attribute vec4 vert_coords;
attribute vec4 tex_matrix;

uniform mat4 uMVP;

varying vec2 tex_coords;

void main(void) {
    gl_Position = uMVP * vert_coords;
    tex_coords = tex_matrix.xy;
}
