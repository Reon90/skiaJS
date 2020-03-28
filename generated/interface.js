const { platform } = process;
const skia = require(`../build/${platform}/Release/skiaJS.node`);

function skColorSetArgb(a, r, g, b) {
    return (((a) << 24) | ((r) << 16) | ((g) << 8) | (b));
}

function getMemory(p, l) {
    return skia.getMemory(p, l);
}



function grContextMakeGl(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.grContextMakeGl(ra1);
}
function grContextUnref(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.grContextUnref(ra1);
}
function grContextAbandonContext(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.grContextAbandonContext(ra1);
}
function grContextReleaseResourcesAndAbandonContext(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.grContextReleaseResourcesAndAbandonContext(ra1);
}
function grContextGetResourceCacheLimits(ra1,ra2,ra3) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.grContextGetResourceCacheLimits(ra1,ra2,ra3);
}
function grContextSetResourceCacheLimits(ra1,ra2,ra3) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.grContextSetResourceCacheLimits(ra1,ra2,ra3);
}
function grContextGetResourceCacheUsage(ra1,ra2,ra3) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.grContextGetResourceCacheUsage(ra1,ra2,ra3);
}
function grContextGetMaxSurfaceSampleCountForColorType(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.grContextGetMaxSurfaceSampleCountForColorType(ra1,ra2);
}
function grContextFlush(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.grContextFlush(ra1);
}
function grContextResetContext(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.grContextResetContext(ra1,ra2);
}
function grContextGetBackend(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.grContextGetBackend(ra1);
}
function grGlinterfaceCreateNativeInterface() {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.grGlinterfaceCreateNativeInterface();
}
function grGlinterfaceAssembleInterface(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.grGlinterfaceAssembleInterface(ra1,ra2);
}
function grGlinterfaceAssembleGlInterface(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.grGlinterfaceAssembleGlInterface(ra1,ra2);
}
function grGlinterfaceAssembleGlesInterface(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.grGlinterfaceAssembleGlesInterface(ra1,ra2);
}
function grGlinterfaceUnref(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.grGlinterfaceUnref(ra1);
}
function grGlinterfaceValidate(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.grGlinterfaceValidate(ra1);
}
function grGlinterfaceHasExtension(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.grGlinterfaceHasExtension(ra1,ra2);
}
function grBackendtextureNewGl(ra1,ra2,ra3,ra4) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.grBackendtextureNewGl(ra1,ra2,ra3,ra4);
}
function grBackendtextureDelete(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.grBackendtextureDelete(ra1);
}
function grBackendtextureIsValid(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.grBackendtextureIsValid(ra1);
}
function grBackendtextureGetWidth(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.grBackendtextureGetWidth(ra1);
}
function grBackendtextureGetHeight(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.grBackendtextureGetHeight(ra1);
}
function grBackendtextureHasMipmaps(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.grBackendtextureHasMipmaps(ra1);
}
function grBackendtextureGetBackend(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.grBackendtextureGetBackend(ra1);
}
function grBackendtextureGetGlTextureinfo(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.grBackendtextureGetGlTextureinfo(ra1,ra2);
}
function grBackendrendertargetNewGl(ra1,ra2,ra3,ra4,ra5) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.grBackendrendertargetNewGl(ra1,ra2,ra3,ra4,ra5);
}
function grBackendrendertargetDelete(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.grBackendrendertargetDelete(ra1);
}
function grBackendrendertargetIsValid(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.grBackendrendertargetIsValid(ra1);
}
function grBackendrendertargetGetWidth(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.grBackendrendertargetGetWidth(ra1);
}
function grBackendrendertargetGetHeight(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.grBackendrendertargetGetHeight(ra1);
}
function grBackendrendertargetGetSamples(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.grBackendrendertargetGetSamples(ra1);
}
function grBackendrendertargetGetStencils(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.grBackendrendertargetGetStencils(ra1);
}
function grBackendrendertargetGetBackend(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.grBackendrendertargetGetBackend(ra1);
}
function grBackendrendertargetGetGlFramebufferinfo(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.grBackendrendertargetGetGlFramebufferinfo(ra1,ra2);
}
function skBitmapDestructor(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skBitmapDestructor(ra1);
}
function skBitmapNew() {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skBitmapNew();
}
function skBitmapGetInfo(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skBitmapGetInfo(ra1,ra2);
}
function skBitmapGetPixels(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skBitmapGetPixels(ra1,ra2);
}
function skBitmapGetRowBytes(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skBitmapGetRowBytes(ra1);
}
function skBitmapGetByteCount(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skBitmapGetByteCount(ra1);
}
function skBitmapReset(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skBitmapReset(ra1);
}
function skBitmapIsNull(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skBitmapIsNull(ra1);
}
function skBitmapIsImmutable(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skBitmapIsImmutable(ra1);
}
function skBitmapSetImmutable(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skBitmapSetImmutable(ra1);
}
function skBitmapIsVolatile(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skBitmapIsVolatile(ra1);
}
function skBitmapSetVolatile(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skBitmapSetVolatile(ra1,ra2);
}
function skBitmapErase(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skBitmapErase(ra1,ra2);
}
function skBitmapEraseRect(ra1,ra2,ra3) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skBitmapEraseRect(ra1,ra2,ra3);
}
function skBitmapGetAddr_8(ra1,ra2,ra3) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skBitmapGetAddr_8(ra1,ra2,ra3);
}
function skBitmapGetAddr_16(ra1,ra2,ra3) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skBitmapGetAddr_16(ra1,ra2,ra3);
}
function skBitmapGetAddr_32(ra1,ra2,ra3) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skBitmapGetAddr_32(ra1,ra2,ra3);
}
function skBitmapGetAddr(ra1,ra2,ra3) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skBitmapGetAddr(ra1,ra2,ra3);
}
function skBitmapGetPixelColor(ra1,ra2,ra3) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skBitmapGetPixelColor(ra1,ra2,ra3);
}
function skBitmapSetPixelColor(ra1,ra2,ra3,ra4) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skBitmapSetPixelColor(ra1,ra2,ra3,ra4);
}
function skBitmapReadyToDraw(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skBitmapReadyToDraw(ra1);
}
function skBitmapGetPixelColors(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skBitmapGetPixelColors(ra1,ra2);
}
function skBitmapSetPixelColors(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skBitmapSetPixelColors(ra1,ra2);
}
function skBitmapInstallPixels(ra1,ra2,ra3,ra4,ra5,ra6) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skBitmapInstallPixels(ra1,ra2,ra3,ra4,ra5,ra6);
}
function skBitmapInstallPixelsWithPixmap(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skBitmapInstallPixelsWithPixmap(ra1,ra2);
}
function skBitmapInstallMaskPixels(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skBitmapInstallMaskPixels(ra1,ra2);
}
function skBitmapTryAllocPixels(ra1,ra2,ra3) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skBitmapTryAllocPixels(ra1,ra2,ra3);
}
function skBitmapTryAllocPixelsWithFlags(ra1,ra2,ra3) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skBitmapTryAllocPixelsWithFlags(ra1,ra2,ra3);
}
function skBitmapSetPixels(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skBitmapSetPixels(ra1,ra2);
}
function skBitmapPeekPixels(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skBitmapPeekPixels(ra1,ra2);
}
function skBitmapExtractSubset(ra1,ra2,ra3) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skBitmapExtractSubset(ra1,ra2,ra3);
}
function skBitmapExtractAlpha(ra1,ra2,ra3,ra4) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skBitmapExtractAlpha(ra1,ra2,ra3,ra4);
}
function skBitmapNotifyPixelsChanged(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skBitmapNotifyPixelsChanged(ra1);
}
function skBitmapSwap(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skBitmapSwap(ra1,ra2);
}
function skCanvasDestroy(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skCanvasDestroy(ra1);
}
function skCanvasSave(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skCanvasSave(ra1);
}
function skCanvasSaveLayer(ra1,ra2,ra3) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skCanvasSaveLayer(ra1,ra2,ra3);
}
function skCanvasRestore(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skCanvasRestore(ra1);
}
function skCanvasTranslate(ra1,ra2,ra3) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skCanvasTranslate(ra1,ra2,ra3);
}
function skCanvasScale(ra1,ra2,ra3) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skCanvasScale(ra1,ra2,ra3);
}
function skCanvasRotateDegrees(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skCanvasRotateDegrees(ra1,ra2);
}
function skCanvasRotateRadians(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skCanvasRotateRadians(ra1,ra2);
}
function skCanvasSkew(ra1,ra2,ra3) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skCanvasSkew(ra1,ra2,ra3);
}
function skCanvasConcat(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skCanvasConcat(ra1,ra2);
}
function skCanvasQuickReject(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skCanvasQuickReject(ra1,ra2);
}
function skCanvasClipRegion(ra1,ra2,ra3) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skCanvasClipRegion(ra1,ra2,ra3);
}
function skCanvasDrawPaint(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skCanvasDrawPaint(ra1,ra2);
}
function skCanvasDrawRect(ra1,ra2,ra3) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skCanvasDrawRect(ra1,ra2,ra3);
}
function skCanvasDrawRrect(ra1,ra2,ra3) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skCanvasDrawRrect(ra1,ra2,ra3);
}
function skCanvasDrawRegion(ra1,ra2,ra3) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skCanvasDrawRegion(ra1,ra2,ra3);
}
function skCanvasDrawCircle(ra1,ra2,ra3,ra4,ra5) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skCanvasDrawCircle(ra1,ra2,ra3,ra4,ra5);
}
function skCanvasDrawOval(ra1,ra2,ra3) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skCanvasDrawOval(ra1,ra2,ra3);
}
function skCanvasDrawPath(ra1,ra2,ra3) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skCanvasDrawPath(ra1,ra2,ra3);
}
function skCanvasDrawImage(ra1,ra2,ra3,ra4,ra5) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skCanvasDrawImage(ra1,ra2,ra3,ra4,ra5);
}
function skCanvasDrawImageRect(ra1,ra2,ra3,ra4,ra5) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skCanvasDrawImageRect(ra1,ra2,ra3,ra4,ra5);
}
function skCanvasDrawPicture(ra1,ra2,ra3,ra4) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skCanvasDrawPicture(ra1,ra2,ra3,ra4);
}
function skCanvasDrawDrawable(ra1,ra2,ra3) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skCanvasDrawDrawable(ra1,ra2,ra3);
}
function skCanvasClear(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skCanvasClear(ra1,ra2);
}
function skCanvasDiscard(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skCanvasDiscard(ra1);
}
function skCanvasGetSaveCount(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skCanvasGetSaveCount(ra1);
}
function skCanvasRestoreToCount(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skCanvasRestoreToCount(ra1,ra2);
}
function skCanvasDrawColor(ra1,ra2,ra3) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skCanvasDrawColor(ra1,ra2,ra3);
}
function skCanvasDrawPoints(ra1,ra2,ra3,ra4,ra5) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skCanvasDrawPoints(ra1,ra2,ra3,ra4,ra5);
}
function skCanvasDrawPoint(ra1,ra2,ra3,ra4) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skCanvasDrawPoint(ra1,ra2,ra3,ra4);
}
function skCanvasDrawLine(ra1,ra2,ra3,ra4,ra5,ra6) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skCanvasDrawLine(ra1,ra2,ra3,ra4,ra5,ra6);
}
function skCanvasDrawText(ra1,ra2,ra3,ra4,ra5,ra6) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skCanvasDrawText(ra1,ra2,ra3,ra4,ra5,ra6);
}
function skCanvasDrawPosText(ra1,ra2,ra3,ra4,ra5) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skCanvasDrawPosText(ra1,ra2,ra3,ra4,ra5);
}
function skCanvasDrawTextOnPath(ra1,ra2,ra3,ra4,ra5,ra6,ra7) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skCanvasDrawTextOnPath(ra1,ra2,ra3,ra4,ra5,ra6,ra7);
}
function skCanvasDrawTextBlob(ra1,ra2,ra3,ra4,ra5) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skCanvasDrawTextBlob(ra1,ra2,ra3,ra4,ra5);
}
function skCanvasDrawBitmap(ra1,ra2,ra3,ra4,ra5) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skCanvasDrawBitmap(ra1,ra2,ra3,ra4,ra5);
}
function skCanvasDrawBitmapRect(ra1,ra2,ra3,ra4,ra5) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skCanvasDrawBitmapRect(ra1,ra2,ra3,ra4,ra5);
}
function skCanvasResetMatrix(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skCanvasResetMatrix(ra1);
}
function skCanvasSetMatrix(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skCanvasSetMatrix(ra1,ra2);
}
function skCanvasGetTotalMatrix(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skCanvasGetTotalMatrix(ra1,ra2);
}
function skCanvasDrawRoundRect(ra1,ra2,ra3,ra4,ra5) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skCanvasDrawRoundRect(ra1,ra2,ra3,ra4,ra5);
}
function skCanvasClipRectWithOperation(ra1,ra2,ra3,ra4) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skCanvasClipRectWithOperation(ra1,ra2,ra3,ra4);
}
function skCanvasClipPathWithOperation(ra1,ra2,ra3,ra4) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skCanvasClipPathWithOperation(ra1,ra2,ra3,ra4);
}
function skCanvasClipRrectWithOperation(ra1,ra2,ra3,ra4) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skCanvasClipRrectWithOperation(ra1,ra2,ra3,ra4);
}
function skCanvasGetLocalClipBounds(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skCanvasGetLocalClipBounds(ra1,ra2);
}
function skCanvasGetDeviceClipBounds(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skCanvasGetDeviceClipBounds(ra1,ra2);
}
function skCanvasFlush(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skCanvasFlush(ra1);
}
function skCanvasNewFromBitmap(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skCanvasNewFromBitmap(ra1);
}
function skCanvasDrawAnnotation(ra1,ra2,ra3,ra4) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skCanvasDrawAnnotation(ra1,ra2,ra3,ra4);
}
function skCanvasDrawUrlAnnotation(ra1,ra2,ra3) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skCanvasDrawUrlAnnotation(ra1,ra2,ra3);
}
function skCanvasDrawNamedDestinationAnnotation(ra1,ra2,ra3) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skCanvasDrawNamedDestinationAnnotation(ra1,ra2,ra3);
}
function skCanvasDrawLinkDestinationAnnotation(ra1,ra2,ra3) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skCanvasDrawLinkDestinationAnnotation(ra1,ra2,ra3);
}
function skCanvasDrawBitmapLattice(ra1,ra2,ra3,ra4,ra5) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skCanvasDrawBitmapLattice(ra1,ra2,ra3,ra4,ra5);
}
function skCanvasDrawImageLattice(ra1,ra2,ra3,ra4,ra5) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skCanvasDrawImageLattice(ra1,ra2,ra3,ra4,ra5);
}
function skCanvasDrawBitmapNine(ra1,ra2,ra3,ra4,ra5) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skCanvasDrawBitmapNine(ra1,ra2,ra3,ra4,ra5);
}
function skCanvasDrawImageNine(ra1,ra2,ra3,ra4,ra5) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skCanvasDrawImageNine(ra1,ra2,ra3,ra4,ra5);
}
function skCanvasDrawVertices(ra1,ra2,ra3,ra4) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skCanvasDrawVertices(ra1,ra2,ra3,ra4);
}
function skCanvasDrawArc(ra1,ra2,ra3,ra4,ra5,ra6) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skCanvasDrawArc(ra1,ra2,ra3,ra4,ra5,ra6);
}
function skCanvasDrawDrrect(ra1,ra2,ra3,ra4) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skCanvasDrawDrrect(ra1,ra2,ra3,ra4);
}
function skCanvasDrawAtlas(ra1,ra2,ra3,ra4,ra5,ra6,ra7,ra8,ra9) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skCanvasDrawAtlas(ra1,ra2,ra3,ra4,ra5,ra6,ra7,ra8,ra9);
}
function skCanvasDrawPatch(ra1,ra2,ra3,ra4,ra5,ra6) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skCanvasDrawPatch(ra1,ra2,ra3,ra4,ra5,ra6);
}
function skCanvasIsClipEmpty(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skCanvasIsClipEmpty(ra1);
}
function skCanvasIsClipRect(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skCanvasIsClipRect(ra1);
}
function skNodrawCanvasNew(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skNodrawCanvasNew(ra1,ra2);
}
function skNodrawCanvasDestroy(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skNodrawCanvasDestroy(ra1);
}
function skNwayCanvasNew(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skNwayCanvasNew(ra1,ra2);
}
function skNwayCanvasDestroy(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skNwayCanvasDestroy(ra1);
}
function skNwayCanvasAddCanvas(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skNwayCanvasAddCanvas(ra1,ra2);
}
function skNwayCanvasRemoveCanvas(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skNwayCanvasRemoveCanvas(ra1,ra2);
}
function skNwayCanvasRemoveAll(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skNwayCanvasRemoveAll(ra1);
}
function skOverdrawCanvasNew(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skOverdrawCanvasNew(ra1);
}
function skOverdrawCanvasDestroy(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skOverdrawCanvasDestroy(ra1);
}
function skCodecMinBufferedBytesNeeded() {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skCodecMinBufferedBytesNeeded();
}
function skCodecNewFromStream(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skCodecNewFromStream(ra1,ra2);
}
function skCodecNewFromData(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skCodecNewFromData(ra1);
}
function skCodecDestroy(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skCodecDestroy(ra1);
}
function skCodecGetInfo(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skCodecGetInfo(ra1,ra2);
}
function skCodecGetOrigin(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skCodecGetOrigin(ra1);
}
function skCodecGetScaledDimensions(ra1,ra2,ra3) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skCodecGetScaledDimensions(ra1,ra2,ra3);
}
function skCodecGetValidSubset(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skCodecGetValidSubset(ra1,ra2);
}
function skCodecGetEncodedFormat(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skCodecGetEncodedFormat(ra1);
}
function skCodecGetPixels(ra1,ra2,ra3,ra4,ra5) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skCodecGetPixels(ra1,ra2,ra3,ra4,ra5);
}
function skCodecStartIncrementalDecode(ra1,ra2,ra3,ra4,ra5) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skCodecStartIncrementalDecode(ra1,ra2,ra3,ra4,ra5);
}
function skCodecIncrementalDecode(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skCodecIncrementalDecode(ra1,ra2);
}
function skCodecStartScanlineDecode(ra1,ra2,ra3) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skCodecStartScanlineDecode(ra1,ra2,ra3);
}
function skCodecGetScanlines(ra1,ra2,ra3,ra4) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skCodecGetScanlines(ra1,ra2,ra3,ra4);
}
function skCodecSkipScanlines(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skCodecSkipScanlines(ra1,ra2);
}
function skCodecGetScanlineOrder(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skCodecGetScanlineOrder(ra1);
}
function skCodecNextScanline(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skCodecNextScanline(ra1);
}
function skCodecOutputScanline(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skCodecOutputScanline(ra1,ra2);
}
function skCodecGetFrameCount(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skCodecGetFrameCount(ra1);
}
function skCodecGetFrameInfo(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skCodecGetFrameInfo(ra1,ra2);
}
function skCodecGetFrameInfoForIndex(ra1,ra2,ra3) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skCodecGetFrameInfoForIndex(ra1,ra2,ra3);
}
function skCodecGetRepetitionCount(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skCodecGetRepetitionCount(ra1);
}
function skColorfilterUnref(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skColorfilterUnref(ra1);
}
function skColorfilterNewMode(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skColorfilterNewMode(ra1,ra2);
}
function skColorfilterNewLighting(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skColorfilterNewLighting(ra1,ra2);
}
function skColorfilterNewCompose(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skColorfilterNewCompose(ra1,ra2);
}
function skColorfilterNewColorMatrix(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skColorfilterNewColorMatrix(ra1);
}
function skColorfilterNewLumaColor() {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skColorfilterNewLumaColor();
}
function skColorfilterNewHighContrast(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skColorfilterNewHighContrast(ra1);
}
function skColorfilterNewTable(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skColorfilterNewTable(ra1);
}
function skColorfilterNewTableArgb(ra1,ra2,ra3,ra4) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skColorfilterNewTableArgb(ra1,ra2,ra3,ra4);
}
function skColorspaceUnref(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skColorspaceUnref(ra1);
}
function skColorspaceNewSrgb() {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skColorspaceNewSrgb();
}
function skColorspaceNewSrgbLinear() {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skColorspaceNewSrgbLinear();
}
function skColorspaceNewIcc(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skColorspaceNewIcc(ra1,ra2);
}
function skColorspaceNewRgbWithGamma(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skColorspaceNewRgbWithGamma(ra1,ra2);
}
function skColorspaceNewRgbWithGammaAndGamut(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skColorspaceNewRgbWithGammaAndGamut(ra1,ra2);
}
function skColorspaceNewRgbWithCoeffs(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skColorspaceNewRgbWithCoeffs(ra1,ra2);
}
function skColorspaceNewRgbWithCoeffsAndGamut(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skColorspaceNewRgbWithCoeffsAndGamut(ra1,ra2);
}
function skColorspaceNewRgbWithGammaNamed(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skColorspaceNewRgbWithGammaNamed(ra1,ra2);
}
function skColorspaceNewRgbWithGammaNamedAndGamut(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skColorspaceNewRgbWithGammaNamedAndGamut(ra1,ra2);
}
function skColorspaceGammaGetType(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skColorspaceGammaGetType(ra1);
}
function skColorspaceGammaGetGammaNamed(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skColorspaceGammaGetGammaNamed(ra1);
}
function skColorspaceGammaCloseToSrgb(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skColorspaceGammaCloseToSrgb(ra1);
}
function skColorspaceGammaIsLinear(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skColorspaceGammaIsLinear(ra1);
}
function skColorspaceIsSrgb(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skColorspaceIsSrgb(ra1);
}
function skColorspaceEquals(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skColorspaceEquals(ra1,ra2);
}
function skColorspaceToXyzd50(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skColorspaceToXyzd50(ra1,ra2);
}
function skColorspaceAsToXyzd50(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skColorspaceAsToXyzd50(ra1);
}
function skColorspaceAsFromXyzd50(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skColorspaceAsFromXyzd50(ra1);
}
function skColorspaceIsNumericalTransferFn(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skColorspaceIsNumericalTransferFn(ra1,ra2);
}
function skColorspaceprimariesToXyzd50(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skColorspaceprimariesToXyzd50(ra1,ra2);
}
function skColorspaceTransferFnInvert(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skColorspaceTransferFnInvert(ra1,ra2);
}
function skColorspaceTransferFnTransform(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skColorspaceTransferFnTransform(ra1,ra2);
}
function skColortableUnref(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skColortableUnref(ra1);
}
function skColortableNew(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skColortableNew(ra1,ra2);
}
function skColortableCount(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skColortableCount(ra1);
}
function skColortableReadColors(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skColortableReadColors(ra1,ra2);
}
function skDataNewEmpty() {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skDataNewEmpty();
}
function skDataNewWithCopy(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skDataNewWithCopy(ra1,ra2);
}
function skDataNewSubset(ra1,ra2,ra3) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skDataNewSubset(ra1,ra2,ra3);
}
function skDataRef(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skDataRef(ra1);
}
function skDataUnref(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skDataUnref(ra1);
}
function skDataGetSize(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skDataGetSize(ra1);
}
function skDataGetData(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skDataGetData(ra1);
}
function skDataNewFromFile(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skDataNewFromFile(ra1);
}
function skDataNewFromStream(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skDataNewFromStream(ra1,ra2);
}
function skDataGetBytes(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skDataGetBytes(ra1);
}
function skDataNewWithProc(ra1,ra2,ra3,ra4) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skDataNewWithProc(ra1,ra2,ra3,ra4);
}
function skDataNewUninitialized(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skDataNewUninitialized(ra1);
}
function skDocumentUnref(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skDocumentUnref(ra1);
}
function skDocumentCreatePdfFromStream(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skDocumentCreatePdfFromStream(ra1);
}
function skDocumentCreatePdfFromStreamWithMetadata(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skDocumentCreatePdfFromStreamWithMetadata(ra1,ra2);
}
function skDocumentCreateXpsFromStream(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skDocumentCreateXpsFromStream(ra1,ra2);
}
function skDocumentBeginPage(ra1,ra2,ra3,ra4) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skDocumentBeginPage(ra1,ra2,ra3,ra4);
}
function skDocumentEndPage(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skDocumentEndPage(ra1);
}
function skDocumentClose(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skDocumentClose(ra1);
}
function skDocumentAbort(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skDocumentAbort(ra1);
}
function skDrawableUnref(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skDrawableUnref(ra1);
}
function skDrawableGetGenerationId(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skDrawableGetGenerationId(ra1);
}
function skDrawableGetBounds(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skDrawableGetBounds(ra1,ra2);
}
function skDrawableDraw(ra1,ra2,ra3) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skDrawableDraw(ra1,ra2,ra3);
}
function skDrawableNewPictureSnapshot(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skDrawableNewPictureSnapshot(ra1);
}
function skDrawableNotifyDrawingChanged(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skDrawableNotifyDrawingChanged(ra1);
}
function skRefcntUnique(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skRefcntUnique(ra1);
}
function skRefcntGetRefCount(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skRefcntGetRefCount(ra1);
}
function skRefcntSafeRef(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skRefcntSafeRef(ra1);
}
function skRefcntSafeUnref(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skRefcntSafeUnref(ra1);
}
function skNvrefcntUnique(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skNvrefcntUnique(ra1);
}
function skNvrefcntGetRefCount(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skNvrefcntGetRefCount(ra1);
}
function skNvrefcntSafeRef(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skNvrefcntSafeRef(ra1);
}
function skNvrefcntSafeUnref(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skNvrefcntSafeUnref(ra1);
}
function skColortypeGetDefault_8888() {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skColortypeGetDefault_8888();
}
function skImageNewRasterCopy(ra1,ra2,ra3) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skImageNewRasterCopy(ra1,ra2,ra3);
}
function skImageNewRasterCopyWithPixmap(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skImageNewRasterCopyWithPixmap(ra1);
}
function skImageNewRasterData(ra1,ra2,ra3) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skImageNewRasterData(ra1,ra2,ra3);
}
function skImageNewRaster(ra1,ra2,ra3) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skImageNewRaster(ra1,ra2,ra3);
}
function skImageNewFromBitmap(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skImageNewFromBitmap(ra1);
}
function skImageNewFromEncoded(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skImageNewFromEncoded(ra1,ra2);
}
function skImageNewFromTexture(ra1,ra2,ra3,ra4,ra5,ra6,ra7,ra8) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skImageNewFromTexture(ra1,ra2,ra3,ra4,ra5,ra6,ra7,ra8);
}
function skImageNewFromAdoptedTexture(ra1,ra2,ra3,ra4,ra5,ra6) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skImageNewFromAdoptedTexture(ra1,ra2,ra3,ra4,ra5,ra6);
}
function skImageNewFromPicture(ra1,ra2,ra3,ra4) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skImageNewFromPicture(ra1,ra2,ra3,ra4);
}
function skImageMakeSubset(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skImageMakeSubset(ra1,ra2);
}
function skImageMakeNonTextureImage(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skImageMakeNonTextureImage(ra1);
}
function skImageMakeWithFilter(ra1,ra2,ra3,ra4,ra5,ra6) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skImageMakeWithFilter(ra1,ra2,ra3,ra4,ra5,ra6);
}
function skImageRef(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skImageRef(ra1);
}
function skImageUnref(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skImageUnref(ra1);
}
function skImageGetWidth(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skImageGetWidth(ra1);
}
function skImageGetHeight(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skImageGetHeight(ra1);
}
function skImageGetUniqueId(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skImageGetUniqueId(ra1);
}
function skImageGetAlphaType(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skImageGetAlphaType(ra1);
}
function skImageGetColorType(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skImageGetColorType(ra1);
}
function skImageGetColorspace(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skImageGetColorspace(ra1);
}
function skImageIsAlphaOnly(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skImageIsAlphaOnly(ra1);
}
function skImageMakeShader(ra1,ra2,ra3,ra4) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skImageMakeShader(ra1,ra2,ra3,ra4);
}
function skImagePeekPixels(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skImagePeekPixels(ra1,ra2);
}
function skImageIsTextureBacked(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skImageIsTextureBacked(ra1);
}
function skImageIsLazyGenerated(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skImageIsLazyGenerated(ra1);
}
function skImageReadPixels(ra1,ra2,ra3,ra4,ra5,ra6,ra7) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skImageReadPixels(ra1,ra2,ra3,ra4,ra5,ra6,ra7);
}
function skImageReadPixelsIntoPixmap(ra1,ra2,ra3,ra4,ra5) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skImageReadPixelsIntoPixmap(ra1,ra2,ra3,ra4,ra5);
}
function skImageScalePixels(ra1,ra2,ra3,ra4) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skImageScalePixels(ra1,ra2,ra3,ra4);
}
function skImageRefEncoded(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skImageRefEncoded(ra1);
}
function skImageEncode(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skImageEncode(ra1);
}
function skImageEncodeSpecific(ra1,ra2,ra3) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skImageEncodeSpecific(ra1,ra2,ra3);
}
function skImagefilterCroprectNew() {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skImagefilterCroprectNew();
}
function skImagefilterCroprectNewWithRect(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skImagefilterCroprectNewWithRect(ra1,ra2);
}
function skImagefilterCroprectDestructor(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skImagefilterCroprectDestructor(ra1);
}
function skImagefilterCroprectGetRect(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skImagefilterCroprectGetRect(ra1,ra2);
}
function skImagefilterCroprectGetFlags(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skImagefilterCroprectGetFlags(ra1);
}
function skImagefilterUnref(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skImagefilterUnref(ra1);
}
function skImagefilterNewMatrix(ra1,ra2,ra3) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skImagefilterNewMatrix(ra1,ra2,ra3);
}
function skImagefilterNewAlphaThreshold(ra1,ra2,ra3,ra4) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skImagefilterNewAlphaThreshold(ra1,ra2,ra3,ra4);
}
function skImagefilterNewBlur(ra1,ra2,ra3,ra4) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skImagefilterNewBlur(ra1,ra2,ra3,ra4);
}
function skImagefilterNewColorFilter(ra1,ra2,ra3) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skImagefilterNewColorFilter(ra1,ra2,ra3);
}
function skImagefilterNewCompose(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skImagefilterNewCompose(ra1,ra2);
}
function skImagefilterNewDisplacementMapEffect(ra1,ra2,ra3,ra4,ra5,ra6) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skImagefilterNewDisplacementMapEffect(ra1,ra2,ra3,ra4,ra5,ra6);
}
function skImagefilterNewDropShadow(ra1,ra2,ra3,ra4,ra5,ra6,ra7,ra8) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skImagefilterNewDropShadow(ra1,ra2,ra3,ra4,ra5,ra6,ra7,ra8);
}
function skImagefilterNewDistantLitDiffuse(ra1,ra2,ra3,ra4,ra5,ra6) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skImagefilterNewDistantLitDiffuse(ra1,ra2,ra3,ra4,ra5,ra6);
}
function skImagefilterNewPointLitDiffuse(ra1,ra2,ra3,ra4,ra5,ra6) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skImagefilterNewPointLitDiffuse(ra1,ra2,ra3,ra4,ra5,ra6);
}
function skImagefilterNewSpotLitDiffuse(ra1,ra2,ra3,ra4,ra5,ra6,ra7,ra8,ra9) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skImagefilterNewSpotLitDiffuse(ra1,ra2,ra3,ra4,ra5,ra6,ra7,ra8,ra9);
}
function skImagefilterNewDistantLitSpecular(ra1,ra2,ra3,ra4,ra5,ra6,ra7) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skImagefilterNewDistantLitSpecular(ra1,ra2,ra3,ra4,ra5,ra6,ra7);
}
function skImagefilterNewPointLitSpecular(ra1,ra2,ra3,ra4,ra5,ra6,ra7) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skImagefilterNewPointLitSpecular(ra1,ra2,ra3,ra4,ra5,ra6,ra7);
}
function skImagefilterNewSpotLitSpecular(ra1,ra2,ra3,ra4,ra5,ra6,ra7,ra8,ra9,ra10) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skImagefilterNewSpotLitSpecular(ra1,ra2,ra3,ra4,ra5,ra6,ra7,ra8,ra9,ra10);
}
function skImagefilterNewMagnifier(ra1,ra2,ra3,ra4) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skImagefilterNewMagnifier(ra1,ra2,ra3,ra4);
}
function skImagefilterNewMatrixConvolution(ra1,ra2,ra3,ra4,ra5,ra6,ra7,ra8,ra9) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skImagefilterNewMatrixConvolution(ra1,ra2,ra3,ra4,ra5,ra6,ra7,ra8,ra9);
}
function skImagefilterNewMerge(ra1,ra2,ra3) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skImagefilterNewMerge(ra1,ra2,ra3);
}
function skImagefilterNewDilate(ra1,ra2,ra3,ra4) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skImagefilterNewDilate(ra1,ra2,ra3,ra4);
}
function skImagefilterNewErode(ra1,ra2,ra3,ra4) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skImagefilterNewErode(ra1,ra2,ra3,ra4);
}
function skImagefilterNewOffset(ra1,ra2,ra3,ra4) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skImagefilterNewOffset(ra1,ra2,ra3,ra4);
}
function skImagefilterNewPicture(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skImagefilterNewPicture(ra1);
}
function skImagefilterNewPictureWithCroprect(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skImagefilterNewPictureWithCroprect(ra1,ra2);
}
function skImagefilterNewTile(ra1,ra2,ra3) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skImagefilterNewTile(ra1,ra2,ra3);
}
function skImagefilterNewXfermode(ra1,ra2,ra3,ra4) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skImagefilterNewXfermode(ra1,ra2,ra3,ra4);
}
function skImagefilterNewArithmetic(ra1,ra2,ra3,ra4,ra5,ra6,ra7,ra8) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skImagefilterNewArithmetic(ra1,ra2,ra3,ra4,ra5,ra6,ra7,ra8);
}
function skImagefilterNewImageSource(ra1,ra2,ra3,ra4) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skImagefilterNewImageSource(ra1,ra2,ra3,ra4);
}
function skImagefilterNewImageSourceDefault(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skImagefilterNewImageSourceDefault(ra1);
}
function skImagefilterNewPaint(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skImagefilterNewPaint(ra1,ra2);
}
function skMaskAllocImage(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skMaskAllocImage(ra1);
}
function skMaskFreeImage(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skMaskFreeImage(ra1);
}
function skMaskIsEmpty(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skMaskIsEmpty(ra1);
}
function skMaskComputeImageSize(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skMaskComputeImageSize(ra1);
}
function skMaskComputeTotalImageSize(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skMaskComputeTotalImageSize(ra1);
}
function skMaskGetAddr_1(ra1,ra2,ra3) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skMaskGetAddr_1(ra1,ra2,ra3);
}
function skMaskGetAddr_8(ra1,ra2,ra3) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skMaskGetAddr_8(ra1,ra2,ra3);
}
function skMaskGetAddrLcd_16(ra1,ra2,ra3) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skMaskGetAddrLcd_16(ra1,ra2,ra3);
}
function skMaskGetAddr_32(ra1,ra2,ra3) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skMaskGetAddr_32(ra1,ra2,ra3);
}
function skMaskGetAddr(ra1,ra2,ra3) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skMaskGetAddr(ra1,ra2,ra3);
}
function skMaskfilterRef(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skMaskfilterRef(ra1);
}
function skMaskfilterUnref(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skMaskfilterUnref(ra1);
}
function skMaskfilterNewBlur(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skMaskfilterNewBlur(ra1,ra2);
}
function skMaskfilterNewBlurWithFlags(ra1,ra2,ra3,ra4) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skMaskfilterNewBlurWithFlags(ra1,ra2,ra3,ra4);
}
function skMaskfilterNewTable(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skMaskfilterNewTable(ra1);
}
function skMaskfilterNewGamma(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skMaskfilterNewGamma(ra1);
}
function skMaskfilterNewClip(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skMaskfilterNewClip(ra1,ra2);
}
function skMatrixTryInvert(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skMatrixTryInvert(ra1,ra2);
}
function skMatrixConcat(ra1,ra2,ra3) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skMatrixConcat(ra1,ra2,ra3);
}
function skMatrixPreConcat(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skMatrixPreConcat(ra1,ra2);
}
function skMatrixPostConcat(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skMatrixPostConcat(ra1,ra2);
}
function skMatrixMapRect(ra1,ra2,ra3) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skMatrixMapRect(ra1,ra2,ra3);
}
function skMatrixMapPoints(ra1,ra2,ra3,ra4) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skMatrixMapPoints(ra1,ra2,ra3,ra4);
}
function skMatrixMapVectors(ra1,ra2,ra3,ra4) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skMatrixMapVectors(ra1,ra2,ra3,ra4);
}
function skMatrixMapXy(ra1,ra2,ra3,ra4) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skMatrixMapXy(ra1,ra2,ra3,ra4);
}
function skMatrixMapVector(ra1,ra2,ra3,ra4) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skMatrixMapVector(ra1,ra2,ra3,ra4);
}
function skMatrixMapRadius(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skMatrixMapRadius(ra1,ra2);
}
function sk_3dviewNew() {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.sk_3dviewNew();
}
function sk_3dviewDestroy(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.sk_3dviewDestroy(ra1);
}
function sk_3dviewSave(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.sk_3dviewSave(ra1);
}
function sk_3dviewRestore(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.sk_3dviewRestore(ra1);
}
function sk_3dviewTranslate(ra1,ra2,ra3,ra4) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.sk_3dviewTranslate(ra1,ra2,ra3,ra4);
}
function sk_3dviewRotateXDegrees(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.sk_3dviewRotateXDegrees(ra1,ra2);
}
function sk_3dviewRotateYDegrees(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.sk_3dviewRotateYDegrees(ra1,ra2);
}
function sk_3dviewRotateZDegrees(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.sk_3dviewRotateZDegrees(ra1,ra2);
}
function sk_3dviewRotateXRadians(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.sk_3dviewRotateXRadians(ra1,ra2);
}
function sk_3dviewRotateYRadians(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.sk_3dviewRotateYRadians(ra1,ra2);
}
function sk_3dviewRotateZRadians(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.sk_3dviewRotateZRadians(ra1,ra2);
}
function sk_3dviewGetMatrix(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.sk_3dviewGetMatrix(ra1,ra2);
}
function sk_3dviewApplyToCanvas(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.sk_3dviewApplyToCanvas(ra1,ra2);
}
function sk_3dviewDotWithNormal(ra1,ra2,ra3,ra4) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.sk_3dviewDotWithNormal(ra1,ra2,ra3,ra4);
}
function skMatrix44Destroy(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skMatrix44Destroy(ra1);
}
function skMatrix44New() {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skMatrix44New();
}
function skMatrix44NewIdentity() {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skMatrix44NewIdentity();
}
function skMatrix44NewCopy(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skMatrix44NewCopy(ra1);
}
function skMatrix44NewConcat(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skMatrix44NewConcat(ra1,ra2);
}
function skMatrix44NewMatrix(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skMatrix44NewMatrix(ra1);
}
function skMatrix44Equals(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skMatrix44Equals(ra1,ra2);
}
function skMatrix44ToMatrix(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skMatrix44ToMatrix(ra1,ra2);
}
function skMatrix44GetType(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skMatrix44GetType(ra1);
}
function skMatrix44SetIdentity(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skMatrix44SetIdentity(ra1);
}
function skMatrix44Get(ra1,ra2,ra3) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skMatrix44Get(ra1,ra2,ra3);
}
function skMatrix44Set(ra1,ra2,ra3,ra4) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skMatrix44Set(ra1,ra2,ra3,ra4);
}
function skMatrix44AsColMajor(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skMatrix44AsColMajor(ra1,ra2);
}
function skMatrix44AsRowMajor(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skMatrix44AsRowMajor(ra1,ra2);
}
function skMatrix44SetColMajor(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skMatrix44SetColMajor(ra1,ra2);
}
function skMatrix44SetRowMajor(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skMatrix44SetRowMajor(ra1,ra2);
}
function skMatrix44SetTranslate(ra1,ra2,ra3,ra4) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skMatrix44SetTranslate(ra1,ra2,ra3,ra4);
}
function skMatrix44PreTranslate(ra1,ra2,ra3,ra4) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skMatrix44PreTranslate(ra1,ra2,ra3,ra4);
}
function skMatrix44PostTranslate(ra1,ra2,ra3,ra4) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skMatrix44PostTranslate(ra1,ra2,ra3,ra4);
}
function skMatrix44SetScale(ra1,ra2,ra3,ra4) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skMatrix44SetScale(ra1,ra2,ra3,ra4);
}
function skMatrix44PreScale(ra1,ra2,ra3,ra4) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skMatrix44PreScale(ra1,ra2,ra3,ra4);
}
function skMatrix44PostScale(ra1,ra2,ra3,ra4) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skMatrix44PostScale(ra1,ra2,ra3,ra4);
}
function skMatrix44SetRotateAboutDegrees(ra1,ra2,ra3,ra4,ra5) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skMatrix44SetRotateAboutDegrees(ra1,ra2,ra3,ra4,ra5);
}
function skMatrix44SetRotateAboutRadians(ra1,ra2,ra3,ra4,ra5) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skMatrix44SetRotateAboutRadians(ra1,ra2,ra3,ra4,ra5);
}
function skMatrix44SetRotateAboutRadiansUnit(ra1,ra2,ra3,ra4,ra5) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skMatrix44SetRotateAboutRadiansUnit(ra1,ra2,ra3,ra4,ra5);
}
function skMatrix44SetConcat(ra1,ra2,ra3) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skMatrix44SetConcat(ra1,ra2,ra3);
}
function skMatrix44PreConcat(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skMatrix44PreConcat(ra1,ra2);
}
function skMatrix44PostConcat(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skMatrix44PostConcat(ra1,ra2);
}
function skMatrix44Invert(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skMatrix44Invert(ra1,ra2);
}
function skMatrix44Transpose(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skMatrix44Transpose(ra1);
}
function skMatrix44MapScalars(ra1,ra2,ra3) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skMatrix44MapScalars(ra1,ra2,ra3);
}
function skMatrix44Map2(ra1,ra2,ra3,ra4) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skMatrix44Map2(ra1,ra2,ra3,ra4);
}
function skMatrix44Preserves_2dAxisAlignment(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skMatrix44Preserves_2dAxisAlignment(ra1,ra2);
}
function skMatrix44Determinant(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skMatrix44Determinant(ra1);
}
function skPaintNew() {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPaintNew();
}
function skPaintClone(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPaintClone(ra1);
}
function skPaintDelete(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPaintDelete(ra1);
}
function skPaintReset(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPaintReset(ra1);
}
function skPaintIsAntialias(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPaintIsAntialias(ra1);
}
function skPaintSetAntialias(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPaintSetAntialias(ra1,ra2);
}
function skPaintGetColor(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPaintGetColor(ra1);
}
function skPaintSetColor(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPaintSetColor(ra1,ra2);
}
function skPaintGetStyle(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPaintGetStyle(ra1);
}
function skPaintSetStyle(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPaintSetStyle(ra1,ra2);
}
function skPaintGetStrokeWidth(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPaintGetStrokeWidth(ra1);
}
function skPaintSetStrokeWidth(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPaintSetStrokeWidth(ra1,ra2);
}
function skPaintGetStrokeMiter(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPaintGetStrokeMiter(ra1);
}
function skPaintSetStrokeMiter(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPaintSetStrokeMiter(ra1,ra2);
}
function skPaintGetStrokeCap(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPaintGetStrokeCap(ra1);
}
function skPaintSetStrokeCap(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPaintSetStrokeCap(ra1,ra2);
}
function skPaintGetStrokeJoin(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPaintGetStrokeJoin(ra1);
}
function skPaintSetStrokeJoin(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPaintSetStrokeJoin(ra1,ra2);
}
function skPaintSetShader(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPaintSetShader(ra1,ra2);
}
function skPaintSetMaskfilter(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPaintSetMaskfilter(ra1,ra2);
}
function skPaintSetBlendmode(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPaintSetBlendmode(ra1,ra2);
}
function skPaintIsDither(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPaintIsDither(ra1);
}
function skPaintSetDither(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPaintSetDither(ra1,ra2);
}
function skPaintIsVerticaltext(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPaintIsVerticaltext(ra1);
}
function skPaintSetVerticaltext(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPaintSetVerticaltext(ra1,ra2);
}
function skPaintGetShader(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPaintGetShader(ra1);
}
function skPaintGetMaskfilter(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPaintGetMaskfilter(ra1);
}
function skPaintSetColorfilter(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPaintSetColorfilter(ra1,ra2);
}
function skPaintGetColorfilter(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPaintGetColorfilter(ra1);
}
function skPaintSetImagefilter(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPaintSetImagefilter(ra1,ra2);
}
function skPaintGetImagefilter(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPaintGetImagefilter(ra1);
}
function skPaintGetBlendmode(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPaintGetBlendmode(ra1);
}
function skPaintSetFilterQuality(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPaintSetFilterQuality(ra1,ra2);
}
function skPaintGetFilterQuality(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPaintGetFilterQuality(ra1);
}
function skPaintGetTypeface(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPaintGetTypeface(ra1);
}
function skPaintSetTypeface(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPaintSetTypeface(ra1,ra2);
}
function skPaintGetTextsize(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPaintGetTextsize(ra1);
}
function skPaintSetTextsize(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPaintSetTextsize(ra1,ra2);
}
function skPaintGetTextAlign(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPaintGetTextAlign(ra1);
}
function skPaintSetTextAlign(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPaintSetTextAlign(ra1,ra2);
}
function skPaintGetTextEncoding(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPaintGetTextEncoding(ra1);
}
function skPaintSetTextEncoding(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPaintSetTextEncoding(ra1,ra2);
}
function skPaintGetTextScaleX(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPaintGetTextScaleX(ra1);
}
function skPaintSetTextScaleX(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPaintSetTextScaleX(ra1,ra2);
}
function skPaintGetTextSkewX(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPaintGetTextSkewX(ra1);
}
function skPaintSetTextSkewX(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPaintSetTextSkewX(ra1,ra2);
}
function skPaintBreakText(ra1,ra2,ra3,ra4,ra5) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPaintBreakText(ra1,ra2,ra3,ra4,ra5);
}
function skPaintMeasureText(ra1,ra2,ra3,ra4) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPaintMeasureText(ra1,ra2,ra3,ra4);
}
function skPaintGetTextPath(ra1,ra2,ra3,ra4,ra5) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPaintGetTextPath(ra1,ra2,ra3,ra4,ra5);
}
function skPaintGetPosTextPath(ra1,ra2,ra3,ra4) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPaintGetPosTextPath(ra1,ra2,ra3,ra4);
}
function skPaintGetFontmetrics(ra1,ra2,ra3) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPaintGetFontmetrics(ra1,ra2,ra3);
}
function skPaintGetPathEffect(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPaintGetPathEffect(ra1);
}
function skPaintSetPathEffect(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPaintSetPathEffect(ra1,ra2);
}
function skPaintIsLinearText(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPaintIsLinearText(ra1);
}
function skPaintSetLinearText(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPaintSetLinearText(ra1,ra2);
}
function skPaintIsSubpixelText(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPaintIsSubpixelText(ra1);
}
function skPaintSetSubpixelText(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPaintSetSubpixelText(ra1,ra2);
}
function skPaintIsLcdRenderText(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPaintIsLcdRenderText(ra1);
}
function skPaintSetLcdRenderText(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPaintSetLcdRenderText(ra1,ra2);
}
function skPaintIsEmbeddedBitmapText(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPaintIsEmbeddedBitmapText(ra1);
}
function skPaintSetEmbeddedBitmapText(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPaintSetEmbeddedBitmapText(ra1,ra2);
}
function skPaintGetHinting(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPaintGetHinting(ra1);
}
function skPaintSetHinting(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPaintSetHinting(ra1,ra2);
}
function skPaintIsAutohinted(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPaintIsAutohinted(ra1);
}
function skPaintSetAutohinted(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPaintSetAutohinted(ra1,ra2);
}
function skPaintIsFakeBoldText(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPaintIsFakeBoldText(ra1);
}
function skPaintSetFakeBoldText(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPaintSetFakeBoldText(ra1,ra2);
}
function skPaintIsDevKernText(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPaintIsDevKernText(ra1);
}
function skPaintSetDevKernText(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPaintSetDevKernText(ra1,ra2);
}
function skPaintGetFillPath(ra1,ra2,ra3,ra4,ra5) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPaintGetFillPath(ra1,ra2,ra3,ra4,ra5);
}
function skPaintTextToGlyphs(ra1,ra2,ra3,ra4) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPaintTextToGlyphs(ra1,ra2,ra3,ra4);
}
function skPaintContainsText(ra1,ra2,ra3) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPaintContainsText(ra1,ra2,ra3);
}
function skPaintCountText(ra1,ra2,ra3) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPaintCountText(ra1,ra2,ra3);
}
function skPaintGetTextWidths(ra1,ra2,ra3,ra4,ra5) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPaintGetTextWidths(ra1,ra2,ra3,ra4,ra5);
}
function skPaintGetTextIntercepts(ra1,ra2,ra3,ra4,ra5,ra6,ra7) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPaintGetTextIntercepts(ra1,ra2,ra3,ra4,ra5,ra6,ra7);
}
function skPaintGetPosTextIntercepts(ra1,ra2,ra3,ra4,ra5,ra6) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPaintGetPosTextIntercepts(ra1,ra2,ra3,ra4,ra5,ra6);
}
function skPaintGetPosTextHIntercepts(ra1,ra2,ra3,ra4,ra5,ra6,ra7) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPaintGetPosTextHIntercepts(ra1,ra2,ra3,ra4,ra5,ra6,ra7);
}
function skPaintGetPosTextBlobIntercepts(ra1,ra2,ra3,ra4) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPaintGetPosTextBlobIntercepts(ra1,ra2,ra3,ra4);
}
function skPathNew() {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPathNew();
}
function skPathDelete(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPathDelete(ra1);
}
function skPathMoveTo(ra1,ra2,ra3) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPathMoveTo(ra1,ra2,ra3);
}
function skPathLineTo(ra1,ra2,ra3) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPathLineTo(ra1,ra2,ra3);
}
function skPathQuadTo(ra1,ra2,ra3,ra4,ra5) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPathQuadTo(ra1,ra2,ra3,ra4,ra5);
}
function skPathConicTo(ra1,ra2,ra3,ra4,ra5,ra6) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPathConicTo(ra1,ra2,ra3,ra4,ra5,ra6);
}
function skPathCubicTo(ra1,ra2,ra3,ra4,ra5,ra6,ra7) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPathCubicTo(ra1,ra2,ra3,ra4,ra5,ra6,ra7);
}
function skPathArcTo(ra1,ra2,ra3,ra4,ra5,ra6,ra7,ra8) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPathArcTo(ra1,ra2,ra3,ra4,ra5,ra6,ra7,ra8);
}
function skPathRarcTo(ra1,ra2,ra3,ra4,ra5,ra6,ra7,ra8) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPathRarcTo(ra1,ra2,ra3,ra4,ra5,ra6,ra7,ra8);
}
function skPathArcToWithOval(ra1,ra2,ra3,ra4,ra5) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPathArcToWithOval(ra1,ra2,ra3,ra4,ra5);
}
function skPathArcToWithPoints(ra1,ra2,ra3,ra4,ra5,ra6) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPathArcToWithPoints(ra1,ra2,ra3,ra4,ra5,ra6);
}
function skPathClose(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPathClose(ra1);
}
function skPathAddRect(ra1,ra2,ra3) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPathAddRect(ra1,ra2,ra3);
}
function skPathAddRrect(ra1,ra2,ra3) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPathAddRrect(ra1,ra2,ra3);
}
function skPathAddRrectStart(ra1,ra2,ra3,ra4) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPathAddRrectStart(ra1,ra2,ra3,ra4);
}
function skPathAddRoundedRect(ra1,ra2,ra3,ra4,ra5) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPathAddRoundedRect(ra1,ra2,ra3,ra4,ra5);
}
function skPathAddOval(ra1,ra2,ra3) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPathAddOval(ra1,ra2,ra3);
}
function skPathAddCircle(ra1,ra2,ra3,ra4,ra5) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPathAddCircle(ra1,ra2,ra3,ra4,ra5);
}
function skPathGetBounds(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPathGetBounds(ra1,ra2);
}
function skPathComputeTightBounds(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPathComputeTightBounds(ra1,ra2);
}
function skPathRmoveTo(ra1,ra2,ra3) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPathRmoveTo(ra1,ra2,ra3);
}
function skPathRlineTo(ra1,ra2,ra3) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPathRlineTo(ra1,ra2,ra3);
}
function skPathRquadTo(ra1,ra2,ra3,ra4,ra5) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPathRquadTo(ra1,ra2,ra3,ra4,ra5);
}
function skPathRconicTo(ra1,ra2,ra3,ra4,ra5,ra6) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPathRconicTo(ra1,ra2,ra3,ra4,ra5,ra6);
}
function skPathRcubicTo(ra1,ra2,ra3,ra4,ra5,ra6,ra7) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPathRcubicTo(ra1,ra2,ra3,ra4,ra5,ra6,ra7);
}
function skPathAddRectStart(ra1,ra2,ra3,ra4) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPathAddRectStart(ra1,ra2,ra3,ra4);
}
function skPathAddArc(ra1,ra2,ra3,ra4) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPathAddArc(ra1,ra2,ra3,ra4);
}
function skPathGetFilltype(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPathGetFilltype(ra1);
}
function skPathSetFilltype(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPathSetFilltype(ra1,ra2);
}
function skPathTransform(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPathTransform(ra1,ra2);
}
function skPathClone(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPathClone(ra1);
}
function skPathAddPathOffset(ra1,ra2,ra3,ra4,ra5) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPathAddPathOffset(ra1,ra2,ra3,ra4,ra5);
}
function skPathAddPathMatrix(ra1,ra2,ra3,ra4) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPathAddPathMatrix(ra1,ra2,ra3,ra4);
}
function skPathAddPath(ra1,ra2,ra3) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPathAddPath(ra1,ra2,ra3);
}
function skPathAddPathReverse(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPathAddPathReverse(ra1,ra2);
}
function skPathReset(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPathReset(ra1);
}
function skPathRewind(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPathRewind(ra1);
}
function skPathCountPoints(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPathCountPoints(ra1);
}
function skPathCountVerbs(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPathCountVerbs(ra1);
}
function skPathGetPoint(ra1,ra2,ra3) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPathGetPoint(ra1,ra2,ra3);
}
function skPathGetPoints(ra1,ra2,ra3) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPathGetPoints(ra1,ra2,ra3);
}
function skPathContains(ra1,ra2,ra3) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPathContains(ra1,ra2,ra3);
}
function skPathGetConvexity(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPathGetConvexity(ra1);
}
function skPathSetConvexity(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPathSetConvexity(ra1,ra2);
}
function skPathParseSvgString(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPathParseSvgString(ra1,ra2);
}
function skPathToSvgString(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPathToSvgString(ra1,ra2);
}
function skPathGetLastPoint(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPathGetLastPoint(ra1,ra2);
}
function skPathConvertConicToQuads(ra1,ra2,ra3,ra4,ra5,ra6) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPathConvertConicToQuads(ra1,ra2,ra3,ra4,ra5,ra6);
}
function skPathAddPoly(ra1,ra2,ra3,ra4) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPathAddPoly(ra1,ra2,ra3,ra4);
}
function skPathGetSegmentMasks(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPathGetSegmentMasks(ra1);
}
function skPathIsOval(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPathIsOval(ra1,ra2);
}
function skPathIsRrect(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPathIsRrect(ra1,ra2);
}
function skPathIsLine(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPathIsLine(ra1,ra2);
}
function skPathIsRect(ra1,ra2,ra3,ra4) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPathIsRect(ra1,ra2,ra3,ra4);
}
function skPathCreateIter(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPathCreateIter(ra1,ra2);
}
function skPathIterNext(ra1,ra2,ra3,ra4) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPathIterNext(ra1,ra2,ra3,ra4);
}
function skPathIterConicWeight(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPathIterConicWeight(ra1);
}
function skPathIterIsCloseLine(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPathIterIsCloseLine(ra1);
}
function skPathIterIsClosedContour(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPathIterIsClosedContour(ra1);
}
function skPathIterDestroy(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPathIterDestroy(ra1);
}
function skPathCreateRawiter(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPathCreateRawiter(ra1);
}
function skPathRawiterPeek(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPathRawiterPeek(ra1);
}
function skPathRawiterNext(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPathRawiterNext(ra1,ra2);
}
function skPathRawiterConicWeight(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPathRawiterConicWeight(ra1);
}
function skPathRawiterDestroy(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPathRawiterDestroy(ra1);
}
function skPathopOp(ra1,ra2,ra3,ra4) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPathopOp(ra1,ra2,ra3,ra4);
}
function skPathopSimplify(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPathopSimplify(ra1,ra2);
}
function skPathopTightBounds(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPathopTightBounds(ra1,ra2);
}
function skOpbuilderNew() {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skOpbuilderNew();
}
function skOpbuilderDestroy(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skOpbuilderDestroy(ra1);
}
function skOpbuilderAdd(ra1,ra2,ra3) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skOpbuilderAdd(ra1,ra2,ra3);
}
function skOpbuilderResolve(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skOpbuilderResolve(ra1,ra2);
}
function skPathmeasureNew() {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPathmeasureNew();
}
function skPathmeasureNewWithPath(ra1,ra2,ra3) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPathmeasureNewWithPath(ra1,ra2,ra3);
}
function skPathmeasureDestroy(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPathmeasureDestroy(ra1);
}
function skPathmeasureSetPath(ra1,ra2,ra3) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPathmeasureSetPath(ra1,ra2,ra3);
}
function skPathmeasureGetLength(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPathmeasureGetLength(ra1);
}
function skPathmeasureGetPosTan(ra1,ra2,ra3,ra4) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPathmeasureGetPosTan(ra1,ra2,ra3,ra4);
}
function skPathmeasureGetMatrix(ra1,ra2,ra3,ra4) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPathmeasureGetMatrix(ra1,ra2,ra3,ra4);
}
function skPathmeasureGetSegment(ra1,ra2,ra3,ra4,ra5) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPathmeasureGetSegment(ra1,ra2,ra3,ra4,ra5);
}
function skPathmeasureIsClosed(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPathmeasureIsClosed(ra1);
}
function skPathmeasureNextContour(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPathmeasureNextContour(ra1);
}
function skPathEffectUnref(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPathEffectUnref(ra1);
}
function skPathEffectCreateCompose(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPathEffectCreateCompose(ra1,ra2);
}
function skPathEffectCreateSum(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPathEffectCreateSum(ra1,ra2);
}
function skPathEffectCreateDiscrete(ra1,ra2,ra3) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPathEffectCreateDiscrete(ra1,ra2,ra3);
}
function skPathEffectCreateCorner(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPathEffectCreateCorner(ra1);
}
function skPathEffectCreate_1dPath(ra1,ra2,ra3,ra4) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPathEffectCreate_1dPath(ra1,ra2,ra3,ra4);
}
function skPathEffectCreate_2dLine(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPathEffectCreate_2dLine(ra1,ra2);
}
function skPathEffectCreate_2dPath(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPathEffectCreate_2dPath(ra1,ra2);
}
function skPathEffectCreateDash(ra1,ra2,ra3) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPathEffectCreateDash(ra1,ra2,ra3);
}
function skPathEffectCreateTrim(ra1,ra2,ra3) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPathEffectCreateTrim(ra1,ra2,ra3);
}
function skPictureRecorderNew() {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPictureRecorderNew();
}
function skPictureRecorderDelete(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPictureRecorderDelete(ra1);
}
function skPictureRecorderBeginRecording(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPictureRecorderBeginRecording(ra1,ra2);
}
function skPictureRecorderEndRecording(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPictureRecorderEndRecording(ra1);
}
function skPictureRecorderEndRecordingAsDrawable(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPictureRecorderEndRecordingAsDrawable(ra1);
}
function skPictureGetRecordingCanvas(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPictureGetRecordingCanvas(ra1);
}
function skPictureRef(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPictureRef(ra1);
}
function skPictureUnref(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPictureUnref(ra1);
}
function skPictureGetUniqueId(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPictureGetUniqueId(ra1);
}
function skPictureGetCullRect(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPictureGetCullRect(ra1,ra2);
}
function skPixmapDestructor(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPixmapDestructor(ra1);
}
function skPixmapNew() {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPixmapNew();
}
function skPixmapNewWithParams(ra1,ra2,ra3) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPixmapNewWithParams(ra1,ra2,ra3);
}
function skPixmapReset(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPixmapReset(ra1);
}
function skPixmapResetWithParams(ra1,ra2,ra3,ra4) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPixmapResetWithParams(ra1,ra2,ra3,ra4);
}
function skPixmapGetInfo(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPixmapGetInfo(ra1,ra2);
}
function skPixmapGetRowBytes(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPixmapGetRowBytes(ra1);
}
function skPixmapGetPixels(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPixmapGetPixels(ra1);
}
function skPixmapGetPixelsWithXy(ra1,ra2,ra3) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPixmapGetPixelsWithXy(ra1,ra2,ra3);
}
function skPixmapGetPixelColor(ra1,ra2,ra3) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPixmapGetPixelColor(ra1,ra2,ra3);
}
function skPixmapEncodeImage(ra1,ra2,ra3,ra4) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPixmapEncodeImage(ra1,ra2,ra3,ra4);
}
function skPixmapReadPixels(ra1,ra2,ra3,ra4,ra5,ra6,ra7) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPixmapReadPixels(ra1,ra2,ra3,ra4,ra5,ra6,ra7);
}
function skPixmapScalePixels(ra1,ra2,ra3) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPixmapScalePixels(ra1,ra2,ra3);
}
function skPixmapExtractSubset(ra1,ra2,ra3) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPixmapExtractSubset(ra1,ra2,ra3);
}
function skPixmapEraseColor(ra1,ra2,ra3) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPixmapEraseColor(ra1,ra2,ra3);
}
function skColorUnpremultiply(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skColorUnpremultiply(ra1);
}
function skColorPremultiply(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skColorPremultiply(ra1);
}
function skColorUnpremultiplyArray(ra1,ra2,ra3) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skColorUnpremultiplyArray(ra1,ra2,ra3);
}
function skColorPremultiplyArray(ra1,ra2,ra3) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skColorPremultiplyArray(ra1,ra2,ra3);
}
function skColorGetBitShift(ra1,ra2,ra3,ra4) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skColorGetBitShift(ra1,ra2,ra3,ra4);
}
function skSwizzleSwapRb(ra1,ra2,ra3) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skSwizzleSwapRb(ra1,ra2,ra3);
}
function skWebpencoderEncode(ra1,ra2,ra3) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skWebpencoderEncode(ra1,ra2,ra3);
}
function skJpegencoderEncode(ra1,ra2,ra3) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skJpegencoderEncode(ra1,ra2,ra3);
}
function skPngencoderEncode(ra1,ra2,ra3) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skPngencoderEncode(ra1,ra2,ra3);
}
function skRegionNew() {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skRegionNew();
}
function skRegionNew2(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skRegionNew2(ra1);
}
function skRegionDelete(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skRegionDelete(ra1);
}
function skRegionContains(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skRegionContains(ra1,ra2);
}
function skRegionContains2(ra1,ra2,ra3) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skRegionContains2(ra1,ra2,ra3);
}
function skRegionIntersectsRect(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skRegionIntersectsRect(ra1,ra2);
}
function skRegionIntersects(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skRegionIntersects(ra1,ra2);
}
function skRegionSetPath(ra1,ra2,ra3) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skRegionSetPath(ra1,ra2,ra3);
}
function skRegionSetRect(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skRegionSetRect(ra1,ra2);
}
function skRegionSetRegion(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skRegionSetRegion(ra1,ra2);
}
function skRegionOp(ra1,ra2,ra3,ra4,ra5,ra6) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skRegionOp(ra1,ra2,ra3,ra4,ra5,ra6);
}
function skRegionOp2(ra1,ra2,ra3) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skRegionOp2(ra1,ra2,ra3);
}
function skRegionGetBounds(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skRegionGetBounds(ra1,ra2);
}
function skRrectNew() {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skRrectNew();
}
function skRrectNewCopy(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skRrectNewCopy(ra1);
}
function skRrectDelete(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skRrectDelete(ra1);
}
function skRrectGetType(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skRrectGetType(ra1);
}
function skRrectGetRect(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skRrectGetRect(ra1,ra2);
}
function skRrectGetRadii(ra1,ra2,ra3) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skRrectGetRadii(ra1,ra2,ra3);
}
function skRrectGetWidth(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skRrectGetWidth(ra1);
}
function skRrectGetHeight(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skRrectGetHeight(ra1);
}
function skRrectSetEmpty(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skRrectSetEmpty(ra1);
}
function skRrectSetRect(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skRrectSetRect(ra1,ra2);
}
function skRrectSetOval(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skRrectSetOval(ra1,ra2);
}
function skRrectSetRectXy(ra1,ra2,ra3,ra4) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skRrectSetRectXy(ra1,ra2,ra3,ra4);
}
function skRrectSetNinePatch(ra1,ra2,ra3,ra4,ra5,ra6) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skRrectSetNinePatch(ra1,ra2,ra3,ra4,ra5,ra6);
}
function skRrectSetRectRadii(ra1,ra2,ra3) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skRrectSetRectRadii(ra1,ra2,ra3);
}
function skRrectInset(ra1,ra2,ra3) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skRrectInset(ra1,ra2,ra3);
}
function skRrectOutset(ra1,ra2,ra3) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skRrectOutset(ra1,ra2,ra3);
}
function skRrectOffset(ra1,ra2,ra3) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skRrectOffset(ra1,ra2,ra3);
}
function skRrectContains(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skRrectContains(ra1,ra2);
}
function skRrectIsValid(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skRrectIsValid(ra1);
}
function skRrectTransform(ra1,ra2,ra3) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skRrectTransform(ra1,ra2,ra3);
}
function skShaderRef(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skShaderRef(ra1);
}
function skShaderUnref(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skShaderUnref(ra1);
}
function skShaderNewLinearGradient(ra1,ra2,ra3,ra4,ra5,ra6) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skShaderNewLinearGradient(ra1,ra2,ra3,ra4,ra5,ra6);
}
function skShaderNewRadialGradient(ra1,ra2,ra3,ra4,ra5,ra6,ra7) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skShaderNewRadialGradient(ra1,ra2,ra3,ra4,ra5,ra6,ra7);
}
function skShaderNewSweepGradient(ra1,ra2,ra3,ra4,ra5,ra6,ra7,ra8) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skShaderNewSweepGradient(ra1,ra2,ra3,ra4,ra5,ra6,ra7,ra8);
}
function skShaderNewTwoPointConicalGradient(ra1,ra2,ra3,ra4,ra5,ra6,ra7,ra8,ra9) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skShaderNewTwoPointConicalGradient(ra1,ra2,ra3,ra4,ra5,ra6,ra7,ra8,ra9);
}
function skShaderNewEmpty() {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skShaderNewEmpty();
}
function skShaderNewColor(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skShaderNewColor(ra1);
}
function skShaderNewBitmap(ra1,ra2,ra3,ra4) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skShaderNewBitmap(ra1,ra2,ra3,ra4);
}
function skShaderNewPicture(ra1,ra2,ra3,ra4,ra5) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skShaderNewPicture(ra1,ra2,ra3,ra4,ra5);
}
function skShaderNewLocalMatrix(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skShaderNewLocalMatrix(ra1,ra2);
}
function skShaderNewColorFilter(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skShaderNewColorFilter(ra1,ra2);
}
function skShaderNewPerlinNoiseFractalNoise(ra1,ra2,ra3,ra4,ra5) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skShaderNewPerlinNoiseFractalNoise(ra1,ra2,ra3,ra4,ra5);
}
function skShaderNewPerlinNoiseTurbulence(ra1,ra2,ra3,ra4,ra5) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skShaderNewPerlinNoiseTurbulence(ra1,ra2,ra3,ra4,ra5);
}
function skShaderNewPerlinNoiseImprovedNoise(ra1,ra2,ra3,ra4) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skShaderNewPerlinNoiseImprovedNoise(ra1,ra2,ra3,ra4);
}
function skShaderNewCompose(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skShaderNewCompose(ra1,ra2);
}
function skShaderNewComposeWithMode(ra1,ra2,ra3) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skShaderNewComposeWithMode(ra1,ra2,ra3);
}
function skStreamAssetDestroy(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skStreamAssetDestroy(ra1);
}
function skFilestreamNew(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skFilestreamNew(ra1);
}
function skFilestreamDestroy(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skFilestreamDestroy(ra1);
}
function skFilestreamIsValid(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skFilestreamIsValid(ra1);
}
function skMemorystreamNew() {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skMemorystreamNew();
}
function skMemorystreamNewWithLength(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skMemorystreamNewWithLength(ra1);
}
function skMemorystreamNewWithData(ra1,ra2,ra3) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skMemorystreamNewWithData(ra1,ra2,ra3);
}
function skMemorystreamNewWithSkdata(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skMemorystreamNewWithSkdata(ra1);
}
function skMemorystreamSetMemory(ra1,ra2,ra3,ra4) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skMemorystreamSetMemory(ra1,ra2,ra3,ra4);
}
function skMemorystreamDestroy(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skMemorystreamDestroy(ra1);
}
function skStreamRead(ra1,ra2,ra3) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skStreamRead(ra1,ra2,ra3);
}
function skStreamPeek(ra1,ra2,ra3) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skStreamPeek(ra1,ra2,ra3);
}
function skStreamSkip(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skStreamSkip(ra1,ra2);
}
function skStreamIsAtEnd(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skStreamIsAtEnd(ra1);
}
function skStreamReadS8(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skStreamReadS8(ra1,ra2);
}
function skStreamReadS16(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skStreamReadS16(ra1,ra2);
}
function skStreamReadS32(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skStreamReadS32(ra1,ra2);
}
function skStreamReadU8(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skStreamReadU8(ra1,ra2);
}
function skStreamReadU16(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skStreamReadU16(ra1,ra2);
}
function skStreamReadU32(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skStreamReadU32(ra1,ra2);
}
function skStreamReadBool(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skStreamReadBool(ra1,ra2);
}
function skStreamRewind(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skStreamRewind(ra1);
}
function skStreamHasPosition(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skStreamHasPosition(ra1);
}
function skStreamGetPosition(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skStreamGetPosition(ra1);
}
function skStreamSeek(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skStreamSeek(ra1,ra2);
}
function skStreamMove(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skStreamMove(ra1,ra2);
}
function skStreamHasLength(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skStreamHasLength(ra1);
}
function skStreamGetLength(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skStreamGetLength(ra1);
}
function skStreamGetMemoryBase(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skStreamGetMemoryBase(ra1);
}
function skStreamFork(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skStreamFork(ra1);
}
function skStreamDuplicate(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skStreamDuplicate(ra1);
}
function skStreamDestroy(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skStreamDestroy(ra1);
}
function skFilewstreamNew(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skFilewstreamNew(ra1);
}
function skFilewstreamDestroy(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skFilewstreamDestroy(ra1);
}
function skFilewstreamIsValid(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skFilewstreamIsValid(ra1);
}
function skDynamicmemorywstreamNew() {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skDynamicmemorywstreamNew();
}
function skDynamicmemorywstreamDetachAsStream(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skDynamicmemorywstreamDetachAsStream(ra1);
}
function skDynamicmemorywstreamDetachAsData(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skDynamicmemorywstreamDetachAsData(ra1);
}
function skDynamicmemorywstreamCopyTo(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skDynamicmemorywstreamCopyTo(ra1,ra2);
}
function skDynamicmemorywstreamWriteToStream(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skDynamicmemorywstreamWriteToStream(ra1,ra2);
}
function skDynamicmemorywstreamDestroy(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skDynamicmemorywstreamDestroy(ra1);
}
function skWstreamWrite(ra1,ra2,ra3) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skWstreamWrite(ra1,ra2,ra3);
}
function skWstreamNewline(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skWstreamNewline(ra1);
}
function skWstreamFlush(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skWstreamFlush(ra1);
}
function skWstreamBytesWritten(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skWstreamBytesWritten(ra1);
}
function skWstreamWrite_8(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skWstreamWrite_8(ra1,ra2);
}
function skWstreamWrite_16(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skWstreamWrite_16(ra1,ra2);
}
function skWstreamWrite_32(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skWstreamWrite_32(ra1,ra2);
}
function skWstreamWriteText(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skWstreamWriteText(ra1,ra2);
}
function skWstreamWriteDecAsText(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skWstreamWriteDecAsText(ra1,ra2);
}
function skWstreamWriteBigdecAsText(ra1,ra2,ra3) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skWstreamWriteBigdecAsText(ra1,ra2,ra3);
}
function skWstreamWriteHexAsText(ra1,ra2,ra3) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skWstreamWriteHexAsText(ra1,ra2,ra3);
}
function skWstreamWriteScalarAsText(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skWstreamWriteScalarAsText(ra1,ra2);
}
function skWstreamWriteBool(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skWstreamWriteBool(ra1,ra2);
}
function skWstreamWriteScalar(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skWstreamWriteScalar(ra1,ra2);
}
function skWstreamWritePackedUint(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skWstreamWritePackedUint(ra1,ra2);
}
function skWstreamWriteStream(ra1,ra2,ra3) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skWstreamWriteStream(ra1,ra2,ra3);
}
function skWstreamGetSizeOfPackedUint(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skWstreamGetSizeOfPackedUint(ra1);
}
function skStringNewEmpty() {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skStringNewEmpty();
}
function skStringNewWithCopy(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skStringNewWithCopy(ra1,ra2);
}
function skStringDestructor(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skStringDestructor(ra1);
}
function skStringGetSize(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skStringGetSize(ra1);
}
function skStringGetCStr(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skStringGetCStr(ra1);
}
function skSurfaceNewNull(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skSurfaceNewNull(ra1,ra2);
}
function skSurfaceNewRaster(ra1,ra2,ra3) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skSurfaceNewRaster(ra1,ra2,ra3);
}
function skSurfaceNewRasterDirect(ra1,ra2,ra3,ra4,ra5,ra6) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skSurfaceNewRasterDirect(ra1,ra2,ra3,ra4,ra5,ra6);
}
function skSurfaceNewBackendTexture(ra1,ra2,ra3,ra4,ra5,ra6,ra7) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skSurfaceNewBackendTexture(ra1,ra2,ra3,ra4,ra5,ra6,ra7);
}
function skSurfaceNewBackendRenderTarget(ra1,ra2,ra3,ra4,ra5,ra6) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skSurfaceNewBackendRenderTarget(ra1,ra2,ra3,ra4,ra5,ra6);
}
function skSurfaceNewBackendTextureAsRenderTarget(ra1,ra2,ra3,ra4,ra5,ra6,ra7) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skSurfaceNewBackendTextureAsRenderTarget(ra1,ra2,ra3,ra4,ra5,ra6,ra7);
}
function skSurfaceNewRenderTarget(ra1,ra2,ra3,ra4,ra5,ra6,ra7) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skSurfaceNewRenderTarget(ra1,ra2,ra3,ra4,ra5,ra6,ra7);
}
function skSurfaceUnref(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skSurfaceUnref(ra1);
}
function skSurfaceGetCanvas(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skSurfaceGetCanvas(ra1);
}
function skSurfaceNewImageSnapshot(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skSurfaceNewImageSnapshot(ra1);
}
function skSurfaceDraw(ra1,ra2,ra3,ra4,ra5) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skSurfaceDraw(ra1,ra2,ra3,ra4,ra5);
}
function skSurfacePeekPixels(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skSurfacePeekPixels(ra1,ra2);
}
function skSurfaceReadPixels(ra1,ra2,ra3,ra4,ra5,ra6) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skSurfaceReadPixels(ra1,ra2,ra3,ra4,ra5,ra6);
}
function skSurfaceGetProps(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skSurfaceGetProps(ra1);
}
function skSurfacepropsNew(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skSurfacepropsNew(ra1,ra2);
}
function skSurfacepropsDelete(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skSurfacepropsDelete(ra1);
}
function skSurfacepropsGetFlags(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skSurfacepropsGetFlags(ra1);
}
function skSurfacepropsGetPixelGeometry(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skSurfacepropsGetPixelGeometry(ra1);
}
function skSvgcanvasCreate(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skSvgcanvasCreate(ra1,ra2);
}
function skTextblobRef(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skTextblobRef(ra1);
}
function skTextblobUnref(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skTextblobUnref(ra1);
}
function skTextblobGetUniqueId(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skTextblobGetUniqueId(ra1);
}
function skTextblobGetBounds(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skTextblobGetBounds(ra1,ra2);
}
function skTextblobBuilderNew() {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skTextblobBuilderNew();
}
function skTextblobBuilderDelete(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skTextblobBuilderDelete(ra1);
}
function skTextblobBuilderMake(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skTextblobBuilderMake(ra1);
}
function skTextblobBuilderAllocRunText(ra1,ra2,ra3,ra4,ra5,ra6,ra7,ra8,ra9) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skTextblobBuilderAllocRunText(ra1,ra2,ra3,ra4,ra5,ra6,ra7,ra8,ra9);
}
function skTextblobBuilderAllocRunTextPosH(ra1,ra2,ra3,ra4,ra5,ra6,ra7,ra8) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skTextblobBuilderAllocRunTextPosH(ra1,ra2,ra3,ra4,ra5,ra6,ra7,ra8);
}
function skTextblobBuilderAllocRunTextPos(ra1,ra2,ra3,ra4,ra5,ra6,ra7) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skTextblobBuilderAllocRunTextPos(ra1,ra2,ra3,ra4,ra5,ra6,ra7);
}
function skTypefaceCreateDefault() {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skTypefaceCreateDefault();
}
function skTypefaceRefDefault() {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skTypefaceRefDefault();
}
function skTypefaceCreateFromNameWithFontStyle(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skTypefaceCreateFromNameWithFontStyle(ra1,ra2);
}
function skTypefaceUnref(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skTypefaceUnref(ra1);
}
function skTypefaceCreateFromFile(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skTypefaceCreateFromFile(ra1,ra2);
}
function skTypefaceCreateFromStream(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skTypefaceCreateFromStream(ra1,ra2);
}
function skTypefaceCharsToGlyphs(ra1,ra2,ra3,ra4,ra5) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skTypefaceCharsToGlyphs(ra1,ra2,ra3,ra4,ra5);
}
function skTypefaceOpenStream(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skTypefaceOpenStream(ra1,ra2);
}
function skTypefaceGetUnitsPerEm(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skTypefaceGetUnitsPerEm(ra1);
}
function skTypefaceGetFamilyName(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skTypefaceGetFamilyName(ra1);
}
function skTypefaceGetFontstyle(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skTypefaceGetFontstyle(ra1);
}
function skTypefaceGetFontWeight(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skTypefaceGetFontWeight(ra1);
}
function skTypefaceGetFontWidth(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skTypefaceGetFontWidth(ra1);
}
function skTypefaceGetFontSlant(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skTypefaceGetFontSlant(ra1);
}
function skTypefaceCountTables(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skTypefaceCountTables(ra1);
}
function skTypefaceGetTableTags(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skTypefaceGetTableTags(ra1,ra2);
}
function skTypefaceGetTableSize(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skTypefaceGetTableSize(ra1,ra2);
}
function skTypefaceGetTableData(ra1,ra2,ra3,ra4,ra5) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skTypefaceGetTableData(ra1,ra2,ra3,ra4,ra5);
}
function skTypefaceIsFixedPitch(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skTypefaceIsFixedPitch(ra1);
}
function skFontmgrCreateDefault() {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skFontmgrCreateDefault();
}
function skFontmgrRefDefault() {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skFontmgrRefDefault();
}
function skFontmgrUnref(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skFontmgrUnref(ra1);
}
function skFontmgrCountFamilies(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skFontmgrCountFamilies(ra1);
}
function skFontmgrGetFamilyName(ra1,ra2,ra3) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skFontmgrGetFamilyName(ra1,ra2,ra3);
}
function skFontmgrCreateStyleset(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skFontmgrCreateStyleset(ra1,ra2);
}
function skFontmgrMatchFamily(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skFontmgrMatchFamily(ra1,ra2);
}
function skFontmgrMatchFamilyStyle(ra1,ra2,ra3) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skFontmgrMatchFamilyStyle(ra1,ra2,ra3);
}
function skFontmgrMatchFamilyStyleCharacter(ra1,ra2,ra3,ra4,ra5,ra6) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skFontmgrMatchFamilyStyleCharacter(ra1,ra2,ra3,ra4,ra5,ra6);
}
function skFontmgrMatchFaceStyle(ra1,ra2,ra3) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skFontmgrMatchFaceStyle(ra1,ra2,ra3);
}
function skFontmgrCreateFromData(ra1,ra2,ra3) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skFontmgrCreateFromData(ra1,ra2,ra3);
}
function skFontmgrCreateFromStream(ra1,ra2,ra3) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skFontmgrCreateFromStream(ra1,ra2,ra3);
}
function skFontmgrCreateFromFile(ra1,ra2,ra3) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skFontmgrCreateFromFile(ra1,ra2,ra3);
}
function skFontstyleNew(ra1,ra2,ra3) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skFontstyleNew(ra1,ra2,ra3);
}
function skFontstyleDelete(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skFontstyleDelete(ra1);
}
function skFontstyleGetWeight(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skFontstyleGetWeight(ra1);
}
function skFontstyleGetWidth(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skFontstyleGetWidth(ra1);
}
function skFontstyleGetSlant(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skFontstyleGetSlant(ra1);
}
function skFontstylesetCreateEmpty() {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skFontstylesetCreateEmpty();
}
function skFontstylesetUnref(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skFontstylesetUnref(ra1);
}
function skFontstylesetGetCount(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skFontstylesetGetCount(ra1);
}
function skFontstylesetGetStyle(ra1,ra2,ra3,ra4) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skFontstylesetGetStyle(ra1,ra2,ra3,ra4);
}
function skFontstylesetCreateTypeface(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skFontstylesetCreateTypeface(ra1,ra2);
}
function skFontstylesetMatchStyle(ra1,ra2) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skFontstylesetMatchStyle(ra1,ra2);
}
function skVerticesUnref(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skVerticesUnref(ra1);
}
function skVerticesRef(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skVerticesRef(ra1);
}
function skVerticesMakeCopy(ra1,ra2,ra3,ra4,ra5,ra6,ra7) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skVerticesMakeCopy(ra1,ra2,ra3,ra4,ra5,ra6,ra7);
}
function skXmlstreamwriterNew(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skXmlstreamwriterNew(ra1);
}
function skXmlstreamwriterDelete(ra1) {
    for (let i = 0; arguments.length > i; i++) {
        if (arguments[i] instanceof Struct) {
            arguments[i] = arguments[i].buffer;
        }
    }
    return skia.skXmlstreamwriterDelete(ra1);
}


