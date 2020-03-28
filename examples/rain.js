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
const canvas = skSurfaceGetCanvas(surface);



const w = 1280;
const h = 720;

//parameters
total = w,
accelleration = .1,

//afterinitial calculations
size = w/total,
occupation = w/total,
colors = [],
dots = [],
dotsVel = [];

//setting the colors' hue
//and y level for all dots
var portion = 255/total;
for(var i = 0; i < total; ++i){
  colors[i] = portion * i;
  
  dots[i] = h;
  dotsVel[i] = 10;
}

function draw(){
    skCanvasSave(canvas);
    skCanvasScale(canvas, devicePixelRatio, devicePixelRatio);

    const fill = skPaintNew();
    skPaintSetColor(fill, skColorSetArgb(0xFF, 0x00, 0x00, 0x00));
    skCanvasDrawPaint(canvas, fill);
  
  for(var i = 0; i < total; ++i){
    var currentY = dots[i] - 1;
    dots[i] += dotsVel[i] += accelleration;
    
    skPaintSetColor(fill, skColorSetArgb(0xFF, colors[i], 255-colors[i], 255));
    const rect = new skRect({
        left: occupation * i,
        top: currentY,
        right: occupation * i + size,
        bottom: currentY + dotsVel[i] + 1
    });
    skCanvasDrawRect(canvas, rect, fill);
    
    if(dots[i] > h && Math.random() < .01){
      dots[i] = dotsVel[i] = 0;
    }
  }

  skCanvasRestore(canvas);
}

let frames = 0;
let t0 = 0;
let previous = glfwGetTime();
function drawLoop() {
    if (!glfwWindowShouldClose(window)) {
        setTimeout(() => {
            const t = performance.now();
            if (t - t0 > 1000.0 || frames === 0) {
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
