attribute vec4 position;
uniform mat4 modelview;
uniform mat4 projection;

void main(void) {
    gl_Position = modelview * projection * position;
}