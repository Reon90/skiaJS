const { performance } = require('perf_hooks');
const skia = require('../generated/interface');
const glfw = require('glfw-n-api');

Object.assign(global, glfw);
Object.assign(global, skia);

function error_callback(error, description) {
	console.log(arguments);
}

function key_callback(window, key, scancode, action, mods) {
    console.log(window, key, scancode, action, mods);
    if (key == 256 && action == 1) {
        glfwSetWindowShouldClose(window, GL_TRUE);
    }
}
function mousecallback(win, x, y) {
    try {
        mx = x;
    my = y;
    man = true;
    } catch(e) {
        console.log(e)
    }
    
}


const kWidth = 1280;
const kHeight = 720;

let window;
glfwSetErrorCallback(error_callback);
if (!glfwInit()) {
    process.exit(1);
}

glfwWindowHint(0x00022002, 3);
glfwWindowHint(0x00022003, 2);
glfwWindowHint(0x00022006, GL_TRUE);
glfwWindowHint(0x00022008, 0x00032001);
//(uncomment to enable correct color spaces) glfwWindowHint(GLFW_SRGB_CAPABLE, GL_TRUE);
glfwWindowHint(0x00021006, 0);
//glfwWindowHint(GLFW_ALPHA_BITS, 0);
glfwWindowHint(0x00021005, 0);

window = glfwCreateWindow(kWidth, kHeight, "Simple example", null, null);
if (!window) {
    glfwTerminate();
    process.exit(1);
}
glfwMakeContextCurrent(window);
//(uncomment to enable correct color spaces) glEnable(GL_FRAMEBUFFER_SRGB);
let width = new Int32Array([0]);
let height = new Int32Array([0]);
const widthP = getAddress(width.buffer);
const heightP = getAddress(height.buffer);

glfwGetFramebufferSize(window, widthP, heightP);
let devicePixelRatio = width[0] / kWidth;

const glInterface = grGlinterfaceCreateNativeInterface();
const context = grContextMakeGl(glInterface);
const glInfo = new Int32Array([0, GL_RGBA8]); 
const target = grBackendrendertargetNewGl(width[0], height[0], 0, 0, glInfo.buffer);
const surface = skSurfaceNewBackendRenderTarget(context, target, enums.BOTTOM_LEFT_GR_SURFACE_ORIGIN, enums.RGBA_8888_SK_COLORTYPE, null, null);

glfwSwapInterval(1);
glfwSetKeyCallback(window, key_callback);
glfwSetCursorPosCallback(window, mousecallback);
const canvas = skSurfaceGetCanvas(surface);


var NUM_PARTICLES = ( ( ROWS = 100 ) * ( COLS = 300 ) ),
THICKNESS = Math.pow( 80, 2 ),
SPACING = 3,
MARGIN = 100,
COLOR = 220,
DRAG = 0.95,
EASE = 0.25,

/*

used for sine approximation, but Math.sin in Chrome is still fast enough :)http://jsperf.com/math-sin-vs-sine-approximation

B = 4 / Math.PI,
C = -4 / Math.pow( Math.PI, 2 ),
P = 0.225,

*/

container,
particle,
mouse,
stats,
list,
ctx,
tog,
man,
dx, dy,
mx, my,
d, t, f,
a, b,
i, n,
w, h,
p, s,
r, c
;

particle = {
vx: 0,
vy: 0,
x: 0,
y: 0
};

function init() {

man = false;
tog = true;

list = [];

w  = COLS * SPACING + MARGIN * 2;
h  = ROWS * SPACING + MARGIN * 2;

for ( i = 0; i < NUM_PARTICLES; i++ ) {

p = Object.create( particle );
p.x = p.ox = MARGIN + SPACING * ( i % COLS );
p.y = p.oy = MARGIN + SPACING * Math.floor( i / COLS );

list[i] = p;
}


}
init()


function draw(){
    skCanvasSave(canvas);
    skCanvasScale(canvas, devicePixelRatio, devicePixelRatio);


if ( tog = !tog ) {

if ( !man ) {

  t = +new Date() * 0.001;
  mx = w * 0.5 + ( Math.cos( t * 2.1 ) * Math.cos( t * 0.9 ) * w * 0.45 );
  my = h * 0.5 + ( Math.sin( t * 3.2 ) * Math.tan( Math.sin( t * 0.8 ) ) * h * 0.45 );
}
  
for ( i = 0; i < NUM_PARTICLES; i++ ) {
  
  p = list[i];
  
  d = ( dx = mx - p.x ) * dx + ( dy = my - p.y ) * dy;
  f = -THICKNESS / d;

  if ( d < THICKNESS ) {
    t = Math.atan2( dy, dx );
    p.vx += f * Math.cos(t);
    p.vy += f * Math.sin(t);
  }

  p.x += ( p.vx *= DRAG ) + (p.ox - p.x) * EASE;
  p.y += ( p.vy *= DRAG ) + (p.oy - p.y) * EASE;

}

}
    const fill = skPaintNew();
    skPaintSetColor(fill, skColorSetArgb(0xFF, 0x00, 0x00, 0x00));
    skCanvasDrawPaint(canvas, fill);

    const info2 = new Int32Array([
        0, 0, w, h, enums.RGBA_8888_SK_COLORTYPE, enums.OPAQUE_SK_ALPHATYPE
    ]);
    const bitmap = skPaintNew();
    const img = skBitmapNew();
    skBitmapTryAllocPixels(img, info2.buffer, w*4);
    const pixels = new Uint8Array(w*h*4);
    for ( i = 0; i < NUM_PARTICLES; i++ ) {
        p = list[i];
        pixels[n = ( ~~p.x + ( ~~p.y * w ) ) * 4] = pixels[n+1] = pixels[n+2] = COLOR, pixels[n+3] = 255;
    }
    skBitmapSetPixels(img, pixels.buffer);
    skCanvasDrawBitmap(canvas, img, 0, 0, bitmap);



skCanvasRestore(canvas);
}

let frames = 0;
let t0 = 0;
let previous = glfwGetTime();
function drawLoop() {
    if (!glfwWindowShouldClose(window)) {
        setTimeout(() => {
            const t = performance.now();
            if (t - t0 > 1.0 || frames === 0) {
                const fps = Math.floor((frames / (t - t0)) * 1e3);
                glfwSetWindowTitle(window, `FPS: ${fps}`);
                t0 = t;
                frames = 0;
            }
            frames++;

            drawLoop();
        }, 0);
    } else {
        glfwDestroyWindow(window);
        glfwTerminate();
        process.exit(0);
    }

    let now = glfwGetTime();
    let delta = now - previous;
    previous = now;

    draw(canvas, devicePixelRatio, now);

    grContextFlush(context);

    glfwSwapBuffers(window);

    glfwPollEvents();
}
drawLoop();
