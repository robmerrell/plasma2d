//
//  Shader.fsh
//  plasma2d
//
//  Created by Rob Merrell on 3/28/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

varying lowp vec4 colorVarying;

void main()
{
    gl_FragColor = colorVarying;
}
