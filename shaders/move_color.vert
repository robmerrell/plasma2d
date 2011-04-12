attribute vec4 position;
uniform mat4 modelview;

void main(void) {
    gl_Position = modelview * position;
}