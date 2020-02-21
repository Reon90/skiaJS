const { platform } = process;
const skia = require(`../build/${platform}/Release/skiaJS.node`);

function skColorSetArgb(a, r, g, b) {
    return (((a) << 24) | ((r) << 16) | ((g) << 8) | (b));
}

function getMemory(p, l) {
    return skia.getMemory(p, l);
}



function grContextMakeGl(ra1) {
    return skia.grContextMakeGl(ra1);
}
function grContextUnref(ra1) {
    return skia.grContextUnref(ra1);
}
function grContextAbandonContext(ra1) {
    return skia.grContextAbandonContext(ra1);
}
function grContextReleaseResourcesAndAbandonContext(ra1) {
    return skia.grContextReleaseResourcesAndAbandonContext(ra1);
}
function grContextGetResourceCacheLimits(ra1,ra2,ra3) {
    return skia.grContextGetResourceCacheLimits(ra1,ra2,ra3);
}
function grContextSetResourceCacheLimits(ra1,ra2,ra3) {
    return skia.grContextSetResourceCacheLimits(ra1,ra2,ra3);
}
function grContextGetResourceCacheUsage(ra1,ra2,ra3) {
    return skia.grContextGetResourceCacheUsage(ra1,ra2,ra3);
}
function grContextGetMaxSurfaceSampleCountForColorType(ra1,ra2) {
    return skia.grContextGetMaxSurfaceSampleCountForColorType(ra1,ra2);
}
function grContextFlush(ra1) {
    return skia.grContextFlush(ra1);
}
function grContextResetContext(ra1,ra2) {
    return skia.grContextResetContext(ra1,ra2);
}
function grContextGetBackend(ra1) {
    return skia.grContextGetBackend(ra1);
}
function grGlinterfaceCreateNativeInterface() {
    return skia.grGlinterfaceCreateNativeInterface();
}
function grGlinterfaceAssembleInterface(ra1,ra2) {
    return skia.grGlinterfaceAssembleInterface(ra1,ra2);
}
function grGlinterfaceAssembleGlInterface(ra1,ra2) {
    return skia.grGlinterfaceAssembleGlInterface(ra1,ra2);
}
function grGlinterfaceAssembleGlesInterface(ra1,ra2) {
    return skia.grGlinterfaceAssembleGlesInterface(ra1,ra2);
}
function grGlinterfaceUnref(ra1) {
    return skia.grGlinterfaceUnref(ra1);
}
function grGlinterfaceValidate(ra1) {
    return skia.grGlinterfaceValidate(ra1);
}
function grGlinterfaceHasExtension(ra1,ra2) {
    return skia.grGlinterfaceHasExtension(ra1,ra2);
}
function grBackendtextureNewGl(ra1,ra2,ra3,ra4) {
    return skia.grBackendtextureNewGl(ra1,ra2,ra3,ra4);
}
function grBackendtextureDelete(ra1) {
    return skia.grBackendtextureDelete(ra1);
}
function grBackendtextureIsValid(ra1) {
    return skia.grBackendtextureIsValid(ra1);
}
function grBackendtextureGetWidth(ra1) {
    return skia.grBackendtextureGetWidth(ra1);
}
function grBackendtextureGetHeight(ra1) {
    return skia.grBackendtextureGetHeight(ra1);
}
function grBackendtextureHasMipmaps(ra1) {
    return skia.grBackendtextureHasMipmaps(ra1);
}
function grBackendtextureGetBackend(ra1) {
    return skia.grBackendtextureGetBackend(ra1);
}
function grBackendtextureGetGlTextureinfo(ra1,ra2) {
    return skia.grBackendtextureGetGlTextureinfo(ra1,ra2);
}
function grBackendrendertargetNewGl(ra1,ra2,ra3,ra4,ra5) {
    return skia.grBackendrendertargetNewGl(ra1,ra2,ra3,ra4,ra5);
}
function grBackendrendertargetDelete(ra1) {
    return skia.grBackendrendertargetDelete(ra1);
}
function grBackendrendertargetIsValid(ra1) {
    return skia.grBackendrendertargetIsValid(ra1);
}
function grBackendrendertargetGetWidth(ra1) {
    return skia.grBackendrendertargetGetWidth(ra1);
}
function grBackendrendertargetGetHeight(ra1) {
    return skia.grBackendrendertargetGetHeight(ra1);
}
function grBackendrendertargetGetSamples(ra1) {
    return skia.grBackendrendertargetGetSamples(ra1);
}
function grBackendrendertargetGetStencils(ra1) {
    return skia.grBackendrendertargetGetStencils(ra1);
}
function grBackendrendertargetGetBackend(ra1) {
    return skia.grBackendrendertargetGetBackend(ra1);
}
function grBackendrendertargetGetGlFramebufferinfo(ra1,ra2) {
    return skia.grBackendrendertargetGetGlFramebufferinfo(ra1,ra2);
}
function skBitmapDestructor(ra1) {
    return skia.skBitmapDestructor(ra1);
}
function skBitmapNew() {
    return skia.skBitmapNew();
}
function skBitmapGetInfo(ra1,ra2) {
    return skia.skBitmapGetInfo(ra1,ra2);
}
function skBitmapGetPixels(ra1,ra2) {
    return skia.skBitmapGetPixels(ra1,ra2);
}
function skBitmapGetRowBytes(ra1) {
    return skia.skBitmapGetRowBytes(ra1);
}
function skBitmapGetByteCount(ra1) {
    return skia.skBitmapGetByteCount(ra1);
}
function skBitmapReset(ra1) {
    return skia.skBitmapReset(ra1);
}
function skBitmapIsNull(ra1) {
    return skia.skBitmapIsNull(ra1);
}
function skBitmapIsImmutable(ra1) {
    return skia.skBitmapIsImmutable(ra1);
}
function skBitmapSetImmutable(ra1) {
    return skia.skBitmapSetImmutable(ra1);
}
function skBitmapIsVolatile(ra1) {
    return skia.skBitmapIsVolatile(ra1);
}
function skBitmapSetVolatile(ra1,ra2) {
    return skia.skBitmapSetVolatile(ra1,ra2);
}
function skBitmapErase(ra1,ra2) {
    return skia.skBitmapErase(ra1,ra2);
}
function skBitmapEraseRect(ra1,ra2,ra3) {
    return skia.skBitmapEraseRect(ra1,ra2,ra3);
}
function skBitmapGetAddr_8(ra1,ra2,ra3) {
    return skia.skBitmapGetAddr_8(ra1,ra2,ra3);
}
function skBitmapGetAddr_16(ra1,ra2,ra3) {
    return skia.skBitmapGetAddr_16(ra1,ra2,ra3);
}
function skBitmapGetAddr_32(ra1,ra2,ra3) {
    return skia.skBitmapGetAddr_32(ra1,ra2,ra3);
}
function skBitmapGetAddr(ra1,ra2,ra3) {
    return skia.skBitmapGetAddr(ra1,ra2,ra3);
}
function skBitmapGetPixelColor(ra1,ra2,ra3) {
    return skia.skBitmapGetPixelColor(ra1,ra2,ra3);
}
function skBitmapSetPixelColor(ra1,ra2,ra3,ra4) {
    return skia.skBitmapSetPixelColor(ra1,ra2,ra3,ra4);
}
function skBitmapReadyToDraw(ra1) {
    return skia.skBitmapReadyToDraw(ra1);
}
function skBitmapGetPixelColors(ra1,ra2) {
    return skia.skBitmapGetPixelColors(ra1,ra2);
}
function skBitmapSetPixelColors(ra1,ra2) {
    return skia.skBitmapSetPixelColors(ra1,ra2);
}
function skBitmapInstallPixels(ra1,ra2,ra3,ra4,ra5,ra6) {
    return skia.skBitmapInstallPixels(ra1,ra2,ra3,ra4,ra5,ra6);
}
function skBitmapInstallPixelsWithPixmap(ra1,ra2) {
    return skia.skBitmapInstallPixelsWithPixmap(ra1,ra2);
}
function skBitmapInstallMaskPixels(ra1,ra2) {
    return skia.skBitmapInstallMaskPixels(ra1,ra2);
}
function skBitmapTryAllocPixels(ra1,ra2,ra3) {
    return skia.skBitmapTryAllocPixels(ra1,ra2,ra3);
}
function skBitmapTryAllocPixelsWithFlags(ra1,ra2,ra3) {
    return skia.skBitmapTryAllocPixelsWithFlags(ra1,ra2,ra3);
}
function skBitmapSetPixels(ra1,ra2) {
    return skia.skBitmapSetPixels(ra1,ra2);
}
function skBitmapPeekPixels(ra1,ra2) {
    return skia.skBitmapPeekPixels(ra1,ra2);
}
function skBitmapExtractSubset(ra1,ra2,ra3) {
    return skia.skBitmapExtractSubset(ra1,ra2,ra3);
}
function skBitmapExtractAlpha(ra1,ra2,ra3,ra4) {
    return skia.skBitmapExtractAlpha(ra1,ra2,ra3,ra4);
}
function skBitmapNotifyPixelsChanged(ra1) {
    return skia.skBitmapNotifyPixelsChanged(ra1);
}
function skBitmapSwap(ra1,ra2) {
    return skia.skBitmapSwap(ra1,ra2);
}
function skCanvasDestroy(ra1) {
    return skia.skCanvasDestroy(ra1);
}
function skCanvasSave(ra1) {
    return skia.skCanvasSave(ra1);
}
function skCanvasSaveLayer(ra1,ra2,ra3) {
    return skia.skCanvasSaveLayer(ra1,ra2,ra3);
}
function skCanvasRestore(ra1) {
    return skia.skCanvasRestore(ra1);
}
function skCanvasTranslate(ra1,ra2,ra3) {
    return skia.skCanvasTranslate(ra1,ra2,ra3);
}
function skCanvasScale(ra1,ra2,ra3) {
    return skia.skCanvasScale(ra1,ra2,ra3);
}
function skCanvasRotateDegrees(ra1,ra2) {
    return skia.skCanvasRotateDegrees(ra1,ra2);
}
function skCanvasRotateRadians(ra1,ra2) {
    return skia.skCanvasRotateRadians(ra1,ra2);
}
function skCanvasSkew(ra1,ra2,ra3) {
    return skia.skCanvasSkew(ra1,ra2,ra3);
}
function skCanvasConcat(ra1,ra2) {
    return skia.skCanvasConcat(ra1,ra2);
}
function skCanvasQuickReject(ra1,ra2) {
    return skia.skCanvasQuickReject(ra1,ra2);
}
function skCanvasClipRegion(ra1,ra2,ra3) {
    return skia.skCanvasClipRegion(ra1,ra2,ra3);
}
function skCanvasDrawPaint(ra1,ra2) {
    return skia.skCanvasDrawPaint(ra1,ra2);
}
function skCanvasDrawRect(ra1,ra2,ra3) {
    return skia.skCanvasDrawRect(ra1,ra2,ra3);
}
function skCanvasDrawRrect(ra1,ra2,ra3) {
    return skia.skCanvasDrawRrect(ra1,ra2,ra3);
}
function skCanvasDrawRegion(ra1,ra2,ra3) {
    return skia.skCanvasDrawRegion(ra1,ra2,ra3);
}
function skCanvasDrawCircle(ra1,ra2,ra3,ra4,ra5) {
    return skia.skCanvasDrawCircle(ra1,ra2,ra3,ra4,ra5);
}
function skCanvasDrawOval(ra1,ra2,ra3) {
    return skia.skCanvasDrawOval(ra1,ra2,ra3);
}
function skCanvasDrawPath(ra1,ra2,ra3) {
    return skia.skCanvasDrawPath(ra1,ra2,ra3);
}
function skCanvasDrawImage(ra1,ra2,ra3,ra4,ra5) {
    return skia.skCanvasDrawImage(ra1,ra2,ra3,ra4,ra5);
}
function skCanvasDrawImageRect(ra1,ra2,ra3,ra4,ra5) {
    return skia.skCanvasDrawImageRect(ra1,ra2,ra3,ra4,ra5);
}
function skCanvasDrawPicture(ra1,ra2,ra3,ra4) {
    return skia.skCanvasDrawPicture(ra1,ra2,ra3,ra4);
}
function skCanvasDrawDrawable(ra1,ra2,ra3) {
    return skia.skCanvasDrawDrawable(ra1,ra2,ra3);
}
function skCanvasClear(ra1,ra2) {
    return skia.skCanvasClear(ra1,ra2);
}
function skCanvasDiscard(ra1) {
    return skia.skCanvasDiscard(ra1);
}
function skCanvasGetSaveCount(ra1) {
    return skia.skCanvasGetSaveCount(ra1);
}
function skCanvasRestoreToCount(ra1,ra2) {
    return skia.skCanvasRestoreToCount(ra1,ra2);
}
function skCanvasDrawColor(ra1,ra2,ra3) {
    return skia.skCanvasDrawColor(ra1,ra2,ra3);
}
function skCanvasDrawPoints(ra1,ra2,ra3,ra4,ra5) {
    return skia.skCanvasDrawPoints(ra1,ra2,ra3,ra4,ra5);
}
function skCanvasDrawPoint(ra1,ra2,ra3,ra4) {
    return skia.skCanvasDrawPoint(ra1,ra2,ra3,ra4);
}
function skCanvasDrawLine(ra1,ra2,ra3,ra4,ra5,ra6) {
    return skia.skCanvasDrawLine(ra1,ra2,ra3,ra4,ra5,ra6);
}
function skCanvasDrawText(ra1,ra2,ra3,ra4,ra5,ra6) {
    return skia.skCanvasDrawText(ra1,ra2,ra3,ra4,ra5,ra6);
}
function skCanvasDrawPosText(ra1,ra2,ra3,ra4,ra5) {
    return skia.skCanvasDrawPosText(ra1,ra2,ra3,ra4,ra5);
}
function skCanvasDrawTextOnPath(ra1,ra2,ra3,ra4,ra5,ra6,ra7) {
    return skia.skCanvasDrawTextOnPath(ra1,ra2,ra3,ra4,ra5,ra6,ra7);
}
function skCanvasDrawTextBlob(ra1,ra2,ra3,ra4,ra5) {
    return skia.skCanvasDrawTextBlob(ra1,ra2,ra3,ra4,ra5);
}
function skCanvasDrawBitmap(ra1,ra2,ra3,ra4,ra5) {
    return skia.skCanvasDrawBitmap(ra1,ra2,ra3,ra4,ra5);
}
function skCanvasDrawBitmapRect(ra1,ra2,ra3,ra4,ra5) {
    return skia.skCanvasDrawBitmapRect(ra1,ra2,ra3,ra4,ra5);
}
function skCanvasResetMatrix(ra1) {
    return skia.skCanvasResetMatrix(ra1);
}
function skCanvasSetMatrix(ra1,ra2) {
    return skia.skCanvasSetMatrix(ra1,ra2);
}
function skCanvasGetTotalMatrix(ra1,ra2) {
    return skia.skCanvasGetTotalMatrix(ra1,ra2);
}
function skCanvasDrawRoundRect(ra1,ra2,ra3,ra4,ra5) {
    return skia.skCanvasDrawRoundRect(ra1,ra2,ra3,ra4,ra5);
}
function skCanvasClipRectWithOperation(ra1,ra2,ra3,ra4) {
    return skia.skCanvasClipRectWithOperation(ra1,ra2,ra3,ra4);
}
function skCanvasClipPathWithOperation(ra1,ra2,ra3,ra4) {
    return skia.skCanvasClipPathWithOperation(ra1,ra2,ra3,ra4);
}
function skCanvasClipRrectWithOperation(ra1,ra2,ra3,ra4) {
    return skia.skCanvasClipRrectWithOperation(ra1,ra2,ra3,ra4);
}
function skCanvasGetLocalClipBounds(ra1,ra2) {
    return skia.skCanvasGetLocalClipBounds(ra1,ra2);
}
function skCanvasGetDeviceClipBounds(ra1,ra2) {
    return skia.skCanvasGetDeviceClipBounds(ra1,ra2);
}
function skCanvasFlush(ra1) {
    return skia.skCanvasFlush(ra1);
}
function skCanvasNewFromBitmap(ra1) {
    return skia.skCanvasNewFromBitmap(ra1);
}
function skCanvasDrawAnnotation(ra1,ra2,ra3,ra4) {
    return skia.skCanvasDrawAnnotation(ra1,ra2,ra3,ra4);
}
function skCanvasDrawUrlAnnotation(ra1,ra2,ra3) {
    return skia.skCanvasDrawUrlAnnotation(ra1,ra2,ra3);
}
function skCanvasDrawNamedDestinationAnnotation(ra1,ra2,ra3) {
    return skia.skCanvasDrawNamedDestinationAnnotation(ra1,ra2,ra3);
}
function skCanvasDrawLinkDestinationAnnotation(ra1,ra2,ra3) {
    return skia.skCanvasDrawLinkDestinationAnnotation(ra1,ra2,ra3);
}
function skCanvasDrawBitmapLattice(ra1,ra2,ra3,ra4,ra5) {
    return skia.skCanvasDrawBitmapLattice(ra1,ra2,ra3,ra4,ra5);
}
function skCanvasDrawImageLattice(ra1,ra2,ra3,ra4,ra5) {
    return skia.skCanvasDrawImageLattice(ra1,ra2,ra3,ra4,ra5);
}
function skCanvasDrawBitmapNine(ra1,ra2,ra3,ra4,ra5) {
    return skia.skCanvasDrawBitmapNine(ra1,ra2,ra3,ra4,ra5);
}
function skCanvasDrawImageNine(ra1,ra2,ra3,ra4,ra5) {
    return skia.skCanvasDrawImageNine(ra1,ra2,ra3,ra4,ra5);
}
function skCanvasDrawVertices(ra1,ra2,ra3,ra4) {
    return skia.skCanvasDrawVertices(ra1,ra2,ra3,ra4);
}
function skCanvasDrawArc(ra1,ra2,ra3,ra4,ra5,ra6) {
    return skia.skCanvasDrawArc(ra1,ra2,ra3,ra4,ra5,ra6);
}
function skCanvasDrawDrrect(ra1,ra2,ra3,ra4) {
    return skia.skCanvasDrawDrrect(ra1,ra2,ra3,ra4);
}
function skCanvasDrawAtlas(ra1,ra2,ra3,ra4,ra5,ra6,ra7,ra8,ra9) {
    return skia.skCanvasDrawAtlas(ra1,ra2,ra3,ra4,ra5,ra6,ra7,ra8,ra9);
}
function skCanvasDrawPatch(ra1,ra2,ra3,ra4,ra5,ra6) {
    return skia.skCanvasDrawPatch(ra1,ra2,ra3,ra4,ra5,ra6);
}
function skCanvasIsClipEmpty(ra1) {
    return skia.skCanvasIsClipEmpty(ra1);
}
function skCanvasIsClipRect(ra1) {
    return skia.skCanvasIsClipRect(ra1);
}
function skNodrawCanvasNew(ra1,ra2) {
    return skia.skNodrawCanvasNew(ra1,ra2);
}
function skNodrawCanvasDestroy(ra1) {
    return skia.skNodrawCanvasDestroy(ra1);
}
function skNwayCanvasNew(ra1,ra2) {
    return skia.skNwayCanvasNew(ra1,ra2);
}
function skNwayCanvasDestroy(ra1) {
    return skia.skNwayCanvasDestroy(ra1);
}
function skNwayCanvasAddCanvas(ra1,ra2) {
    return skia.skNwayCanvasAddCanvas(ra1,ra2);
}
function skNwayCanvasRemoveCanvas(ra1,ra2) {
    return skia.skNwayCanvasRemoveCanvas(ra1,ra2);
}
function skNwayCanvasRemoveAll(ra1) {
    return skia.skNwayCanvasRemoveAll(ra1);
}
function skOverdrawCanvasNew(ra1) {
    return skia.skOverdrawCanvasNew(ra1);
}
function skOverdrawCanvasDestroy(ra1) {
    return skia.skOverdrawCanvasDestroy(ra1);
}
function skCodecMinBufferedBytesNeeded() {
    return skia.skCodecMinBufferedBytesNeeded();
}
function skCodecNewFromStream(ra1,ra2) {
    return skia.skCodecNewFromStream(ra1,ra2);
}
function skCodecNewFromData(ra1) {
    return skia.skCodecNewFromData(ra1);
}
function skCodecDestroy(ra1) {
    return skia.skCodecDestroy(ra1);
}
function skCodecGetInfo(ra1,ra2) {
    return skia.skCodecGetInfo(ra1,ra2);
}
function skCodecGetOrigin(ra1) {
    return skia.skCodecGetOrigin(ra1);
}
function skCodecGetScaledDimensions(ra1,ra2,ra3) {
    return skia.skCodecGetScaledDimensions(ra1,ra2,ra3);
}
function skCodecGetValidSubset(ra1,ra2) {
    return skia.skCodecGetValidSubset(ra1,ra2);
}
function skCodecGetEncodedFormat(ra1) {
    return skia.skCodecGetEncodedFormat(ra1);
}
function skCodecGetPixels(ra1,ra2,ra3,ra4,ra5) {
    return skia.skCodecGetPixels(ra1,ra2,ra3,ra4,ra5);
}
function skCodecStartIncrementalDecode(ra1,ra2,ra3,ra4,ra5) {
    return skia.skCodecStartIncrementalDecode(ra1,ra2,ra3,ra4,ra5);
}
function skCodecIncrementalDecode(ra1,ra2) {
    return skia.skCodecIncrementalDecode(ra1,ra2);
}
function skCodecStartScanlineDecode(ra1,ra2,ra3) {
    return skia.skCodecStartScanlineDecode(ra1,ra2,ra3);
}
function skCodecGetScanlines(ra1,ra2,ra3,ra4) {
    return skia.skCodecGetScanlines(ra1,ra2,ra3,ra4);
}
function skCodecSkipScanlines(ra1,ra2) {
    return skia.skCodecSkipScanlines(ra1,ra2);
}
function skCodecGetScanlineOrder(ra1) {
    return skia.skCodecGetScanlineOrder(ra1);
}
function skCodecNextScanline(ra1) {
    return skia.skCodecNextScanline(ra1);
}
function skCodecOutputScanline(ra1,ra2) {
    return skia.skCodecOutputScanline(ra1,ra2);
}
function skCodecGetFrameCount(ra1) {
    return skia.skCodecGetFrameCount(ra1);
}
function skCodecGetFrameInfo(ra1,ra2) {
    return skia.skCodecGetFrameInfo(ra1,ra2);
}
function skCodecGetFrameInfoForIndex(ra1,ra2,ra3) {
    return skia.skCodecGetFrameInfoForIndex(ra1,ra2,ra3);
}
function skCodecGetRepetitionCount(ra1) {
    return skia.skCodecGetRepetitionCount(ra1);
}
function skColorfilterUnref(ra1) {
    return skia.skColorfilterUnref(ra1);
}
function skColorfilterNewMode(ra1,ra2) {
    return skia.skColorfilterNewMode(ra1,ra2);
}
function skColorfilterNewLighting(ra1,ra2) {
    return skia.skColorfilterNewLighting(ra1,ra2);
}
function skColorfilterNewCompose(ra1,ra2) {
    return skia.skColorfilterNewCompose(ra1,ra2);
}
function skColorfilterNewColorMatrix(ra1) {
    return skia.skColorfilterNewColorMatrix(ra1);
}
function skColorfilterNewLumaColor() {
    return skia.skColorfilterNewLumaColor();
}
function skColorfilterNewHighContrast(ra1) {
    return skia.skColorfilterNewHighContrast(ra1);
}
function skColorfilterNewTable(ra1) {
    return skia.skColorfilterNewTable(ra1);
}
function skColorfilterNewTableArgb(ra1,ra2,ra3,ra4) {
    return skia.skColorfilterNewTableArgb(ra1,ra2,ra3,ra4);
}
function skColorspaceUnref(ra1) {
    return skia.skColorspaceUnref(ra1);
}
function skColorspaceNewSrgb() {
    return skia.skColorspaceNewSrgb();
}
function skColorspaceNewSrgbLinear() {
    return skia.skColorspaceNewSrgbLinear();
}
function skColorspaceNewIcc(ra1,ra2) {
    return skia.skColorspaceNewIcc(ra1,ra2);
}
function skColorspaceNewRgbWithGamma(ra1,ra2) {
    return skia.skColorspaceNewRgbWithGamma(ra1,ra2);
}
function skColorspaceNewRgbWithGammaAndGamut(ra1,ra2) {
    return skia.skColorspaceNewRgbWithGammaAndGamut(ra1,ra2);
}
function skColorspaceNewRgbWithCoeffs(ra1,ra2) {
    return skia.skColorspaceNewRgbWithCoeffs(ra1,ra2);
}
function skColorspaceNewRgbWithCoeffsAndGamut(ra1,ra2) {
    return skia.skColorspaceNewRgbWithCoeffsAndGamut(ra1,ra2);
}
function skColorspaceNewRgbWithGammaNamed(ra1,ra2) {
    return skia.skColorspaceNewRgbWithGammaNamed(ra1,ra2);
}
function skColorspaceNewRgbWithGammaNamedAndGamut(ra1,ra2) {
    return skia.skColorspaceNewRgbWithGammaNamedAndGamut(ra1,ra2);
}
function skColorspaceGammaGetType(ra1) {
    return skia.skColorspaceGammaGetType(ra1);
}
function skColorspaceGammaGetGammaNamed(ra1) {
    return skia.skColorspaceGammaGetGammaNamed(ra1);
}
function skColorspaceGammaCloseToSrgb(ra1) {
    return skia.skColorspaceGammaCloseToSrgb(ra1);
}
function skColorspaceGammaIsLinear(ra1) {
    return skia.skColorspaceGammaIsLinear(ra1);
}
function skColorspaceIsSrgb(ra1) {
    return skia.skColorspaceIsSrgb(ra1);
}
function skColorspaceEquals(ra1,ra2) {
    return skia.skColorspaceEquals(ra1,ra2);
}
function skColorspaceToXyzd50(ra1,ra2) {
    return skia.skColorspaceToXyzd50(ra1,ra2);
}
function skColorspaceAsToXyzd50(ra1) {
    return skia.skColorspaceAsToXyzd50(ra1);
}
function skColorspaceAsFromXyzd50(ra1) {
    return skia.skColorspaceAsFromXyzd50(ra1);
}
function skColorspaceIsNumericalTransferFn(ra1,ra2) {
    return skia.skColorspaceIsNumericalTransferFn(ra1,ra2);
}
function skColorspaceprimariesToXyzd50(ra1,ra2) {
    return skia.skColorspaceprimariesToXyzd50(ra1,ra2);
}
function skColorspaceTransferFnInvert(ra1,ra2) {
    return skia.skColorspaceTransferFnInvert(ra1,ra2);
}
function skColorspaceTransferFnTransform(ra1,ra2) {
    return skia.skColorspaceTransferFnTransform(ra1,ra2);
}
function skColortableUnref(ra1) {
    return skia.skColortableUnref(ra1);
}
function skColortableNew(ra1,ra2) {
    return skia.skColortableNew(ra1,ra2);
}
function skColortableCount(ra1) {
    return skia.skColortableCount(ra1);
}
function skColortableReadColors(ra1,ra2) {
    return skia.skColortableReadColors(ra1,ra2);
}
function skDataNewEmpty() {
    return skia.skDataNewEmpty();
}
function skDataNewWithCopy(ra1,ra2) {
    return skia.skDataNewWithCopy(ra1,ra2);
}
function skDataNewSubset(ra1,ra2,ra3) {
    return skia.skDataNewSubset(ra1,ra2,ra3);
}
function skDataRef(ra1) {
    return skia.skDataRef(ra1);
}
function skDataUnref(ra1) {
    return skia.skDataUnref(ra1);
}
function skDataGetSize(ra1) {
    return skia.skDataGetSize(ra1);
}
function skDataGetData(ra1) {
    return skia.skDataGetData(ra1);
}
function skDataNewFromFile(ra1) {
    return skia.skDataNewFromFile(ra1);
}
function skDataNewFromStream(ra1,ra2) {
    return skia.skDataNewFromStream(ra1,ra2);
}
function skDataGetBytes(ra1) {
    return skia.skDataGetBytes(ra1);
}
function skDataNewWithProc(ra1,ra2,ra3,ra4) {
    return skia.skDataNewWithProc(ra1,ra2,ra3,ra4);
}
function skDataNewUninitialized(ra1) {
    return skia.skDataNewUninitialized(ra1);
}
function skDocumentUnref(ra1) {
    return skia.skDocumentUnref(ra1);
}
function skDocumentCreatePdfFromStream(ra1) {
    return skia.skDocumentCreatePdfFromStream(ra1);
}
function skDocumentCreatePdfFromStreamWithMetadata(ra1,ra2) {
    return skia.skDocumentCreatePdfFromStreamWithMetadata(ra1,ra2);
}
function skDocumentCreateXpsFromStream(ra1,ra2) {
    return skia.skDocumentCreateXpsFromStream(ra1,ra2);
}
function skDocumentBeginPage(ra1,ra2,ra3,ra4) {
    return skia.skDocumentBeginPage(ra1,ra2,ra3,ra4);
}
function skDocumentEndPage(ra1) {
    return skia.skDocumentEndPage(ra1);
}
function skDocumentClose(ra1) {
    return skia.skDocumentClose(ra1);
}
function skDocumentAbort(ra1) {
    return skia.skDocumentAbort(ra1);
}
function skDrawableUnref(ra1) {
    return skia.skDrawableUnref(ra1);
}
function skDrawableGetGenerationId(ra1) {
    return skia.skDrawableGetGenerationId(ra1);
}
function skDrawableGetBounds(ra1,ra2) {
    return skia.skDrawableGetBounds(ra1,ra2);
}
function skDrawableDraw(ra1,ra2,ra3) {
    return skia.skDrawableDraw(ra1,ra2,ra3);
}
function skDrawableNewPictureSnapshot(ra1) {
    return skia.skDrawableNewPictureSnapshot(ra1);
}
function skDrawableNotifyDrawingChanged(ra1) {
    return skia.skDrawableNotifyDrawingChanged(ra1);
}
function skRefcntUnique(ra1) {
    return skia.skRefcntUnique(ra1);
}
function skRefcntGetRefCount(ra1) {
    return skia.skRefcntGetRefCount(ra1);
}
function skRefcntSafeRef(ra1) {
    return skia.skRefcntSafeRef(ra1);
}
function skRefcntSafeUnref(ra1) {
    return skia.skRefcntSafeUnref(ra1);
}
function skNvrefcntUnique(ra1) {
    return skia.skNvrefcntUnique(ra1);
}
function skNvrefcntGetRefCount(ra1) {
    return skia.skNvrefcntGetRefCount(ra1);
}
function skNvrefcntSafeRef(ra1) {
    return skia.skNvrefcntSafeRef(ra1);
}
function skNvrefcntSafeUnref(ra1) {
    return skia.skNvrefcntSafeUnref(ra1);
}
function skColortypeGetDefault_8888() {
    return skia.skColortypeGetDefault_8888();
}
function skImageNewRasterCopy(ra1,ra2,ra3) {
    return skia.skImageNewRasterCopy(ra1,ra2,ra3);
}
function skImageNewRasterCopyWithPixmap(ra1) {
    return skia.skImageNewRasterCopyWithPixmap(ra1);
}
function skImageNewRasterData(ra1,ra2,ra3) {
    return skia.skImageNewRasterData(ra1,ra2,ra3);
}
function skImageNewRaster(ra1,ra2,ra3) {
    return skia.skImageNewRaster(ra1,ra2,ra3);
}
function skImageNewFromBitmap(ra1) {
    return skia.skImageNewFromBitmap(ra1);
}
function skImageNewFromEncoded(ra1,ra2) {
    return skia.skImageNewFromEncoded(ra1,ra2);
}
function skImageNewFromTexture(ra1,ra2,ra3,ra4,ra5,ra6,ra7,ra8) {
    return skia.skImageNewFromTexture(ra1,ra2,ra3,ra4,ra5,ra6,ra7,ra8);
}
function skImageNewFromAdoptedTexture(ra1,ra2,ra3,ra4,ra5,ra6) {
    return skia.skImageNewFromAdoptedTexture(ra1,ra2,ra3,ra4,ra5,ra6);
}
function skImageNewFromPicture(ra1,ra2,ra3,ra4) {
    return skia.skImageNewFromPicture(ra1,ra2,ra3,ra4);
}
function skImageMakeSubset(ra1,ra2) {
    return skia.skImageMakeSubset(ra1,ra2);
}
function skImageMakeNonTextureImage(ra1) {
    return skia.skImageMakeNonTextureImage(ra1);
}
function skImageMakeWithFilter(ra1,ra2,ra3,ra4,ra5,ra6) {
    return skia.skImageMakeWithFilter(ra1,ra2,ra3,ra4,ra5,ra6);
}
function skImageRef(ra1) {
    return skia.skImageRef(ra1);
}
function skImageUnref(ra1) {
    return skia.skImageUnref(ra1);
}
function skImageGetWidth(ra1) {
    return skia.skImageGetWidth(ra1);
}
function skImageGetHeight(ra1) {
    return skia.skImageGetHeight(ra1);
}
function skImageGetUniqueId(ra1) {
    return skia.skImageGetUniqueId(ra1);
}
function skImageGetAlphaType(ra1) {
    return skia.skImageGetAlphaType(ra1);
}
function skImageGetColorType(ra1) {
    return skia.skImageGetColorType(ra1);
}
function skImageGetColorspace(ra1) {
    return skia.skImageGetColorspace(ra1);
}
function skImageIsAlphaOnly(ra1) {
    return skia.skImageIsAlphaOnly(ra1);
}
function skImageMakeShader(ra1,ra2,ra3,ra4) {
    return skia.skImageMakeShader(ra1,ra2,ra3,ra4);
}
function skImagePeekPixels(ra1,ra2) {
    return skia.skImagePeekPixels(ra1,ra2);
}
function skImageIsTextureBacked(ra1) {
    return skia.skImageIsTextureBacked(ra1);
}
function skImageIsLazyGenerated(ra1) {
    return skia.skImageIsLazyGenerated(ra1);
}
function skImageReadPixels(ra1,ra2,ra3,ra4,ra5,ra6,ra7) {
    return skia.skImageReadPixels(ra1,ra2,ra3,ra4,ra5,ra6,ra7);
}
function skImageReadPixelsIntoPixmap(ra1,ra2,ra3,ra4,ra5) {
    return skia.skImageReadPixelsIntoPixmap(ra1,ra2,ra3,ra4,ra5);
}
function skImageScalePixels(ra1,ra2,ra3,ra4) {
    return skia.skImageScalePixels(ra1,ra2,ra3,ra4);
}
function skImageRefEncoded(ra1) {
    return skia.skImageRefEncoded(ra1);
}
function skImageEncode(ra1) {
    return skia.skImageEncode(ra1);
}
function skImageEncodeSpecific(ra1,ra2,ra3) {
    return skia.skImageEncodeSpecific(ra1,ra2,ra3);
}
function skImagefilterCroprectNew() {
    return skia.skImagefilterCroprectNew();
}
function skImagefilterCroprectNewWithRect(ra1,ra2) {
    return skia.skImagefilterCroprectNewWithRect(ra1,ra2);
}
function skImagefilterCroprectDestructor(ra1) {
    return skia.skImagefilterCroprectDestructor(ra1);
}
function skImagefilterCroprectGetRect(ra1,ra2) {
    return skia.skImagefilterCroprectGetRect(ra1,ra2);
}
function skImagefilterCroprectGetFlags(ra1) {
    return skia.skImagefilterCroprectGetFlags(ra1);
}
function skImagefilterUnref(ra1) {
    return skia.skImagefilterUnref(ra1);
}
function skImagefilterNewMatrix(ra1,ra2,ra3) {
    return skia.skImagefilterNewMatrix(ra1,ra2,ra3);
}
function skImagefilterNewAlphaThreshold(ra1,ra2,ra3,ra4) {
    return skia.skImagefilterNewAlphaThreshold(ra1,ra2,ra3,ra4);
}
function skImagefilterNewBlur(ra1,ra2,ra3,ra4) {
    return skia.skImagefilterNewBlur(ra1,ra2,ra3,ra4);
}
function skImagefilterNewColorFilter(ra1,ra2,ra3) {
    return skia.skImagefilterNewColorFilter(ra1,ra2,ra3);
}
function skImagefilterNewCompose(ra1,ra2) {
    return skia.skImagefilterNewCompose(ra1,ra2);
}
function skImagefilterNewDisplacementMapEffect(ra1,ra2,ra3,ra4,ra5,ra6) {
    return skia.skImagefilterNewDisplacementMapEffect(ra1,ra2,ra3,ra4,ra5,ra6);
}
function skImagefilterNewDropShadow(ra1,ra2,ra3,ra4,ra5,ra6,ra7,ra8) {
    return skia.skImagefilterNewDropShadow(ra1,ra2,ra3,ra4,ra5,ra6,ra7,ra8);
}
function skImagefilterNewDistantLitDiffuse(ra1,ra2,ra3,ra4,ra5,ra6) {
    return skia.skImagefilterNewDistantLitDiffuse(ra1,ra2,ra3,ra4,ra5,ra6);
}
function skImagefilterNewPointLitDiffuse(ra1,ra2,ra3,ra4,ra5,ra6) {
    return skia.skImagefilterNewPointLitDiffuse(ra1,ra2,ra3,ra4,ra5,ra6);
}
function skImagefilterNewSpotLitDiffuse(ra1,ra2,ra3,ra4,ra5,ra6,ra7,ra8,ra9) {
    return skia.skImagefilterNewSpotLitDiffuse(ra1,ra2,ra3,ra4,ra5,ra6,ra7,ra8,ra9);
}
function skImagefilterNewDistantLitSpecular(ra1,ra2,ra3,ra4,ra5,ra6,ra7) {
    return skia.skImagefilterNewDistantLitSpecular(ra1,ra2,ra3,ra4,ra5,ra6,ra7);
}
function skImagefilterNewPointLitSpecular(ra1,ra2,ra3,ra4,ra5,ra6,ra7) {
    return skia.skImagefilterNewPointLitSpecular(ra1,ra2,ra3,ra4,ra5,ra6,ra7);
}
function skImagefilterNewSpotLitSpecular(ra1,ra2,ra3,ra4,ra5,ra6,ra7,ra8,ra9,ra10) {
    return skia.skImagefilterNewSpotLitSpecular(ra1,ra2,ra3,ra4,ra5,ra6,ra7,ra8,ra9,ra10);
}
function skImagefilterNewMagnifier(ra1,ra2,ra3,ra4) {
    return skia.skImagefilterNewMagnifier(ra1,ra2,ra3,ra4);
}
function skImagefilterNewMatrixConvolution(ra1,ra2,ra3,ra4,ra5,ra6,ra7,ra8,ra9) {
    return skia.skImagefilterNewMatrixConvolution(ra1,ra2,ra3,ra4,ra5,ra6,ra7,ra8,ra9);
}
function skImagefilterNewMerge(ra1,ra2,ra3) {
    return skia.skImagefilterNewMerge(ra1,ra2,ra3);
}
function skImagefilterNewDilate(ra1,ra2,ra3,ra4) {
    return skia.skImagefilterNewDilate(ra1,ra2,ra3,ra4);
}
function skImagefilterNewErode(ra1,ra2,ra3,ra4) {
    return skia.skImagefilterNewErode(ra1,ra2,ra3,ra4);
}
function skImagefilterNewOffset(ra1,ra2,ra3,ra4) {
    return skia.skImagefilterNewOffset(ra1,ra2,ra3,ra4);
}
function skImagefilterNewPicture(ra1) {
    return skia.skImagefilterNewPicture(ra1);
}
function skImagefilterNewPictureWithCroprect(ra1,ra2) {
    return skia.skImagefilterNewPictureWithCroprect(ra1,ra2);
}
function skImagefilterNewTile(ra1,ra2,ra3) {
    return skia.skImagefilterNewTile(ra1,ra2,ra3);
}
function skImagefilterNewXfermode(ra1,ra2,ra3,ra4) {
    return skia.skImagefilterNewXfermode(ra1,ra2,ra3,ra4);
}
function skImagefilterNewArithmetic(ra1,ra2,ra3,ra4,ra5,ra6,ra7,ra8) {
    return skia.skImagefilterNewArithmetic(ra1,ra2,ra3,ra4,ra5,ra6,ra7,ra8);
}
function skImagefilterNewImageSource(ra1,ra2,ra3,ra4) {
    return skia.skImagefilterNewImageSource(ra1,ra2,ra3,ra4);
}
function skImagefilterNewImageSourceDefault(ra1) {
    return skia.skImagefilterNewImageSourceDefault(ra1);
}
function skImagefilterNewPaint(ra1,ra2) {
    return skia.skImagefilterNewPaint(ra1,ra2);
}
function skMaskAllocImage(ra1) {
    return skia.skMaskAllocImage(ra1);
}
function skMaskFreeImage(ra1) {
    return skia.skMaskFreeImage(ra1);
}
function skMaskIsEmpty(ra1) {
    return skia.skMaskIsEmpty(ra1);
}
function skMaskComputeImageSize(ra1) {
    return skia.skMaskComputeImageSize(ra1);
}
function skMaskComputeTotalImageSize(ra1) {
    return skia.skMaskComputeTotalImageSize(ra1);
}
function skMaskGetAddr_1(ra1,ra2,ra3) {
    return skia.skMaskGetAddr_1(ra1,ra2,ra3);
}
function skMaskGetAddr_8(ra1,ra2,ra3) {
    return skia.skMaskGetAddr_8(ra1,ra2,ra3);
}
function skMaskGetAddrLcd_16(ra1,ra2,ra3) {
    return skia.skMaskGetAddrLcd_16(ra1,ra2,ra3);
}
function skMaskGetAddr_32(ra1,ra2,ra3) {
    return skia.skMaskGetAddr_32(ra1,ra2,ra3);
}
function skMaskGetAddr(ra1,ra2,ra3) {
    return skia.skMaskGetAddr(ra1,ra2,ra3);
}
function skMaskfilterRef(ra1) {
    return skia.skMaskfilterRef(ra1);
}
function skMaskfilterUnref(ra1) {
    return skia.skMaskfilterUnref(ra1);
}
function skMaskfilterNewBlur(ra1,ra2) {
    return skia.skMaskfilterNewBlur(ra1,ra2);
}
function skMaskfilterNewBlurWithFlags(ra1,ra2,ra3,ra4) {
    return skia.skMaskfilterNewBlurWithFlags(ra1,ra2,ra3,ra4);
}
function skMaskfilterNewTable(ra1) {
    return skia.skMaskfilterNewTable(ra1);
}
function skMaskfilterNewGamma(ra1) {
    return skia.skMaskfilterNewGamma(ra1);
}
function skMaskfilterNewClip(ra1,ra2) {
    return skia.skMaskfilterNewClip(ra1,ra2);
}
function skMatrixTryInvert(ra1,ra2) {
    return skia.skMatrixTryInvert(ra1,ra2);
}
function skMatrixConcat(ra1,ra2,ra3) {
    return skia.skMatrixConcat(ra1,ra2,ra3);
}
function skMatrixPreConcat(ra1,ra2) {
    return skia.skMatrixPreConcat(ra1,ra2);
}
function skMatrixPostConcat(ra1,ra2) {
    return skia.skMatrixPostConcat(ra1,ra2);
}
function skMatrixMapRect(ra1,ra2,ra3) {
    return skia.skMatrixMapRect(ra1,ra2,ra3);
}
function skMatrixMapPoints(ra1,ra2,ra3,ra4) {
    return skia.skMatrixMapPoints(ra1,ra2,ra3,ra4);
}
function skMatrixMapVectors(ra1,ra2,ra3,ra4) {
    return skia.skMatrixMapVectors(ra1,ra2,ra3,ra4);
}
function skMatrixMapXy(ra1,ra2,ra3,ra4) {
    return skia.skMatrixMapXy(ra1,ra2,ra3,ra4);
}
function skMatrixMapVector(ra1,ra2,ra3,ra4) {
    return skia.skMatrixMapVector(ra1,ra2,ra3,ra4);
}
function skMatrixMapRadius(ra1,ra2) {
    return skia.skMatrixMapRadius(ra1,ra2);
}
function sk_3dviewNew() {
    return skia.sk_3dviewNew();
}
function sk_3dviewDestroy(ra1) {
    return skia.sk_3dviewDestroy(ra1);
}
function sk_3dviewSave(ra1) {
    return skia.sk_3dviewSave(ra1);
}
function sk_3dviewRestore(ra1) {
    return skia.sk_3dviewRestore(ra1);
}
function sk_3dviewTranslate(ra1,ra2,ra3,ra4) {
    return skia.sk_3dviewTranslate(ra1,ra2,ra3,ra4);
}
function sk_3dviewRotateXDegrees(ra1,ra2) {
    return skia.sk_3dviewRotateXDegrees(ra1,ra2);
}
function sk_3dviewRotateYDegrees(ra1,ra2) {
    return skia.sk_3dviewRotateYDegrees(ra1,ra2);
}
function sk_3dviewRotateZDegrees(ra1,ra2) {
    return skia.sk_3dviewRotateZDegrees(ra1,ra2);
}
function sk_3dviewRotateXRadians(ra1,ra2) {
    return skia.sk_3dviewRotateXRadians(ra1,ra2);
}
function sk_3dviewRotateYRadians(ra1,ra2) {
    return skia.sk_3dviewRotateYRadians(ra1,ra2);
}
function sk_3dviewRotateZRadians(ra1,ra2) {
    return skia.sk_3dviewRotateZRadians(ra1,ra2);
}
function sk_3dviewGetMatrix(ra1,ra2) {
    return skia.sk_3dviewGetMatrix(ra1,ra2);
}
function sk_3dviewApplyToCanvas(ra1,ra2) {
    return skia.sk_3dviewApplyToCanvas(ra1,ra2);
}
function sk_3dviewDotWithNormal(ra1,ra2,ra3,ra4) {
    return skia.sk_3dviewDotWithNormal(ra1,ra2,ra3,ra4);
}
function skMatrix44Destroy(ra1) {
    return skia.skMatrix44Destroy(ra1);
}
function skMatrix44New() {
    return skia.skMatrix44New();
}
function skMatrix44NewIdentity() {
    return skia.skMatrix44NewIdentity();
}
function skMatrix44NewCopy(ra1) {
    return skia.skMatrix44NewCopy(ra1);
}
function skMatrix44NewConcat(ra1,ra2) {
    return skia.skMatrix44NewConcat(ra1,ra2);
}
function skMatrix44NewMatrix(ra1) {
    return skia.skMatrix44NewMatrix(ra1);
}
function skMatrix44Equals(ra1,ra2) {
    return skia.skMatrix44Equals(ra1,ra2);
}
function skMatrix44ToMatrix(ra1,ra2) {
    return skia.skMatrix44ToMatrix(ra1,ra2);
}
function skMatrix44GetType(ra1) {
    return skia.skMatrix44GetType(ra1);
}
function skMatrix44SetIdentity(ra1) {
    return skia.skMatrix44SetIdentity(ra1);
}
function skMatrix44Get(ra1,ra2,ra3) {
    return skia.skMatrix44Get(ra1,ra2,ra3);
}
function skMatrix44Set(ra1,ra2,ra3,ra4) {
    return skia.skMatrix44Set(ra1,ra2,ra3,ra4);
}
function skMatrix44AsColMajor(ra1,ra2) {
    return skia.skMatrix44AsColMajor(ra1,ra2);
}
function skMatrix44AsRowMajor(ra1,ra2) {
    return skia.skMatrix44AsRowMajor(ra1,ra2);
}
function skMatrix44SetColMajor(ra1,ra2) {
    return skia.skMatrix44SetColMajor(ra1,ra2);
}
function skMatrix44SetRowMajor(ra1,ra2) {
    return skia.skMatrix44SetRowMajor(ra1,ra2);
}
function skMatrix44SetTranslate(ra1,ra2,ra3,ra4) {
    return skia.skMatrix44SetTranslate(ra1,ra2,ra3,ra4);
}
function skMatrix44PreTranslate(ra1,ra2,ra3,ra4) {
    return skia.skMatrix44PreTranslate(ra1,ra2,ra3,ra4);
}
function skMatrix44PostTranslate(ra1,ra2,ra3,ra4) {
    return skia.skMatrix44PostTranslate(ra1,ra2,ra3,ra4);
}
function skMatrix44SetScale(ra1,ra2,ra3,ra4) {
    return skia.skMatrix44SetScale(ra1,ra2,ra3,ra4);
}
function skMatrix44PreScale(ra1,ra2,ra3,ra4) {
    return skia.skMatrix44PreScale(ra1,ra2,ra3,ra4);
}
function skMatrix44PostScale(ra1,ra2,ra3,ra4) {
    return skia.skMatrix44PostScale(ra1,ra2,ra3,ra4);
}
function skMatrix44SetRotateAboutDegrees(ra1,ra2,ra3,ra4,ra5) {
    return skia.skMatrix44SetRotateAboutDegrees(ra1,ra2,ra3,ra4,ra5);
}
function skMatrix44SetRotateAboutRadians(ra1,ra2,ra3,ra4,ra5) {
    return skia.skMatrix44SetRotateAboutRadians(ra1,ra2,ra3,ra4,ra5);
}
function skMatrix44SetRotateAboutRadiansUnit(ra1,ra2,ra3,ra4,ra5) {
    return skia.skMatrix44SetRotateAboutRadiansUnit(ra1,ra2,ra3,ra4,ra5);
}
function skMatrix44SetConcat(ra1,ra2,ra3) {
    return skia.skMatrix44SetConcat(ra1,ra2,ra3);
}
function skMatrix44PreConcat(ra1,ra2) {
    return skia.skMatrix44PreConcat(ra1,ra2);
}
function skMatrix44PostConcat(ra1,ra2) {
    return skia.skMatrix44PostConcat(ra1,ra2);
}
function skMatrix44Invert(ra1,ra2) {
    return skia.skMatrix44Invert(ra1,ra2);
}
function skMatrix44Transpose(ra1) {
    return skia.skMatrix44Transpose(ra1);
}
function skMatrix44MapScalars(ra1,ra2,ra3) {
    return skia.skMatrix44MapScalars(ra1,ra2,ra3);
}
function skMatrix44Map2(ra1,ra2,ra3,ra4) {
    return skia.skMatrix44Map2(ra1,ra2,ra3,ra4);
}
function skMatrix44Preserves_2dAxisAlignment(ra1,ra2) {
    return skia.skMatrix44Preserves_2dAxisAlignment(ra1,ra2);
}
function skMatrix44Determinant(ra1) {
    return skia.skMatrix44Determinant(ra1);
}
function skPaintNew() {
    return skia.skPaintNew();
}
function skPaintClone(ra1) {
    return skia.skPaintClone(ra1);
}
function skPaintDelete(ra1) {
    return skia.skPaintDelete(ra1);
}
function skPaintReset(ra1) {
    return skia.skPaintReset(ra1);
}
function skPaintIsAntialias(ra1) {
    return skia.skPaintIsAntialias(ra1);
}
function skPaintSetAntialias(ra1,ra2) {
    return skia.skPaintSetAntialias(ra1,ra2);
}
function skPaintGetColor(ra1) {
    return skia.skPaintGetColor(ra1);
}
function skPaintSetColor(ra1,ra2) {
    return skia.skPaintSetColor(ra1,ra2);
}
function skPaintGetStyle(ra1) {
    return skia.skPaintGetStyle(ra1);
}
function skPaintSetStyle(ra1,ra2) {
    return skia.skPaintSetStyle(ra1,ra2);
}
function skPaintGetStrokeWidth(ra1) {
    return skia.skPaintGetStrokeWidth(ra1);
}
function skPaintSetStrokeWidth(ra1,ra2) {
    return skia.skPaintSetStrokeWidth(ra1,ra2);
}
function skPaintGetStrokeMiter(ra1) {
    return skia.skPaintGetStrokeMiter(ra1);
}
function skPaintSetStrokeMiter(ra1,ra2) {
    return skia.skPaintSetStrokeMiter(ra1,ra2);
}
function skPaintGetStrokeCap(ra1) {
    return skia.skPaintGetStrokeCap(ra1);
}
function skPaintSetStrokeCap(ra1,ra2) {
    return skia.skPaintSetStrokeCap(ra1,ra2);
}
function skPaintGetStrokeJoin(ra1) {
    return skia.skPaintGetStrokeJoin(ra1);
}
function skPaintSetStrokeJoin(ra1,ra2) {
    return skia.skPaintSetStrokeJoin(ra1,ra2);
}
function skPaintSetShader(ra1,ra2) {
    return skia.skPaintSetShader(ra1,ra2);
}
function skPaintSetMaskfilter(ra1,ra2) {
    return skia.skPaintSetMaskfilter(ra1,ra2);
}
function skPaintSetBlendmode(ra1,ra2) {
    return skia.skPaintSetBlendmode(ra1,ra2);
}
function skPaintIsDither(ra1) {
    return skia.skPaintIsDither(ra1);
}
function skPaintSetDither(ra1,ra2) {
    return skia.skPaintSetDither(ra1,ra2);
}
function skPaintIsVerticaltext(ra1) {
    return skia.skPaintIsVerticaltext(ra1);
}
function skPaintSetVerticaltext(ra1,ra2) {
    return skia.skPaintSetVerticaltext(ra1,ra2);
}
function skPaintGetShader(ra1) {
    return skia.skPaintGetShader(ra1);
}
function skPaintGetMaskfilter(ra1) {
    return skia.skPaintGetMaskfilter(ra1);
}
function skPaintSetColorfilter(ra1,ra2) {
    return skia.skPaintSetColorfilter(ra1,ra2);
}
function skPaintGetColorfilter(ra1) {
    return skia.skPaintGetColorfilter(ra1);
}
function skPaintSetImagefilter(ra1,ra2) {
    return skia.skPaintSetImagefilter(ra1,ra2);
}
function skPaintGetImagefilter(ra1) {
    return skia.skPaintGetImagefilter(ra1);
}
function skPaintGetBlendmode(ra1) {
    return skia.skPaintGetBlendmode(ra1);
}
function skPaintSetFilterQuality(ra1,ra2) {
    return skia.skPaintSetFilterQuality(ra1,ra2);
}
function skPaintGetFilterQuality(ra1) {
    return skia.skPaintGetFilterQuality(ra1);
}
function skPaintGetTypeface(ra1) {
    return skia.skPaintGetTypeface(ra1);
}
function skPaintSetTypeface(ra1,ra2) {
    return skia.skPaintSetTypeface(ra1,ra2);
}
function skPaintGetTextsize(ra1) {
    return skia.skPaintGetTextsize(ra1);
}
function skPaintSetTextsize(ra1,ra2) {
    return skia.skPaintSetTextsize(ra1,ra2);
}
function skPaintGetTextAlign(ra1) {
    return skia.skPaintGetTextAlign(ra1);
}
function skPaintSetTextAlign(ra1,ra2) {
    return skia.skPaintSetTextAlign(ra1,ra2);
}
function skPaintGetTextEncoding(ra1) {
    return skia.skPaintGetTextEncoding(ra1);
}
function skPaintSetTextEncoding(ra1,ra2) {
    return skia.skPaintSetTextEncoding(ra1,ra2);
}
function skPaintGetTextScaleX(ra1) {
    return skia.skPaintGetTextScaleX(ra1);
}
function skPaintSetTextScaleX(ra1,ra2) {
    return skia.skPaintSetTextScaleX(ra1,ra2);
}
function skPaintGetTextSkewX(ra1) {
    return skia.skPaintGetTextSkewX(ra1);
}
function skPaintSetTextSkewX(ra1,ra2) {
    return skia.skPaintSetTextSkewX(ra1,ra2);
}
function skPaintBreakText(ra1,ra2,ra3,ra4,ra5) {
    return skia.skPaintBreakText(ra1,ra2,ra3,ra4,ra5);
}
function skPaintMeasureText(ra1,ra2,ra3,ra4) {
    return skia.skPaintMeasureText(ra1,ra2,ra3,ra4);
}
function skPaintGetTextPath(ra1,ra2,ra3,ra4,ra5) {
    return skia.skPaintGetTextPath(ra1,ra2,ra3,ra4,ra5);
}
function skPaintGetPosTextPath(ra1,ra2,ra3,ra4) {
    return skia.skPaintGetPosTextPath(ra1,ra2,ra3,ra4);
}
function skPaintGetFontmetrics(ra1,ra2,ra3) {
    return skia.skPaintGetFontmetrics(ra1,ra2,ra3);
}
function skPaintGetPathEffect(ra1) {
    return skia.skPaintGetPathEffect(ra1);
}
function skPaintSetPathEffect(ra1,ra2) {
    return skia.skPaintSetPathEffect(ra1,ra2);
}
function skPaintIsLinearText(ra1) {
    return skia.skPaintIsLinearText(ra1);
}
function skPaintSetLinearText(ra1,ra2) {
    return skia.skPaintSetLinearText(ra1,ra2);
}
function skPaintIsSubpixelText(ra1) {
    return skia.skPaintIsSubpixelText(ra1);
}
function skPaintSetSubpixelText(ra1,ra2) {
    return skia.skPaintSetSubpixelText(ra1,ra2);
}
function skPaintIsLcdRenderText(ra1) {
    return skia.skPaintIsLcdRenderText(ra1);
}
function skPaintSetLcdRenderText(ra1,ra2) {
    return skia.skPaintSetLcdRenderText(ra1,ra2);
}
function skPaintIsEmbeddedBitmapText(ra1) {
    return skia.skPaintIsEmbeddedBitmapText(ra1);
}
function skPaintSetEmbeddedBitmapText(ra1,ra2) {
    return skia.skPaintSetEmbeddedBitmapText(ra1,ra2);
}
function skPaintGetHinting(ra1) {
    return skia.skPaintGetHinting(ra1);
}
function skPaintSetHinting(ra1,ra2) {
    return skia.skPaintSetHinting(ra1,ra2);
}
function skPaintIsAutohinted(ra1) {
    return skia.skPaintIsAutohinted(ra1);
}
function skPaintSetAutohinted(ra1,ra2) {
    return skia.skPaintSetAutohinted(ra1,ra2);
}
function skPaintIsFakeBoldText(ra1) {
    return skia.skPaintIsFakeBoldText(ra1);
}
function skPaintSetFakeBoldText(ra1,ra2) {
    return skia.skPaintSetFakeBoldText(ra1,ra2);
}
function skPaintIsDevKernText(ra1) {
    return skia.skPaintIsDevKernText(ra1);
}
function skPaintSetDevKernText(ra1,ra2) {
    return skia.skPaintSetDevKernText(ra1,ra2);
}
function skPaintGetFillPath(ra1,ra2,ra3,ra4,ra5) {
    return skia.skPaintGetFillPath(ra1,ra2,ra3,ra4,ra5);
}
function skPaintTextToGlyphs(ra1,ra2,ra3,ra4) {
    return skia.skPaintTextToGlyphs(ra1,ra2,ra3,ra4);
}
function skPaintContainsText(ra1,ra2,ra3) {
    return skia.skPaintContainsText(ra1,ra2,ra3);
}
function skPaintCountText(ra1,ra2,ra3) {
    return skia.skPaintCountText(ra1,ra2,ra3);
}
function skPaintGetTextWidths(ra1,ra2,ra3,ra4,ra5) {
    return skia.skPaintGetTextWidths(ra1,ra2,ra3,ra4,ra5);
}
function skPaintGetTextIntercepts(ra1,ra2,ra3,ra4,ra5,ra6,ra7) {
    return skia.skPaintGetTextIntercepts(ra1,ra2,ra3,ra4,ra5,ra6,ra7);
}
function skPaintGetPosTextIntercepts(ra1,ra2,ra3,ra4,ra5,ra6) {
    return skia.skPaintGetPosTextIntercepts(ra1,ra2,ra3,ra4,ra5,ra6);
}
function skPaintGetPosTextHIntercepts(ra1,ra2,ra3,ra4,ra5,ra6,ra7) {
    return skia.skPaintGetPosTextHIntercepts(ra1,ra2,ra3,ra4,ra5,ra6,ra7);
}
function skPaintGetPosTextBlobIntercepts(ra1,ra2,ra3,ra4) {
    return skia.skPaintGetPosTextBlobIntercepts(ra1,ra2,ra3,ra4);
}
function skPathNew() {
    return skia.skPathNew();
}
function skPathDelete(ra1) {
    return skia.skPathDelete(ra1);
}
function skPathMoveTo(ra1,ra2,ra3) {
    return skia.skPathMoveTo(ra1,ra2,ra3);
}
function skPathLineTo(ra1,ra2,ra3) {
    return skia.skPathLineTo(ra1,ra2,ra3);
}
function skPathQuadTo(ra1,ra2,ra3,ra4,ra5) {
    return skia.skPathQuadTo(ra1,ra2,ra3,ra4,ra5);
}
function skPathConicTo(ra1,ra2,ra3,ra4,ra5,ra6) {
    return skia.skPathConicTo(ra1,ra2,ra3,ra4,ra5,ra6);
}
function skPathCubicTo(ra1,ra2,ra3,ra4,ra5,ra6,ra7) {
    return skia.skPathCubicTo(ra1,ra2,ra3,ra4,ra5,ra6,ra7);
}
function skPathArcTo(ra1,ra2,ra3,ra4,ra5,ra6,ra7,ra8) {
    return skia.skPathArcTo(ra1,ra2,ra3,ra4,ra5,ra6,ra7,ra8);
}
function skPathRarcTo(ra1,ra2,ra3,ra4,ra5,ra6,ra7,ra8) {
    return skia.skPathRarcTo(ra1,ra2,ra3,ra4,ra5,ra6,ra7,ra8);
}
function skPathArcToWithOval(ra1,ra2,ra3,ra4,ra5) {
    return skia.skPathArcToWithOval(ra1,ra2,ra3,ra4,ra5);
}
function skPathArcToWithPoints(ra1,ra2,ra3,ra4,ra5,ra6) {
    return skia.skPathArcToWithPoints(ra1,ra2,ra3,ra4,ra5,ra6);
}
function skPathClose(ra1) {
    return skia.skPathClose(ra1);
}
function skPathAddRect(ra1,ra2,ra3) {
    return skia.skPathAddRect(ra1,ra2,ra3);
}
function skPathAddRrect(ra1,ra2,ra3) {
    return skia.skPathAddRrect(ra1,ra2,ra3);
}
function skPathAddRrectStart(ra1,ra2,ra3,ra4) {
    return skia.skPathAddRrectStart(ra1,ra2,ra3,ra4);
}
function skPathAddRoundedRect(ra1,ra2,ra3,ra4,ra5) {
    return skia.skPathAddRoundedRect(ra1,ra2,ra3,ra4,ra5);
}
function skPathAddOval(ra1,ra2,ra3) {
    return skia.skPathAddOval(ra1,ra2,ra3);
}
function skPathAddCircle(ra1,ra2,ra3,ra4,ra5) {
    return skia.skPathAddCircle(ra1,ra2,ra3,ra4,ra5);
}
function skPathGetBounds(ra1,ra2) {
    return skia.skPathGetBounds(ra1,ra2);
}
function skPathComputeTightBounds(ra1,ra2) {
    return skia.skPathComputeTightBounds(ra1,ra2);
}
function skPathRmoveTo(ra1,ra2,ra3) {
    return skia.skPathRmoveTo(ra1,ra2,ra3);
}
function skPathRlineTo(ra1,ra2,ra3) {
    return skia.skPathRlineTo(ra1,ra2,ra3);
}
function skPathRquadTo(ra1,ra2,ra3,ra4,ra5) {
    return skia.skPathRquadTo(ra1,ra2,ra3,ra4,ra5);
}
function skPathRconicTo(ra1,ra2,ra3,ra4,ra5,ra6) {
    return skia.skPathRconicTo(ra1,ra2,ra3,ra4,ra5,ra6);
}
function skPathRcubicTo(ra1,ra2,ra3,ra4,ra5,ra6,ra7) {
    return skia.skPathRcubicTo(ra1,ra2,ra3,ra4,ra5,ra6,ra7);
}
function skPathAddRectStart(ra1,ra2,ra3,ra4) {
    return skia.skPathAddRectStart(ra1,ra2,ra3,ra4);
}
function skPathAddArc(ra1,ra2,ra3,ra4) {
    return skia.skPathAddArc(ra1,ra2,ra3,ra4);
}
function skPathGetFilltype(ra1) {
    return skia.skPathGetFilltype(ra1);
}
function skPathSetFilltype(ra1,ra2) {
    return skia.skPathSetFilltype(ra1,ra2);
}
function skPathTransform(ra1,ra2) {
    return skia.skPathTransform(ra1,ra2);
}
function skPathClone(ra1) {
    return skia.skPathClone(ra1);
}
function skPathAddPathOffset(ra1,ra2,ra3,ra4,ra5) {
    return skia.skPathAddPathOffset(ra1,ra2,ra3,ra4,ra5);
}
function skPathAddPathMatrix(ra1,ra2,ra3,ra4) {
    return skia.skPathAddPathMatrix(ra1,ra2,ra3,ra4);
}
function skPathAddPath(ra1,ra2,ra3) {
    return skia.skPathAddPath(ra1,ra2,ra3);
}
function skPathAddPathReverse(ra1,ra2) {
    return skia.skPathAddPathReverse(ra1,ra2);
}
function skPathReset(ra1) {
    return skia.skPathReset(ra1);
}
function skPathRewind(ra1) {
    return skia.skPathRewind(ra1);
}
function skPathCountPoints(ra1) {
    return skia.skPathCountPoints(ra1);
}
function skPathCountVerbs(ra1) {
    return skia.skPathCountVerbs(ra1);
}
function skPathGetPoint(ra1,ra2,ra3) {
    return skia.skPathGetPoint(ra1,ra2,ra3);
}
function skPathGetPoints(ra1,ra2,ra3) {
    return skia.skPathGetPoints(ra1,ra2,ra3);
}
function skPathContains(ra1,ra2,ra3) {
    return skia.skPathContains(ra1,ra2,ra3);
}
function skPathGetConvexity(ra1) {
    return skia.skPathGetConvexity(ra1);
}
function skPathSetConvexity(ra1,ra2) {
    return skia.skPathSetConvexity(ra1,ra2);
}
function skPathParseSvgString(ra1,ra2) {
    return skia.skPathParseSvgString(ra1,ra2);
}
function skPathToSvgString(ra1,ra2) {
    return skia.skPathToSvgString(ra1,ra2);
}
function skPathGetLastPoint(ra1,ra2) {
    return skia.skPathGetLastPoint(ra1,ra2);
}
function skPathConvertConicToQuads(ra1,ra2,ra3,ra4,ra5,ra6) {
    return skia.skPathConvertConicToQuads(ra1,ra2,ra3,ra4,ra5,ra6);
}
function skPathAddPoly(ra1,ra2,ra3,ra4) {
    return skia.skPathAddPoly(ra1,ra2,ra3,ra4);
}
function skPathGetSegmentMasks(ra1) {
    return skia.skPathGetSegmentMasks(ra1);
}
function skPathIsOval(ra1,ra2) {
    return skia.skPathIsOval(ra1,ra2);
}
function skPathIsRrect(ra1,ra2) {
    return skia.skPathIsRrect(ra1,ra2);
}
function skPathIsLine(ra1,ra2) {
    return skia.skPathIsLine(ra1,ra2);
}
function skPathIsRect(ra1,ra2,ra3,ra4) {
    return skia.skPathIsRect(ra1,ra2,ra3,ra4);
}
function skPathCreateIter(ra1,ra2) {
    return skia.skPathCreateIter(ra1,ra2);
}
function skPathIterNext(ra1,ra2,ra3,ra4) {
    return skia.skPathIterNext(ra1,ra2,ra3,ra4);
}
function skPathIterConicWeight(ra1) {
    return skia.skPathIterConicWeight(ra1);
}
function skPathIterIsCloseLine(ra1) {
    return skia.skPathIterIsCloseLine(ra1);
}
function skPathIterIsClosedContour(ra1) {
    return skia.skPathIterIsClosedContour(ra1);
}
function skPathIterDestroy(ra1) {
    return skia.skPathIterDestroy(ra1);
}
function skPathCreateRawiter(ra1) {
    return skia.skPathCreateRawiter(ra1);
}
function skPathRawiterPeek(ra1) {
    return skia.skPathRawiterPeek(ra1);
}
function skPathRawiterNext(ra1,ra2) {
    return skia.skPathRawiterNext(ra1,ra2);
}
function skPathRawiterConicWeight(ra1) {
    return skia.skPathRawiterConicWeight(ra1);
}
function skPathRawiterDestroy(ra1) {
    return skia.skPathRawiterDestroy(ra1);
}
function skPathopOp(ra1,ra2,ra3,ra4) {
    return skia.skPathopOp(ra1,ra2,ra3,ra4);
}
function skPathopSimplify(ra1,ra2) {
    return skia.skPathopSimplify(ra1,ra2);
}
function skPathopTightBounds(ra1,ra2) {
    return skia.skPathopTightBounds(ra1,ra2);
}
function skOpbuilderNew() {
    return skia.skOpbuilderNew();
}
function skOpbuilderDestroy(ra1) {
    return skia.skOpbuilderDestroy(ra1);
}
function skOpbuilderAdd(ra1,ra2,ra3) {
    return skia.skOpbuilderAdd(ra1,ra2,ra3);
}
function skOpbuilderResolve(ra1,ra2) {
    return skia.skOpbuilderResolve(ra1,ra2);
}
function skPathmeasureNew() {
    return skia.skPathmeasureNew();
}
function skPathmeasureNewWithPath(ra1,ra2,ra3) {
    return skia.skPathmeasureNewWithPath(ra1,ra2,ra3);
}
function skPathmeasureDestroy(ra1) {
    return skia.skPathmeasureDestroy(ra1);
}
function skPathmeasureSetPath(ra1,ra2,ra3) {
    return skia.skPathmeasureSetPath(ra1,ra2,ra3);
}
function skPathmeasureGetLength(ra1) {
    return skia.skPathmeasureGetLength(ra1);
}
function skPathmeasureGetPosTan(ra1,ra2,ra3,ra4) {
    return skia.skPathmeasureGetPosTan(ra1,ra2,ra3,ra4);
}
function skPathmeasureGetMatrix(ra1,ra2,ra3,ra4) {
    return skia.skPathmeasureGetMatrix(ra1,ra2,ra3,ra4);
}
function skPathmeasureGetSegment(ra1,ra2,ra3,ra4,ra5) {
    return skia.skPathmeasureGetSegment(ra1,ra2,ra3,ra4,ra5);
}
function skPathmeasureIsClosed(ra1) {
    return skia.skPathmeasureIsClosed(ra1);
}
function skPathmeasureNextContour(ra1) {
    return skia.skPathmeasureNextContour(ra1);
}
function skPathEffectUnref(ra1) {
    return skia.skPathEffectUnref(ra1);
}
function skPathEffectCreateCompose(ra1,ra2) {
    return skia.skPathEffectCreateCompose(ra1,ra2);
}
function skPathEffectCreateSum(ra1,ra2) {
    return skia.skPathEffectCreateSum(ra1,ra2);
}
function skPathEffectCreateDiscrete(ra1,ra2,ra3) {
    return skia.skPathEffectCreateDiscrete(ra1,ra2,ra3);
}
function skPathEffectCreateCorner(ra1) {
    return skia.skPathEffectCreateCorner(ra1);
}
function skPathEffectCreate_1dPath(ra1,ra2,ra3,ra4) {
    return skia.skPathEffectCreate_1dPath(ra1,ra2,ra3,ra4);
}
function skPathEffectCreate_2dLine(ra1,ra2) {
    return skia.skPathEffectCreate_2dLine(ra1,ra2);
}
function skPathEffectCreate_2dPath(ra1,ra2) {
    return skia.skPathEffectCreate_2dPath(ra1,ra2);
}
function skPathEffectCreateDash(ra1,ra2,ra3) {
    return skia.skPathEffectCreateDash(ra1,ra2,ra3);
}
function skPathEffectCreateTrim(ra1,ra2,ra3) {
    return skia.skPathEffectCreateTrim(ra1,ra2,ra3);
}
function skPictureRecorderNew() {
    return skia.skPictureRecorderNew();
}
function skPictureRecorderDelete(ra1) {
    return skia.skPictureRecorderDelete(ra1);
}
function skPictureRecorderBeginRecording(ra1,ra2) {
    return skia.skPictureRecorderBeginRecording(ra1,ra2);
}
function skPictureRecorderEndRecording(ra1) {
    return skia.skPictureRecorderEndRecording(ra1);
}
function skPictureRecorderEndRecordingAsDrawable(ra1) {
    return skia.skPictureRecorderEndRecordingAsDrawable(ra1);
}
function skPictureGetRecordingCanvas(ra1) {
    return skia.skPictureGetRecordingCanvas(ra1);
}
function skPictureRef(ra1) {
    return skia.skPictureRef(ra1);
}
function skPictureUnref(ra1) {
    return skia.skPictureUnref(ra1);
}
function skPictureGetUniqueId(ra1) {
    return skia.skPictureGetUniqueId(ra1);
}
function skPictureGetCullRect(ra1,ra2) {
    return skia.skPictureGetCullRect(ra1,ra2);
}
function skPixmapDestructor(ra1) {
    return skia.skPixmapDestructor(ra1);
}
function skPixmapNew() {
    return skia.skPixmapNew();
}
function skPixmapNewWithParams(ra1,ra2,ra3) {
    return skia.skPixmapNewWithParams(ra1,ra2,ra3);
}
function skPixmapReset(ra1) {
    return skia.skPixmapReset(ra1);
}
function skPixmapResetWithParams(ra1,ra2,ra3,ra4) {
    return skia.skPixmapResetWithParams(ra1,ra2,ra3,ra4);
}
function skPixmapGetInfo(ra1,ra2) {
    return skia.skPixmapGetInfo(ra1,ra2);
}
function skPixmapGetRowBytes(ra1) {
    return skia.skPixmapGetRowBytes(ra1);
}
function skPixmapGetPixels(ra1) {
    return skia.skPixmapGetPixels(ra1);
}
function skPixmapGetPixelsWithXy(ra1,ra2,ra3) {
    return skia.skPixmapGetPixelsWithXy(ra1,ra2,ra3);
}
function skPixmapGetPixelColor(ra1,ra2,ra3) {
    return skia.skPixmapGetPixelColor(ra1,ra2,ra3);
}
function skPixmapEncodeImage(ra1,ra2,ra3,ra4) {
    return skia.skPixmapEncodeImage(ra1,ra2,ra3,ra4);
}
function skPixmapReadPixels(ra1,ra2,ra3,ra4,ra5,ra6,ra7) {
    return skia.skPixmapReadPixels(ra1,ra2,ra3,ra4,ra5,ra6,ra7);
}
function skPixmapScalePixels(ra1,ra2,ra3) {
    return skia.skPixmapScalePixels(ra1,ra2,ra3);
}
function skPixmapExtractSubset(ra1,ra2,ra3) {
    return skia.skPixmapExtractSubset(ra1,ra2,ra3);
}
function skPixmapEraseColor(ra1,ra2,ra3) {
    return skia.skPixmapEraseColor(ra1,ra2,ra3);
}
function skColorUnpremultiply(ra1) {
    return skia.skColorUnpremultiply(ra1);
}
function skColorPremultiply(ra1) {
    return skia.skColorPremultiply(ra1);
}
function skColorUnpremultiplyArray(ra1,ra2,ra3) {
    return skia.skColorUnpremultiplyArray(ra1,ra2,ra3);
}
function skColorPremultiplyArray(ra1,ra2,ra3) {
    return skia.skColorPremultiplyArray(ra1,ra2,ra3);
}
function skColorGetBitShift(ra1,ra2,ra3,ra4) {
    return skia.skColorGetBitShift(ra1,ra2,ra3,ra4);
}
function skSwizzleSwapRb(ra1,ra2,ra3) {
    return skia.skSwizzleSwapRb(ra1,ra2,ra3);
}
function skWebpencoderEncode(ra1,ra2,ra3) {
    return skia.skWebpencoderEncode(ra1,ra2,ra3);
}
function skJpegencoderEncode(ra1,ra2,ra3) {
    return skia.skJpegencoderEncode(ra1,ra2,ra3);
}
function skPngencoderEncode(ra1,ra2,ra3) {
    return skia.skPngencoderEncode(ra1,ra2,ra3);
}
function skRegionNew() {
    return skia.skRegionNew();
}
function skRegionNew2(ra1) {
    return skia.skRegionNew2(ra1);
}
function skRegionDelete(ra1) {
    return skia.skRegionDelete(ra1);
}
function skRegionContains(ra1,ra2) {
    return skia.skRegionContains(ra1,ra2);
}
function skRegionContains2(ra1,ra2,ra3) {
    return skia.skRegionContains2(ra1,ra2,ra3);
}
function skRegionIntersectsRect(ra1,ra2) {
    return skia.skRegionIntersectsRect(ra1,ra2);
}
function skRegionIntersects(ra1,ra2) {
    return skia.skRegionIntersects(ra1,ra2);
}
function skRegionSetPath(ra1,ra2,ra3) {
    return skia.skRegionSetPath(ra1,ra2,ra3);
}
function skRegionSetRect(ra1,ra2) {
    return skia.skRegionSetRect(ra1,ra2);
}
function skRegionSetRegion(ra1,ra2) {
    return skia.skRegionSetRegion(ra1,ra2);
}
function skRegionOp(ra1,ra2,ra3,ra4,ra5,ra6) {
    return skia.skRegionOp(ra1,ra2,ra3,ra4,ra5,ra6);
}
function skRegionOp2(ra1,ra2,ra3) {
    return skia.skRegionOp2(ra1,ra2,ra3);
}
function skRegionGetBounds(ra1,ra2) {
    return skia.skRegionGetBounds(ra1,ra2);
}
function skRrectNew() {
    return skia.skRrectNew();
}
function skRrectNewCopy(ra1) {
    return skia.skRrectNewCopy(ra1);
}
function skRrectDelete(ra1) {
    return skia.skRrectDelete(ra1);
}
function skRrectGetType(ra1) {
    return skia.skRrectGetType(ra1);
}
function skRrectGetRect(ra1,ra2) {
    return skia.skRrectGetRect(ra1,ra2);
}
function skRrectGetRadii(ra1,ra2,ra3) {
    return skia.skRrectGetRadii(ra1,ra2,ra3);
}
function skRrectGetWidth(ra1) {
    return skia.skRrectGetWidth(ra1);
}
function skRrectGetHeight(ra1) {
    return skia.skRrectGetHeight(ra1);
}
function skRrectSetEmpty(ra1) {
    return skia.skRrectSetEmpty(ra1);
}
function skRrectSetRect(ra1,ra2) {
    return skia.skRrectSetRect(ra1,ra2);
}
function skRrectSetOval(ra1,ra2) {
    return skia.skRrectSetOval(ra1,ra2);
}
function skRrectSetRectXy(ra1,ra2,ra3,ra4) {
    return skia.skRrectSetRectXy(ra1,ra2,ra3,ra4);
}
function skRrectSetNinePatch(ra1,ra2,ra3,ra4,ra5,ra6) {
    return skia.skRrectSetNinePatch(ra1,ra2,ra3,ra4,ra5,ra6);
}
function skRrectSetRectRadii(ra1,ra2,ra3) {
    return skia.skRrectSetRectRadii(ra1,ra2,ra3);
}
function skRrectInset(ra1,ra2,ra3) {
    return skia.skRrectInset(ra1,ra2,ra3);
}
function skRrectOutset(ra1,ra2,ra3) {
    return skia.skRrectOutset(ra1,ra2,ra3);
}
function skRrectOffset(ra1,ra2,ra3) {
    return skia.skRrectOffset(ra1,ra2,ra3);
}
function skRrectContains(ra1,ra2) {
    return skia.skRrectContains(ra1,ra2);
}
function skRrectIsValid(ra1) {
    return skia.skRrectIsValid(ra1);
}
function skRrectTransform(ra1,ra2,ra3) {
    return skia.skRrectTransform(ra1,ra2,ra3);
}
function skShaderRef(ra1) {
    return skia.skShaderRef(ra1);
}
function skShaderUnref(ra1) {
    return skia.skShaderUnref(ra1);
}
function skShaderNewLinearGradient(ra1,ra2,ra3,ra4,ra5,ra6) {
    return skia.skShaderNewLinearGradient(ra1,ra2,ra3,ra4,ra5,ra6);
}
function skShaderNewRadialGradient(ra1,ra2,ra3,ra4,ra5,ra6,ra7) {
    return skia.skShaderNewRadialGradient(ra1,ra2,ra3,ra4,ra5,ra6,ra7);
}
function skShaderNewSweepGradient(ra1,ra2,ra3,ra4,ra5,ra6,ra7,ra8) {
    return skia.skShaderNewSweepGradient(ra1,ra2,ra3,ra4,ra5,ra6,ra7,ra8);
}
function skShaderNewTwoPointConicalGradient(ra1,ra2,ra3,ra4,ra5,ra6,ra7,ra8,ra9) {
    return skia.skShaderNewTwoPointConicalGradient(ra1,ra2,ra3,ra4,ra5,ra6,ra7,ra8,ra9);
}
function skShaderNewEmpty() {
    return skia.skShaderNewEmpty();
}
function skShaderNewColor(ra1) {
    return skia.skShaderNewColor(ra1);
}
function skShaderNewBitmap(ra1,ra2,ra3,ra4) {
    return skia.skShaderNewBitmap(ra1,ra2,ra3,ra4);
}
function skShaderNewPicture(ra1,ra2,ra3,ra4,ra5) {
    return skia.skShaderNewPicture(ra1,ra2,ra3,ra4,ra5);
}
function skShaderNewLocalMatrix(ra1,ra2) {
    return skia.skShaderNewLocalMatrix(ra1,ra2);
}
function skShaderNewColorFilter(ra1,ra2) {
    return skia.skShaderNewColorFilter(ra1,ra2);
}
function skShaderNewPerlinNoiseFractalNoise(ra1,ra2,ra3,ra4,ra5) {
    return skia.skShaderNewPerlinNoiseFractalNoise(ra1,ra2,ra3,ra4,ra5);
}
function skShaderNewPerlinNoiseTurbulence(ra1,ra2,ra3,ra4,ra5) {
    return skia.skShaderNewPerlinNoiseTurbulence(ra1,ra2,ra3,ra4,ra5);
}
function skShaderNewPerlinNoiseImprovedNoise(ra1,ra2,ra3,ra4) {
    return skia.skShaderNewPerlinNoiseImprovedNoise(ra1,ra2,ra3,ra4);
}
function skShaderNewCompose(ra1,ra2) {
    return skia.skShaderNewCompose(ra1,ra2);
}
function skShaderNewComposeWithMode(ra1,ra2,ra3) {
    return skia.skShaderNewComposeWithMode(ra1,ra2,ra3);
}
function skStreamAssetDestroy(ra1) {
    return skia.skStreamAssetDestroy(ra1);
}
function skFilestreamNew(ra1) {
    return skia.skFilestreamNew(ra1);
}
function skFilestreamDestroy(ra1) {
    return skia.skFilestreamDestroy(ra1);
}
function skFilestreamIsValid(ra1) {
    return skia.skFilestreamIsValid(ra1);
}
function skMemorystreamNew() {
    return skia.skMemorystreamNew();
}
function skMemorystreamNewWithLength(ra1) {
    return skia.skMemorystreamNewWithLength(ra1);
}
function skMemorystreamNewWithData(ra1,ra2,ra3) {
    return skia.skMemorystreamNewWithData(ra1,ra2,ra3);
}
function skMemorystreamNewWithSkdata(ra1) {
    return skia.skMemorystreamNewWithSkdata(ra1);
}
function skMemorystreamSetMemory(ra1,ra2,ra3,ra4) {
    return skia.skMemorystreamSetMemory(ra1,ra2,ra3,ra4);
}
function skMemorystreamDestroy(ra1) {
    return skia.skMemorystreamDestroy(ra1);
}
function skStreamRead(ra1,ra2,ra3) {
    return skia.skStreamRead(ra1,ra2,ra3);
}
function skStreamPeek(ra1,ra2,ra3) {
    return skia.skStreamPeek(ra1,ra2,ra3);
}
function skStreamSkip(ra1,ra2) {
    return skia.skStreamSkip(ra1,ra2);
}
function skStreamIsAtEnd(ra1) {
    return skia.skStreamIsAtEnd(ra1);
}
function skStreamReadS8(ra1,ra2) {
    return skia.skStreamReadS8(ra1,ra2);
}
function skStreamReadS16(ra1,ra2) {
    return skia.skStreamReadS16(ra1,ra2);
}
function skStreamReadS32(ra1,ra2) {
    return skia.skStreamReadS32(ra1,ra2);
}
function skStreamReadU8(ra1,ra2) {
    return skia.skStreamReadU8(ra1,ra2);
}
function skStreamReadU16(ra1,ra2) {
    return skia.skStreamReadU16(ra1,ra2);
}
function skStreamReadU32(ra1,ra2) {
    return skia.skStreamReadU32(ra1,ra2);
}
function skStreamReadBool(ra1,ra2) {
    return skia.skStreamReadBool(ra1,ra2);
}
function skStreamRewind(ra1) {
    return skia.skStreamRewind(ra1);
}
function skStreamHasPosition(ra1) {
    return skia.skStreamHasPosition(ra1);
}
function skStreamGetPosition(ra1) {
    return skia.skStreamGetPosition(ra1);
}
function skStreamSeek(ra1,ra2) {
    return skia.skStreamSeek(ra1,ra2);
}
function skStreamMove(ra1,ra2) {
    return skia.skStreamMove(ra1,ra2);
}
function skStreamHasLength(ra1) {
    return skia.skStreamHasLength(ra1);
}
function skStreamGetLength(ra1) {
    return skia.skStreamGetLength(ra1);
}
function skStreamGetMemoryBase(ra1) {
    return skia.skStreamGetMemoryBase(ra1);
}
function skStreamFork(ra1) {
    return skia.skStreamFork(ra1);
}
function skStreamDuplicate(ra1) {
    return skia.skStreamDuplicate(ra1);
}
function skStreamDestroy(ra1) {
    return skia.skStreamDestroy(ra1);
}
function skFilewstreamNew(ra1) {
    return skia.skFilewstreamNew(ra1);
}
function skFilewstreamDestroy(ra1) {
    return skia.skFilewstreamDestroy(ra1);
}
function skFilewstreamIsValid(ra1) {
    return skia.skFilewstreamIsValid(ra1);
}
function skDynamicmemorywstreamNew() {
    return skia.skDynamicmemorywstreamNew();
}
function skDynamicmemorywstreamDetachAsStream(ra1) {
    return skia.skDynamicmemorywstreamDetachAsStream(ra1);
}
function skDynamicmemorywstreamDetachAsData(ra1) {
    return skia.skDynamicmemorywstreamDetachAsData(ra1);
}
function skDynamicmemorywstreamCopyTo(ra1,ra2) {
    return skia.skDynamicmemorywstreamCopyTo(ra1,ra2);
}
function skDynamicmemorywstreamWriteToStream(ra1,ra2) {
    return skia.skDynamicmemorywstreamWriteToStream(ra1,ra2);
}
function skDynamicmemorywstreamDestroy(ra1) {
    return skia.skDynamicmemorywstreamDestroy(ra1);
}
function skWstreamWrite(ra1,ra2,ra3) {
    return skia.skWstreamWrite(ra1,ra2,ra3);
}
function skWstreamNewline(ra1) {
    return skia.skWstreamNewline(ra1);
}
function skWstreamFlush(ra1) {
    return skia.skWstreamFlush(ra1);
}
function skWstreamBytesWritten(ra1) {
    return skia.skWstreamBytesWritten(ra1);
}
function skWstreamWrite_8(ra1,ra2) {
    return skia.skWstreamWrite_8(ra1,ra2);
}
function skWstreamWrite_16(ra1,ra2) {
    return skia.skWstreamWrite_16(ra1,ra2);
}
function skWstreamWrite_32(ra1,ra2) {
    return skia.skWstreamWrite_32(ra1,ra2);
}
function skWstreamWriteText(ra1,ra2) {
    return skia.skWstreamWriteText(ra1,ra2);
}
function skWstreamWriteDecAsText(ra1,ra2) {
    return skia.skWstreamWriteDecAsText(ra1,ra2);
}
function skWstreamWriteBigdecAsText(ra1,ra2,ra3) {
    return skia.skWstreamWriteBigdecAsText(ra1,ra2,ra3);
}
function skWstreamWriteHexAsText(ra1,ra2,ra3) {
    return skia.skWstreamWriteHexAsText(ra1,ra2,ra3);
}
function skWstreamWriteScalarAsText(ra1,ra2) {
    return skia.skWstreamWriteScalarAsText(ra1,ra2);
}
function skWstreamWriteBool(ra1,ra2) {
    return skia.skWstreamWriteBool(ra1,ra2);
}
function skWstreamWriteScalar(ra1,ra2) {
    return skia.skWstreamWriteScalar(ra1,ra2);
}
function skWstreamWritePackedUint(ra1,ra2) {
    return skia.skWstreamWritePackedUint(ra1,ra2);
}
function skWstreamWriteStream(ra1,ra2,ra3) {
    return skia.skWstreamWriteStream(ra1,ra2,ra3);
}
function skWstreamGetSizeOfPackedUint(ra1) {
    return skia.skWstreamGetSizeOfPackedUint(ra1);
}
function skStringNewEmpty() {
    return skia.skStringNewEmpty();
}
function skStringNewWithCopy(ra1,ra2) {
    return skia.skStringNewWithCopy(ra1,ra2);
}
function skStringDestructor(ra1) {
    return skia.skStringDestructor(ra1);
}
function skStringGetSize(ra1) {
    return skia.skStringGetSize(ra1);
}
function skStringGetCStr(ra1) {
    return skia.skStringGetCStr(ra1);
}
function skSurfaceNewNull(ra1,ra2) {
    return skia.skSurfaceNewNull(ra1,ra2);
}
function skSurfaceNewRaster(ra1,ra2,ra3) {
    return skia.skSurfaceNewRaster(ra1,ra2,ra3);
}
function skSurfaceNewRasterDirect(ra1,ra2,ra3,ra4,ra5,ra6) {
    return skia.skSurfaceNewRasterDirect(ra1,ra2,ra3,ra4,ra5,ra6);
}
function skSurfaceNewBackendTexture(ra1,ra2,ra3,ra4,ra5,ra6,ra7) {
    return skia.skSurfaceNewBackendTexture(ra1,ra2,ra3,ra4,ra5,ra6,ra7);
}
function skSurfaceNewBackendRenderTarget(ra1,ra2,ra3,ra4,ra5,ra6) {
    return skia.skSurfaceNewBackendRenderTarget(ra1,ra2,ra3,ra4,ra5,ra6);
}
function skSurfaceNewBackendTextureAsRenderTarget(ra1,ra2,ra3,ra4,ra5,ra6,ra7) {
    return skia.skSurfaceNewBackendTextureAsRenderTarget(ra1,ra2,ra3,ra4,ra5,ra6,ra7);
}
function skSurfaceNewRenderTarget(ra1,ra2,ra3,ra4,ra5,ra6,ra7) {
    return skia.skSurfaceNewRenderTarget(ra1,ra2,ra3,ra4,ra5,ra6,ra7);
}
function skSurfaceUnref(ra1) {
    return skia.skSurfaceUnref(ra1);
}
function skSurfaceGetCanvas(ra1) {
    return skia.skSurfaceGetCanvas(ra1);
}
function skSurfaceNewImageSnapshot(ra1) {
    return skia.skSurfaceNewImageSnapshot(ra1);
}
function skSurfaceDraw(ra1,ra2,ra3,ra4,ra5) {
    return skia.skSurfaceDraw(ra1,ra2,ra3,ra4,ra5);
}
function skSurfacePeekPixels(ra1,ra2) {
    return skia.skSurfacePeekPixels(ra1,ra2);
}
function skSurfaceReadPixels(ra1,ra2,ra3,ra4,ra5,ra6) {
    return skia.skSurfaceReadPixels(ra1,ra2,ra3,ra4,ra5,ra6);
}
function skSurfaceGetProps(ra1) {
    return skia.skSurfaceGetProps(ra1);
}
function skSurfacepropsNew(ra1,ra2) {
    return skia.skSurfacepropsNew(ra1,ra2);
}
function skSurfacepropsDelete(ra1) {
    return skia.skSurfacepropsDelete(ra1);
}
function skSurfacepropsGetFlags(ra1) {
    return skia.skSurfacepropsGetFlags(ra1);
}
function skSurfacepropsGetPixelGeometry(ra1) {
    return skia.skSurfacepropsGetPixelGeometry(ra1);
}
function skSvgcanvasCreate(ra1,ra2) {
    return skia.skSvgcanvasCreate(ra1,ra2);
}
function skTextblobRef(ra1) {
    return skia.skTextblobRef(ra1);
}
function skTextblobUnref(ra1) {
    return skia.skTextblobUnref(ra1);
}
function skTextblobGetUniqueId(ra1) {
    return skia.skTextblobGetUniqueId(ra1);
}
function skTextblobGetBounds(ra1,ra2) {
    return skia.skTextblobGetBounds(ra1,ra2);
}
function skTextblobBuilderNew() {
    return skia.skTextblobBuilderNew();
}
function skTextblobBuilderDelete(ra1) {
    return skia.skTextblobBuilderDelete(ra1);
}
function skTextblobBuilderMake(ra1) {
    return skia.skTextblobBuilderMake(ra1);
}
function skTextblobBuilderAllocRunText(ra1,ra2,ra3,ra4,ra5,ra6,ra7,ra8,ra9) {
    return skia.skTextblobBuilderAllocRunText(ra1,ra2,ra3,ra4,ra5,ra6,ra7,ra8,ra9);
}
function skTextblobBuilderAllocRunTextPosH(ra1,ra2,ra3,ra4,ra5,ra6,ra7,ra8) {
    return skia.skTextblobBuilderAllocRunTextPosH(ra1,ra2,ra3,ra4,ra5,ra6,ra7,ra8);
}
function skTextblobBuilderAllocRunTextPos(ra1,ra2,ra3,ra4,ra5,ra6,ra7) {
    return skia.skTextblobBuilderAllocRunTextPos(ra1,ra2,ra3,ra4,ra5,ra6,ra7);
}
function skTypefaceCreateDefault() {
    return skia.skTypefaceCreateDefault();
}
function skTypefaceRefDefault() {
    return skia.skTypefaceRefDefault();
}
function skTypefaceCreateFromNameWithFontStyle(ra1,ra2) {
    return skia.skTypefaceCreateFromNameWithFontStyle(ra1,ra2);
}
function skTypefaceUnref(ra1) {
    return skia.skTypefaceUnref(ra1);
}
function skTypefaceCreateFromFile(ra1,ra2) {
    return skia.skTypefaceCreateFromFile(ra1,ra2);
}
function skTypefaceCreateFromStream(ra1,ra2) {
    return skia.skTypefaceCreateFromStream(ra1,ra2);
}
function skTypefaceCharsToGlyphs(ra1,ra2,ra3,ra4,ra5) {
    return skia.skTypefaceCharsToGlyphs(ra1,ra2,ra3,ra4,ra5);
}
function skTypefaceOpenStream(ra1,ra2) {
    return skia.skTypefaceOpenStream(ra1,ra2);
}
function skTypefaceGetUnitsPerEm(ra1) {
    return skia.skTypefaceGetUnitsPerEm(ra1);
}
function skTypefaceGetFamilyName(ra1) {
    return skia.skTypefaceGetFamilyName(ra1);
}
function skTypefaceGetFontstyle(ra1) {
    return skia.skTypefaceGetFontstyle(ra1);
}
function skTypefaceGetFontWeight(ra1) {
    return skia.skTypefaceGetFontWeight(ra1);
}
function skTypefaceGetFontWidth(ra1) {
    return skia.skTypefaceGetFontWidth(ra1);
}
function skTypefaceGetFontSlant(ra1) {
    return skia.skTypefaceGetFontSlant(ra1);
}
function skTypefaceCountTables(ra1) {
    return skia.skTypefaceCountTables(ra1);
}
function skTypefaceGetTableTags(ra1,ra2) {
    return skia.skTypefaceGetTableTags(ra1,ra2);
}
function skTypefaceGetTableSize(ra1,ra2) {
    return skia.skTypefaceGetTableSize(ra1,ra2);
}
function skTypefaceGetTableData(ra1,ra2,ra3,ra4,ra5) {
    return skia.skTypefaceGetTableData(ra1,ra2,ra3,ra4,ra5);
}
function skTypefaceIsFixedPitch(ra1) {
    return skia.skTypefaceIsFixedPitch(ra1);
}
function skFontmgrCreateDefault() {
    return skia.skFontmgrCreateDefault();
}
function skFontmgrRefDefault() {
    return skia.skFontmgrRefDefault();
}
function skFontmgrUnref(ra1) {
    return skia.skFontmgrUnref(ra1);
}
function skFontmgrCountFamilies(ra1) {
    return skia.skFontmgrCountFamilies(ra1);
}
function skFontmgrGetFamilyName(ra1,ra2,ra3) {
    return skia.skFontmgrGetFamilyName(ra1,ra2,ra3);
}
function skFontmgrCreateStyleset(ra1,ra2) {
    return skia.skFontmgrCreateStyleset(ra1,ra2);
}
function skFontmgrMatchFamily(ra1,ra2) {
    return skia.skFontmgrMatchFamily(ra1,ra2);
}
function skFontmgrMatchFamilyStyle(ra1,ra2,ra3) {
    return skia.skFontmgrMatchFamilyStyle(ra1,ra2,ra3);
}
function skFontmgrMatchFamilyStyleCharacter(ra1,ra2,ra3,ra4,ra5,ra6) {
    return skia.skFontmgrMatchFamilyStyleCharacter(ra1,ra2,ra3,ra4,ra5,ra6);
}
function skFontmgrMatchFaceStyle(ra1,ra2,ra3) {
    return skia.skFontmgrMatchFaceStyle(ra1,ra2,ra3);
}
function skFontmgrCreateFromData(ra1,ra2,ra3) {
    return skia.skFontmgrCreateFromData(ra1,ra2,ra3);
}
function skFontmgrCreateFromStream(ra1,ra2,ra3) {
    return skia.skFontmgrCreateFromStream(ra1,ra2,ra3);
}
function skFontmgrCreateFromFile(ra1,ra2,ra3) {
    return skia.skFontmgrCreateFromFile(ra1,ra2,ra3);
}
function skFontstyleNew(ra1,ra2,ra3) {
    return skia.skFontstyleNew(ra1,ra2,ra3);
}
function skFontstyleDelete(ra1) {
    return skia.skFontstyleDelete(ra1);
}
function skFontstyleGetWeight(ra1) {
    return skia.skFontstyleGetWeight(ra1);
}
function skFontstyleGetWidth(ra1) {
    return skia.skFontstyleGetWidth(ra1);
}
function skFontstyleGetSlant(ra1) {
    return skia.skFontstyleGetSlant(ra1);
}
function skFontstylesetCreateEmpty() {
    return skia.skFontstylesetCreateEmpty();
}
function skFontstylesetUnref(ra1) {
    return skia.skFontstylesetUnref(ra1);
}
function skFontstylesetGetCount(ra1) {
    return skia.skFontstylesetGetCount(ra1);
}
function skFontstylesetGetStyle(ra1,ra2,ra3,ra4) {
    return skia.skFontstylesetGetStyle(ra1,ra2,ra3,ra4);
}
function skFontstylesetCreateTypeface(ra1,ra2) {
    return skia.skFontstylesetCreateTypeface(ra1,ra2);
}
function skFontstylesetMatchStyle(ra1,ra2) {
    return skia.skFontstylesetMatchStyle(ra1,ra2);
}
function skVerticesUnref(ra1) {
    return skia.skVerticesUnref(ra1);
}
function skVerticesRef(ra1) {
    return skia.skVerticesRef(ra1);
}
function skVerticesMakeCopy(ra1,ra2,ra3,ra4,ra5,ra6,ra7) {
    return skia.skVerticesMakeCopy(ra1,ra2,ra3,ra4,ra5,ra6,ra7);
}
function skXmlstreamwriterNew(ra1) {
    return skia.skXmlstreamwriterNew(ra1);
}
function skXmlstreamwriterDelete(ra1) {
    return skia.skXmlstreamwriterDelete(ra1);
}


