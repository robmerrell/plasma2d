precision mediump float;

//uniform sampler2D Sampler

varying highp vec2 tex_coords;
uniform sampler2D sampler;

void main() {
//    gl_FragColor = vec4(1.0, 1.0, 1.0, 1.0);
    gl_FragColor = texture2D(sampler, tex_coords);
}
