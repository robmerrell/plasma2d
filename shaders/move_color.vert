attribute vec4 position;
//uniform mat4 modelview;
//uniform mat4 projection;

uniform mat4 uMVP;

void main(void) {
    gl_Position = uMVP * position;
}