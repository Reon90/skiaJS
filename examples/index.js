const fs = require('fs');
const skia = require('../generated/interface');

Object.assign(global, skia);

const info = new Int32Array([
    0, 0, 1280, 720, enums.RGBA_8888_SK_COLORTYPE, enums.OPAQUE_SK_ALPHATYPE
]);
const surface = skSurfaceNewRaster(info.buffer, 1280*4, null);
const canvas = skSurfaceGetCanvas(surface);

function draw(canvas) {

const fill = skPaintNew();
skPaintSetColor(fill, skColorSetArgb(0xFF, 0xFF, 0xFF, 0xFF));
skCanvasDrawPaint(canvas, fill);

skPaintSetColor(fill, skColorSetArgb(0xFF, 0xFF, 0x00, 0xFF));
const rect = new Float32Array([
    100,
    100,
    540,
    380
]);
skCanvasDrawRect(canvas, rect.buffer, fill);

const stroke = skPaintNew();
skPaintSetColor(stroke, skColorSetArgb(0xFF, 0xFF, 0x00, 0x00));
skPaintSetAntialias(stroke, true);
skPaintSetStyle(stroke, enums.STROKE_SK_PAINT_STYLE);
skPaintSetStrokeWidth(stroke, 5.0);
const path = skPathNew();

skPathMoveTo(path, 50.0, 50.0);
skPathLineTo(path, 590.0, 50.0);
skPathCubicTo(path, -490.0, 50.0, 1130.0, 430.0, 50.0, 430.0);
skPathLineTo(path, 590.0, 430.0);
const intervals = new Float32Array([10, 20]);
const effect =  skPathEffectCreateDash(intervals.buffer, 2, 25);
skPaintSetPathEffect(stroke, effect);
skCanvasDrawPath(canvas, path, stroke);

skPaintSetColor(fill, skColorSetArgb(0x80, 0x00, 0xFF, 0x00));
const rect2 = new Float32Array([
    120,
    120,
    520,
    360
]);
const mask = skMaskfilterNewBlur(enums.NORMAL_SK_BLUR_STYLE, 10.0);
skPaintSetMaskfilter(fill, mask);
skCanvasDrawOval(canvas, rect2.buffer, fill);

const familyName = "Times New Roman";
const style = skFontstyleNew(400, 1, enums.UPRIGHT_SK_FONT_STYLE_SLANT);
const typeface = skTypefaceCreateFromNameWithFontStyle(familyName, style);
const text = skPaintNew();
skPaintSetAntialias(text, true);
skPaintSetColor(text, skColorSetArgb(0xFF, 0xFF, 0x00, 0x00));
skPaintSetTextsize(text, 50.0);
skPaintSetTypeface(text, typeface);
const str = "skiaJS";
skCanvasDrawText(canvas, str, str.length, 1000.0, 50.0, text);

const size = new Int32Array([10, 10]);
const shader = skPaintNew();
const noise = skShaderNewPerlinNoiseTurbulence(0.8, 0.3, 10, 0.383928392, size.buffer);
skPaintSetShader(shader, noise);
const rect3 = new Float32Array([560.0, 100.0, 940.0, 380.0]);
skCanvasDrawRect(canvas, rect3.buffer, shader);

const s = 200;
const info2 = new Int32Array([
    0, 0, s, s, enums.GRAY_8_SK_COLORTYPE, enums.OPAQUE_SK_ALPHATYPE
]);
const bitmap = skPaintNew();
const img = skBitmapNew();
skBitmapTryAllocPixels(img, info2.buffer, s);
const pixels = new Uint8Array(s*s);
for (let i = 0; i < s*s; i++) {
    if (i%2 == 0 && i%3 == 0) {
        pixels[i] = 0xFF;
    } else {
        pixels[i] = 0x00;
    }
}
skBitmapSetPixels(img, pixels.buffer);
skCanvasDrawBitmap(canvas, img, 1000.0, 100.0, bitmap);

skCanvasSave(canvas);
const stroke2 = skPaintNew();
skPaintSetColor(stroke2, skColorSetArgb(0xFF, 0x00, 0x00, 0xFF));
skPaintSetAntialias(stroke2, true);
skPaintSetStyle(stroke2, enums.STROKE_SK_PAINT_STYLE);
skPaintSetStrokeWidth(stroke2, 5.0);
const path2 = skPathNew();
const svg = "m451.111 451.111h-451.111v-451.111h451.111zm-386.667-64.444h322.222v-322.223h-322.222z";
skPathParseSvgString(path2, svg);
skCanvasTranslate(canvas, 1000.0, 500.0);
skCanvasScale(canvas, 0.2, 0.2);
skCanvasDrawPath(canvas, path2, stroke2);
skCanvasRestore(canvas);

skCanvasSave(canvas);
const luma = skColorfilterNewLumaColor();
const imgfilter =  skImagefilterNewColorFilter(luma, null, null);
const imgpaint = skPaintNew();
skPaintSetImagefilter(imgpaint, imgfilter);
const url = "/Users/akunets/SkiaSharp/images/icon.png";
const encoded = skDataNewFromFile(url);
const rect4 = new Int32Array([0, 0, 1024, 1024]);
const image2 = skImageNewFromEncoded(encoded, rect4.buffer);
skCanvasScale(canvas, 0.2, 0.2);
skCanvasDrawImage(canvas, image2, 1000.0, 2500.0, imgpaint);
skCanvasRestore(canvas);

const pointfill = skPaintNew();
const points = new Float32Array([900.0, 600.0, 1000.0, 700.0]);
skCanvasDrawPoints(canvas, enums.LINES_SK_POINT_MODE, 2, points.buffer, pointfill);

const rrect = skPaintNew();
const rounded = skRrectNew();
const rect6 = new Float32Array([460.0, 500.0, 740.0, 700.0]);
skRrectSetRectXy(rounded, rect6.buffer, 50, 50);
skCanvasDrawRrect(canvas, rounded, rrect);

skPathDelete(path);
skPaintDelete(stroke);
skPaintDelete(fill);
}

draw(canvas);

const image = skSurfaceNewImageSnapshot(surface);
const data = skImageEncode(image);
const l = skDataGetSize(data);
const p = skDataGetData(data);

const d = getMemory(p, BigInt(l));
fs.writeFileSync('./res.png', new Int8Array(d));
