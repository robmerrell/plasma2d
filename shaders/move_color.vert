attribute vec4 vert_coords;

uniform mat4 uMVP;

void main(void) {
    gl_Position = uMVP * vert_coords;
}