module.exports = {
    skColorSetArgb,
    getMemory,
    enums: {"UNKNOWN_SK_COLORTYPE":0,"ALPHA_8_SK_COLORTYPE":1,"RGB_565_SK_COLORTYPE":2,"ARGB_4444_SK_COLORTYPE":3,"RGBA_8888_SK_COLORTYPE":4,"RGB_888X_SK_COLORTYPE":5,"BGRA_8888_SK_COLORTYPE":6,"RGBA_1010102_SK_COLORTYPE":7,"RGB_101010X_SK_COLORTYPE":8,"GRAY_8_SK_COLORTYPE":9,"RGBA_F16_SK_COLORTYPE":10,"UNKNOWN_SK_ALPHATYPE":0,"OPAQUE_SK_ALPHATYPE":1,"PREMUL_SK_ALPHATYPE":2,"UNPREMUL_SK_ALPHATYPE":3,"UNKNOWN_SK_PIXELGEOMETRY":0,"RGB_H_SK_PIXELGEOMETRY":1,"BGR_H_SK_PIXELGEOMETRY":2,"RGB_V_SK_PIXELGEOMETRY":3,"BGR_V_SK_PIXELGEOMETRY":4,"NONE_SK_SURFACE_PROPS_FLAGS":0,"USE_DEVICE_INDEPENDENT_FONTS_SK_SURFACE_PROPS_FLAGS":1,"IDENTITY_SK_MATRIX44_TYPE_MASK":0,"TRANSLATE_SK_MATRIX44_TYPE_MASK":1,"SCALE_SK_MATRIX44_TYPE_MASK":2,"AFFINE_SK_MATRIX44_TYPE_MASK":4,"PERSPECTIVE_SK_MATRIX44_TYPE_MASK":8,"CLEAR_SK_BLENDMODE":0,"SRC_SK_BLENDMODE":1,"DST_SK_BLENDMODE":2,"SRCOVER_SK_BLENDMODE":3,"DSTOVER_SK_BLENDMODE":4,"SRCIN_SK_BLENDMODE":5,"DSTIN_SK_BLENDMODE":6,"SRCOUT_SK_BLENDMODE":7,"DSTOUT_SK_BLENDMODE":8,"SRCATOP_SK_BLENDMODE":9,"DSTATOP_SK_BLENDMODE":10,"XOR_SK_BLENDMODE":11,"PLUS_SK_BLENDMODE":12,"MODULATE_SK_BLENDMODE":13,"SCREEN_SK_BLENDMODE":14,"OVERLAY_SK_BLENDMODE":15,"DARKEN_SK_BLENDMODE":16,"LIGHTEN_SK_BLENDMODE":17,"COLORDODGE_SK_BLENDMODE":18,"COLORBURN_SK_BLENDMODE":19,"HARDLIGHT_SK_BLENDMODE":20,"SOFTLIGHT_SK_BLENDMODE":21,"DIFFERENCE_SK_BLENDMODE":22,"EXCLUSION_SK_BLENDMODE":23,"MULTIPLY_SK_BLENDMODE":24,"HUE_SK_BLENDMODE":25,"SATURATION_SK_BLENDMODE":26,"COLOR_SK_BLENDMODE":27,"LUMINOSITY_SK_BLENDMODE":28,"UTF8_SK_ENCODING":0,"UTF16_SK_ENCODING":1,"UTF32_SK_ENCODING":2,"POINTS_SK_POINT_MODE":0,"LINES_SK_POINT_MODE":1,"POLYGON_SK_POINT_MODE":2,"LEFT_SK_TEXT_ALIGN":0,"CENTER_SK_TEXT_ALIGN":1,"RIGHT_SK_TEXT_ALIGN":2,"UTF8_SK_TEXT_ENCODING":0,"UTF16_SK_TEXT_ENCODING":1,"UTF32_SK_TEXT_ENCODING":2,"GLYPH_ID_SK_TEXT_ENCODING":3,"WINDING_SK_PATH_FILLTYPE":0,"EVENODD_SK_PATH_FILLTYPE":1,"INVERSE_WINDING_SK_PATH_FILLTYPE":2,"INVERSE_EVENODD_SK_PATH_FILLTYPE":3,"UPRIGHT_SK_FONT_STYLE_SLANT":0,"ITALIC_SK_FONT_STYLE_SLANT":1,"OBLIQUE_SK_FONT_STYLE_SLANT":2,"NONE_SK_FILTER_QUALITY":0,"LOW_SK_FILTER_QUALITY":1,"MEDIUM_SK_FILTER_QUALITY":2,"HIGH_SK_FILTER_QUALITY":3,"HAS_NONE_SK_CROP_RECT_FLAG":0,"HAS_LEFT_SK_CROP_RECT_FLAG":1,"HAS_TOP_SK_CROP_RECT_FLAG":2,"HAS_WIDTH_SK_CROP_RECT_FLAG":4,"HAS_HEIGHT_SK_CROP_RECT_FLAG":8,"HAS_ALL_SK_CROP_RECT_FLAG":15,"DRAW_SHADOW_AND_FOREGROUND_SK_DROP_SHADOW_IMAGE_FILTER_SHADOW_MODE":0,"DRAW_SHADOW_ONLY_SK_DROP_SHADOW_IMAGE_FILTER_SHADOW_MODE":1,"UNKNOWN_SK_DISPLACEMENT_MAP_EFFECT_CHANNEL_SELECTOR_TYPE":0,"R_SK_DISPLACEMENT_MAP_EFFECT_CHANNEL_SELECTOR_TYPE":1,"G_SK_DISPLACEMENT_MAP_EFFECT_CHANNEL_SELECTOR_TYPE":2,"B_SK_DISPLACEMENT_MAP_EFFECT_CHANNEL_SELECTOR_TYPE":3,"A_SK_DISPLACEMENT_MAP_EFFECT_CHANNEL_SELECTOR_TYPE":4,"CLAMP_SK_MATRIX_CONVOLUTION_TILEMODE":0,"REPEAT_SK_MATRIX_CONVOLUTION_TILEMODE":1,"CLAMP_TO_BLACK_SK_MATRIX_CONVOLUTION_TILEMODE":2,"DIFFERENCE_SK_REGION_OP":0,"INTERSECT_SK_REGION_OP":1,"UNION_SK_REGION_OP":2,"XOR_SK_REGION_OP":3,"REVERSE_DIFFERENCE_SK_REGION_OP":4,"REPLACE_SK_REGION_OP":5,"DIFFERENCE_SK_CLIPOP":0,"INTERSECT_SK_CLIPOP":1,"BMP_SK_ENCODED_FORMAT":0,"GIF_SK_ENCODED_FORMAT":1,"ICO_SK_ENCODED_FORMAT":2,"JPEG_SK_ENCODED_FORMAT":3,"PNG_SK_ENCODED_FORMAT":4,"WBMP_SK_ENCODED_FORMAT":5,"WEBP_SK_ENCODED_FORMAT":6,"PKM_SK_ENCODED_FORMAT":7,"KTX_SK_ENCODED_FORMAT":8,"ASTC_SK_ENCODED_FORMAT":9,"DNG_SK_ENCODED_FORMAT":10,"HEIF_SK_ENCODED_FORMAT":11,"TOP_LEFT_SK_ENCODED_ORIGIN":1,"TOP_RIGHT_SK_ENCODED_ORIGIN":2,"BOTTOM_RIGHT_SK_ENCODED_ORIGIN":3,"BOTTOM_LEFT_SK_ENCODED_ORIGIN":4,"LEFT_TOP_SK_ENCODED_ORIGIN":5,"RIGHT_TOP_SK_ENCODED_ORIGIN":6,"RIGHT_BOTTOM_SK_ENCODED_ORIGIN":7,"LEFT_BOTTOM_SK_ENCODED_ORIGIN":8,"DEFAULT_SK_ENCODED_ORIGIN":1,"SUCCESS_SK_CODEC_RESULT":0,"INCOMPLETE_INPUT_SK_CODEC_RESULT":1,"ERROR_IN_INPUT_SK_CODEC_RESULT":2,"INVALID_CONVERSION_SK_CODEC_RESULT":3,"INVALID_SCALE_SK_CODEC_RESULT":4,"INVALID_PARAMETERS_SK_CODEC_RESULT":5,"INVALID_INPUT_SK_CODEC_RESULT":6,"COULD_NOT_REWIND_SK_CODEC_RESULT":7,"INTERNAL_ERROR_SK_CODEC_RESULT":8,"UNIMPLEMENTED_SK_CODEC_RESULT":9,"YES_SK_CODEC_ZERO_INITIALIZED":0,"NO_SK_CODEC_ZERO_INITIALIZED":1,"RESPECT_SK_TRANSFER_FUNCTION_BEHAVIOR":0,"IGNORE_SK_TRANSFER_FUNCTION_BEHAVIOR":1,"TOP_DOWN_SK_CODEC_SCANLINE_ORDER":0,"BOTTOM_UP_SK_CODEC_SCANLINE_ORDER":1,"MOVE_SK_PATH_VERB":0,"LINE_SK_PATH_VERB":1,"QUAD_SK_PATH_VERB":2,"CONIC_SK_PATH_VERB":3,"CUBIC_SK_PATH_VERB":4,"CLOSE_SK_PATH_VERB":5,"DONE_SK_PATH_VERB":6,"APPEND_SK_PATH_ADD_MODE":0,"EXTEND_SK_PATH_ADD_MODE":1,"LINE_SK_PATH_SEGMENT_MASK":1,"QUAD_SK_PATH_SEGMENT_MASK":2,"CONIC_SK_PATH_SEGMENT_MASK":4,"CUBIC_SK_PATH_SEGMENT_MASK":8,"TRANSLATE_SK_PATH_EFFECT_1D_STYLE":0,"ROTATE_SK_PATH_EFFECT_1D_STYLE":1,"MORPH_SK_PATH_EFFECT_1D_STYLE":2,"NORMAL_SK_PATH_EFFECT_TRIM_MODE":0,"INVERTED_SK_PATH_EFFECT_TRIM_MODE":1,"BUTT_SK_STROKE_CAP":0,"ROUND_SK_STROKE_CAP":1,"SQUARE_SK_STROKE_CAP":2,"MITER_SK_STROKE_JOIN":0,"ROUND_SK_STROKE_JOIN":1,"BEVEL_SK_STROKE_JOIN":2,"CLAMP_SK_SHADER_TILEMODE":0,"REPEAT_SK_SHADER_TILEMODE":1,"MIRROR_SK_SHADER_TILEMODE":2,"NORMAL_SK_BLUR_STYLE":0,"SOLID_SK_BLUR_STYLE":1,"OUTER_SK_BLUR_STYLE":2,"INNER_SK_BLUR_STYLE":3,"CW_SK_PATH_DIRECTION":0,"CCW_SK_PATH_DIRECTION":1,"SMALL_SK_PATH_ARC_SIZE":0,"LARGE_SK_PATH_ARC_SIZE":1,"FILL_SK_PAINT_STYLE":0,"STROKE_SK_PAINT_STYLE":1,"STROKE_AND_FILL_SK_PAINT_STYLE":2,"NO_HINTING_SK_PAINT_HINTING":0,"SLIGHT_HINTING_SK_PAINT_HINTING":1,"NORMAL_HINTING_SK_PAINT_HINTING":2,"FULL_HINTING_SK_PAINT_HINTING":3,"TOP_LEFT_GR_SURFACE_ORIGIN":0,"BOTTOM_LEFT_GR_SURFACE_ORIGIN":1,"UNKNOWN_GR_PIXEL_CONFIG":0,"ALPHA_8_GR_PIXEL_CONFIG":1,"GRAY_8_GR_PIXEL_CONFIG":2,"RGB_565_GR_PIXEL_CONFIG":3,"RGBA_4444_GR_PIXEL_CONFIG":4,"RGBA_8888_GR_PIXEL_CONFIG":5,"RGB_888_GR_PIXEL_CONFIG":6,"BGRA_8888_GR_PIXEL_CONFIG":7,"SRGBA_8888_GR_PIXEL_CONFIG":8,"SBGRA_8888_GR_PIXEL_CONFIG":9,"RGBA_1010102_GR_PIXEL_CONFIG":10,"RGBA_FLOAT_GR_PIXEL_CONFIG":11,"RG_FLOAT_GR_PIXEL_CONFIG":12,"ALPHA_HALF_GR_PIXEL_CONFIG":13,"RGBA_HALF_GR_PIXEL_CONFIG":14,"BW_SK_MASK_FORMAT":0,"A8_SK_MASK_FORMAT":1,"THREE_D_SK_MASK_FORMAT":2,"ARGB32_SK_MASK_FORMAT":3,"LCD16_SK_MASK_FORMAT":4,"METAL_GR_BACKEND":0,"OPENGL_GR_BACKEND":1,"VULKAN_GR_BACKEND":2,"DIFFERENCE_SK_PATHOP":0,"INTERSECT_SK_PATHOP":1,"UNION_SK_PATHOP":2,"XOR_SK_PATHOP":3,"REVERSE_DIFFERENCE_SK_PATHOP":4,"UNKNOWN_SK_PATH_CONVEXITY":0,"CONVEX_SK_PATH_CONVEXITY":1,"CONCAVE_SK_PATH_CONVEXITY":2,"DEFAULT_SK_LATTICE_RECT_TYPE":0,"TRANSPARENT_SK_LATTICE_RECT_TYPE":1,"FIXED_COLOR_SK_LATTICE_RECT_TYPE":2,"GET_POSITION_SK_PATHMEASURE_MATRIXFLAGS":1,"GET_TANGENT_SK_PATHMEASURE_MATRIXFLAGS":2,"GET_POS_AND_TAN_SK_PATHMEASURE_MATRIXFLAGS":3,"ALLOW_SK_IMAGE_CACHING_HINT":0,"DISALLOW_SK_IMAGE_CACHING_HINT":1,"NONE_SK_BITMAP_ALLOC_FLAGS":0,"ZERO_PIXELS_SK_BITMAP_ALLOC_FLAGS":1,"KEEP_SK_CODEC_ANIMATION_DISPOSAL_METHOD":1,"RESTORE_BG_COLOR_SK_CODEC_ANIMATION_DISPOSAL_METHOD":2,"RESTORE_PREVIOUS_SK_CODEC_ANIMATION_DISPOSAL_METHOD":3,"TRIANGLES_SK_VERTICES_VERTEX_MODE":0,"TRIANGLE_STRIP_SK_VERTICES_VERTEX_MODE":1,"TRIANGLE_FAN_SK_VERTICES_VERTEX_MODE":2,"LINEAR_SK_GAMMA_NAMED":0,"SRGB_SK_GAMMA_NAMED":1,"TWO_DOT_TWO_CURVE_SK_GAMMA_NAMED":2,"NON_STANDARD_SK_GAMMA_NAMED":3,"RGB_SK_COLORSPACE_TYPE":0,"CMYK_SK_COLORSPACE_TYPE":1,"GRAY_SK_COLORSPACE_TYPE":2,"LINEAR_SK_COLORSPACE_RENDER_TARGET_GAMMA":0,"SRGB_SK_COLORSPACE_RENDER_TARGET_GAMMA":1,"SRGB_SK_COLORSPACE_GAMUT":0,"ADOBE_RGB_SK_COLORSPACE_GAMUT":1,"DCIP3_D65_SK_COLORSPACE_GAMUT":2,"REC2020_SK_COLORSPACE_GAMUT":3,"NO_INVERT_SK_HIGH_CONTRAST_CONFIG_INVERT_STYLE":0,"INVERT_BRIGHTNESS_SK_HIGH_CONTRAST_CONFIG_INVERT_STYLE":1,"INVERT_LIGHTNESS_SK_HIGH_CONTRAST_CONFIG_INVERT_STYLE":2,"ZERO_SK_PNGENCODER_FILTER_FLAGS":0,"NONE_SK_PNGENCODER_FILTER_FLAGS":8,"SUB_SK_PNGENCODER_FILTER_FLAGS":16,"UP_SK_PNGENCODER_FILTER_FLAGS":32,"AVG_SK_PNGENCODER_FILTER_FLAGS":64,"PAETH_SK_PNGENCODER_FILTER_FLAGS":128,"ALL_SK_PNGENCODER_FILTER_FLAGS":248,"DOWNSAMPLE_420_SK_JPEGENCODER_DOWNSAMPLE":0,"DOWNSAMPLE_422_SK_JPEGENCODER_DOWNSAMPLE":1,"DOWNSAMPLE_444_SK_JPEGENCODER_DOWNSAMPLE":2,"IGNORE_SK_JPEGENCODER_ALPHA_OPTION":0,"BLEND_ON_BLACK_SK_JPEGENCODER_ALPHA_OPTION":1,"LOSSY_SK_WEBPENCODER_COMPTRESSION":0,"LOSSLESS_SK_WEBPENCODER_COMPTRESSION":1,"EMPTY_SK_RRECT_TYPE":0,"RECT_SK_RRECT_TYPE":1,"OVAL_SK_RRECT_TYPE":2,"SIMPLE_SK_RRECT_TYPE":3,"NINE_PATCH_SK_RRECT_TYPE":4,"COMPLEX_SK_RRECT_TYPE":5,"UPPER_LEFT_SK_RRECT_CORNER":0,"UPPER_RIGHT_SK_RRECT_CORNER":1,"LOWER_RIGHT_SK_RRECT_CORNER":2,"LOWER_LEFT_SK_RRECT_CORNER":3},
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