class Struct {}
class skPoint extends Struct {
    constructor(data) {
        super();
        this.buffer = new ArrayBuffer(8);
        this.view = new DataView(this.buffer);
        this.view.setFloat32(0, data.x, true);
        this.view.setFloat32(4, data.y, true);
        
    }
}
class skIrect extends Struct {
    constructor(data) {
        super();
        this.buffer = new ArrayBuffer(16);
        this.view = new DataView(this.buffer);
        this.view.setInt32(0, data.left, true);
        this.view.setInt32(4, data.top, true);
        this.view.setInt32(8, data.right, true);
        this.view.setInt32(12, data.bottom, true);
        
    }
}
class skRect extends Struct {
    constructor(data) {
        super();
        this.buffer = new ArrayBuffer(16);
        this.view = new DataView(this.buffer);
        this.view.setFloat32(0, data.left, true);
        this.view.setFloat32(4, data.top, true);
        this.view.setFloat32(8, data.right, true);
        this.view.setFloat32(12, data.bottom, true);
        
    }
}
class skMatrix extends Struct {
    constructor(data) {
        super();
        this.buffer = new ArrayBuffer(36);
        this.view = new DataView(this.buffer);
        this.view.setFloat32(0, data.scaleX, true);
        this.view.setFloat32(4, data.skewX, true);
        this.view.setFloat32(8, data.transX, true);
        this.view.setFloat32(12, data.skewY, true);
        this.view.setFloat32(16, data.scaleY, true);
        this.view.setFloat32(20, data.transY, true);
        this.view.setFloat32(24, data.persp0, true);
        this.view.setFloat32(28, data.persp1, true);
        this.view.setFloat32(32, data.persp2, true);
        
    }
}
class skPoint3 extends Struct {
    constructor(data) {
        super();
        this.buffer = new ArrayBuffer(12);
        this.view = new DataView(this.buffer);
        this.view.setFloat32(0, data.x, true);
        this.view.setFloat32(4, data.y, true);
        this.view.setFloat32(8, data.z, true);
        
    }
}
class skIpoint extends Struct {
    constructor(data) {
        super();
        this.buffer = new ArrayBuffer(8);
        this.view = new DataView(this.buffer);
        this.view.setInt32(0, data.x, true);
        this.view.setInt32(4, data.y, true);
        
    }
}
class skSize extends Struct {
    constructor(data) {
        super();
        this.buffer = new ArrayBuffer(8);
        this.view = new DataView(this.buffer);
        this.view.setFloat32(0, data.w, true);
        this.view.setFloat32(4, data.h, true);
        
    }
}
class skIsize extends Struct {
    constructor(data) {
        super();
        this.buffer = new ArrayBuffer(8);
        this.view = new DataView(this.buffer);
        this.view.setInt32(0, data.w, true);
        this.view.setInt32(4, data.h, true);
        
    }
}
class skFontmetrics extends Struct {
    constructor(data) {
        super();
        this.buffer = new ArrayBuffer(64);
        this.view = new DataView(this.buffer);
        this.view.setInt32(0, data.fFlags, true);
        this.view.setFloat32(4, data.fTop, true);
        this.view.setFloat32(8, data.fAscent, true);
        this.view.setFloat32(12, data.fDescent, true);
        this.view.setFloat32(16, data.fBottom, true);
        this.view.setFloat32(20, data.fLeading, true);
        this.view.setFloat32(24, data.fAvgCharWidth, true);
        this.view.setFloat32(28, data.fMaxCharWidth, true);
        this.view.setFloat32(32, data.fXMin, true);
        this.view.setFloat32(36, data.fXMax, true);
        this.view.setFloat32(40, data.fXHeight, true);
        this.view.setFloat32(44, data.fCapHeight, true);
        this.view.setFloat32(48, data.fUnderlineThickness, true);
        this.view.setFloat32(52, data.fUnderlinePosition, true);
        this.view.setFloat32(56, data.fStrikeoutThickness, true);
        this.view.setFloat32(60, data.fStrikeoutPosition, true);
        
    }
}
class skCodecOptions extends Struct {
    constructor(data) {
        super();
        this.buffer = new ArrayBuffer(32);
        this.view = new DataView(this.buffer);
        this.view.setInt32(0, data.fZeroInitialized, true);
        this.view.setBigInt64(8, data.fSubset, true);
        this.view.setInt32(16, data.fFrameIndex, true);
        this.view.setInt32(20, data.fPriorFrame, true);
        this.view.setInt32(24, data.fPremulBehavior, true);
        
    }
}
class skMask extends Struct {
    constructor(data) {
        super();
        this.buffer = new ArrayBuffer(32);
        this.view = new DataView(this.buffer);
        this.view.setBigInt64(0, data.fImage, true);
        this.view.set(data.fBounds, 8);
        this.view.setInt32(24, data.fRowBytes, true);
        this.view.setInt32(28, data.fFormat, true);
        
    }
}
class grGlTextureinfo extends Struct {
    constructor(data) {
        super();
        this.buffer = new ArrayBuffer(12);
        this.view = new DataView(this.buffer);
        this.view.setInt32(0, data.fTarget, true);
        this.view.setInt32(4, data.fID, true);
        this.view.setInt32(8, data.fFormat, true);
        
    }
}
class grGlFramebufferinfo extends Struct {
    constructor(data) {
        super();
        this.buffer = new ArrayBuffer(8);
        this.view = new DataView(this.buffer);
        this.view.setInt32(0, data.fFBOID, true);
        this.view.setInt32(4, data.fFormat, true);
        
    }
}
class skLattice extends Struct {
    constructor(data) {
        super();
        this.buffer = new ArrayBuffer(48);
        this.view = new DataView(this.buffer);
        this.view.setBigInt64(0, data.fXDivs, true);
        this.view.setBigInt64(8, data.fYDivs, true);
        this.view.setInt32(16, data.fRectTypes, true);
        this.view.setInt32(24, data.fXCount, true);
        this.view.setInt32(28, data.fYCount, true);
        this.view.setBigInt64(32, data.fBounds, true);
        this.view.setBigInt64(40, data.fColors, true);
        
    }
}
class skTimeDatetime extends Struct {
    constructor(data) {
        super();
        this.buffer = new ArrayBuffer(10);
        this.view = new DataView(this.buffer);
        this.view.setInt16(0, data.fTimeZoneMinutes, true);
        this.view.setInt16(2, data.fYear, true);
        this.view.setInt8(4, data.fMonth, true);
        this.view.setInt8(5, data.fDayOfWeek, true);
        this.view.setInt8(6, data.fDay, true);
        this.view.setInt8(7, data.fHour, true);
        this.view.setInt8(8, data.fMinute, true);
        this.view.setInt8(9, data.fSecond, true);
        
    }
}
class skDocumentPdfMetadata extends Struct {
    constructor(data) {
        super();
        this.buffer = new ArrayBuffer(80);
        this.view = new DataView(this.buffer);
        this.view.setBigInt64(0, data.fTitle, true);
        this.view.setBigInt64(8, data.fAuthor, true);
        this.view.setBigInt64(16, data.fSubject, true);
        this.view.setBigInt64(24, data.fKeywords, true);
        this.view.setBigInt64(32, data.fCreator, true);
        this.view.setBigInt64(40, data.fProducer, true);
        this.view.setBigInt64(48, data.fCreation, true);
        this.view.setBigInt64(56, data.fModified, true);
        this.view.setFloat32(64, data.fRasterDPI, true);
        this.view.setInt8(68, data.fPDFA, true);
        this.view.setInt32(72, data.fEncodingQuality, true);
        
    }
}
class skImageinfo extends Struct {
    constructor(data) {
        super();
        this.buffer = new ArrayBuffer(24);
        this.view = new DataView(this.buffer);
        this.view.setBigInt64(0, data.colorspace, true);
        this.view.setInt32(8, data.width, true);
        this.view.setInt32(12, data.height, true);
        this.view.setInt32(16, data.colorType, true);
        this.view.setInt32(20, data.alphaType, true);
        
    }
}
class skCodecFrameinfo extends Struct {
    constructor(data) {
        super();
        this.buffer = new ArrayBuffer(20);
        this.view = new DataView(this.buffer);
        this.view.setInt32(0, data.fRequiredFrame, true);
        this.view.setInt32(4, data.fDuration, true);
        this.view.setInt8(8, data.fFullyReceived, true);
        this.view.setInt32(12, data.fAlphaType, true);
        this.view.setInt32(16, data.fDisposalMethod, true);
        
    }
}
class skColorspaceTransferFn extends Struct {
    constructor(data) {
        super();
        this.buffer = new ArrayBuffer(28);
        this.view = new DataView(this.buffer);
        this.view.setFloat32(0, data.fG, true);
        this.view.setFloat32(4, data.fA, true);
        this.view.setFloat32(8, data.fB, true);
        this.view.setFloat32(12, data.fC, true);
        this.view.setFloat32(16, data.fD, true);
        this.view.setFloat32(20, data.fE, true);
        this.view.setFloat32(24, data.fF, true);
        
    }
}
class skColorspaceprimaries extends Struct {
    constructor(data) {
        super();
        this.buffer = new ArrayBuffer(32);
        this.view = new DataView(this.buffer);
        this.view.setFloat32(0, data.fRX, true);
        this.view.setFloat32(4, data.fRY, true);
        this.view.setFloat32(8, data.fGX, true);
        this.view.setFloat32(12, data.fGY, true);
        this.view.setFloat32(16, data.fBX, true);
        this.view.setFloat32(20, data.fBY, true);
        this.view.setFloat32(24, data.fWX, true);
        this.view.setFloat32(28, data.fWY, true);
        
    }
}
class skHighcontrastconfig extends Struct {
    constructor(data) {
        super();
        this.buffer = new ArrayBuffer(12);
        this.view = new DataView(this.buffer);
        this.view.setInt8(0, data.fGrayscale, true);
        this.view.setInt32(4, data.fInvertStyle, true);
        this.view.setFloat32(8, data.fContrast, true);
        
    }
}
class skPngencoderOptions extends Struct {
    constructor(data) {
        super();
        this.buffer = new ArrayBuffer(24);
        this.view = new DataView(this.buffer);
        this.view.setInt32(0, data.fFilterFlags, true);
        this.view.setInt32(4, data.fZLibLevel, true);
        this.view.setInt32(8, data.fUnpremulBehavior, true);
        this.view.setBigInt64(16, data.fComments, true);
        
    }
}
class skJpegencoderOptions extends Struct {
    constructor(data) {
        super();
        this.buffer = new ArrayBuffer(16);
        this.view = new DataView(this.buffer);
        this.view.setInt32(0, data.fQuality, true);
        this.view.setInt32(4, data.fDownsample, true);
        this.view.setInt32(8, data.fAlphaOption, true);
        this.view.setInt32(12, data.fBlendBehavior, true);
        
    }
}
class skWebpencoderOptions extends Struct {
    constructor(data) {
        super();
        this.buffer = new ArrayBuffer(12);
        this.view = new DataView(this.buffer);
        this.view.setInt32(0, data.fCompression, true);
        this.view.setFloat32(4, data.fQuality, true);
        this.view.setInt32(8, data.fUnpremulBehavior, true);
        
    }
}
class skTextblobBuilderRunbuffer extends Struct {
    constructor(data) {
        super();
        this.buffer = new ArrayBuffer(32);
        this.view = new DataView(this.buffer);
        this.view.setBigInt64(0, data.glyphs, true);
        this.view.setBigInt64(8, data.pos, true);
        this.view.setBigInt64(16, data.utf8text, true);
        this.view.setBigInt64(24, data.clusters, true);
        
    }
}
class skRsxform extends Struct {
    constructor(data) {
        super();
        this.buffer = new ArrayBuffer(16);
        this.view = new DataView(this.buffer);
        this.view.setFloat32(0, data.fSCos, true);
        this.view.setFloat32(4, data.fSSin, true);
        this.view.setFloat32(8, data.fTX, true);
        this.view.setFloat32(12, data.fTY, true);
        
    }
}
module.exports = {
    skColorSetArgb,
    getMemory,
    enums: {"UNKNOWN_SK_COLORTYPE":0,"ALPHA_8_SK_COLORTYPE":1,"RGB_565_SK_COLORTYPE":2,"ARGB_4444_SK_COLORTYPE":3,"RGBA_8888_SK_COLORTYPE":4,"RGB_888X_SK_COLORTYPE":5,"BGRA_8888_SK_COLORTYPE":6,"RGBA_1010102_SK_COLORTYPE":7,"RGB_101010X_SK_COLORTYPE":8,"GRAY_8_SK_COLORTYPE":9,"RGBA_F16_SK_COLORTYPE":10,"UNKNOWN_SK_ALPHATYPE":0,"OPAQUE_SK_ALPHATYPE":1,"PREMUL_SK_ALPHATYPE":2,"UNPREMUL_SK_ALPHATYPE":3,"UNKNOWN_SK_PIXELGEOMETRY":0,"RGB_H_SK_PIXELGEOMETRY":1,"BGR_H_SK_PIXELGEOMETRY":2,"RGB_V_SK_PIXELGEOMETRY":3,"BGR_V_SK_PIXELGEOMETRY":4,"NONE_SK_SURFACE_PROPS_FLAGS":0,"USE_DEVICE_INDEPENDENT_FONTS_SK_SURFACE_PROPS_FLAGS":1,"IDENTITY_SK_MATRIX44_TYPE_MASK":0,"TRANSLATE_SK_MATRIX44_TYPE_MASK":1,"SCALE_SK_MATRIX44_TYPE_MASK":2,"AFFINE_SK_MATRIX44_TYPE_MASK":4,"PERSPECTIVE_SK_MATRIX44_TYPE_MASK":8,"CLEAR_SK_BLENDMODE":0,"SRC_SK_BLENDMODE":1,"DST_SK_BLENDMODE":2,"SRCOVER_SK_BLENDMODE":3,"DSTOVER_SK_BLENDMODE":4,"SRCIN_SK_BLENDMODE":5,"DSTIN_SK_BLENDMODE":6,"SRCOUT_SK_BLENDMODE":7,"DSTOUT_SK_BLENDMODE":8,"SRCATOP_SK_BLENDMODE":9,"DSTATOP_SK_BLENDMODE":10,"XOR_SK_BLENDMODE":11,"PLUS_SK_BLENDMODE":12,"MODULATE_SK_BLENDMODE":13,"SCREEN_SK_BLENDMODE":14,"OVERLAY_SK_BLENDMODE":15,"DARKEN_SK_BLENDMODE":16,"LIGHTEN_SK_BLENDMODE":17,"COLORDODGE_SK_BLENDMODE":18,"COLORBURN_SK_BLENDMODE":19,"HARDLIGHT_SK_BLENDMODE":20,"SOFTLIGHT_SK_BLENDMODE":21,"DIFFERENCE_SK_BLENDMODE":22,"EXCLUSION_SK_BLENDMODE":23,"MULTIPLY_SK_BLENDMODE":24,"HUE_SK_BLENDMODE":25,"SATURATION_SK_BLENDMODE":26,"COLOR_SK_BLENDMODE":27,"LUMINOSITY_SK_BLENDMODE":28,"UTF8_SK_ENCODING":0,"UTF16_SK_ENCODING":1,"UTF32_SK_ENCODING":2,"POINTS_SK_POINT_MODE":0,"LINES_SK_POINT_MODE":1,"POLYGON_SK_POINT_MODE":2,"LEFT_SK_TEXT_ALIGN":0,"CENTER_SK_TEXT_ALIGN":1,"RIGHT_SK_TEXT_ALIGN":2,"UTF8_SK_TEXT_ENCODING":0,"UTF16_SK_TEXT_ENCODING":1,"UTF32_SK_TEXT_ENCODING":2,"GLYPH_ID_SK_TEXT_ENCODING":3,"WINDING_SK_PATH_FILLTYPE":0,"EVENODD_SK_PATH_FILLTYPE":1,"INVERSE_WINDING_SK_PATH_FILLTYPE":2,"INVERSE_EVENODD_SK_PATH_FILLTYPE":3,"UPRIGHT_SK_FONT_STYLE_SLANT":0,"ITALIC_SK_FONT_STYLE_SLANT":1,"OBLIQUE_SK_FONT_STYLE_SLANT":2,"NONE_SK_FILTER_QUALITY":0,"LOW_SK_FILTER_QUALITY":1,"MEDIUM_SK_FILTER_QUALITY":2,"HIGH_SK_FILTER_QUALITY":3,"HAS_NONE_SK_CROP_RECT_FLAG":0,"HAS_LEFT_SK_CROP_RECT_FLAG":1,"HAS_TOP_SK_CROP_RECT_FLAG":2,"HAS_WIDTH_SK_CROP_RECT_FLAG":4,"HAS_HEIGHT_SK_CROP_RECT_FLAG":8,"HAS_ALL_SK_CROP_RECT_FLAG":15,"DRAW_SHADOW_AND_FOREGROUND_SK_DROP_SHADOW_IMAGE_FILTER_SHADOW_MODE":0,"DRAW_SHADOW_ONLY_SK_DROP_SHADOW_IMAGE_FILTER_SHADOW_MODE":1,"UNKNOWN_SK_DISPLACEMENT_MAP_EFFECT_CHANNEL_SELECTOR_TYPE":0,"R_SK_DISPLACEMENT_MAP_EFFECT_CHANNEL_SELECTOR_TYPE":1,"G_SK_DISPLACEMENT_MAP_EFFECT_CHANNEL_SELECTOR_TYPE":2,"B_SK_DISPLACEMENT_MAP_EFFECT_CHANNEL_SELECTOR_TYPE":3,"A_SK_DISPLACEMENT_MAP_EFFECT_CHANNEL_SELECTOR_TYPE":4,"CLAMP_SK_MATRIX_CONVOLUTION_TILEMODE":0,"REPEAT_SK_MATRIX_CONVOLUTION_TILEMODE":1,"CLAMP_TO_BLACK_SK_MATRIX_CONVOLUTION_TILEMODE":2,"DIFFERENCE_SK_REGION_OP":0,"INTERSECT_SK_REGION_OP":1,"UNION_SK_REGION_OP":2,"XOR_SK_REGION_OP":3,"REVERSE_DIFFERENCE_SK_REGION_OP":4,"REPLACE_SK_REGION_OP":5,"DIFFERENCE_SK_CLIPOP":0,"INTERSECT_SK_CLIPOP":1,"BMP_SK_ENCODED_FORMAT":0,"GIF_SK_ENCODED_FORMAT":1,"ICO_SK_ENCODED_FORMAT":2,"JPEG_SK_ENCODED_FORMAT":3,"PNG_SK_ENCODED_FORMAT":4,"WBMP_SK_ENCODED_FORMAT":5,"WEBP_SK_ENCODED_FORMAT":6,"PKM_SK_ENCODED_FORMAT":7,"KTX_SK_ENCODED_FORMAT":8,"ASTC_SK_ENCODED_FORMAT":9,"DNG_SK_ENCODED_FORMAT":10,"HEIF_SK_ENCODED_FORMAT":11,"TOP_LEFT_SK_ENCODED_ORIGIN":1,"TOP_RIGHT_SK_ENCODED_ORIGIN":2,"BOTTOM_RIGHT_SK_ENCODED_ORIGIN":3,"BOTTOM_LEFT_SK_ENCODED_ORIGIN":4,"LEFT_TOP_SK_ENCODED_ORIGIN":5,"RIGHT_TOP_SK_ENCODED_ORIGIN":6,"RIGHT_BOTTOM_SK_ENCODED_ORIGIN":7,"LEFT_BOTTOM_SK_ENCODED_ORIGIN":8,"DEFAULT_SK_ENCODED_ORIGIN":1,"SUCCESS_SK_CODEC_RESULT":0,"INCOMPLETE_INPUT_SK_CODEC_RESULT":1,"ERROR_IN_INPUT_SK_CODEC_RESULT":2,"INVALID_CONVERSION_SK_CODEC_RESULT":3,"INVALID_SCALE_SK_CODEC_RESULT":4,"INVALID_PARAMETERS_SK_CODEC_RESULT":5,"INVALID_INPUT_SK_CODEC_RESULT":6,"COULD_NOT_REWIND_SK_CODEC_RESULT":7,"INTERNAL_ERROR_SK_CODEC_RESULT":8,"UNIMPLEMENTED_SK_CODEC_RESULT":9,"YES_SK_CODEC_ZERO_INITIALIZED":0,"NO_SK_CODEC_ZERO_INITIALIZED":1,"RESPECT_SK_TRANSFER_FUNCTION_BEHAVIOR":0,"IGNORE_SK_TRANSFER_FUNCTION_BEHAVIOR":1,"TOP_DOWN_SK_CODEC_SCANLINE_ORDER":0,"BOTTOM_UP_SK_CODEC_SCANLINE_ORDER":1,"MOVE_SK_PATH_VERB":0,"LINE_SK_PATH_VERB":1,"QUAD_SK_PATH_VERB":2,"CONIC_SK_PATH_VERB":3,"CUBIC_SK_PATH_VERB":4,"CLOSE_SK_PATH_VERB":5,"DONE_SK_PATH_VERB":6,"APPEND_SK_PATH_ADD_MODE":0,"EXTEND_SK_PATH_ADD_MODE":1,"LINE_SK_PATH_SEGMENT_MASK":1,"QUAD_SK_PATH_SEGMENT_MASK":2,"CONIC_SK_PATH_SEGMENT_MASK":4,"CUBIC_SK_PATH_SEGMENT_MASK":8,"TRANSLATE_SK_PATH_EFFECT_1D_STYLE":0,"ROTATE_SK_PATH_EFFECT_1D_STYLE":1,"MORPH_SK_PATH_EFFECT_1D_STYLE":2,"NORMAL_SK_PATH_EFFECT_TRIM_MODE":0,"INVERTED_SK_PATH_EFFECT_TRIM_MODE":1,"BUTT_SK_STROKE_CAP":0,"ROUND_SK_STROKE_CAP":1,"SQUARE_SK_STROKE_CAP":2,"MITER_SK_STROKE_JOIN":0,"ROUND_SK_STROKE_JOIN":1,"BEVEL_SK_STROKE_JOIN":2,"CLAMP_SK_SHADER_TILEMODE":0,"REPEAT_SK_SHADER_TILEMODE":1,"MIRROR_SK_SHADER_TILEMODE":2,"NORMAL_SK_BLUR_STYLE":0,"SOLID_SK_BLUR_STYLE":1,"OUTER_SK_BLUR_STYLE":2,"INNER_SK_BLUR_STYLE":3,"CW_SK_PATH_DIRECTION":0,"CCW_SK_PATH_DIRECTION":1,"SMALL_SK_PATH_ARC_SIZE":0,"LARGE_SK_PATH_ARC_SIZE":1,"FILL_SK_PAINT_STYLE":0,"STROKE_SK_PAINT_STYLE":1,"STROKE_AND_FILL_SK_PAINT_STYLE":2,"NO_HINTING_SK_PAINT_HINTING":0,"SLIGHT_HINTING_SK_PAINT_HINTING":1,"NORMAL_HINTING_SK_PAINT_HINTING":2,"FULL_HINTING_SK_PAINT_HINTING":3,"TOP_LEFT_GR_SURFACE_ORIGIN":0,"BOTTOM_LEFT_GR_SURFACE_ORIGIN":1,"UNKNOWN_GR_PIXEL_CONFIG":0,"ALPHA_8_GR_PIXEL_CONFIG":1,"GRAY_8_GR_PIXEL_CONFIG":2,"RGB_565_GR_PIXEL_CONFIG":3,"RGBA_4444_GR_PIXEL_CONFIG":4,"RGBA_8888_GR_PIXEL_CONFIG":5,"RGB_888_GR_PIXEL_CONFIG":6,"BGRA_8888_GR_PIXEL_CONFIG":7,"SRGBA_8888_GR_PIXEL_CONFIG":8,"SBGRA_8888_GR_PIXEL_CONFIG":9,"RGBA_1010102_GR_PIXEL_CONFIG":10,"RGBA_FLOAT_GR_PIXEL_CONFIG":11,"RG_FLOAT_GR_PIXEL_CONFIG":12,"ALPHA_HALF_GR_PIXEL_CONFIG":13,"RGBA_HALF_GR_PIXEL_CONFIG":14,"BW_SK_MASK_FORMAT":0,"A8_SK_MASK_FORMAT":1,"THREE_D_SK_MASK_FORMAT":2,"ARGB32_SK_MASK_FORMAT":3,"LCD16_SK_MASK_FORMAT":4,"METAL_GR_BACKEND":0,"OPENGL_GR_BACKEND":1,"VULKAN_GR_BACKEND":2,"DIFFERENCE_SK_PATHOP":0,"INTERSECT_SK_PATHOP":1,"UNION_SK_PATHOP":2,"XOR_SK_PATHOP":3,"REVERSE_DIFFERENCE_SK_PATHOP":4,"UNKNOWN_SK_PATH_CONVEXITY":0,"CONVEX_SK_PATH_CONVEXITY":1,"CONCAVE_SK_PATH_CONVEXITY":2,"DEFAULT_SK_LATTICE_RECT_TYPE":0,"TRANSPARENT_SK_LATTICE_RECT_TYPE":1,"FIXED_COLOR_SK_LATTICE_RECT_TYPE":2,"GET_POSITION_SK_PATHMEASURE_MATRIXFLAGS":1,"GET_TANGENT_SK_PATHMEASURE_MATRIXFLAGS":2,"GET_POS_AND_TAN_SK_PATHMEASURE_MATRIXFLAGS":3,"ALLOW_SK_IMAGE_CACHING_HINT":0,"DISALLOW_SK_IMAGE_CACHING_HINT":1,"NONE_SK_BITMAP_ALLOC_FLAGS":0,"ZERO_PIXELS_SK_BITMAP_ALLOC_FLAGS":1,"KEEP_SK_CODEC_ANIMATION_DISPOSAL_METHOD":1,"RESTORE_BG_COLOR_SK_CODEC_ANIMATION_DISPOSAL_METHOD":2,"RESTORE_PREVIOUS_SK_CODEC_ANIMATION_DISPOSAL_METHOD":3,"TRIANGLES_SK_VERTICES_VERTEX_MODE":0,"TRIANGLE_STRIP_SK_VERTICES_VERTEX_MODE":1,"TRIANGLE_FAN_SK_VERTICES_VERTEX_MODE":2,"LINEAR_SK_GAMMA_NAMED":0,"SRGB_SK_GAMMA_NAMED":1,"TWO_DOT_TWO_CURVE_SK_GAMMA_NAMED":2,"NON_STANDARD_SK_GAMMA_NAMED":3,"RGB_SK_COLORSPACE_TYPE":0,"CMYK_SK_COLORSPACE_TYPE":1,"GRAY_SK_COLORSPACE_TYPE":2,"LINEAR_SK_COLORSPACE_RENDER_TARGET_GAMMA":0,"SRGB_SK_COLORSPACE_RENDER_TARGET_GAMMA":1,"SRGB_SK_COLORSPACE_GAMUT":0,"ADOBE_RGB_SK_COLORSPACE_GAMUT":1,"DCIP3_D65_SK_COLORSPACE_GAMUT":2,"REC2020_SK_COLORSPACE_GAMUT":3,"NO_INVERT_SK_HIGH_CONTRAST_CONFIG_INVERT_STYLE":0,"INVERT_BRIGHTNESS_SK_HIGH_CONTRAST_CONFIG_INVERT_STYLE":1,"INVERT_LIGHTNESS_SK_HIGH_CONTRAST_CONFIG_INVERT_STYLE":2,"ZERO_SK_PNGENCODER_FILTER_FLAGS":0,"NONE_SK_PNGENCODER_FILTER_FLAGS":8,"SUB_SK_PNGENCODER_FILTER_FLAGS":16,"UP_SK_PNGENCODER_FILTER_FLAGS":32,"AVG_SK_PNGENCODER_FILTER_FLAGS":64,"PAETH_SK_PNGENCODER_FILTER_FLAGS":128,"ALL_SK_PNGENCODER_FILTER_FLAGS":248,"DOWNSAMPLE_420_SK_JPEGENCODER_DOWNSAMPLE":0,"DOWNSAMPLE_422_SK_JPEGENCODER_DOWNSAMPLE":1,"DOWNSAMPLE_444_SK_JPEGENCODER_DOWNSAMPLE":2,"IGNORE_SK_JPEGENCODER_ALPHA_OPTION":0,"BLEND_ON_BLACK_SK_JPEGENCODER_ALPHA_OPTION":1,"LOSSY_SK_WEBPENCODER_COMPTRESSION":0,"LOSSLESS_SK_WEBPENCODER_COMPTRESSION":1,"EMPTY_SK_RRECT_TYPE":0,"RECT_SK_RRECT_TYPE":1,"OVAL_SK_RRECT_TYPE":2,"SIMPLE_SK_RRECT_TYPE":3,"NINE_PATCH_SK_RRECT_TYPE":4,"COMPLEX_SK_RRECT_TYPE":5,"UPPER_LEFT_SK_RRECT_CORNER":0,"UPPER_RIGHT_SK_RRECT_CORNER":1,"LOWER_RIGHT_SK_RRECT_CORNER":2,"LOWER_LEFT_SK_RRECT_CORNER":3},
    skPoint,
    skIrect,
    skRect,
    skMatrix,
    skPoint3,
    skIpoint,
    skSize,
    skIsize,
    skFontmetrics,
    skCodecOptions,
    skMask,
    grGlTextureinfo,
    grGlFramebufferinfo,
    skLattice,
    skTimeDatetime,
    skDocumentPdfMetadata,
    skImageinfo,
    skCodecFrameinfo,
    skColorspaceTransferFn,
    skColorspaceprimaries,
    skHighcontrastconfig,
    skPngencoderOptions,
    skJpegencoderOptions,
    skWebpencoderOptions,
    skTextblobBuilderRunbuffer,
    skRsxform,
    
    grContextMakeGl,
    grContextUnref,
    grContextAbandonContext,
    grContextReleaseResourcesAndAbandonContext,
    grContextGetResourceCacheLimits,
    grContextSetResourceCacheLimits,
    grContextGetResourceCacheUsage,
    grContextGetMaxSurfaceSampleCountForColorType,
    grContextFlush,
    grContextResetContext,
    grContextGetBackend,
    grGlinterfaceCreateNativeInterface,
    grGlinterfaceAssembleInterface,
    grGlinterfaceAssembleGlInterface,
    grGlinterfaceAssembleGlesInterface,
    grGlinterfaceUnref,
    grGlinterfaceValidate,
    grGlinterfaceHasExtension,
    grBackendtextureNewGl,
    grBackendtextureDelete,
    grBackendtextureIsValid,
    grBackendtextureGetWidth,
    grBackendtextureGetHeight,
    grBackendtextureHasMipmaps,
    grBackendtextureGetBackend,
    grBackendtextureGetGlTextureinfo,
    grBackendrendertargetNewGl,
    grBackendrendertargetDelete,
    grBackendrendertargetIsValid,
    grBackendrendertargetGetWidth,
    grBackendrendertargetGetHeight,
    grBackendrendertargetGetSamples,
    grBackendrendertargetGetStencils,
    grBackendrendertargetGetBackend,
    grBackendrendertargetGetGlFramebufferinfo,
    skBitmapDestructor,
    skBitmapNew,
    skBitmapGetInfo,
    skBitmapGetPixels,
    skBitmapGetRowBytes,
    skBitmapGetByteCount,
    skBitmapReset,
    skBitmapIsNull,
    skBitmapIsImmutable,
    skBitmapSetImmutable,
    skBitmapIsVolatile,
    skBitmapSetVolatile,
    skBitmapErase,
    skBitmapEraseRect,
    skBitmapGetAddr_8,
    skBitmapGetAddr_16,
    skBitmapGetAddr_32,
    skBitmapGetAddr,
    skBitmapGetPixelColor,
    skBitmapSetPixelColor,
    skBitmapReadyToDraw,
    skBitmapGetPixelColors,
    skBitmapSetPixelColors,
    skBitmapInstallPixels,
    skBitmapInstallPixelsWithPixmap,
    skBitmapInstallMaskPixels,
    skBitmapTryAllocPixels,
    skBitmapTryAllocPixelsWithFlags,
    skBitmapSetPixels,
    skBitmapPeekPixels,
    skBitmapExtractSubset,
    skBitmapExtractAlpha,
    skBitmapNotifyPixelsChanged,
    skBitmapSwap,
    skCanvasDestroy,
    skCanvasSave,
    skCanvasSaveLayer,
    skCanvasRestore,
    skCanvasTranslate,
    skCanvasScale,
    skCanvasRotateDegrees,
    skCanvasRotateRadians,
    skCanvasSkew,
    skCanvasConcat,
    skCanvasQuickReject,
    skCanvasClipRegion,
    skCanvasDrawPaint,
    skCanvasDrawRect,
    skCanvasDrawRrect,
    skCanvasDrawRegion,
    skCanvasDrawCircle,
    skCanvasDrawOval,
    skCanvasDrawPath,
    skCanvasDrawImage,
    skCanvasDrawImageRect,
    skCanvasDrawPicture,
    skCanvasDrawDrawable,
    skCanvasClear,
    skCanvasDiscard,
    skCanvasGetSaveCount,
    skCanvasRestoreToCount,
    skCanvasDrawColor,
    skCanvasDrawPoints,
    skCanvasDrawPoint,
    skCanvasDrawLine,
    skCanvasDrawText,
    skCanvasDrawPosText,
    skCanvasDrawTextOnPath,
    skCanvasDrawTextBlob,
    skCanvasDrawBitmap,
    skCanvasDrawBitmapRect,
    skCanvasResetMatrix,
    skCanvasSetMatrix,
    skCanvasGetTotalMatrix,
    skCanvasDrawRoundRect,
    skCanvasClipRectWithOperation,
    skCanvasClipPathWithOperation,
    skCanvasClipRrectWithOperation,
    skCanvasGetLocalClipBounds,
    skCanvasGetDeviceClipBounds,
    skCanvasFlush,
    skCanvasNewFromBitmap,
    skCanvasDrawAnnotation,
    skCanvasDrawUrlAnnotation,
    skCanvasDrawNamedDestinationAnnotation,
    skCanvasDrawLinkDestinationAnnotation,
    skCanvasDrawBitmapLattice,
    skCanvasDrawImageLattice,
    skCanvasDrawBitmapNine,
    skCanvasDrawImageNine,
    skCanvasDrawVertices,
    skCanvasDrawArc,
    skCanvasDrawDrrect,
    skCanvasDrawAtlas,
    skCanvasDrawPatch,
    skCanvasIsClipEmpty,
    skCanvasIsClipRect,
    skNodrawCanvasNew,
    skNodrawCanvasDestroy,
    skNwayCanvasNew,
    skNwayCanvasDestroy,
    skNwayCanvasAddCanvas,
    skNwayCanvasRemoveCanvas,
    skNwayCanvasRemoveAll,
    skOverdrawCanvasNew,
    skOverdrawCanvasDestroy,
    skCodecMinBufferedBytesNeeded,
    skCodecNewFromStream,
    skCodecNewFromData,
    skCodecDestroy,
    skCodecGetInfo,
    skCodecGetOrigin,
    skCodecGetScaledDimensions,
    skCodecGetValidSubset,
    skCodecGetEncodedFormat,
    skCodecGetPixels,
    skCodecStartIncrementalDecode,
    skCodecIncrementalDecode,
    skCodecStartScanlineDecode,
    skCodecGetScanlines,
    skCodecSkipScanlines,
    skCodecGetScanlineOrder,
    skCodecNextScanline,
    skCodecOutputScanline,
    skCodecGetFrameCount,
    skCodecGetFrameInfo,
    skCodecGetFrameInfoForIndex,
    skCodecGetRepetitionCount,
    skColorfilterUnref,
    skColorfilterNewMode,
    skColorfilterNewLighting,
    skColorfilterNewCompose,
    skColorfilterNewColorMatrix,
    skColorfilterNewLumaColor,
    skColorfilterNewHighContrast,
    skColorfilterNewTable,
    skColorfilterNewTableArgb,
    skColorspaceUnref,
    skColorspaceNewSrgb,
    skColorspaceNewSrgbLinear,
    skColorspaceNewIcc,
    skColorspaceNewRgbWithGamma,
    skColorspaceNewRgbWithGammaAndGamut,
    skColorspaceNewRgbWithCoeffs,
    skColorspaceNewRgbWithCoeffsAndGamut,
    skColorspaceNewRgbWithGammaNamed,
    skColorspaceNewRgbWithGammaNamedAndGamut,
    skColorspaceGammaGetType,
    skColorspaceGammaGetGammaNamed,
    skColorspaceGammaCloseToSrgb,
    skColorspaceGammaIsLinear,
    skColorspaceIsSrgb,
    skColorspaceEquals,
    skColorspaceToXyzd50,
    skColorspaceAsToXyzd50,
    skColorspaceAsFromXyzd50,
    skColorspaceIsNumericalTransferFn,
    skColorspaceprimariesToXyzd50,
    skColorspaceTransferFnInvert,
    skColorspaceTransferFnTransform,
    skColortableUnref,
    skColortableNew,
    skColortableCount,
    skColortableReadColors,
    skDataNewEmpty,
    skDataNewWithCopy,
    skDataNewSubset,
    skDataRef,
    skDataUnref,
    skDataGetSize,
    skDataGetData,
    skDataNewFromFile,
    skDataNewFromStream,
    skDataGetBytes,
    skDataNewWithProc,
    skDataNewUninitialized,
    skDocumentUnref,
    skDocumentCreatePdfFromStream,
    skDocumentCreatePdfFromStreamWithMetadata,
    skDocumentCreateXpsFromStream,
    skDocumentBeginPage,
    skDocumentEndPage,
    skDocumentClose,
    skDocumentAbort,
    skDrawableUnref,
    skDrawableGetGenerationId,
    skDrawableGetBounds,
    skDrawableDraw,
    skDrawableNewPictureSnapshot,
    skDrawableNotifyDrawingChanged,
    skRefcntUnique,
    skRefcntGetRefCount,
    skRefcntSafeRef,
    skRefcntSafeUnref,
    skNvrefcntUnique,
    skNvrefcntGetRefCount,
    skNvrefcntSafeRef,
    skNvrefcntSafeUnref,
    skColortypeGetDefault_8888,
    skImageNewRasterCopy,
    skImageNewRasterCopyWithPixmap,
    skImageNewRasterData,
    skImageNewRaster,
    skImageNewFromBitmap,
    skImageNewFromEncoded,
    skImageNewFromTexture,
    skImageNewFromAdoptedTexture,
    skImageNewFromPicture,
    skImageMakeSubset,
    skImageMakeNonTextureImage,
    skImageMakeWithFilter,
    skImageRef,
    skImageUnref,
    skImageGetWidth,
    skImageGetHeight,
    skImageGetUniqueId,
    skImageGetAlphaType,
    skImageGetColorType,
    skImageGetColorspace,
    skImageIsAlphaOnly,
    skImageMakeShader,
    skImagePeekPixels,
    skImageIsTextureBacked,
    skImageIsLazyGenerated,
    skImageReadPixels,
    skImageReadPixelsIntoPixmap,
    skImageScalePixels,
    skImageRefEncoded,
    skImageEncode,
    skImageEncodeSpecific,
    skImagefilterCroprectNew,
    skImagefilterCroprectNewWithRect,
    skImagefilterCroprectDestructor,
    skImagefilterCroprectGetRect,
    skImagefilterCroprectGetFlags,
    skImagefilterUnref,
    skImagefilterNewMatrix,
    skImagefilterNewAlphaThreshold,
    skImagefilterNewBlur,
    skImagefilterNewColorFilter,
    skImagefilterNewCompose,
    skImagefilterNewDisplacementMapEffect,
    skImagefilterNewDropShadow,
    skImagefilterNewDistantLitDiffuse,
    skImagefilterNewPointLitDiffuse,
    skImagefilterNewSpotLitDiffuse,
    skImagefilterNewDistantLitSpecular,
    skImagefilterNewPointLitSpecular,
    skImagefilterNewSpotLitSpecular,
    skImagefilterNewMagnifier,
    skImagefilterNewMatrixConvolution,
    skImagefilterNewMerge,
    skImagefilterNewDilate,
    skImagefilterNewErode,
    skImagefilterNewOffset,
    skImagefilterNewPicture,
    skImagefilterNewPictureWithCroprect,
    skImagefilterNewTile,
    skImagefilterNewXfermode,
    skImagefilterNewArithmetic,
    skImagefilterNewImageSource,
    skImagefilterNewImageSourceDefault,
    skImagefilterNewPaint,
    skMaskAllocImage,
    skMaskFreeImage,
    skMaskIsEmpty,
    skMaskComputeImageSize,
    skMaskComputeTotalImageSize,
    skMaskGetAddr_1,
    skMaskGetAddr_8,
    skMaskGetAddrLcd_16,
    skMaskGetAddr_32,
    skMaskGetAddr,
    skMaskfilterRef,
    skMaskfilterUnref,
    skMaskfilterNewBlur,
    skMaskfilterNewBlurWithFlags,
    skMaskfilterNewTable,
    skMaskfilterNewGamma,
    skMaskfilterNewClip,
    skMatrixTryInvert,
    skMatrixConcat,
    skMatrixPreConcat,
    skMatrixPostConcat,
    skMatrixMapRect,
    skMatrixMapPoints,
    skMatrixMapVectors,
    skMatrixMapXy,
    skMatrixMapVector,
    skMatrixMapRadius,
    sk_3dviewNew,
    sk_3dviewDestroy,
    sk_3dviewSave,
    sk_3dviewRestore,
    sk_3dviewTranslate,
    sk_3dviewRotateXDegrees,
    sk_3dviewRotateYDegrees,
    sk_3dviewRotateZDegrees,
    sk_3dviewRotateXRadians,
    sk_3dviewRotateYRadians,
    sk_3dviewRotateZRadians,
    sk_3dviewGetMatrix,
    sk_3dviewApplyToCanvas,
    sk_3dviewDotWithNormal,
    skMatrix44Destroy,
    skMatrix44New,
    skMatrix44NewIdentity,
    skMatrix44NewCopy,
    skMatrix44NewConcat,
    skMatrix44NewMatrix,
    skMatrix44Equals,
    skMatrix44ToMatrix,
    skMatrix44GetType,
    skMatrix44SetIdentity,
    skMatrix44Get,
    skMatrix44Set,
    skMatrix44AsColMajor,
    skMatrix44AsRowMajor,
    skMatrix44SetColMajor,
    skMatrix44SetRowMajor,
    skMatrix44SetTranslate,
    skMatrix44PreTranslate,
    skMatrix44PostTranslate,
    skMatrix44SetScale,
    skMatrix44PreScale,
    skMatrix44PostScale,
    skMatrix44SetRotateAboutDegrees,
    skMatrix44SetRotateAboutRadians,
    skMatrix44SetRotateAboutRadiansUnit,
    skMatrix44SetConcat,
    skMatrix44PreConcat,
    skMatrix44PostConcat,
    skMatrix44Invert,
    skMatrix44Transpose,
    skMatrix44MapScalars,
    skMatrix44Map2,
    skMatrix44Preserves_2dAxisAlignment,
    skMatrix44Determinant,
    skPaintNew,
    skPaintClone,
    skPaintDelete,
    skPaintReset,
    skPaintIsAntialias,
    skPaintSetAntialias,
    skPaintGetColor,
    skPaintSetColor,
    skPaintGetStyle,
    skPaintSetStyle,
    skPaintGetStrokeWidth,
    skPaintSetStrokeWidth,
    skPaintGetStrokeMiter,
    skPaintSetStrokeMiter,
    skPaintGetStrokeCap,
    skPaintSetStrokeCap,
    skPaintGetStrokeJoin,
    skPaintSetStrokeJoin,
    skPaintSetShader,
    skPaintSetMaskfilter,
    skPaintSetBlendmode,
    skPaintIsDither,
    skPaintSetDither,
    skPaintIsVerticaltext,
    skPaintSetVerticaltext,
    skPaintGetShader,
    skPaintGetMaskfilter,
    skPaintSetColorfilter,
    skPaintGetColorfilter,
    skPaintSetImagefilter,
    skPaintGetImagefilter,
    skPaintGetBlendmode,
    skPaintSetFilterQuality,
    skPaintGetFilterQuality,
    skPaintGetTypeface,
    skPaintSetTypeface,
    skPaintGetTextsize,
    skPaintSetTextsize,
    skPaintGetTextAlign,
    skPaintSetTextAlign,
    skPaintGetTextEncoding,
    skPaintSetTextEncoding,
    skPaintGetTextScaleX,
    skPaintSetTextScaleX,
    skPaintGetTextSkewX,
    skPaintSetTextSkewX,
    skPaintBreakText,
    skPaintMeasureText,
    skPaintGetTextPath,
    skPaintGetPosTextPath,
    skPaintGetFontmetrics,
    skPaintGetPathEffect,
    skPaintSetPathEffect,
    skPaintIsLinearText,
    skPaintSetLinearText,
    skPaintIsSubpixelText,
    skPaintSetSubpixelText,
    skPaintIsLcdRenderText,
    skPaintSetLcdRenderText,
    skPaintIsEmbeddedBitmapText,
    skPaintSetEmbeddedBitmapText,
    skPaintGetHinting,
    skPaintSetHinting,
    skPaintIsAutohinted,
    skPaintSetAutohinted,
    skPaintIsFakeBoldText,
    skPaintSetFakeBoldText,
    skPaintIsDevKernText,
    skPaintSetDevKernText,
    skPaintGetFillPath,
    skPaintTextToGlyphs,
    skPaintContainsText,
    skPaintCountText,
    skPaintGetTextWidths,
    skPaintGetTextIntercepts,
    skPaintGetPosTextIntercepts,
    skPaintGetPosTextHIntercepts,
    skPaintGetPosTextBlobIntercepts,
    skPathNew,
    skPathDelete,
    skPathMoveTo,
    skPathLineTo,
    skPathQuadTo,
    skPathConicTo,
    skPathCubicTo,
    skPathArcTo,
    skPathRarcTo,
    skPathArcToWithOval,
    skPathArcToWithPoints,
    skPathClose,
    skPathAddRect,
    skPathAddRrect,
    skPathAddRrectStart,
    skPathAddRoundedRect,
    skPathAddOval,
    skPathAddCircle,
    skPathGetBounds,
    skPathComputeTightBounds,
    skPathRmoveTo,
    skPathRlineTo,
    skPathRquadTo,
    skPathRconicTo,
    skPathRcubicTo,
    skPathAddRectStart,
    skPathAddArc,
    skPathGetFilltype,
    skPathSetFilltype,
    skPathTransform,
    skPathClone,
    skPathAddPathOffset,
    skPathAddPathMatrix,
    skPathAddPath,
    skPathAddPathReverse,
    skPathReset,
    skPathRewind,
    skPathCountPoints,
    skPathCountVerbs,
    skPathGetPoint,
    skPathGetPoints,
    skPathContains,
    skPathGetConvexity,
    skPathSetConvexity,
    skPathParseSvgString,
    skPathToSvgString,
    skPathGetLastPoint,
    skPathConvertConicToQuads,
    skPathAddPoly,
    skPathGetSegmentMasks,
    skPathIsOval,
    skPathIsRrect,
    skPathIsLine,
    skPathIsRect,
    skPathCreateIter,
    skPathIterNext,
    skPathIterConicWeight,
    skPathIterIsCloseLine,
    skPathIterIsClosedContour,
    skPathIterDestroy,
    skPathCreateRawiter,
    skPathRawiterPeek,
    skPathRawiterNext,
    skPathRawiterConicWeight,
    skPathRawiterDestroy,
    skPathopOp,
    skPathopSimplify,
    skPathopTightBounds,
    skOpbuilderNew,
    skOpbuilderDestroy,
    skOpbuilderAdd,
    skOpbuilderResolve,
    skPathmeasureNew,
    skPathmeasureNewWithPath,
    skPathmeasureDestroy,
    skPathmeasureSetPath,
    skPathmeasureGetLength,
    skPathmeasureGetPosTan,
    skPathmeasureGetMatrix,
    skPathmeasureGetSegment,
    skPathmeasureIsClosed,
    skPathmeasureNextContour,
    skPathEffectUnref,
    skPathEffectCreateCompose,
    skPathEffectCreateSum,
    skPathEffectCreateDiscrete,
    skPathEffectCreateCorner,
    skPathEffectCreate_1dPath,
    skPathEffectCreate_2dLine,
    skPathEffectCreate_2dPath,
    skPathEffectCreateDash,
    skPathEffectCreateTrim,
    skPictureRecorderNew,
    skPictureRecorderDelete,
    skPictureRecorderBeginRecording,
    skPictureRecorderEndRecording,
    skPictureRecorderEndRecordingAsDrawable,
    skPictureGetRecordingCanvas,
    skPictureRef,
    skPictureUnref,
    skPictureGetUniqueId,
    skPictureGetCullRect,
    skPixmapDestructor,
    skPixmapNew,
    skPixmapNewWithParams,
    skPixmapReset,
    skPixmapResetWithParams,
    skPixmapGetInfo,
    skPixmapGetRowBytes,
    skPixmapGetPixels,
    skPixmapGetPixelsWithXy,
    skPixmapGetPixelColor,
    skPixmapEncodeImage,
    skPixmapReadPixels,
    skPixmapScalePixels,
    skPixmapExtractSubset,
    skPixmapEraseColor,
    skColorUnpremultiply,
    skColorPremultiply,
    skColorUnpremultiplyArray,
    skColorPremultiplyArray,
    skColorGetBitShift,
    skSwizzleSwapRb,
    skWebpencoderEncode,
    skJpegencoderEncode,
    skPngencoderEncode,
    skRegionNew,
    skRegionNew2,
    skRegionDelete,
    skRegionContains,
    skRegionContains2,
    skRegionIntersectsRect,
    skRegionIntersects,
    skRegionSetPath,
    skRegionSetRect,
    skRegionSetRegion,
    skRegionOp,
    skRegionOp2,
    skRegionGetBounds,
    skRrectNew,
    skRrectNewCopy,
    skRrectDelete,
    skRrectGetType,
    skRrectGetRect,
    skRrectGetRadii,
    skRrectGetWidth,
    skRrectGetHeight,
    skRrectSetEmpty,
    skRrectSetRect,
    skRrectSetOval,
    skRrectSetRectXy,
    skRrectSetNinePatch,
    skRrectSetRectRadii,
    skRrectInset,
    skRrectOutset,
    skRrectOffset,
    skRrectContains,
    skRrectIsValid,
    skRrectTransform,
    skShaderRef,
    skShaderUnref,
    skShaderNewLinearGradient,
    skShaderNewRadialGradient,
    skShaderNewSweepGradient,
    skShaderNewTwoPointConicalGradient,
    skShaderNewEmpty,
    skShaderNewColor,
    skShaderNewBitmap,
    skShaderNewPicture,
    skShaderNewLocalMatrix,
    skShaderNewColorFilter,
    skShaderNewPerlinNoiseFractalNoise,
    skShaderNewPerlinNoiseTurbulence,
    skShaderNewPerlinNoiseImprovedNoise,
    skShaderNewCompose,
    skShaderNewComposeWithMode,
    skStreamAssetDestroy,
    skFilestreamNew,
    skFilestreamDestroy,
    skFilestreamIsValid,
    skMemorystreamNew,
    skMemorystreamNewWithLength,
    skMemorystreamNewWithData,
    skMemorystreamNewWithSkdata,
    skMemorystreamSetMemory,
    skMemorystreamDestroy,
    skStreamRead,
    skStreamPeek,
    skStreamSkip,
    skStreamIsAtEnd,
    skStreamReadS8,
    skStreamReadS16,
    skStreamReadS32,
    skStreamReadU8,
    skStreamReadU16,
    skStreamReadU32,
    skStreamReadBool,
    skStreamRewind,
    skStreamHasPosition,
    skStreamGetPosition,
    skStreamSeek,
    skStreamMove,
    skStreamHasLength,
    skStreamGetLength,
    skStreamGetMemoryBase,
    skStreamFork,
    skStreamDuplicate,
    skStreamDestroy,
    skFilewstreamNew,
    skFilewstreamDestroy,
    skFilewstreamIsValid,
    skDynamicmemorywstreamNew,
    skDynamicmemorywstreamDetachAsStream,
    skDynamicmemorywstreamDetachAsData,
    skDynamicmemorywstreamCopyTo,
    skDynamicmemorywstreamWriteToStream,
    skDynamicmemorywstreamDestroy,
    skWstreamWrite,
    skWstreamNewline,
    skWstreamFlush,
    skWstreamBytesWritten,
    skWstreamWrite_8,
    skWstreamWrite_16,
    skWstreamWrite_32,
    skWstreamWriteText,
    skWstreamWriteDecAsText,
    skWstreamWriteBigdecAsText,
    skWstreamWriteHexAsText,
    skWstreamWriteScalarAsText,
    skWstreamWriteBool,
    skWstreamWriteScalar,
    skWstreamWritePackedUint,
    skWstreamWriteStream,
    skWstreamGetSizeOfPackedUint,
    skStringNewEmpty,
    skStringNewWithCopy,
    skStringDestructor,
    skStringGetSize,
    skStringGetCStr,
    skSurfaceNewNull,
    skSurfaceNewRaster,
    skSurfaceNewRasterDirect,
    skSurfaceNewBackendTexture,
    skSurfaceNewBackendRenderTarget,
    skSurfaceNewBackendTextureAsRenderTarget,
    skSurfaceNewRenderTarget,
    skSurfaceUnref,
    skSurfaceGetCanvas,
    skSurfaceNewImageSnapshot,
    skSurfaceDraw,
    skSurfacePeekPixels,
    skSurfaceReadPixels,
    skSurfaceGetProps,
    skSurfacepropsNew,
    skSurfacepropsDelete,
    skSurfacepropsGetFlags,
    skSurfacepropsGetPixelGeometry,
    skSvgcanvasCreate,
    skTextblobRef,
    skTextblobUnref,
    skTextblobGetUniqueId,
    skTextblobGetBounds,
    skTextblobBuilderNew,
    skTextblobBuilderDelete,
    skTextblobBuilderMake,
    skTextblobBuilderAllocRunText,
    skTextblobBuilderAllocRunTextPosH,
    skTextblobBuilderAllocRunTextPos,
    skTypefaceCreateDefault,
    skTypefaceRefDefault,
    skTypefaceCreateFromNameWithFontStyle,
    skTypefaceUnref,
    skTypefaceCreateFromFile,
    skTypefaceCreateFromStream,
    skTypefaceCharsToGlyphs,
    skTypefaceOpenStream,
    skTypefaceGetUnitsPerEm,
    skTypefaceGetFamilyName,
    skTypefaceGetFontstyle,
    skTypefaceGetFontWeight,
    skTypefaceGetFontWidth,
    skTypefaceGetFontSlant,
    skTypefaceCountTables,
    skTypefaceGetTableTags,
    skTypefaceGetTableSize,
    skTypefaceGetTableData,
    skTypefaceIsFixedPitch,
    skFontmgrCreateDefault,
    skFontmgrRefDefault,
    skFontmgrUnref,
    skFontmgrCountFamilies,
    skFontmgrGetFamilyName,
    skFontmgrCreateStyleset,
    skFontmgrMatchFamily,
    skFontmgrMatchFamilyStyle,
    skFontmgrMatchFamilyStyleCharacter,
    skFontmgrMatchFaceStyle,
    skFontmgrCreateFromData,
    skFontmgrCreateFromStream,
    skFontmgrCreateFromFile,
    skFontstyleNew,
    skFontstyleDelete,
    skFontstyleGetWeight,
    skFontstyleGetWidth,
    skFontstyleGetSlant,
    skFontstylesetCreateEmpty,
    skFontstylesetUnref,
    skFontstylesetGetCount,
    skFontstylesetGetStyle,
    skFontstylesetCreateTypeface,
    skFontstylesetMatchStyle,
    skVerticesUnref,
    skVerticesRef,
    skVerticesMakeCopy,
    skXmlstreamwriterNew,
    skXmlstreamwriterDelete,
    
};
