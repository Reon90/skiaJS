#include "include/c/gr_context.h"
#include "include/c/sk_bitmap.h"
#include "include/c/sk_canvas.h"
#include "include/c/sk_codec.h"
#include "include/c/sk_colorfilter.h"
#include "include/c/sk_colorspace.h"
#include "include/c/sk_colortable.h"
#include "include/c/sk_data.h"
#include "include/c/sk_document.h"
#include "include/c/sk_drawable.h"
#include "include/c/sk_general.h"
#include "include/c/sk_image.h"
#include "include/c/sk_imagefilter.h"
#include "include/c/sk_mask.h"
#include "include/c/sk_maskfilter.h"
#include "include/c/sk_matrix.h"
#include "include/c/sk_paint.h"
#include "include/c/sk_path.h"
#include "include/c/sk_patheffect.h"
#include "include/c/sk_picture.h"
#include "include/c/sk_pixmap.h"
#include "include/c/sk_region.h"
#include "include/c/sk_rrect.h"
#include "include/c/sk_shader.h"
#include "include/c/sk_stream.h"
#include "include/c/sk_string.h"
#include "include/c/sk_surface.h"
#include "include/c/sk_svg.h"
#include "include/c/sk_textblob.h"
#include "include/c/sk_typeface.h"
#include "include/c/sk_types.h"
#include "include/c/sk_vertices.h"
#include "include/c/sk_xml.h"

napi_value getMemory(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;
  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);

  bool lossless = true;
  
  int64_t p;
  status = napi_get_value_bigint_int64(env, args[0], &p, &lossless);
  assert(status == napi_ok);
  int64_t l;
  status = napi_get_value_bigint_int64(env, args[1], &l, &lossless);
  assert(status == napi_ok);

  status = napi_create_external_arraybuffer(env, p, l, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value grContextMakeGl(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    gr_glinterface_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (gr_glinterface_t*)*a1;
      }
  gr_context_t* res = gr_context_make_gl(ra1);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value grContextUnref(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    gr_context_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (gr_context_t*)*a1;
      }
  void* res = NULL;
 gr_context_unref(ra1);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value grContextAbandonContext(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    gr_context_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (gr_context_t*)*a1;
      }
  void* res = NULL;
 gr_context_abandon_context(ra1);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value grContextReleaseResourcesAndAbandonContext(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    gr_context_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (gr_context_t*)*a1;
      }
  void* res = NULL;
 gr_context_release_resources_and_abandon_context(ra1);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value grContextGetResourceCacheLimits(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 3;
  napi_value args[3];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    gr_context_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (gr_context_t*)*a1;
      }
  
  
    
    int* ra2 = NULL;
    status = napi_get_value_int32(env, args[1], ra2);
    assert(status == napi_ok);
  
  
    
    int* ra3 = NULL;
    status = napi_get_value_int32(env, args[2], ra3);
    assert(status == napi_ok);
  void* res = NULL;
 gr_context_get_resource_cache_limits(ra1,ra2,ra3);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value grContextSetResourceCacheLimits(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 3;
  napi_value args[3];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    gr_context_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (gr_context_t*)*a1;
      }
  
  
    
    int ra2;
    status = napi_get_value_int32(env, args[1], &ra2);
    assert(status == napi_ok);
  
  
    
    int ra3;
    status = napi_get_value_int32(env, args[2], &ra3);
    assert(status == napi_ok);
  void* res = NULL;
 gr_context_set_resource_cache_limits(ra1,ra2,ra3);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value grContextGetResourceCacheUsage(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 3;
  napi_value args[3];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    gr_context_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (gr_context_t*)*a1;
      }
  
  
    
    int* ra2 = NULL;
    status = napi_get_value_int32(env, args[1], ra2);
    assert(status == napi_ok);
  
  
    
    int* ra3 = NULL;
    status = napi_get_value_int32(env, args[2], ra3);
    assert(status == napi_ok);
  void* res = NULL;
 gr_context_get_resource_cache_usage(ra1,ra2,ra3);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value grContextGetMaxSurfaceSampleCountForColorType(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    gr_context_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (gr_context_t*)*a1;
      }
  
  
    
    int ra2;
    status = napi_get_value_int32(env, args[1], &ra2);
    assert(status == napi_ok);
  int res = gr_context_get_max_surface_sample_count_for_color_type(ra1,ra2);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value grContextFlush(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    gr_context_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (gr_context_t*)*a1;
      }
  void* res = NULL;
 gr_context_flush(ra1);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value grContextResetContext(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    gr_context_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (gr_context_t*)*a1;
      }
  
  
    
    unsigned int ra2;
    status = napi_get_value_uint32(env, args[1], &ra2);
    assert(status == napi_ok);
  void* res = NULL;
 gr_context_reset_context(ra1,ra2);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value grContextGetBackend(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    gr_context_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (gr_context_t*)*a1;
      }
  gr_backend_t res = gr_context_get_backend(ra1);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value grGlinterfaceCreateNativeInterface(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  gr_glinterface_t* res = gr_glinterface_create_native_interface();

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value grGlinterfaceAssembleInterface(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    void* ra1 = NULL;
    if (ta1 != napi_null) {
    void **a1;
    void *pa1;
    a1 = &pa1;
    status = napi_get_arraybuffer_info(env, args[0], a1, NULL);
    assert(status == napi_ok);
    
    ra1 = (void*)*a1;
    }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    gr_gl_get_proc ra2;
    if (ta2 != napi_null) {
      void **a2;
      void *pa2;
      a2 = &pa2;
      status = napi_get_value_external(env, args[1], a2);
      assert(status == napi_ok);
      
      ra2 = *((gr_gl_get_proc*)*a2);
      }
  gr_glinterface_t* res = gr_glinterface_assemble_interface(ra1,ra2);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value grGlinterfaceAssembleGlInterface(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    void* ra1 = NULL;
    if (ta1 != napi_null) {
    void **a1;
    void *pa1;
    a1 = &pa1;
    status = napi_get_arraybuffer_info(env, args[0], a1, NULL);
    assert(status == napi_ok);
    
    ra1 = (void*)*a1;
    }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    gr_gl_get_proc ra2;
    if (ta2 != napi_null) {
      void **a2;
      void *pa2;
      a2 = &pa2;
      status = napi_get_value_external(env, args[1], a2);
      assert(status == napi_ok);
      
      ra2 = *((gr_gl_get_proc*)*a2);
      }
  gr_glinterface_t* res = gr_glinterface_assemble_gl_interface(ra1,ra2);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value grGlinterfaceAssembleGlesInterface(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    void* ra1 = NULL;
    if (ta1 != napi_null) {
    void **a1;
    void *pa1;
    a1 = &pa1;
    status = napi_get_arraybuffer_info(env, args[0], a1, NULL);
    assert(status == napi_ok);
    
    ra1 = (void*)*a1;
    }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    gr_gl_get_proc ra2;
    if (ta2 != napi_null) {
      void **a2;
      void *pa2;
      a2 = &pa2;
      status = napi_get_value_external(env, args[1], a2);
      assert(status == napi_ok);
      
      ra2 = *((gr_gl_get_proc*)*a2);
      }
  gr_glinterface_t* res = gr_glinterface_assemble_gles_interface(ra1,ra2);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value grGlinterfaceUnref(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    gr_glinterface_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (gr_glinterface_t*)*a1;
      }
  void* res = NULL;
 gr_glinterface_unref(ra1);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value grGlinterfaceValidate(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    gr_glinterface_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (gr_glinterface_t*)*a1;
      }
  _Bool res = gr_glinterface_validate(ra1);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value grGlinterfaceHasExtension(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    gr_glinterface_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (gr_glinterface_t*)*a1;
      }
  
  
    size_t la2;
    status = napi_get_value_string_utf8(env, args[1], NULL, 0, &la2);
    assert(status == napi_ok);
    char* ra2 = (char*)malloc(la2 + 1);
    status = napi_get_value_string_utf8(env, args[1], ra2, la2 + 1, &la2);
    assert(status == napi_ok);
  _Bool res = gr_glinterface_has_extension(ra1,ra2);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value grBackendtextureNewGl(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 4;
  napi_value args[4];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    
    int ra1;
    status = napi_get_value_int32(env, args[0], &ra1);
    assert(status == napi_ok);
  
  
    
    int ra2;
    status = napi_get_value_int32(env, args[1], &ra2);
    assert(status == napi_ok);
  
  
    
    _Bool ra3;
    status = napi_get_value_bool(env, args[2], &ra3);
    assert(status == napi_ok);
  
  
    napi_valuetype ta4;
    status = napi_typeof(env, args[3], &ta4);
    assert(status == napi_ok);

    
    gr_gl_textureinfo_t* ra4 = NULL;
    if (ta4 != napi_null) {
    void **a4;
    void *pa4;
    a4 = &pa4;
    status = napi_get_arraybuffer_info(env, args[3], a4, NULL);
    assert(status == napi_ok);
    
    ra4 = (gr_gl_textureinfo_t*)*a4;
    }
  gr_backendtexture_t* res = gr_backendtexture_new_gl(ra1,ra2,ra3,ra4);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value grBackendtextureDelete(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    gr_backendtexture_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (gr_backendtexture_t*)*a1;
      }
  void* res = NULL;
 gr_backendtexture_delete(ra1);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value grBackendtextureIsValid(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    gr_backendtexture_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (gr_backendtexture_t*)*a1;
      }
  _Bool res = gr_backendtexture_is_valid(ra1);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value grBackendtextureGetWidth(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    gr_backendtexture_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (gr_backendtexture_t*)*a1;
      }
  int res = gr_backendtexture_get_width(ra1);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value grBackendtextureGetHeight(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    gr_backendtexture_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (gr_backendtexture_t*)*a1;
      }
  int res = gr_backendtexture_get_height(ra1);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value grBackendtextureHasMipmaps(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    gr_backendtexture_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (gr_backendtexture_t*)*a1;
      }
  _Bool res = gr_backendtexture_has_mipmaps(ra1);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value grBackendtextureGetBackend(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    gr_backendtexture_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (gr_backendtexture_t*)*a1;
      }
  gr_backend_t res = gr_backendtexture_get_backend(ra1);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value grBackendtextureGetGlTextureinfo(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    gr_backendtexture_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (gr_backendtexture_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    gr_gl_textureinfo_t* ra2 = NULL;
    if (ta2 != napi_null) {
    void **a2;
    void *pa2;
    a2 = &pa2;
    status = napi_get_arraybuffer_info(env, args[1], a2, NULL);
    assert(status == napi_ok);
    
    ra2 = (gr_gl_textureinfo_t*)*a2;
    }
  _Bool res = gr_backendtexture_get_gl_textureinfo(ra1,ra2);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value grBackendrendertargetNewGl(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 5;
  napi_value args[5];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    
    int ra1;
    status = napi_get_value_int32(env, args[0], &ra1);
    assert(status == napi_ok);
  
  
    
    int ra2;
    status = napi_get_value_int32(env, args[1], &ra2);
    assert(status == napi_ok);
  
  
    
    int ra3;
    status = napi_get_value_int32(env, args[2], &ra3);
    assert(status == napi_ok);
  
  
    
    int ra4;
    status = napi_get_value_int32(env, args[3], &ra4);
    assert(status == napi_ok);
  
  
    napi_valuetype ta5;
    status = napi_typeof(env, args[4], &ta5);
    assert(status == napi_ok);

    
    gr_gl_framebufferinfo_t* ra5 = NULL;
    if (ta5 != napi_null) {
    void **a5;
    void *pa5;
    a5 = &pa5;
    status = napi_get_arraybuffer_info(env, args[4], a5, NULL);
    assert(status == napi_ok);
    
    ra5 = (gr_gl_framebufferinfo_t*)*a5;
    }
  gr_backendrendertarget_t* res = gr_backendrendertarget_new_gl(ra1,ra2,ra3,ra4,ra5);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value grBackendrendertargetDelete(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    gr_backendrendertarget_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (gr_backendrendertarget_t*)*a1;
      }
  void* res = NULL;
 gr_backendrendertarget_delete(ra1);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value grBackendrendertargetIsValid(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    gr_backendrendertarget_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (gr_backendrendertarget_t*)*a1;
      }
  _Bool res = gr_backendrendertarget_is_valid(ra1);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value grBackendrendertargetGetWidth(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    gr_backendrendertarget_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (gr_backendrendertarget_t*)*a1;
      }
  int res = gr_backendrendertarget_get_width(ra1);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value grBackendrendertargetGetHeight(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    gr_backendrendertarget_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (gr_backendrendertarget_t*)*a1;
      }
  int res = gr_backendrendertarget_get_height(ra1);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value grBackendrendertargetGetSamples(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    gr_backendrendertarget_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (gr_backendrendertarget_t*)*a1;
      }
  int res = gr_backendrendertarget_get_samples(ra1);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value grBackendrendertargetGetStencils(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    gr_backendrendertarget_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (gr_backendrendertarget_t*)*a1;
      }
  int res = gr_backendrendertarget_get_stencils(ra1);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value grBackendrendertargetGetBackend(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    gr_backendrendertarget_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (gr_backendrendertarget_t*)*a1;
      }
  gr_backend_t res = gr_backendrendertarget_get_backend(ra1);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value grBackendrendertargetGetGlFramebufferinfo(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    gr_backendrendertarget_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (gr_backendrendertarget_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    gr_gl_framebufferinfo_t* ra2 = NULL;
    if (ta2 != napi_null) {
    void **a2;
    void *pa2;
    a2 = &pa2;
    status = napi_get_arraybuffer_info(env, args[1], a2, NULL);
    assert(status == napi_ok);
    
    ra2 = (gr_gl_framebufferinfo_t*)*a2;
    }
  _Bool res = gr_backendrendertarget_get_gl_framebufferinfo(ra1,ra2);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skBitmapDestructor(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_bitmap_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_bitmap_t*)*a1;
      }
  void* res = NULL;
 sk_bitmap_destructor(ra1);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skBitmapNew(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  sk_bitmap_t* res = sk_bitmap_new();

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skBitmapGetInfo(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_bitmap_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_bitmap_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_imageinfo_t* ra2 = NULL;
    if (ta2 != napi_null) {
    void **a2;
    void *pa2;
    a2 = &pa2;
    status = napi_get_arraybuffer_info(env, args[1], a2, NULL);
    assert(status == napi_ok);
    
    ra2 = (sk_imageinfo_t*)*a2;
    }
  void* res = NULL;
 sk_bitmap_get_info(ra1,ra2);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skBitmapGetPixels(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_bitmap_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_bitmap_t*)*a1;
      }
  
  
    
    int* ra2 = NULL;
    status = napi_get_value_int32(env, args[1], ra2);
    assert(status == napi_ok);
  void* res = sk_bitmap_get_pixels(ra1,ra2);

  
  status = napi_create_bigint_int64(env, res, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skBitmapGetRowBytes(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_bitmap_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_bitmap_t*)*a1;
      }
  size_t res = sk_bitmap_get_row_bytes(ra1);

  
  status = napi_create_int32(env, res, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skBitmapGetByteCount(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_bitmap_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_bitmap_t*)*a1;
      }
  size_t res = sk_bitmap_get_byte_count(ra1);

  
  status = napi_create_int32(env, res, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skBitmapReset(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_bitmap_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_bitmap_t*)*a1;
      }
  void* res = NULL;
 sk_bitmap_reset(ra1);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skBitmapIsNull(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_bitmap_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_bitmap_t*)*a1;
      }
  _Bool res = sk_bitmap_is_null(ra1);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skBitmapIsImmutable(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_bitmap_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_bitmap_t*)*a1;
      }
  _Bool res = sk_bitmap_is_immutable(ra1);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skBitmapSetImmutable(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_bitmap_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_bitmap_t*)*a1;
      }
  void* res = NULL;
 sk_bitmap_set_immutable(ra1);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skBitmapIsVolatile(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_bitmap_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_bitmap_t*)*a1;
      }
  _Bool res = sk_bitmap_is_volatile(ra1);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skBitmapSetVolatile(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_bitmap_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_bitmap_t*)*a1;
      }
  
  
    
    _Bool ra2;
    status = napi_get_value_bool(env, args[1], &ra2);
    assert(status == napi_ok);
  void* res = NULL;
 sk_bitmap_set_volatile(ra1,ra2);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skBitmapErase(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_bitmap_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_bitmap_t*)*a1;
      }
  
  
    
    unsigned int ra2;
    status = napi_get_value_uint32(env, args[1], &ra2);
    assert(status == napi_ok);
  void* res = NULL;
 sk_bitmap_erase(ra1,ra2);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skBitmapEraseRect(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 3;
  napi_value args[3];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_bitmap_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_bitmap_t*)*a1;
      }
  
  
    
    unsigned int ra2;
    status = napi_get_value_uint32(env, args[1], &ra2);
    assert(status == napi_ok);
  
  
    napi_valuetype ta3;
    status = napi_typeof(env, args[2], &ta3);
    assert(status == napi_ok);

    
    sk_irect_t* ra3 = NULL;
    if (ta3 != napi_null) {
    void **a3;
    void *pa3;
    a3 = &pa3;
    status = napi_get_arraybuffer_info(env, args[2], a3, NULL);
    assert(status == napi_ok);
    
    ra3 = (sk_irect_t*)*a3;
    }
  void* res = NULL;
 sk_bitmap_erase_rect(ra1,ra2,ra3);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skBitmapGetAddr_8(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 3;
  napi_value args[3];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_bitmap_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_bitmap_t*)*a1;
      }
  
  
    
    int ra2;
    status = napi_get_value_int32(env, args[1], &ra2);
    assert(status == napi_ok);
  
  
    
    int ra3;
    status = napi_get_value_int32(env, args[2], &ra3);
    assert(status == napi_ok);
  uint8_t res = sk_bitmap_get_addr_8(ra1,ra2,ra3);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skBitmapGetAddr_16(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 3;
  napi_value args[3];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_bitmap_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_bitmap_t*)*a1;
      }
  
  
    
    int ra2;
    status = napi_get_value_int32(env, args[1], &ra2);
    assert(status == napi_ok);
  
  
    
    int ra3;
    status = napi_get_value_int32(env, args[2], &ra3);
    assert(status == napi_ok);
  uint16_t res = sk_bitmap_get_addr_16(ra1,ra2,ra3);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skBitmapGetAddr_32(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 3;
  napi_value args[3];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_bitmap_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_bitmap_t*)*a1;
      }
  
  
    
    int ra2;
    status = napi_get_value_int32(env, args[1], &ra2);
    assert(status == napi_ok);
  
  
    
    int ra3;
    status = napi_get_value_int32(env, args[2], &ra3);
    assert(status == napi_ok);
  uint32_t res = sk_bitmap_get_addr_32(ra1,ra2,ra3);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skBitmapGetAddr(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 3;
  napi_value args[3];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_bitmap_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_bitmap_t*)*a1;
      }
  
  
    
    int ra2;
    status = napi_get_value_int32(env, args[1], &ra2);
    assert(status == napi_ok);
  
  
    
    int ra3;
    status = napi_get_value_int32(env, args[2], &ra3);
    assert(status == napi_ok);
  void* res = sk_bitmap_get_addr(ra1,ra2,ra3);

  
  status = napi_create_bigint_int64(env, res, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skBitmapGetPixelColor(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 3;
  napi_value args[3];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_bitmap_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_bitmap_t*)*a1;
      }
  
  
    
    int ra2;
    status = napi_get_value_int32(env, args[1], &ra2);
    assert(status == napi_ok);
  
  
    
    int ra3;
    status = napi_get_value_int32(env, args[2], &ra3);
    assert(status == napi_ok);
  sk_color_t res = sk_bitmap_get_pixel_color(ra1,ra2,ra3);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skBitmapSetPixelColor(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 4;
  napi_value args[4];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_bitmap_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_bitmap_t*)*a1;
      }
  
  
    
    int ra2;
    status = napi_get_value_int32(env, args[1], &ra2);
    assert(status == napi_ok);
  
  
    
    int ra3;
    status = napi_get_value_int32(env, args[2], &ra3);
    assert(status == napi_ok);
  
  
    
    unsigned int ra4;
    status = napi_get_value_uint32(env, args[3], &ra4);
    assert(status == napi_ok);
  void* res = NULL;
 sk_bitmap_set_pixel_color(ra1,ra2,ra3,ra4);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skBitmapReadyToDraw(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_bitmap_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_bitmap_t*)*a1;
      }
  _Bool res = sk_bitmap_ready_to_draw(ra1);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skBitmapGetPixelColors(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_bitmap_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_bitmap_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_color_t* ra2 = NULL;
    if (ta2 != napi_null) {
      void **a2;
      void *pa2;
      a2 = &pa2;
      status = napi_get_value_external(env, args[1], a2);
      assert(status == napi_ok);
      
      ra2 = (sk_color_t*)*a2;
      }
  void* res = NULL;
 sk_bitmap_get_pixel_colors(ra1,ra2);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skBitmapSetPixelColors(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_bitmap_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_bitmap_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_color_t* ra2 = NULL;
    if (ta2 != napi_null) {
      void **a2;
      void *pa2;
      a2 = &pa2;
      status = napi_get_value_external(env, args[1], a2);
      assert(status == napi_ok);
      
      ra2 = (sk_color_t*)*a2;
      }
  void* res = NULL;
 sk_bitmap_set_pixel_colors(ra1,ra2);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skBitmapInstallPixels(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 6;
  napi_value args[6];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_bitmap_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_bitmap_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_imageinfo_t* ra2 = NULL;
    if (ta2 != napi_null) {
    void **a2;
    void *pa2;
    a2 = &pa2;
    status = napi_get_arraybuffer_info(env, args[1], a2, NULL);
    assert(status == napi_ok);
    
    ra2 = (sk_imageinfo_t*)*a2;
    }
  
  
    napi_valuetype ta3;
    status = napi_typeof(env, args[2], &ta3);
    assert(status == napi_ok);

    
    void* ra3 = NULL;
    if (ta3 != napi_null) {
    void **a3;
    void *pa3;
    a3 = &pa3;
    status = napi_get_arraybuffer_info(env, args[2], a3, NULL);
    assert(status == napi_ok);
    
    ra3 = (void*)*a3;
    }
  
  
    
    int ra4;
    status = napi_get_value_int32(env, args[3], &ra4);
    assert(status == napi_ok);
  
  
    napi_valuetype ta5;
    status = napi_typeof(env, args[4], &ta5);
    assert(status == napi_ok);

    
    sk_bitmap_release_proc ra5;
    if (ta5 != napi_null) {
      void **a5;
      void *pa5;
      a5 = &pa5;
      status = napi_get_value_external(env, args[4], a5);
      assert(status == napi_ok);
      
      ra5 = *((sk_bitmap_release_proc*)*a5);
      }
  
  
    napi_valuetype ta6;
    status = napi_typeof(env, args[5], &ta6);
    assert(status == napi_ok);

    
    void* ra6 = NULL;
    if (ta6 != napi_null) {
    void **a6;
    void *pa6;
    a6 = &pa6;
    status = napi_get_arraybuffer_info(env, args[5], a6, NULL);
    assert(status == napi_ok);
    
    ra6 = (void*)*a6;
    }
  _Bool res = sk_bitmap_install_pixels(ra1,ra2,ra3,ra4,ra5,ra6);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skBitmapInstallPixelsWithPixmap(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_bitmap_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_bitmap_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_pixmap_t* ra2 = NULL;
    if (ta2 != napi_null) {
      void **a2;
      void *pa2;
      a2 = &pa2;
      status = napi_get_value_external(env, args[1], a2);
      assert(status == napi_ok);
      
      ra2 = (sk_pixmap_t*)*a2;
      }
  _Bool res = sk_bitmap_install_pixels_with_pixmap(ra1,ra2);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skBitmapInstallMaskPixels(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_bitmap_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_bitmap_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_mask_t* ra2 = NULL;
    if (ta2 != napi_null) {
    void **a2;
    void *pa2;
    a2 = &pa2;
    status = napi_get_arraybuffer_info(env, args[1], a2, NULL);
    assert(status == napi_ok);
    
    ra2 = (sk_mask_t*)*a2;
    }
  _Bool res = sk_bitmap_install_mask_pixels(ra1,ra2);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skBitmapTryAllocPixels(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 3;
  napi_value args[3];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_bitmap_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_bitmap_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_imageinfo_t* ra2 = NULL;
    if (ta2 != napi_null) {
    void **a2;
    void *pa2;
    a2 = &pa2;
    status = napi_get_arraybuffer_info(env, args[1], a2, NULL);
    assert(status == napi_ok);
    
    ra2 = (sk_imageinfo_t*)*a2;
    }
  
  
    
    int ra3;
    status = napi_get_value_int32(env, args[2], &ra3);
    assert(status == napi_ok);
  _Bool res = sk_bitmap_try_alloc_pixels(ra1,ra2,ra3);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skBitmapTryAllocPixelsWithFlags(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 3;
  napi_value args[3];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_bitmap_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_bitmap_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_imageinfo_t* ra2 = NULL;
    if (ta2 != napi_null) {
    void **a2;
    void *pa2;
    a2 = &pa2;
    status = napi_get_arraybuffer_info(env, args[1], a2, NULL);
    assert(status == napi_ok);
    
    ra2 = (sk_imageinfo_t*)*a2;
    }
  
  
    
    unsigned int ra3;
    status = napi_get_value_uint32(env, args[2], &ra3);
    assert(status == napi_ok);
  _Bool res = sk_bitmap_try_alloc_pixels_with_flags(ra1,ra2,ra3);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skBitmapSetPixels(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_bitmap_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_bitmap_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    void* ra2 = NULL;
    if (ta2 != napi_null) {
    void **a2;
    void *pa2;
    a2 = &pa2;
    status = napi_get_arraybuffer_info(env, args[1], a2, NULL);
    assert(status == napi_ok);
    
    ra2 = (void*)*a2;
    }
  void* res = NULL;
 sk_bitmap_set_pixels(ra1,ra2);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skBitmapPeekPixels(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_bitmap_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_bitmap_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_pixmap_t* ra2 = NULL;
    if (ta2 != napi_null) {
      void **a2;
      void *pa2;
      a2 = &pa2;
      status = napi_get_value_external(env, args[1], a2);
      assert(status == napi_ok);
      
      ra2 = (sk_pixmap_t*)*a2;
      }
  _Bool res = sk_bitmap_peek_pixels(ra1,ra2);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skBitmapExtractSubset(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 3;
  napi_value args[3];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_bitmap_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_bitmap_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_bitmap_t* ra2 = NULL;
    if (ta2 != napi_null) {
      void **a2;
      void *pa2;
      a2 = &pa2;
      status = napi_get_value_external(env, args[1], a2);
      assert(status == napi_ok);
      
      ra2 = (sk_bitmap_t*)*a2;
      }
  
  
    napi_valuetype ta3;
    status = napi_typeof(env, args[2], &ta3);
    assert(status == napi_ok);

    
    sk_irect_t* ra3 = NULL;
    if (ta3 != napi_null) {
    void **a3;
    void *pa3;
    a3 = &pa3;
    status = napi_get_arraybuffer_info(env, args[2], a3, NULL);
    assert(status == napi_ok);
    
    ra3 = (sk_irect_t*)*a3;
    }
  _Bool res = sk_bitmap_extract_subset(ra1,ra2,ra3);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skBitmapExtractAlpha(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 4;
  napi_value args[4];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_bitmap_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_bitmap_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_bitmap_t* ra2 = NULL;
    if (ta2 != napi_null) {
      void **a2;
      void *pa2;
      a2 = &pa2;
      status = napi_get_value_external(env, args[1], a2);
      assert(status == napi_ok);
      
      ra2 = (sk_bitmap_t*)*a2;
      }
  
  
    napi_valuetype ta3;
    status = napi_typeof(env, args[2], &ta3);
    assert(status == napi_ok);

    
    sk_paint_t* ra3 = NULL;
    if (ta3 != napi_null) {
      void **a3;
      void *pa3;
      a3 = &pa3;
      status = napi_get_value_external(env, args[2], a3);
      assert(status == napi_ok);
      
      ra3 = (sk_paint_t*)*a3;
      }
  
  
    napi_valuetype ta4;
    status = napi_typeof(env, args[3], &ta4);
    assert(status == napi_ok);

    
    sk_ipoint_t* ra4 = NULL;
    if (ta4 != napi_null) {
    void **a4;
    void *pa4;
    a4 = &pa4;
    status = napi_get_arraybuffer_info(env, args[3], a4, NULL);
    assert(status == napi_ok);
    
    ra4 = (sk_ipoint_t*)*a4;
    }
  _Bool res = sk_bitmap_extract_alpha(ra1,ra2,ra3,ra4);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skBitmapNotifyPixelsChanged(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_bitmap_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_bitmap_t*)*a1;
      }
  void* res = NULL;
 sk_bitmap_notify_pixels_changed(ra1);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skBitmapSwap(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_bitmap_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_bitmap_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_bitmap_t* ra2 = NULL;
    if (ta2 != napi_null) {
      void **a2;
      void *pa2;
      a2 = &pa2;
      status = napi_get_value_external(env, args[1], a2);
      assert(status == napi_ok);
      
      ra2 = (sk_bitmap_t*)*a2;
      }
  void* res = NULL;
 sk_bitmap_swap(ra1,ra2);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skCanvasDestroy(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_canvas_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_canvas_t*)*a1;
      }
  void* res = NULL;
 sk_canvas_destroy(ra1);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skCanvasSave(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_canvas_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_canvas_t*)*a1;
      }
  int res = sk_canvas_save(ra1);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skCanvasSaveLayer(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 3;
  napi_value args[3];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_canvas_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_canvas_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_rect_t* ra2 = NULL;
    if (ta2 != napi_null) {
    void **a2;
    void *pa2;
    a2 = &pa2;
    status = napi_get_arraybuffer_info(env, args[1], a2, NULL);
    assert(status == napi_ok);
    
    ra2 = (sk_rect_t*)*a2;
    }
  
  
    napi_valuetype ta3;
    status = napi_typeof(env, args[2], &ta3);
    assert(status == napi_ok);

    
    sk_paint_t* ra3 = NULL;
    if (ta3 != napi_null) {
      void **a3;
      void *pa3;
      a3 = &pa3;
      status = napi_get_value_external(env, args[2], a3);
      assert(status == napi_ok);
      
      ra3 = (sk_paint_t*)*a3;
      }
  int res = sk_canvas_save_layer(ra1,ra2,ra3);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skCanvasRestore(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_canvas_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_canvas_t*)*a1;
      }
  void* res = NULL;
 sk_canvas_restore(ra1);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skCanvasTranslate(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 3;
  napi_value args[3];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_canvas_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_canvas_t*)*a1;
      }
  
  
    
    double ra2;
    status = napi_get_value_double(env, args[1], &ra2);
    assert(status == napi_ok);
  
  
    
    double ra3;
    status = napi_get_value_double(env, args[2], &ra3);
    assert(status == napi_ok);
  void* res = NULL;
 sk_canvas_translate(ra1,ra2,ra3);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skCanvasScale(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 3;
  napi_value args[3];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_canvas_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_canvas_t*)*a1;
      }
  
  
    
    double ra2;
    status = napi_get_value_double(env, args[1], &ra2);
    assert(status == napi_ok);
  
  
    
    double ra3;
    status = napi_get_value_double(env, args[2], &ra3);
    assert(status == napi_ok);
  void* res = NULL;
 sk_canvas_scale(ra1,ra2,ra3);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skCanvasRotateDegrees(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_canvas_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_canvas_t*)*a1;
      }
  
  
    
    double ra2;
    status = napi_get_value_double(env, args[1], &ra2);
    assert(status == napi_ok);
  void* res = NULL;
 sk_canvas_rotate_degrees(ra1,ra2);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skCanvasRotateRadians(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_canvas_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_canvas_t*)*a1;
      }
  
  
    
    double ra2;
    status = napi_get_value_double(env, args[1], &ra2);
    assert(status == napi_ok);
  void* res = NULL;
 sk_canvas_rotate_radians(ra1,ra2);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skCanvasSkew(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 3;
  napi_value args[3];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_canvas_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_canvas_t*)*a1;
      }
  
  
    
    double ra2;
    status = napi_get_value_double(env, args[1], &ra2);
    assert(status == napi_ok);
  
  
    
    double ra3;
    status = napi_get_value_double(env, args[2], &ra3);
    assert(status == napi_ok);
  void* res = NULL;
 sk_canvas_skew(ra1,ra2,ra3);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skCanvasConcat(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_canvas_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_canvas_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_matrix_t* ra2 = NULL;
    if (ta2 != napi_null) {
    void **a2;
    void *pa2;
    a2 = &pa2;
    status = napi_get_arraybuffer_info(env, args[1], a2, NULL);
    assert(status == napi_ok);
    
    ra2 = (sk_matrix_t*)*a2;
    }
  void* res = NULL;
 sk_canvas_concat(ra1,ra2);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skCanvasQuickReject(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_canvas_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_canvas_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_rect_t* ra2 = NULL;
    if (ta2 != napi_null) {
    void **a2;
    void *pa2;
    a2 = &pa2;
    status = napi_get_arraybuffer_info(env, args[1], a2, NULL);
    assert(status == napi_ok);
    
    ra2 = (sk_rect_t*)*a2;
    }
  _Bool res = sk_canvas_quick_reject(ra1,ra2);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skCanvasClipRegion(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 3;
  napi_value args[3];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_canvas_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_canvas_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_region_t* ra2 = NULL;
    if (ta2 != napi_null) {
      void **a2;
      void *pa2;
      a2 = &pa2;
      status = napi_get_value_external(env, args[1], a2);
      assert(status == napi_ok);
      
      ra2 = (sk_region_t*)*a2;
      }
  
  
    
    int ra3;
    status = napi_get_value_int32(env, args[2], &ra3);
    assert(status == napi_ok);
  void* res = NULL;
 sk_canvas_clip_region(ra1,ra2,ra3);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skCanvasDrawPaint(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_canvas_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_canvas_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_paint_t* ra2 = NULL;
    if (ta2 != napi_null) {
      void **a2;
      void *pa2;
      a2 = &pa2;
      status = napi_get_value_external(env, args[1], a2);
      assert(status == napi_ok);
      
      ra2 = (sk_paint_t*)*a2;
      }
  void* res = NULL;
 sk_canvas_draw_paint(ra1,ra2);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skCanvasDrawRect(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 3;
  napi_value args[3];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_canvas_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_canvas_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_rect_t* ra2 = NULL;
    if (ta2 != napi_null) {
    void **a2;
    void *pa2;
    a2 = &pa2;
    status = napi_get_arraybuffer_info(env, args[1], a2, NULL);
    assert(status == napi_ok);
    
    ra2 = (sk_rect_t*)*a2;
    }
  
  
    napi_valuetype ta3;
    status = napi_typeof(env, args[2], &ta3);
    assert(status == napi_ok);

    
    sk_paint_t* ra3 = NULL;
    if (ta3 != napi_null) {
      void **a3;
      void *pa3;
      a3 = &pa3;
      status = napi_get_value_external(env, args[2], a3);
      assert(status == napi_ok);
      
      ra3 = (sk_paint_t*)*a3;
      }
  void* res = NULL;
 sk_canvas_draw_rect(ra1,ra2,ra3);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skCanvasDrawRrect(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 3;
  napi_value args[3];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_canvas_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_canvas_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_rrect_t* ra2 = NULL;
    if (ta2 != napi_null) {
      void **a2;
      void *pa2;
      a2 = &pa2;
      status = napi_get_value_external(env, args[1], a2);
      assert(status == napi_ok);
      
      ra2 = (sk_rrect_t*)*a2;
      }
  
  
    napi_valuetype ta3;
    status = napi_typeof(env, args[2], &ta3);
    assert(status == napi_ok);

    
    sk_paint_t* ra3 = NULL;
    if (ta3 != napi_null) {
      void **a3;
      void *pa3;
      a3 = &pa3;
      status = napi_get_value_external(env, args[2], a3);
      assert(status == napi_ok);
      
      ra3 = (sk_paint_t*)*a3;
      }
  void* res = NULL;
 sk_canvas_draw_rrect(ra1,ra2,ra3);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skCanvasDrawRegion(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 3;
  napi_value args[3];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_canvas_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_canvas_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_region_t* ra2 = NULL;
    if (ta2 != napi_null) {
      void **a2;
      void *pa2;
      a2 = &pa2;
      status = napi_get_value_external(env, args[1], a2);
      assert(status == napi_ok);
      
      ra2 = (sk_region_t*)*a2;
      }
  
  
    napi_valuetype ta3;
    status = napi_typeof(env, args[2], &ta3);
    assert(status == napi_ok);

    
    sk_paint_t* ra3 = NULL;
    if (ta3 != napi_null) {
      void **a3;
      void *pa3;
      a3 = &pa3;
      status = napi_get_value_external(env, args[2], a3);
      assert(status == napi_ok);
      
      ra3 = (sk_paint_t*)*a3;
      }
  void* res = NULL;
 sk_canvas_draw_region(ra1,ra2,ra3);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skCanvasDrawCircle(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 5;
  napi_value args[5];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_canvas_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_canvas_t*)*a1;
      }
  
  
    
    double ra2;
    status = napi_get_value_double(env, args[1], &ra2);
    assert(status == napi_ok);
  
  
    
    double ra3;
    status = napi_get_value_double(env, args[2], &ra3);
    assert(status == napi_ok);
  
  
    
    double ra4;
    status = napi_get_value_double(env, args[3], &ra4);
    assert(status == napi_ok);
  
  
    napi_valuetype ta5;
    status = napi_typeof(env, args[4], &ta5);
    assert(status == napi_ok);

    
    sk_paint_t* ra5 = NULL;
    if (ta5 != napi_null) {
      void **a5;
      void *pa5;
      a5 = &pa5;
      status = napi_get_value_external(env, args[4], a5);
      assert(status == napi_ok);
      
      ra5 = (sk_paint_t*)*a5;
      }
  void* res = NULL;
 sk_canvas_draw_circle(ra1,ra2,ra3,ra4,ra5);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skCanvasDrawOval(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 3;
  napi_value args[3];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_canvas_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_canvas_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_rect_t* ra2 = NULL;
    if (ta2 != napi_null) {
    void **a2;
    void *pa2;
    a2 = &pa2;
    status = napi_get_arraybuffer_info(env, args[1], a2, NULL);
    assert(status == napi_ok);
    
    ra2 = (sk_rect_t*)*a2;
    }
  
  
    napi_valuetype ta3;
    status = napi_typeof(env, args[2], &ta3);
    assert(status == napi_ok);

    
    sk_paint_t* ra3 = NULL;
    if (ta3 != napi_null) {
      void **a3;
      void *pa3;
      a3 = &pa3;
      status = napi_get_value_external(env, args[2], a3);
      assert(status == napi_ok);
      
      ra3 = (sk_paint_t*)*a3;
      }
  void* res = NULL;
 sk_canvas_draw_oval(ra1,ra2,ra3);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skCanvasDrawPath(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 3;
  napi_value args[3];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_canvas_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_canvas_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_path_t* ra2 = NULL;
    if (ta2 != napi_null) {
      void **a2;
      void *pa2;
      a2 = &pa2;
      status = napi_get_value_external(env, args[1], a2);
      assert(status == napi_ok);
      
      ra2 = (sk_path_t*)*a2;
      }
  
  
    napi_valuetype ta3;
    status = napi_typeof(env, args[2], &ta3);
    assert(status == napi_ok);

    
    sk_paint_t* ra3 = NULL;
    if (ta3 != napi_null) {
      void **a3;
      void *pa3;
      a3 = &pa3;
      status = napi_get_value_external(env, args[2], a3);
      assert(status == napi_ok);
      
      ra3 = (sk_paint_t*)*a3;
      }
  void* res = NULL;
 sk_canvas_draw_path(ra1,ra2,ra3);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skCanvasDrawImage(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 5;
  napi_value args[5];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_canvas_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_canvas_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_image_t* ra2 = NULL;
    if (ta2 != napi_null) {
      void **a2;
      void *pa2;
      a2 = &pa2;
      status = napi_get_value_external(env, args[1], a2);
      assert(status == napi_ok);
      
      ra2 = (sk_image_t*)*a2;
      }
  
  
    
    double ra3;
    status = napi_get_value_double(env, args[2], &ra3);
    assert(status == napi_ok);
  
  
    
    double ra4;
    status = napi_get_value_double(env, args[3], &ra4);
    assert(status == napi_ok);
  
  
    napi_valuetype ta5;
    status = napi_typeof(env, args[4], &ta5);
    assert(status == napi_ok);

    
    sk_paint_t* ra5 = NULL;
    if (ta5 != napi_null) {
      void **a5;
      void *pa5;
      a5 = &pa5;
      status = napi_get_value_external(env, args[4], a5);
      assert(status == napi_ok);
      
      ra5 = (sk_paint_t*)*a5;
      }
  void* res = NULL;
 sk_canvas_draw_image(ra1,ra2,ra3,ra4,ra5);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skCanvasDrawImageRect(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 5;
  napi_value args[5];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_canvas_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_canvas_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_image_t* ra2 = NULL;
    if (ta2 != napi_null) {
      void **a2;
      void *pa2;
      a2 = &pa2;
      status = napi_get_value_external(env, args[1], a2);
      assert(status == napi_ok);
      
      ra2 = (sk_image_t*)*a2;
      }
  
  
    napi_valuetype ta3;
    status = napi_typeof(env, args[2], &ta3);
    assert(status == napi_ok);

    
    sk_rect_t* ra3 = NULL;
    if (ta3 != napi_null) {
    void **a3;
    void *pa3;
    a3 = &pa3;
    status = napi_get_arraybuffer_info(env, args[2], a3, NULL);
    assert(status == napi_ok);
    
    ra3 = (sk_rect_t*)*a3;
    }
  
  
    napi_valuetype ta4;
    status = napi_typeof(env, args[3], &ta4);
    assert(status == napi_ok);

    
    sk_rect_t* ra4 = NULL;
    if (ta4 != napi_null) {
    void **a4;
    void *pa4;
    a4 = &pa4;
    status = napi_get_arraybuffer_info(env, args[3], a4, NULL);
    assert(status == napi_ok);
    
    ra4 = (sk_rect_t*)*a4;
    }
  
  
    napi_valuetype ta5;
    status = napi_typeof(env, args[4], &ta5);
    assert(status == napi_ok);

    
    sk_paint_t* ra5 = NULL;
    if (ta5 != napi_null) {
      void **a5;
      void *pa5;
      a5 = &pa5;
      status = napi_get_value_external(env, args[4], a5);
      assert(status == napi_ok);
      
      ra5 = (sk_paint_t*)*a5;
      }
  void* res = NULL;
 sk_canvas_draw_image_rect(ra1,ra2,ra3,ra4,ra5);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skCanvasDrawPicture(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 4;
  napi_value args[4];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_canvas_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_canvas_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_picture_t* ra2 = NULL;
    if (ta2 != napi_null) {
      void **a2;
      void *pa2;
      a2 = &pa2;
      status = napi_get_value_external(env, args[1], a2);
      assert(status == napi_ok);
      
      ra2 = (sk_picture_t*)*a2;
      }
  
  
    napi_valuetype ta3;
    status = napi_typeof(env, args[2], &ta3);
    assert(status == napi_ok);

    
    sk_matrix_t* ra3 = NULL;
    if (ta3 != napi_null) {
    void **a3;
    void *pa3;
    a3 = &pa3;
    status = napi_get_arraybuffer_info(env, args[2], a3, NULL);
    assert(status == napi_ok);
    
    ra3 = (sk_matrix_t*)*a3;
    }
  
  
    napi_valuetype ta4;
    status = napi_typeof(env, args[3], &ta4);
    assert(status == napi_ok);

    
    sk_paint_t* ra4 = NULL;
    if (ta4 != napi_null) {
      void **a4;
      void *pa4;
      a4 = &pa4;
      status = napi_get_value_external(env, args[3], a4);
      assert(status == napi_ok);
      
      ra4 = (sk_paint_t*)*a4;
      }
  void* res = NULL;
 sk_canvas_draw_picture(ra1,ra2,ra3,ra4);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skCanvasDrawDrawable(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 3;
  napi_value args[3];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_canvas_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_canvas_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_drawable_t* ra2 = NULL;
    if (ta2 != napi_null) {
      void **a2;
      void *pa2;
      a2 = &pa2;
      status = napi_get_value_external(env, args[1], a2);
      assert(status == napi_ok);
      
      ra2 = (sk_drawable_t*)*a2;
      }
  
  
    napi_valuetype ta3;
    status = napi_typeof(env, args[2], &ta3);
    assert(status == napi_ok);

    
    sk_matrix_t* ra3 = NULL;
    if (ta3 != napi_null) {
    void **a3;
    void *pa3;
    a3 = &pa3;
    status = napi_get_arraybuffer_info(env, args[2], a3, NULL);
    assert(status == napi_ok);
    
    ra3 = (sk_matrix_t*)*a3;
    }
  void* res = NULL;
 sk_canvas_draw_drawable(ra1,ra2,ra3);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skCanvasClear(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_canvas_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_canvas_t*)*a1;
      }
  
  
    
    unsigned int ra2;
    status = napi_get_value_uint32(env, args[1], &ra2);
    assert(status == napi_ok);
  void* res = NULL;
 sk_canvas_clear(ra1,ra2);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skCanvasDiscard(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_canvas_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_canvas_t*)*a1;
      }
  void* res = NULL;
 sk_canvas_discard(ra1);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skCanvasGetSaveCount(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_canvas_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_canvas_t*)*a1;
      }
  int res = sk_canvas_get_save_count(ra1);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skCanvasRestoreToCount(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_canvas_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_canvas_t*)*a1;
      }
  
  
    
    int ra2;
    status = napi_get_value_int32(env, args[1], &ra2);
    assert(status == napi_ok);
  void* res = NULL;
 sk_canvas_restore_to_count(ra1,ra2);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skCanvasDrawColor(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 3;
  napi_value args[3];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_canvas_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_canvas_t*)*a1;
      }
  
  
    
    unsigned int ra2;
    status = napi_get_value_uint32(env, args[1], &ra2);
    assert(status == napi_ok);
  
  
    
    int ra3;
    status = napi_get_value_int32(env, args[2], &ra3);
    assert(status == napi_ok);
  void* res = NULL;
 sk_canvas_draw_color(ra1,ra2,ra3);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skCanvasDrawPoints(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 5;
  napi_value args[5];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_canvas_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_canvas_t*)*a1;
      }
  
  
    
    int ra2;
    status = napi_get_value_int32(env, args[1], &ra2);
    assert(status == napi_ok);
  
  
    
    int ra3;
    status = napi_get_value_int32(env, args[2], &ra3);
    assert(status == napi_ok);
  
  
    napi_valuetype ta4;
    status = napi_typeof(env, args[3], &ta4);
    assert(status == napi_ok);

    
    sk_point_t* ra4 = NULL;
    if (ta4 != napi_null) {
    void **a4;
    void *pa4;
    a4 = &pa4;
    status = napi_get_arraybuffer_info(env, args[3], a4, NULL);
    assert(status == napi_ok);
    
    ra4 = (sk_point_t*)*a4;
    }
  
  
    napi_valuetype ta5;
    status = napi_typeof(env, args[4], &ta5);
    assert(status == napi_ok);

    
    sk_paint_t* ra5 = NULL;
    if (ta5 != napi_null) {
      void **a5;
      void *pa5;
      a5 = &pa5;
      status = napi_get_value_external(env, args[4], a5);
      assert(status == napi_ok);
      
      ra5 = (sk_paint_t*)*a5;
      }
  void* res = NULL;
 sk_canvas_draw_points(ra1,ra2,ra3,ra4,ra5);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skCanvasDrawPoint(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 4;
  napi_value args[4];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_canvas_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_canvas_t*)*a1;
      }
  
  
    
    double ra2;
    status = napi_get_value_double(env, args[1], &ra2);
    assert(status == napi_ok);
  
  
    
    double ra3;
    status = napi_get_value_double(env, args[2], &ra3);
    assert(status == napi_ok);
  
  
    napi_valuetype ta4;
    status = napi_typeof(env, args[3], &ta4);
    assert(status == napi_ok);

    
    sk_paint_t* ra4 = NULL;
    if (ta4 != napi_null) {
      void **a4;
      void *pa4;
      a4 = &pa4;
      status = napi_get_value_external(env, args[3], a4);
      assert(status == napi_ok);
      
      ra4 = (sk_paint_t*)*a4;
      }
  void* res = NULL;
 sk_canvas_draw_point(ra1,ra2,ra3,ra4);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skCanvasDrawLine(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 6;
  napi_value args[6];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_canvas_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_canvas_t*)*a1;
      }
  
  
    
    double ra2;
    status = napi_get_value_double(env, args[1], &ra2);
    assert(status == napi_ok);
  
  
    
    double ra3;
    status = napi_get_value_double(env, args[2], &ra3);
    assert(status == napi_ok);
  
  
    
    double ra4;
    status = napi_get_value_double(env, args[3], &ra4);
    assert(status == napi_ok);
  
  
    
    double ra5;
    status = napi_get_value_double(env, args[4], &ra5);
    assert(status == napi_ok);
  
  
    napi_valuetype ta6;
    status = napi_typeof(env, args[5], &ta6);
    assert(status == napi_ok);

    
    sk_paint_t* ra6 = NULL;
    if (ta6 != napi_null) {
      void **a6;
      void *pa6;
      a6 = &pa6;
      status = napi_get_value_external(env, args[5], a6);
      assert(status == napi_ok);
      
      ra6 = (sk_paint_t*)*a6;
      }
  void* res = NULL;
 sk_canvas_draw_line(ra1,ra2,ra3,ra4,ra5,ra6);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skCanvasDrawText(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 6;
  napi_value args[6];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_canvas_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_canvas_t*)*a1;
      }
  
  
    size_t la2;
    status = napi_get_value_string_utf8(env, args[1], NULL, 0, &la2);
    assert(status == napi_ok);
    char* ra2 = (char*)malloc(la2 + 1);
    status = napi_get_value_string_utf8(env, args[1], ra2, la2 + 1, &la2);
    assert(status == napi_ok);
  
  
    
    int ra3;
    status = napi_get_value_int32(env, args[2], &ra3);
    assert(status == napi_ok);
  
  
    
    double ra4;
    status = napi_get_value_double(env, args[3], &ra4);
    assert(status == napi_ok);
  
  
    
    double ra5;
    status = napi_get_value_double(env, args[4], &ra5);
    assert(status == napi_ok);
  
  
    napi_valuetype ta6;
    status = napi_typeof(env, args[5], &ta6);
    assert(status == napi_ok);

    
    sk_paint_t* ra6 = NULL;
    if (ta6 != napi_null) {
      void **a6;
      void *pa6;
      a6 = &pa6;
      status = napi_get_value_external(env, args[5], a6);
      assert(status == napi_ok);
      
      ra6 = (sk_paint_t*)*a6;
      }
  void* res = NULL;
 sk_canvas_draw_text(ra1,ra2,ra3,ra4,ra5,ra6);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skCanvasDrawPosText(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 5;
  napi_value args[5];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_canvas_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_canvas_t*)*a1;
      }
  
  
    size_t la2;
    status = napi_get_value_string_utf8(env, args[1], NULL, 0, &la2);
    assert(status == napi_ok);
    char* ra2 = (char*)malloc(la2 + 1);
    status = napi_get_value_string_utf8(env, args[1], ra2, la2 + 1, &la2);
    assert(status == napi_ok);
  
  
    
    int ra3;
    status = napi_get_value_int32(env, args[2], &ra3);
    assert(status == napi_ok);
  
  
    napi_valuetype ta4;
    status = napi_typeof(env, args[3], &ta4);
    assert(status == napi_ok);

    
    sk_point_t* ra4 = NULL;
    if (ta4 != napi_null) {
    void **a4;
    void *pa4;
    a4 = &pa4;
    status = napi_get_arraybuffer_info(env, args[3], a4, NULL);
    assert(status == napi_ok);
    
    ra4 = (sk_point_t*)*a4;
    }
  
  
    napi_valuetype ta5;
    status = napi_typeof(env, args[4], &ta5);
    assert(status == napi_ok);

    
    sk_paint_t* ra5 = NULL;
    if (ta5 != napi_null) {
      void **a5;
      void *pa5;
      a5 = &pa5;
      status = napi_get_value_external(env, args[4], a5);
      assert(status == napi_ok);
      
      ra5 = (sk_paint_t*)*a5;
      }
  void* res = NULL;
 sk_canvas_draw_pos_text(ra1,ra2,ra3,ra4,ra5);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skCanvasDrawTextOnPath(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 7;
  napi_value args[7];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_canvas_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_canvas_t*)*a1;
      }
  
  
    size_t la2;
    status = napi_get_value_string_utf8(env, args[1], NULL, 0, &la2);
    assert(status == napi_ok);
    char* ra2 = (char*)malloc(la2 + 1);
    status = napi_get_value_string_utf8(env, args[1], ra2, la2 + 1, &la2);
    assert(status == napi_ok);
  
  
    
    int ra3;
    status = napi_get_value_int32(env, args[2], &ra3);
    assert(status == napi_ok);
  
  
    napi_valuetype ta4;
    status = napi_typeof(env, args[3], &ta4);
    assert(status == napi_ok);

    
    sk_path_t* ra4 = NULL;
    if (ta4 != napi_null) {
      void **a4;
      void *pa4;
      a4 = &pa4;
      status = napi_get_value_external(env, args[3], a4);
      assert(status == napi_ok);
      
      ra4 = (sk_path_t*)*a4;
      }
  
  
    
    double ra5;
    status = napi_get_value_double(env, args[4], &ra5);
    assert(status == napi_ok);
  
  
    
    double ra6;
    status = napi_get_value_double(env, args[5], &ra6);
    assert(status == napi_ok);
  
  
    napi_valuetype ta7;
    status = napi_typeof(env, args[6], &ta7);
    assert(status == napi_ok);

    
    sk_paint_t* ra7 = NULL;
    if (ta7 != napi_null) {
      void **a7;
      void *pa7;
      a7 = &pa7;
      status = napi_get_value_external(env, args[6], a7);
      assert(status == napi_ok);
      
      ra7 = (sk_paint_t*)*a7;
      }
  void* res = NULL;
 sk_canvas_draw_text_on_path(ra1,ra2,ra3,ra4,ra5,ra6,ra7);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skCanvasDrawTextBlob(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 5;
  napi_value args[5];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_canvas_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_canvas_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_textblob_t* ra2 = NULL;
    if (ta2 != napi_null) {
      void **a2;
      void *pa2;
      a2 = &pa2;
      status = napi_get_value_external(env, args[1], a2);
      assert(status == napi_ok);
      
      ra2 = (sk_textblob_t*)*a2;
      }
  
  
    
    double ra3;
    status = napi_get_value_double(env, args[2], &ra3);
    assert(status == napi_ok);
  
  
    
    double ra4;
    status = napi_get_value_double(env, args[3], &ra4);
    assert(status == napi_ok);
  
  
    napi_valuetype ta5;
    status = napi_typeof(env, args[4], &ta5);
    assert(status == napi_ok);

    
    sk_paint_t* ra5 = NULL;
    if (ta5 != napi_null) {
      void **a5;
      void *pa5;
      a5 = &pa5;
      status = napi_get_value_external(env, args[4], a5);
      assert(status == napi_ok);
      
      ra5 = (sk_paint_t*)*a5;
      }
  void* res = NULL;
 sk_canvas_draw_text_blob(ra1,ra2,ra3,ra4,ra5);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skCanvasDrawBitmap(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 5;
  napi_value args[5];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_canvas_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_canvas_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_bitmap_t* ra2 = NULL;
    if (ta2 != napi_null) {
      void **a2;
      void *pa2;
      a2 = &pa2;
      status = napi_get_value_external(env, args[1], a2);
      assert(status == napi_ok);
      
      ra2 = (sk_bitmap_t*)*a2;
      }
  
  
    
    double ra3;
    status = napi_get_value_double(env, args[2], &ra3);
    assert(status == napi_ok);
  
  
    
    double ra4;
    status = napi_get_value_double(env, args[3], &ra4);
    assert(status == napi_ok);
  
  
    napi_valuetype ta5;
    status = napi_typeof(env, args[4], &ta5);
    assert(status == napi_ok);

    
    sk_paint_t* ra5 = NULL;
    if (ta5 != napi_null) {
      void **a5;
      void *pa5;
      a5 = &pa5;
      status = napi_get_value_external(env, args[4], a5);
      assert(status == napi_ok);
      
      ra5 = (sk_paint_t*)*a5;
      }
  void* res = NULL;
 sk_canvas_draw_bitmap(ra1,ra2,ra3,ra4,ra5);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skCanvasDrawBitmapRect(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 5;
  napi_value args[5];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_canvas_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_canvas_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_bitmap_t* ra2 = NULL;
    if (ta2 != napi_null) {
      void **a2;
      void *pa2;
      a2 = &pa2;
      status = napi_get_value_external(env, args[1], a2);
      assert(status == napi_ok);
      
      ra2 = (sk_bitmap_t*)*a2;
      }
  
  
    napi_valuetype ta3;
    status = napi_typeof(env, args[2], &ta3);
    assert(status == napi_ok);

    
    sk_rect_t* ra3 = NULL;
    if (ta3 != napi_null) {
    void **a3;
    void *pa3;
    a3 = &pa3;
    status = napi_get_arraybuffer_info(env, args[2], a3, NULL);
    assert(status == napi_ok);
    
    ra3 = (sk_rect_t*)*a3;
    }
  
  
    napi_valuetype ta4;
    status = napi_typeof(env, args[3], &ta4);
    assert(status == napi_ok);

    
    sk_rect_t* ra4 = NULL;
    if (ta4 != napi_null) {
    void **a4;
    void *pa4;
    a4 = &pa4;
    status = napi_get_arraybuffer_info(env, args[3], a4, NULL);
    assert(status == napi_ok);
    
    ra4 = (sk_rect_t*)*a4;
    }
  
  
    napi_valuetype ta5;
    status = napi_typeof(env, args[4], &ta5);
    assert(status == napi_ok);

    
    sk_paint_t* ra5 = NULL;
    if (ta5 != napi_null) {
      void **a5;
      void *pa5;
      a5 = &pa5;
      status = napi_get_value_external(env, args[4], a5);
      assert(status == napi_ok);
      
      ra5 = (sk_paint_t*)*a5;
      }
  void* res = NULL;
 sk_canvas_draw_bitmap_rect(ra1,ra2,ra3,ra4,ra5);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skCanvasResetMatrix(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_canvas_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_canvas_t*)*a1;
      }
  void* res = NULL;
 sk_canvas_reset_matrix(ra1);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skCanvasSetMatrix(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_canvas_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_canvas_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_matrix_t* ra2 = NULL;
    if (ta2 != napi_null) {
    void **a2;
    void *pa2;
    a2 = &pa2;
    status = napi_get_arraybuffer_info(env, args[1], a2, NULL);
    assert(status == napi_ok);
    
    ra2 = (sk_matrix_t*)*a2;
    }
  void* res = NULL;
 sk_canvas_set_matrix(ra1,ra2);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skCanvasGetTotalMatrix(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_canvas_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_canvas_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_matrix_t* ra2 = NULL;
    if (ta2 != napi_null) {
    void **a2;
    void *pa2;
    a2 = &pa2;
    status = napi_get_arraybuffer_info(env, args[1], a2, NULL);
    assert(status == napi_ok);
    
    ra2 = (sk_matrix_t*)*a2;
    }
  void* res = NULL;
 sk_canvas_get_total_matrix(ra1,ra2);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skCanvasDrawRoundRect(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 5;
  napi_value args[5];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_canvas_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_canvas_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_rect_t* ra2 = NULL;
    if (ta2 != napi_null) {
    void **a2;
    void *pa2;
    a2 = &pa2;
    status = napi_get_arraybuffer_info(env, args[1], a2, NULL);
    assert(status == napi_ok);
    
    ra2 = (sk_rect_t*)*a2;
    }
  
  
    
    double ra3;
    status = napi_get_value_double(env, args[2], &ra3);
    assert(status == napi_ok);
  
  
    
    double ra4;
    status = napi_get_value_double(env, args[3], &ra4);
    assert(status == napi_ok);
  
  
    napi_valuetype ta5;
    status = napi_typeof(env, args[4], &ta5);
    assert(status == napi_ok);

    
    sk_paint_t* ra5 = NULL;
    if (ta5 != napi_null) {
      void **a5;
      void *pa5;
      a5 = &pa5;
      status = napi_get_value_external(env, args[4], a5);
      assert(status == napi_ok);
      
      ra5 = (sk_paint_t*)*a5;
      }
  void* res = NULL;
 sk_canvas_draw_round_rect(ra1,ra2,ra3,ra4,ra5);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skCanvasClipRectWithOperation(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 4;
  napi_value args[4];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_canvas_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_canvas_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_rect_t* ra2 = NULL;
    if (ta2 != napi_null) {
    void **a2;
    void *pa2;
    a2 = &pa2;
    status = napi_get_arraybuffer_info(env, args[1], a2, NULL);
    assert(status == napi_ok);
    
    ra2 = (sk_rect_t*)*a2;
    }
  
  
    
    int ra3;
    status = napi_get_value_int32(env, args[2], &ra3);
    assert(status == napi_ok);
  
  
    
    _Bool ra4;
    status = napi_get_value_bool(env, args[3], &ra4);
    assert(status == napi_ok);
  void* res = NULL;
 sk_canvas_clip_rect_with_operation(ra1,ra2,ra3,ra4);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skCanvasClipPathWithOperation(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 4;
  napi_value args[4];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_canvas_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_canvas_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_path_t* ra2 = NULL;
    if (ta2 != napi_null) {
      void **a2;
      void *pa2;
      a2 = &pa2;
      status = napi_get_value_external(env, args[1], a2);
      assert(status == napi_ok);
      
      ra2 = (sk_path_t*)*a2;
      }
  
  
    
    int ra3;
    status = napi_get_value_int32(env, args[2], &ra3);
    assert(status == napi_ok);
  
  
    
    _Bool ra4;
    status = napi_get_value_bool(env, args[3], &ra4);
    assert(status == napi_ok);
  void* res = NULL;
 sk_canvas_clip_path_with_operation(ra1,ra2,ra3,ra4);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skCanvasClipRrectWithOperation(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 4;
  napi_value args[4];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_canvas_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_canvas_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_rrect_t* ra2 = NULL;
    if (ta2 != napi_null) {
      void **a2;
      void *pa2;
      a2 = &pa2;
      status = napi_get_value_external(env, args[1], a2);
      assert(status == napi_ok);
      
      ra2 = (sk_rrect_t*)*a2;
      }
  
  
    
    int ra3;
    status = napi_get_value_int32(env, args[2], &ra3);
    assert(status == napi_ok);
  
  
    
    _Bool ra4;
    status = napi_get_value_bool(env, args[3], &ra4);
    assert(status == napi_ok);
  void* res = NULL;
 sk_canvas_clip_rrect_with_operation(ra1,ra2,ra3,ra4);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skCanvasGetLocalClipBounds(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_canvas_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_canvas_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_rect_t* ra2 = NULL;
    if (ta2 != napi_null) {
    void **a2;
    void *pa2;
    a2 = &pa2;
    status = napi_get_arraybuffer_info(env, args[1], a2, NULL);
    assert(status == napi_ok);
    
    ra2 = (sk_rect_t*)*a2;
    }
  _Bool res = sk_canvas_get_local_clip_bounds(ra1,ra2);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skCanvasGetDeviceClipBounds(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_canvas_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_canvas_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_irect_t* ra2 = NULL;
    if (ta2 != napi_null) {
    void **a2;
    void *pa2;
    a2 = &pa2;
    status = napi_get_arraybuffer_info(env, args[1], a2, NULL);
    assert(status == napi_ok);
    
    ra2 = (sk_irect_t*)*a2;
    }
  _Bool res = sk_canvas_get_device_clip_bounds(ra1,ra2);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skCanvasFlush(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_canvas_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_canvas_t*)*a1;
      }
  void* res = NULL;
 sk_canvas_flush(ra1);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skCanvasNewFromBitmap(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_bitmap_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_bitmap_t*)*a1;
      }
  sk_canvas_t* res = sk_canvas_new_from_bitmap(ra1);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skCanvasDrawAnnotation(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 4;
  napi_value args[4];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_canvas_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_canvas_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_rect_t* ra2 = NULL;
    if (ta2 != napi_null) {
    void **a2;
    void *pa2;
    a2 = &pa2;
    status = napi_get_arraybuffer_info(env, args[1], a2, NULL);
    assert(status == napi_ok);
    
    ra2 = (sk_rect_t*)*a2;
    }
  
  
    size_t la3;
    status = napi_get_value_string_utf8(env, args[2], NULL, 0, &la3);
    assert(status == napi_ok);
    char* ra3 = (char*)malloc(la3 + 1);
    status = napi_get_value_string_utf8(env, args[2], ra3, la3 + 1, &la3);
    assert(status == napi_ok);
  
  
    napi_valuetype ta4;
    status = napi_typeof(env, args[3], &ta4);
    assert(status == napi_ok);

    
    sk_data_t* ra4 = NULL;
    if (ta4 != napi_null) {
      void **a4;
      void *pa4;
      a4 = &pa4;
      status = napi_get_value_external(env, args[3], a4);
      assert(status == napi_ok);
      
      ra4 = (sk_data_t*)*a4;
      }
  void* res = NULL;
 sk_canvas_draw_annotation(ra1,ra2,ra3,ra4);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skCanvasDrawUrlAnnotation(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 3;
  napi_value args[3];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_canvas_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_canvas_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_rect_t* ra2 = NULL;
    if (ta2 != napi_null) {
    void **a2;
    void *pa2;
    a2 = &pa2;
    status = napi_get_arraybuffer_info(env, args[1], a2, NULL);
    assert(status == napi_ok);
    
    ra2 = (sk_rect_t*)*a2;
    }
  
  
    napi_valuetype ta3;
    status = napi_typeof(env, args[2], &ta3);
    assert(status == napi_ok);

    
    sk_data_t* ra3 = NULL;
    if (ta3 != napi_null) {
      void **a3;
      void *pa3;
      a3 = &pa3;
      status = napi_get_value_external(env, args[2], a3);
      assert(status == napi_ok);
      
      ra3 = (sk_data_t*)*a3;
      }
  void* res = NULL;
 sk_canvas_draw_url_annotation(ra1,ra2,ra3);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skCanvasDrawNamedDestinationAnnotation(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 3;
  napi_value args[3];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_canvas_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_canvas_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_point_t* ra2 = NULL;
    if (ta2 != napi_null) {
    void **a2;
    void *pa2;
    a2 = &pa2;
    status = napi_get_arraybuffer_info(env, args[1], a2, NULL);
    assert(status == napi_ok);
    
    ra2 = (sk_point_t*)*a2;
    }
  
  
    napi_valuetype ta3;
    status = napi_typeof(env, args[2], &ta3);
    assert(status == napi_ok);

    
    sk_data_t* ra3 = NULL;
    if (ta3 != napi_null) {
      void **a3;
      void *pa3;
      a3 = &pa3;
      status = napi_get_value_external(env, args[2], a3);
      assert(status == napi_ok);
      
      ra3 = (sk_data_t*)*a3;
      }
  void* res = NULL;
 sk_canvas_draw_named_destination_annotation(ra1,ra2,ra3);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skCanvasDrawLinkDestinationAnnotation(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 3;
  napi_value args[3];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_canvas_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_canvas_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_rect_t* ra2 = NULL;
    if (ta2 != napi_null) {
    void **a2;
    void *pa2;
    a2 = &pa2;
    status = napi_get_arraybuffer_info(env, args[1], a2, NULL);
    assert(status == napi_ok);
    
    ra2 = (sk_rect_t*)*a2;
    }
  
  
    napi_valuetype ta3;
    status = napi_typeof(env, args[2], &ta3);
    assert(status == napi_ok);

    
    sk_data_t* ra3 = NULL;
    if (ta3 != napi_null) {
      void **a3;
      void *pa3;
      a3 = &pa3;
      status = napi_get_value_external(env, args[2], a3);
      assert(status == napi_ok);
      
      ra3 = (sk_data_t*)*a3;
      }
  void* res = NULL;
 sk_canvas_draw_link_destination_annotation(ra1,ra2,ra3);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skCanvasDrawBitmapLattice(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 5;
  napi_value args[5];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_canvas_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_canvas_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_bitmap_t* ra2 = NULL;
    if (ta2 != napi_null) {
      void **a2;
      void *pa2;
      a2 = &pa2;
      status = napi_get_value_external(env, args[1], a2);
      assert(status == napi_ok);
      
      ra2 = (sk_bitmap_t*)*a2;
      }
  
  
    napi_valuetype ta3;
    status = napi_typeof(env, args[2], &ta3);
    assert(status == napi_ok);

    
    sk_lattice_t* ra3 = NULL;
    if (ta3 != napi_null) {
    void **a3;
    void *pa3;
    a3 = &pa3;
    status = napi_get_arraybuffer_info(env, args[2], a3, NULL);
    assert(status == napi_ok);
    
    ra3 = (sk_lattice_t*)*a3;
    }
  
  
    napi_valuetype ta4;
    status = napi_typeof(env, args[3], &ta4);
    assert(status == napi_ok);

    
    sk_rect_t* ra4 = NULL;
    if (ta4 != napi_null) {
    void **a4;
    void *pa4;
    a4 = &pa4;
    status = napi_get_arraybuffer_info(env, args[3], a4, NULL);
    assert(status == napi_ok);
    
    ra4 = (sk_rect_t*)*a4;
    }
  
  
    napi_valuetype ta5;
    status = napi_typeof(env, args[4], &ta5);
    assert(status == napi_ok);

    
    sk_paint_t* ra5 = NULL;
    if (ta5 != napi_null) {
      void **a5;
      void *pa5;
      a5 = &pa5;
      status = napi_get_value_external(env, args[4], a5);
      assert(status == napi_ok);
      
      ra5 = (sk_paint_t*)*a5;
      }
  void* res = NULL;
 sk_canvas_draw_bitmap_lattice(ra1,ra2,ra3,ra4,ra5);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skCanvasDrawImageLattice(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 5;
  napi_value args[5];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_canvas_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_canvas_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_image_t* ra2 = NULL;
    if (ta2 != napi_null) {
      void **a2;
      void *pa2;
      a2 = &pa2;
      status = napi_get_value_external(env, args[1], a2);
      assert(status == napi_ok);
      
      ra2 = (sk_image_t*)*a2;
      }
  
  
    napi_valuetype ta3;
    status = napi_typeof(env, args[2], &ta3);
    assert(status == napi_ok);

    
    sk_lattice_t* ra3 = NULL;
    if (ta3 != napi_null) {
    void **a3;
    void *pa3;
    a3 = &pa3;
    status = napi_get_arraybuffer_info(env, args[2], a3, NULL);
    assert(status == napi_ok);
    
    ra3 = (sk_lattice_t*)*a3;
    }
  
  
    napi_valuetype ta4;
    status = napi_typeof(env, args[3], &ta4);
    assert(status == napi_ok);

    
    sk_rect_t* ra4 = NULL;
    if (ta4 != napi_null) {
    void **a4;
    void *pa4;
    a4 = &pa4;
    status = napi_get_arraybuffer_info(env, args[3], a4, NULL);
    assert(status == napi_ok);
    
    ra4 = (sk_rect_t*)*a4;
    }
  
  
    napi_valuetype ta5;
    status = napi_typeof(env, args[4], &ta5);
    assert(status == napi_ok);

    
    sk_paint_t* ra5 = NULL;
    if (ta5 != napi_null) {
      void **a5;
      void *pa5;
      a5 = &pa5;
      status = napi_get_value_external(env, args[4], a5);
      assert(status == napi_ok);
      
      ra5 = (sk_paint_t*)*a5;
      }
  void* res = NULL;
 sk_canvas_draw_image_lattice(ra1,ra2,ra3,ra4,ra5);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skCanvasDrawBitmapNine(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 5;
  napi_value args[5];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_canvas_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_canvas_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_bitmap_t* ra2 = NULL;
    if (ta2 != napi_null) {
      void **a2;
      void *pa2;
      a2 = &pa2;
      status = napi_get_value_external(env, args[1], a2);
      assert(status == napi_ok);
      
      ra2 = (sk_bitmap_t*)*a2;
      }
  
  
    napi_valuetype ta3;
    status = napi_typeof(env, args[2], &ta3);
    assert(status == napi_ok);

    
    sk_irect_t* ra3 = NULL;
    if (ta3 != napi_null) {
    void **a3;
    void *pa3;
    a3 = &pa3;
    status = napi_get_arraybuffer_info(env, args[2], a3, NULL);
    assert(status == napi_ok);
    
    ra3 = (sk_irect_t*)*a3;
    }
  
  
    napi_valuetype ta4;
    status = napi_typeof(env, args[3], &ta4);
    assert(status == napi_ok);

    
    sk_rect_t* ra4 = NULL;
    if (ta4 != napi_null) {
    void **a4;
    void *pa4;
    a4 = &pa4;
    status = napi_get_arraybuffer_info(env, args[3], a4, NULL);
    assert(status == napi_ok);
    
    ra4 = (sk_rect_t*)*a4;
    }
  
  
    napi_valuetype ta5;
    status = napi_typeof(env, args[4], &ta5);
    assert(status == napi_ok);

    
    sk_paint_t* ra5 = NULL;
    if (ta5 != napi_null) {
      void **a5;
      void *pa5;
      a5 = &pa5;
      status = napi_get_value_external(env, args[4], a5);
      assert(status == napi_ok);
      
      ra5 = (sk_paint_t*)*a5;
      }
  void* res = NULL;
 sk_canvas_draw_bitmap_nine(ra1,ra2,ra3,ra4,ra5);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skCanvasDrawImageNine(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 5;
  napi_value args[5];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_canvas_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_canvas_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_image_t* ra2 = NULL;
    if (ta2 != napi_null) {
      void **a2;
      void *pa2;
      a2 = &pa2;
      status = napi_get_value_external(env, args[1], a2);
      assert(status == napi_ok);
      
      ra2 = (sk_image_t*)*a2;
      }
  
  
    napi_valuetype ta3;
    status = napi_typeof(env, args[2], &ta3);
    assert(status == napi_ok);

    
    sk_irect_t* ra3 = NULL;
    if (ta3 != napi_null) {
    void **a3;
    void *pa3;
    a3 = &pa3;
    status = napi_get_arraybuffer_info(env, args[2], a3, NULL);
    assert(status == napi_ok);
    
    ra3 = (sk_irect_t*)*a3;
    }
  
  
    napi_valuetype ta4;
    status = napi_typeof(env, args[3], &ta4);
    assert(status == napi_ok);

    
    sk_rect_t* ra4 = NULL;
    if (ta4 != napi_null) {
    void **a4;
    void *pa4;
    a4 = &pa4;
    status = napi_get_arraybuffer_info(env, args[3], a4, NULL);
    assert(status == napi_ok);
    
    ra4 = (sk_rect_t*)*a4;
    }
  
  
    napi_valuetype ta5;
    status = napi_typeof(env, args[4], &ta5);
    assert(status == napi_ok);

    
    sk_paint_t* ra5 = NULL;
    if (ta5 != napi_null) {
      void **a5;
      void *pa5;
      a5 = &pa5;
      status = napi_get_value_external(env, args[4], a5);
      assert(status == napi_ok);
      
      ra5 = (sk_paint_t*)*a5;
      }
  void* res = NULL;
 sk_canvas_draw_image_nine(ra1,ra2,ra3,ra4,ra5);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skCanvasDrawVertices(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 4;
  napi_value args[4];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_canvas_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_canvas_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_vertices_t* ra2 = NULL;
    if (ta2 != napi_null) {
      void **a2;
      void *pa2;
      a2 = &pa2;
      status = napi_get_value_external(env, args[1], a2);
      assert(status == napi_ok);
      
      ra2 = (sk_vertices_t*)*a2;
      }
  
  
    
    int ra3;
    status = napi_get_value_int32(env, args[2], &ra3);
    assert(status == napi_ok);
  
  
    napi_valuetype ta4;
    status = napi_typeof(env, args[3], &ta4);
    assert(status == napi_ok);

    
    sk_paint_t* ra4 = NULL;
    if (ta4 != napi_null) {
      void **a4;
      void *pa4;
      a4 = &pa4;
      status = napi_get_value_external(env, args[3], a4);
      assert(status == napi_ok);
      
      ra4 = (sk_paint_t*)*a4;
      }
  void* res = NULL;
 sk_canvas_draw_vertices(ra1,ra2,ra3,ra4);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skCanvasDrawArc(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 6;
  napi_value args[6];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_canvas_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_canvas_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_rect_t* ra2 = NULL;
    if (ta2 != napi_null) {
    void **a2;
    void *pa2;
    a2 = &pa2;
    status = napi_get_arraybuffer_info(env, args[1], a2, NULL);
    assert(status == napi_ok);
    
    ra2 = (sk_rect_t*)*a2;
    }
  
  
    
    double ra3;
    status = napi_get_value_double(env, args[2], &ra3);
    assert(status == napi_ok);
  
  
    
    double ra4;
    status = napi_get_value_double(env, args[3], &ra4);
    assert(status == napi_ok);
  
  
    
    _Bool ra5;
    status = napi_get_value_bool(env, args[4], &ra5);
    assert(status == napi_ok);
  
  
    napi_valuetype ta6;
    status = napi_typeof(env, args[5], &ta6);
    assert(status == napi_ok);

    
    sk_paint_t* ra6 = NULL;
    if (ta6 != napi_null) {
      void **a6;
      void *pa6;
      a6 = &pa6;
      status = napi_get_value_external(env, args[5], a6);
      assert(status == napi_ok);
      
      ra6 = (sk_paint_t*)*a6;
      }
  void* res = NULL;
 sk_canvas_draw_arc(ra1,ra2,ra3,ra4,ra5,ra6);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skCanvasDrawDrrect(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 4;
  napi_value args[4];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_canvas_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_canvas_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_rrect_t* ra2 = NULL;
    if (ta2 != napi_null) {
      void **a2;
      void *pa2;
      a2 = &pa2;
      status = napi_get_value_external(env, args[1], a2);
      assert(status == napi_ok);
      
      ra2 = (sk_rrect_t*)*a2;
      }
  
  
    napi_valuetype ta3;
    status = napi_typeof(env, args[2], &ta3);
    assert(status == napi_ok);

    
    sk_rrect_t* ra3 = NULL;
    if (ta3 != napi_null) {
      void **a3;
      void *pa3;
      a3 = &pa3;
      status = napi_get_value_external(env, args[2], a3);
      assert(status == napi_ok);
      
      ra3 = (sk_rrect_t*)*a3;
      }
  
  
    napi_valuetype ta4;
    status = napi_typeof(env, args[3], &ta4);
    assert(status == napi_ok);

    
    sk_paint_t* ra4 = NULL;
    if (ta4 != napi_null) {
      void **a4;
      void *pa4;
      a4 = &pa4;
      status = napi_get_value_external(env, args[3], a4);
      assert(status == napi_ok);
      
      ra4 = (sk_paint_t*)*a4;
      }
  void* res = NULL;
 sk_canvas_draw_drrect(ra1,ra2,ra3,ra4);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skCanvasDrawAtlas(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 9;
  napi_value args[9];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_canvas_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_canvas_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_image_t* ra2 = NULL;
    if (ta2 != napi_null) {
      void **a2;
      void *pa2;
      a2 = &pa2;
      status = napi_get_value_external(env, args[1], a2);
      assert(status == napi_ok);
      
      ra2 = (sk_image_t*)*a2;
      }
  
  
    napi_valuetype ta3;
    status = napi_typeof(env, args[2], &ta3);
    assert(status == napi_ok);

    
    sk_rsxform_t* ra3 = NULL;
    if (ta3 != napi_null) {
    void **a3;
    void *pa3;
    a3 = &pa3;
    status = napi_get_arraybuffer_info(env, args[2], a3, NULL);
    assert(status == napi_ok);
    
    ra3 = (sk_rsxform_t*)*a3;
    }
  
  
    napi_valuetype ta4;
    status = napi_typeof(env, args[3], &ta4);
    assert(status == napi_ok);

    
    sk_rect_t* ra4 = NULL;
    if (ta4 != napi_null) {
    void **a4;
    void *pa4;
    a4 = &pa4;
    status = napi_get_arraybuffer_info(env, args[3], a4, NULL);
    assert(status == napi_ok);
    
    ra4 = (sk_rect_t*)*a4;
    }
  
  
    napi_valuetype ta5;
    status = napi_typeof(env, args[4], &ta5);
    assert(status == napi_ok);

    
    sk_color_t* ra5 = NULL;
    if (ta5 != napi_null) {
      void **a5;
      void *pa5;
      a5 = &pa5;
      status = napi_get_value_external(env, args[4], a5);
      assert(status == napi_ok);
      
      ra5 = (sk_color_t*)*a5;
      }
  
  
    
    int ra6;
    status = napi_get_value_int32(env, args[5], &ra6);
    assert(status == napi_ok);
  
  
    
    int ra7;
    status = napi_get_value_int32(env, args[6], &ra7);
    assert(status == napi_ok);
  
  
    napi_valuetype ta8;
    status = napi_typeof(env, args[7], &ta8);
    assert(status == napi_ok);

    
    sk_rect_t* ra8 = NULL;
    if (ta8 != napi_null) {
    void **a8;
    void *pa8;
    a8 = &pa8;
    status = napi_get_arraybuffer_info(env, args[7], a8, NULL);
    assert(status == napi_ok);
    
    ra8 = (sk_rect_t*)*a8;
    }
  
  
    napi_valuetype ta9;
    status = napi_typeof(env, args[8], &ta9);
    assert(status == napi_ok);

    
    sk_paint_t* ra9 = NULL;
    if (ta9 != napi_null) {
      void **a9;
      void *pa9;
      a9 = &pa9;
      status = napi_get_value_external(env, args[8], a9);
      assert(status == napi_ok);
      
      ra9 = (sk_paint_t*)*a9;
      }
  void* res = NULL;
 sk_canvas_draw_atlas(ra1,ra2,ra3,ra4,ra5,ra6,ra7,ra8,ra9);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skCanvasDrawPatch(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 6;
  napi_value args[6];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_canvas_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_canvas_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_point_t* ra2 = NULL;
    if (ta2 != napi_null) {
    void **a2;
    void *pa2;
    a2 = &pa2;
    status = napi_get_arraybuffer_info(env, args[1], a2, NULL);
    assert(status == napi_ok);
    
    ra2 = (sk_point_t*)*a2;
    }
  
  
    napi_valuetype ta3;
    status = napi_typeof(env, args[2], &ta3);
    assert(status == napi_ok);

    
    sk_color_t* ra3 = NULL;
    if (ta3 != napi_null) {
      void **a3;
      void *pa3;
      a3 = &pa3;
      status = napi_get_value_external(env, args[2], a3);
      assert(status == napi_ok);
      
      ra3 = (sk_color_t*)*a3;
      }
  
  
    napi_valuetype ta4;
    status = napi_typeof(env, args[3], &ta4);
    assert(status == napi_ok);

    
    sk_point_t* ra4 = NULL;
    if (ta4 != napi_null) {
    void **a4;
    void *pa4;
    a4 = &pa4;
    status = napi_get_arraybuffer_info(env, args[3], a4, NULL);
    assert(status == napi_ok);
    
    ra4 = (sk_point_t*)*a4;
    }
  
  
    
    int ra5;
    status = napi_get_value_int32(env, args[4], &ra5);
    assert(status == napi_ok);
  
  
    napi_valuetype ta6;
    status = napi_typeof(env, args[5], &ta6);
    assert(status == napi_ok);

    
    sk_paint_t* ra6 = NULL;
    if (ta6 != napi_null) {
      void **a6;
      void *pa6;
      a6 = &pa6;
      status = napi_get_value_external(env, args[5], a6);
      assert(status == napi_ok);
      
      ra6 = (sk_paint_t*)*a6;
      }
  void* res = NULL;
 sk_canvas_draw_patch(ra1,ra2,ra3,ra4,ra5,ra6);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skCanvasIsClipEmpty(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_canvas_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_canvas_t*)*a1;
      }
  _Bool res = sk_canvas_is_clip_empty(ra1);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skCanvasIsClipRect(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_canvas_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_canvas_t*)*a1;
      }
  _Bool res = sk_canvas_is_clip_rect(ra1);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skNodrawCanvasNew(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    
    int ra1;
    status = napi_get_value_int32(env, args[0], &ra1);
    assert(status == napi_ok);
  
  
    
    int ra2;
    status = napi_get_value_int32(env, args[1], &ra2);
    assert(status == napi_ok);
  sk_nodraw_canvas_t* res = sk_nodraw_canvas_new(ra1,ra2);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skNodrawCanvasDestroy(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_nodraw_canvas_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_nodraw_canvas_t*)*a1;
      }
  void* res = NULL;
 sk_nodraw_canvas_destroy(ra1);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skNwayCanvasNew(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    
    int ra1;
    status = napi_get_value_int32(env, args[0], &ra1);
    assert(status == napi_ok);
  
  
    
    int ra2;
    status = napi_get_value_int32(env, args[1], &ra2);
    assert(status == napi_ok);
  sk_nway_canvas_t* res = sk_nway_canvas_new(ra1,ra2);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skNwayCanvasDestroy(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_nway_canvas_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_nway_canvas_t*)*a1;
      }
  void* res = NULL;
 sk_nway_canvas_destroy(ra1);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skNwayCanvasAddCanvas(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_nway_canvas_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_nway_canvas_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_canvas_t* ra2 = NULL;
    if (ta2 != napi_null) {
      void **a2;
      void *pa2;
      a2 = &pa2;
      status = napi_get_value_external(env, args[1], a2);
      assert(status == napi_ok);
      
      ra2 = (sk_canvas_t*)*a2;
      }
  void* res = NULL;
 sk_nway_canvas_add_canvas(ra1,ra2);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skNwayCanvasRemoveCanvas(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_nway_canvas_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_nway_canvas_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_canvas_t* ra2 = NULL;
    if (ta2 != napi_null) {
      void **a2;
      void *pa2;
      a2 = &pa2;
      status = napi_get_value_external(env, args[1], a2);
      assert(status == napi_ok);
      
      ra2 = (sk_canvas_t*)*a2;
      }
  void* res = NULL;
 sk_nway_canvas_remove_canvas(ra1,ra2);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skNwayCanvasRemoveAll(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_nway_canvas_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_nway_canvas_t*)*a1;
      }
  void* res = NULL;
 sk_nway_canvas_remove_all(ra1);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skOverdrawCanvasNew(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_canvas_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_canvas_t*)*a1;
      }
  sk_overdraw_canvas_t* res = sk_overdraw_canvas_new(ra1);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skOverdrawCanvasDestroy(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_overdraw_canvas_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_overdraw_canvas_t*)*a1;
      }
  void* res = NULL;
 sk_overdraw_canvas_destroy(ra1);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skCodecMinBufferedBytesNeeded(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  size_t res = sk_codec_min_buffered_bytes_needed();

  
  status = napi_create_int32(env, res, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skCodecNewFromStream(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_stream_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_stream_t*)*a1;
      }
  
  
    
    int* ra2 = NULL;
    status = napi_get_value_int32(env, args[1], ra2);
    assert(status == napi_ok);
  sk_codec_t* res = sk_codec_new_from_stream(ra1,ra2);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skCodecNewFromData(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_data_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_data_t*)*a1;
      }
  sk_codec_t* res = sk_codec_new_from_data(ra1);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skCodecDestroy(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_codec_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_codec_t*)*a1;
      }
  void* res = NULL;
 sk_codec_destroy(ra1);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skCodecGetInfo(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_codec_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_codec_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_imageinfo_t* ra2 = NULL;
    if (ta2 != napi_null) {
    void **a2;
    void *pa2;
    a2 = &pa2;
    status = napi_get_arraybuffer_info(env, args[1], a2, NULL);
    assert(status == napi_ok);
    
    ra2 = (sk_imageinfo_t*)*a2;
    }
  void* res = NULL;
 sk_codec_get_info(ra1,ra2);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skCodecGetOrigin(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_codec_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_codec_t*)*a1;
      }
  sk_encodedorigin_t res = sk_codec_get_origin(ra1);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skCodecGetScaledDimensions(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 3;
  napi_value args[3];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_codec_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_codec_t*)*a1;
      }
  
  
    
    double ra2;
    status = napi_get_value_double(env, args[1], &ra2);
    assert(status == napi_ok);
  
  
    napi_valuetype ta3;
    status = napi_typeof(env, args[2], &ta3);
    assert(status == napi_ok);

    
    sk_isize_t* ra3 = NULL;
    if (ta3 != napi_null) {
    void **a3;
    void *pa3;
    a3 = &pa3;
    status = napi_get_arraybuffer_info(env, args[2], a3, NULL);
    assert(status == napi_ok);
    
    ra3 = (sk_isize_t*)*a3;
    }
  void* res = NULL;
 sk_codec_get_scaled_dimensions(ra1,ra2,ra3);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skCodecGetValidSubset(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_codec_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_codec_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_irect_t* ra2 = NULL;
    if (ta2 != napi_null) {
    void **a2;
    void *pa2;
    a2 = &pa2;
    status = napi_get_arraybuffer_info(env, args[1], a2, NULL);
    assert(status == napi_ok);
    
    ra2 = (sk_irect_t*)*a2;
    }
  _Bool res = sk_codec_get_valid_subset(ra1,ra2);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skCodecGetEncodedFormat(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_codec_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_codec_t*)*a1;
      }
  sk_encoded_image_format_t res = sk_codec_get_encoded_format(ra1);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skCodecGetPixels(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 5;
  napi_value args[5];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_codec_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_codec_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_imageinfo_t* ra2 = NULL;
    if (ta2 != napi_null) {
    void **a2;
    void *pa2;
    a2 = &pa2;
    status = napi_get_arraybuffer_info(env, args[1], a2, NULL);
    assert(status == napi_ok);
    
    ra2 = (sk_imageinfo_t*)*a2;
    }
  
  
    napi_valuetype ta3;
    status = napi_typeof(env, args[2], &ta3);
    assert(status == napi_ok);

    
    void* ra3 = NULL;
    if (ta3 != napi_null) {
    void **a3;
    void *pa3;
    a3 = &pa3;
    status = napi_get_arraybuffer_info(env, args[2], a3, NULL);
    assert(status == napi_ok);
    
    ra3 = (void*)*a3;
    }
  
  
    
    int ra4;
    status = napi_get_value_int32(env, args[3], &ra4);
    assert(status == napi_ok);
  
  
    napi_valuetype ta5;
    status = napi_typeof(env, args[4], &ta5);
    assert(status == napi_ok);

    
    sk_codec_options_t* ra5 = NULL;
    if (ta5 != napi_null) {
    void **a5;
    void *pa5;
    a5 = &pa5;
    status = napi_get_arraybuffer_info(env, args[4], a5, NULL);
    assert(status == napi_ok);
    
    ra5 = (sk_codec_options_t*)*a5;
    }
  sk_codec_result_t res = sk_codec_get_pixels(ra1,ra2,ra3,ra4,ra5);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skCodecStartIncrementalDecode(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 5;
  napi_value args[5];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_codec_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_codec_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_imageinfo_t* ra2 = NULL;
    if (ta2 != napi_null) {
    void **a2;
    void *pa2;
    a2 = &pa2;
    status = napi_get_arraybuffer_info(env, args[1], a2, NULL);
    assert(status == napi_ok);
    
    ra2 = (sk_imageinfo_t*)*a2;
    }
  
  
    napi_valuetype ta3;
    status = napi_typeof(env, args[2], &ta3);
    assert(status == napi_ok);

    
    void* ra3 = NULL;
    if (ta3 != napi_null) {
    void **a3;
    void *pa3;
    a3 = &pa3;
    status = napi_get_arraybuffer_info(env, args[2], a3, NULL);
    assert(status == napi_ok);
    
    ra3 = (void*)*a3;
    }
  
  
    
    int ra4;
    status = napi_get_value_int32(env, args[3], &ra4);
    assert(status == napi_ok);
  
  
    napi_valuetype ta5;
    status = napi_typeof(env, args[4], &ta5);
    assert(status == napi_ok);

    
    sk_codec_options_t* ra5 = NULL;
    if (ta5 != napi_null) {
    void **a5;
    void *pa5;
    a5 = &pa5;
    status = napi_get_arraybuffer_info(env, args[4], a5, NULL);
    assert(status == napi_ok);
    
    ra5 = (sk_codec_options_t*)*a5;
    }
  sk_codec_result_t res = sk_codec_start_incremental_decode(ra1,ra2,ra3,ra4,ra5);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skCodecIncrementalDecode(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_codec_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_codec_t*)*a1;
      }
  
  
    
    int* ra2 = NULL;
    status = napi_get_value_int32(env, args[1], ra2);
    assert(status == napi_ok);
  sk_codec_result_t res = sk_codec_incremental_decode(ra1,ra2);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skCodecStartScanlineDecode(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 3;
  napi_value args[3];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_codec_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_codec_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_imageinfo_t* ra2 = NULL;
    if (ta2 != napi_null) {
    void **a2;
    void *pa2;
    a2 = &pa2;
    status = napi_get_arraybuffer_info(env, args[1], a2, NULL);
    assert(status == napi_ok);
    
    ra2 = (sk_imageinfo_t*)*a2;
    }
  
  
    napi_valuetype ta3;
    status = napi_typeof(env, args[2], &ta3);
    assert(status == napi_ok);

    
    sk_codec_options_t* ra3 = NULL;
    if (ta3 != napi_null) {
    void **a3;
    void *pa3;
    a3 = &pa3;
    status = napi_get_arraybuffer_info(env, args[2], a3, NULL);
    assert(status == napi_ok);
    
    ra3 = (sk_codec_options_t*)*a3;
    }
  sk_codec_result_t res = sk_codec_start_scanline_decode(ra1,ra2,ra3);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skCodecGetScanlines(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 4;
  napi_value args[4];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_codec_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_codec_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    void* ra2 = NULL;
    if (ta2 != napi_null) {
    void **a2;
    void *pa2;
    a2 = &pa2;
    status = napi_get_arraybuffer_info(env, args[1], a2, NULL);
    assert(status == napi_ok);
    
    ra2 = (void*)*a2;
    }
  
  
    
    int ra3;
    status = napi_get_value_int32(env, args[2], &ra3);
    assert(status == napi_ok);
  
  
    
    int ra4;
    status = napi_get_value_int32(env, args[3], &ra4);
    assert(status == napi_ok);
  int res = sk_codec_get_scanlines(ra1,ra2,ra3,ra4);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skCodecSkipScanlines(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_codec_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_codec_t*)*a1;
      }
  
  
    
    int ra2;
    status = napi_get_value_int32(env, args[1], &ra2);
    assert(status == napi_ok);
  _Bool res = sk_codec_skip_scanlines(ra1,ra2);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skCodecGetScanlineOrder(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_codec_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_codec_t*)*a1;
      }
  sk_codec_scanline_order_t res = sk_codec_get_scanline_order(ra1);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skCodecNextScanline(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_codec_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_codec_t*)*a1;
      }
  int res = sk_codec_next_scanline(ra1);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skCodecOutputScanline(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_codec_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_codec_t*)*a1;
      }
  
  
    
    int ra2;
    status = napi_get_value_int32(env, args[1], &ra2);
    assert(status == napi_ok);
  int res = sk_codec_output_scanline(ra1,ra2);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skCodecGetFrameCount(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_codec_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_codec_t*)*a1;
      }
  int res = sk_codec_get_frame_count(ra1);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skCodecGetFrameInfo(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_codec_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_codec_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_codec_frameinfo_t* ra2 = NULL;
    if (ta2 != napi_null) {
    void **a2;
    void *pa2;
    a2 = &pa2;
    status = napi_get_arraybuffer_info(env, args[1], a2, NULL);
    assert(status == napi_ok);
    
    ra2 = (sk_codec_frameinfo_t*)*a2;
    }
  void* res = NULL;
 sk_codec_get_frame_info(ra1,ra2);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skCodecGetFrameInfoForIndex(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 3;
  napi_value args[3];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_codec_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_codec_t*)*a1;
      }
  
  
    
    int ra2;
    status = napi_get_value_int32(env, args[1], &ra2);
    assert(status == napi_ok);
  
  
    napi_valuetype ta3;
    status = napi_typeof(env, args[2], &ta3);
    assert(status == napi_ok);

    
    sk_codec_frameinfo_t* ra3 = NULL;
    if (ta3 != napi_null) {
    void **a3;
    void *pa3;
    a3 = &pa3;
    status = napi_get_arraybuffer_info(env, args[2], a3, NULL);
    assert(status == napi_ok);
    
    ra3 = (sk_codec_frameinfo_t*)*a3;
    }
  _Bool res = sk_codec_get_frame_info_for_index(ra1,ra2,ra3);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skCodecGetRepetitionCount(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_codec_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_codec_t*)*a1;
      }
  int res = sk_codec_get_repetition_count(ra1);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skColorfilterUnref(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_colorfilter_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_colorfilter_t*)*a1;
      }
  void* res = NULL;
 sk_colorfilter_unref(ra1);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skColorfilterNewMode(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    
    unsigned int ra1;
    status = napi_get_value_uint32(env, args[0], &ra1);
    assert(status == napi_ok);
  
  
    
    int ra2;
    status = napi_get_value_int32(env, args[1], &ra2);
    assert(status == napi_ok);
  sk_colorfilter_t* res = sk_colorfilter_new_mode(ra1,ra2);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skColorfilterNewLighting(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    
    unsigned int ra1;
    status = napi_get_value_uint32(env, args[0], &ra1);
    assert(status == napi_ok);
  
  
    
    unsigned int ra2;
    status = napi_get_value_uint32(env, args[1], &ra2);
    assert(status == napi_ok);
  sk_colorfilter_t* res = sk_colorfilter_new_lighting(ra1,ra2);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skColorfilterNewCompose(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_colorfilter_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_colorfilter_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_colorfilter_t* ra2 = NULL;
    if (ta2 != napi_null) {
      void **a2;
      void *pa2;
      a2 = &pa2;
      status = napi_get_value_external(env, args[1], a2);
      assert(status == napi_ok);
      
      ra2 = (sk_colorfilter_t*)*a2;
      }
  sk_colorfilter_t* res = sk_colorfilter_new_compose(ra1,ra2);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skColorfilterNewColorMatrix(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    double* ra1 = NULL;
    if (ta1 != napi_null) {
    void **a1;
    void *pa1;
    a1 = &pa1;
    status = napi_get_arraybuffer_info(env, args[0], a1, NULL);
    assert(status == napi_ok);
    
    ra1 = (double*)*a1;
    }
  sk_colorfilter_t* res = sk_colorfilter_new_color_matrix(ra1);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skColorfilterNewLumaColor(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  sk_colorfilter_t* res = sk_colorfilter_new_luma_color();

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skColorfilterNewHighContrast(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_highcontrastconfig_t* ra1 = NULL;
    if (ta1 != napi_null) {
    void **a1;
    void *pa1;
    a1 = &pa1;
    status = napi_get_arraybuffer_info(env, args[0], a1, NULL);
    assert(status == napi_ok);
    
    ra1 = (sk_highcontrastconfig_t*)*a1;
    }
  sk_colorfilter_t* res = sk_colorfilter_new_high_contrast(ra1);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skColorfilterNewTable(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    uint8_t* ra1 = NULL;
    if (ta1 != napi_null) {
    void **a1;
    void *pa1;
    a1 = &pa1;
    status = napi_get_arraybuffer_info(env, args[0], a1, NULL);
    assert(status == napi_ok);
    
    ra1 = (uint8_t*)*a1;
    }
  sk_colorfilter_t* res = sk_colorfilter_new_table(ra1);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skColorfilterNewTableArgb(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 4;
  napi_value args[4];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    uint8_t* ra1 = NULL;
    if (ta1 != napi_null) {
    void **a1;
    void *pa1;
    a1 = &pa1;
    status = napi_get_arraybuffer_info(env, args[0], a1, NULL);
    assert(status == napi_ok);
    
    ra1 = (uint8_t*)*a1;
    }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    uint8_t* ra2 = NULL;
    if (ta2 != napi_null) {
    void **a2;
    void *pa2;
    a2 = &pa2;
    status = napi_get_arraybuffer_info(env, args[1], a2, NULL);
    assert(status == napi_ok);
    
    ra2 = (uint8_t*)*a2;
    }
  
  
    napi_valuetype ta3;
    status = napi_typeof(env, args[2], &ta3);
    assert(status == napi_ok);

    
    uint8_t* ra3 = NULL;
    if (ta3 != napi_null) {
    void **a3;
    void *pa3;
    a3 = &pa3;
    status = napi_get_arraybuffer_info(env, args[2], a3, NULL);
    assert(status == napi_ok);
    
    ra3 = (uint8_t*)*a3;
    }
  
  
    napi_valuetype ta4;
    status = napi_typeof(env, args[3], &ta4);
    assert(status == napi_ok);

    
    uint8_t* ra4 = NULL;
    if (ta4 != napi_null) {
    void **a4;
    void *pa4;
    a4 = &pa4;
    status = napi_get_arraybuffer_info(env, args[3], a4, NULL);
    assert(status == napi_ok);
    
    ra4 = (uint8_t*)*a4;
    }
  sk_colorfilter_t* res = sk_colorfilter_new_table_argb(ra1,ra2,ra3,ra4);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skColorspaceUnref(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_colorspace_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_colorspace_t*)*a1;
      }
  void* res = NULL;
 sk_colorspace_unref(ra1);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skColorspaceNewSrgb(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  sk_colorspace_t* res = sk_colorspace_new_srgb();

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skColorspaceNewSrgbLinear(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  sk_colorspace_t* res = sk_colorspace_new_srgb_linear();

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skColorspaceNewIcc(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    void* ra1 = NULL;
    if (ta1 != napi_null) {
    void **a1;
    void *pa1;
    a1 = &pa1;
    status = napi_get_arraybuffer_info(env, args[0], a1, NULL);
    assert(status == napi_ok);
    
    ra1 = (void*)*a1;
    }
  
  
    
    int ra2;
    status = napi_get_value_int32(env, args[1], &ra2);
    assert(status == napi_ok);
  sk_colorspace_t* res = sk_colorspace_new_icc(ra1,ra2);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skColorspaceNewRgbWithGamma(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    
    int ra1;
    status = napi_get_value_int32(env, args[0], &ra1);
    assert(status == napi_ok);
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_matrix44_t* ra2 = NULL;
    if (ta2 != napi_null) {
      void **a2;
      void *pa2;
      a2 = &pa2;
      status = napi_get_value_external(env, args[1], a2);
      assert(status == napi_ok);
      
      ra2 = (sk_matrix44_t*)*a2;
      }
  sk_colorspace_t* res = sk_colorspace_new_rgb_with_gamma(ra1,ra2);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skColorspaceNewRgbWithGammaAndGamut(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    
    int ra1;
    status = napi_get_value_int32(env, args[0], &ra1);
    assert(status == napi_ok);
  
  
    
    int ra2;
    status = napi_get_value_int32(env, args[1], &ra2);
    assert(status == napi_ok);
  sk_colorspace_t* res = sk_colorspace_new_rgb_with_gamma_and_gamut(ra1,ra2);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skColorspaceNewRgbWithCoeffs(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_colorspace_transfer_fn_t* ra1 = NULL;
    if (ta1 != napi_null) {
    void **a1;
    void *pa1;
    a1 = &pa1;
    status = napi_get_arraybuffer_info(env, args[0], a1, NULL);
    assert(status == napi_ok);
    
    ra1 = (sk_colorspace_transfer_fn_t*)*a1;
    }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_matrix44_t* ra2 = NULL;
    if (ta2 != napi_null) {
      void **a2;
      void *pa2;
      a2 = &pa2;
      status = napi_get_value_external(env, args[1], a2);
      assert(status == napi_ok);
      
      ra2 = (sk_matrix44_t*)*a2;
      }
  sk_colorspace_t* res = sk_colorspace_new_rgb_with_coeffs(ra1,ra2);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skColorspaceNewRgbWithCoeffsAndGamut(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_colorspace_transfer_fn_t* ra1 = NULL;
    if (ta1 != napi_null) {
    void **a1;
    void *pa1;
    a1 = &pa1;
    status = napi_get_arraybuffer_info(env, args[0], a1, NULL);
    assert(status == napi_ok);
    
    ra1 = (sk_colorspace_transfer_fn_t*)*a1;
    }
  
  
    
    int ra2;
    status = napi_get_value_int32(env, args[1], &ra2);
    assert(status == napi_ok);
  sk_colorspace_t* res = sk_colorspace_new_rgb_with_coeffs_and_gamut(ra1,ra2);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skColorspaceNewRgbWithGammaNamed(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    
    int ra1;
    status = napi_get_value_int32(env, args[0], &ra1);
    assert(status == napi_ok);
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_matrix44_t* ra2 = NULL;
    if (ta2 != napi_null) {
      void **a2;
      void *pa2;
      a2 = &pa2;
      status = napi_get_value_external(env, args[1], a2);
      assert(status == napi_ok);
      
      ra2 = (sk_matrix44_t*)*a2;
      }
  sk_colorspace_t* res = sk_colorspace_new_rgb_with_gamma_named(ra1,ra2);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skColorspaceNewRgbWithGammaNamedAndGamut(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    
    int ra1;
    status = napi_get_value_int32(env, args[0], &ra1);
    assert(status == napi_ok);
  
  
    
    int ra2;
    status = napi_get_value_int32(env, args[1], &ra2);
    assert(status == napi_ok);
  sk_colorspace_t* res = sk_colorspace_new_rgb_with_gamma_named_and_gamut(ra1,ra2);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skColorspaceGammaGetType(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_colorspace_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_colorspace_t*)*a1;
      }
  sk_colorspace_type_t res = sk_colorspace_gamma_get_type(ra1);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skColorspaceGammaGetGammaNamed(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_colorspace_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_colorspace_t*)*a1;
      }
  sk_gamma_named_t res = sk_colorspace_gamma_get_gamma_named(ra1);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skColorspaceGammaCloseToSrgb(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_colorspace_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_colorspace_t*)*a1;
      }
  _Bool res = sk_colorspace_gamma_close_to_srgb(ra1);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skColorspaceGammaIsLinear(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_colorspace_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_colorspace_t*)*a1;
      }
  _Bool res = sk_colorspace_gamma_is_linear(ra1);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skColorspaceIsSrgb(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_colorspace_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_colorspace_t*)*a1;
      }
  _Bool res = sk_colorspace_is_srgb(ra1);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skColorspaceEquals(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_colorspace_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_colorspace_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_colorspace_t* ra2 = NULL;
    if (ta2 != napi_null) {
      void **a2;
      void *pa2;
      a2 = &pa2;
      status = napi_get_value_external(env, args[1], a2);
      assert(status == napi_ok);
      
      ra2 = (sk_colorspace_t*)*a2;
      }
  _Bool res = sk_colorspace_equals(ra1,ra2);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skColorspaceToXyzd50(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_colorspace_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_colorspace_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_matrix44_t* ra2 = NULL;
    if (ta2 != napi_null) {
      void **a2;
      void *pa2;
      a2 = &pa2;
      status = napi_get_value_external(env, args[1], a2);
      assert(status == napi_ok);
      
      ra2 = (sk_matrix44_t*)*a2;
      }
  _Bool res = sk_colorspace_to_xyzd50(ra1,ra2);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skColorspaceAsToXyzd50(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_colorspace_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_colorspace_t*)*a1;
      }
  sk_matrix44_t* res = sk_colorspace_as_to_xyzd50(ra1);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skColorspaceAsFromXyzd50(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_colorspace_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_colorspace_t*)*a1;
      }
  sk_matrix44_t* res = sk_colorspace_as_from_xyzd50(ra1);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skColorspaceIsNumericalTransferFn(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_colorspace_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_colorspace_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_colorspace_transfer_fn_t* ra2 = NULL;
    if (ta2 != napi_null) {
    void **a2;
    void *pa2;
    a2 = &pa2;
    status = napi_get_arraybuffer_info(env, args[1], a2, NULL);
    assert(status == napi_ok);
    
    ra2 = (sk_colorspace_transfer_fn_t*)*a2;
    }
  _Bool res = sk_colorspace_is_numerical_transfer_fn(ra1,ra2);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skColorspaceprimariesToXyzd50(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_colorspaceprimaries_t* ra1 = NULL;
    if (ta1 != napi_null) {
    void **a1;
    void *pa1;
    a1 = &pa1;
    status = napi_get_arraybuffer_info(env, args[0], a1, NULL);
    assert(status == napi_ok);
    
    ra1 = (sk_colorspaceprimaries_t*)*a1;
    }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_matrix44_t* ra2 = NULL;
    if (ta2 != napi_null) {
      void **a2;
      void *pa2;
      a2 = &pa2;
      status = napi_get_value_external(env, args[1], a2);
      assert(status == napi_ok);
      
      ra2 = (sk_matrix44_t*)*a2;
      }
  _Bool res = sk_colorspaceprimaries_to_xyzd50(ra1,ra2);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skColorspaceTransferFnInvert(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_colorspace_transfer_fn_t* ra1 = NULL;
    if (ta1 != napi_null) {
    void **a1;
    void *pa1;
    a1 = &pa1;
    status = napi_get_arraybuffer_info(env, args[0], a1, NULL);
    assert(status == napi_ok);
    
    ra1 = (sk_colorspace_transfer_fn_t*)*a1;
    }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_colorspace_transfer_fn_t* ra2 = NULL;
    if (ta2 != napi_null) {
    void **a2;
    void *pa2;
    a2 = &pa2;
    status = napi_get_arraybuffer_info(env, args[1], a2, NULL);
    assert(status == napi_ok);
    
    ra2 = (sk_colorspace_transfer_fn_t*)*a2;
    }
  void* res = NULL;
 sk_colorspace_transfer_fn_invert(ra1,ra2);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skColorspaceTransferFnTransform(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_colorspace_transfer_fn_t* ra1 = NULL;
    if (ta1 != napi_null) {
    void **a1;
    void *pa1;
    a1 = &pa1;
    status = napi_get_arraybuffer_info(env, args[0], a1, NULL);
    assert(status == napi_ok);
    
    ra1 = (sk_colorspace_transfer_fn_t*)*a1;
    }
  
  
    
    double ra2;
    status = napi_get_value_double(env, args[1], &ra2);
    assert(status == napi_ok);
  float res = sk_colorspace_transfer_fn_transform(ra1,ra2);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skColortableUnref(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_colortable_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_colortable_t*)*a1;
      }
  void* res = NULL;
 sk_colortable_unref(ra1);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skColortableNew(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_pmcolor_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_pmcolor_t*)*a1;
      }
  
  
    
    int ra2;
    status = napi_get_value_int32(env, args[1], &ra2);
    assert(status == napi_ok);
  sk_colortable_t* res = sk_colortable_new(ra1,ra2);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skColortableCount(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_colortable_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_colortable_t*)*a1;
      }
  int res = sk_colortable_count(ra1);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skColortableReadColors(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_colortable_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_colortable_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_pmcolor_t* ra2 = NULL;
    if (ta2 != napi_null) {
      void **a2;
      void *pa2;
      a2 = &pa2;
      status = napi_get_value_external(env, args[1], a2);
      assert(status == napi_ok);
      
      ra2 = (sk_pmcolor_t*)*a2;
      }
  void* res = NULL;
 sk_colortable_read_colors(ra1,ra2);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skDataNewEmpty(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  sk_data_t* res = sk_data_new_empty();

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skDataNewWithCopy(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    void* ra1 = NULL;
    if (ta1 != napi_null) {
    void **a1;
    void *pa1;
    a1 = &pa1;
    status = napi_get_arraybuffer_info(env, args[0], a1, NULL);
    assert(status == napi_ok);
    
    ra1 = (void*)*a1;
    }
  
  
    
    int ra2;
    status = napi_get_value_int32(env, args[1], &ra2);
    assert(status == napi_ok);
  sk_data_t* res = sk_data_new_with_copy(ra1,ra2);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skDataNewSubset(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 3;
  napi_value args[3];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_data_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_data_t*)*a1;
      }
  
  
    
    int ra2;
    status = napi_get_value_int32(env, args[1], &ra2);
    assert(status == napi_ok);
  
  
    
    int ra3;
    status = napi_get_value_int32(env, args[2], &ra3);
    assert(status == napi_ok);
  sk_data_t* res = sk_data_new_subset(ra1,ra2,ra3);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skDataRef(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_data_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_data_t*)*a1;
      }
  void* res = NULL;
 sk_data_ref(ra1);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skDataUnref(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_data_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_data_t*)*a1;
      }
  void* res = NULL;
 sk_data_unref(ra1);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skDataGetSize(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_data_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_data_t*)*a1;
      }
  size_t res = sk_data_get_size(ra1);

  
  status = napi_create_int32(env, res, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skDataGetData(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_data_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_data_t*)*a1;
      }
  void* res = sk_data_get_data(ra1);

  
  status = napi_create_bigint_int64(env, res, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skDataNewFromFile(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    size_t la1;
    status = napi_get_value_string_utf8(env, args[0], NULL, 0, &la1);
    assert(status == napi_ok);
    char* ra1 = (char*)malloc(la1 + 1);
    status = napi_get_value_string_utf8(env, args[0], ra1, la1 + 1, &la1);
    assert(status == napi_ok);
  sk_data_t* res = sk_data_new_from_file(ra1);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skDataNewFromStream(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_stream_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_stream_t*)*a1;
      }
  
  
    
    int ra2;
    status = napi_get_value_int32(env, args[1], &ra2);
    assert(status == napi_ok);
  sk_data_t* res = sk_data_new_from_stream(ra1,ra2);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skDataGetBytes(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_data_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_data_t*)*a1;
      }
  uint8_t* res = sk_data_get_bytes(ra1);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skDataNewWithProc(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 4;
  napi_value args[4];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    void* ra1 = NULL;
    if (ta1 != napi_null) {
    void **a1;
    void *pa1;
    a1 = &pa1;
    status = napi_get_arraybuffer_info(env, args[0], a1, NULL);
    assert(status == napi_ok);
    
    ra1 = (void*)*a1;
    }
  
  
    
    int ra2;
    status = napi_get_value_int32(env, args[1], &ra2);
    assert(status == napi_ok);
  
  
    napi_valuetype ta3;
    status = napi_typeof(env, args[2], &ta3);
    assert(status == napi_ok);

    
    sk_data_release_proc ra3;
    if (ta3 != napi_null) {
      void **a3;
      void *pa3;
      a3 = &pa3;
      status = napi_get_value_external(env, args[2], a3);
      assert(status == napi_ok);
      
      ra3 = *((sk_data_release_proc*)*a3);
      }
  
  
    napi_valuetype ta4;
    status = napi_typeof(env, args[3], &ta4);
    assert(status == napi_ok);

    
    void* ra4 = NULL;
    if (ta4 != napi_null) {
    void **a4;
    void *pa4;
    a4 = &pa4;
    status = napi_get_arraybuffer_info(env, args[3], a4, NULL);
    assert(status == napi_ok);
    
    ra4 = (void*)*a4;
    }
  sk_data_t* res = sk_data_new_with_proc(ra1,ra2,ra3,ra4);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skDataNewUninitialized(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    
    int ra1;
    status = napi_get_value_int32(env, args[0], &ra1);
    assert(status == napi_ok);
  sk_data_t* res = sk_data_new_uninitialized(ra1);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skDocumentUnref(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_document_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_document_t*)*a1;
      }
  void* res = NULL;
 sk_document_unref(ra1);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skDocumentCreatePdfFromStream(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_wstream_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_wstream_t*)*a1;
      }
  sk_document_t* res = sk_document_create_pdf_from_stream(ra1);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skDocumentCreatePdfFromStreamWithMetadata(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_wstream_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_wstream_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_document_pdf_metadata_t* ra2 = NULL;
    if (ta2 != napi_null) {
    void **a2;
    void *pa2;
    a2 = &pa2;
    status = napi_get_arraybuffer_info(env, args[1], a2, NULL);
    assert(status == napi_ok);
    
    ra2 = (sk_document_pdf_metadata_t*)*a2;
    }
  sk_document_t* res = sk_document_create_pdf_from_stream_with_metadata(ra1,ra2);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skDocumentCreateXpsFromStream(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_wstream_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_wstream_t*)*a1;
      }
  
  
    
    double ra2;
    status = napi_get_value_double(env, args[1], &ra2);
    assert(status == napi_ok);
  sk_document_t* res = sk_document_create_xps_from_stream(ra1,ra2);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skDocumentBeginPage(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 4;
  napi_value args[4];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_document_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_document_t*)*a1;
      }
  
  
    
    double ra2;
    status = napi_get_value_double(env, args[1], &ra2);
    assert(status == napi_ok);
  
  
    
    double ra3;
    status = napi_get_value_double(env, args[2], &ra3);
    assert(status == napi_ok);
  
  
    napi_valuetype ta4;
    status = napi_typeof(env, args[3], &ta4);
    assert(status == napi_ok);

    
    sk_rect_t* ra4 = NULL;
    if (ta4 != napi_null) {
    void **a4;
    void *pa4;
    a4 = &pa4;
    status = napi_get_arraybuffer_info(env, args[3], a4, NULL);
    assert(status == napi_ok);
    
    ra4 = (sk_rect_t*)*a4;
    }
  sk_canvas_t* res = sk_document_begin_page(ra1,ra2,ra3,ra4);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skDocumentEndPage(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_document_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_document_t*)*a1;
      }
  void* res = NULL;
 sk_document_end_page(ra1);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skDocumentClose(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_document_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_document_t*)*a1;
      }
  void* res = NULL;
 sk_document_close(ra1);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skDocumentAbort(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_document_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_document_t*)*a1;
      }
  void* res = NULL;
 sk_document_abort(ra1);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skDrawableUnref(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_drawable_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_drawable_t*)*a1;
      }
  void* res = NULL;
 sk_drawable_unref(ra1);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skDrawableGetGenerationId(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_drawable_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_drawable_t*)*a1;
      }
  uint32_t res = sk_drawable_get_generation_id(ra1);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skDrawableGetBounds(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_drawable_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_drawable_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_rect_t* ra2 = NULL;
    if (ta2 != napi_null) {
    void **a2;
    void *pa2;
    a2 = &pa2;
    status = napi_get_arraybuffer_info(env, args[1], a2, NULL);
    assert(status == napi_ok);
    
    ra2 = (sk_rect_t*)*a2;
    }
  void* res = NULL;
 sk_drawable_get_bounds(ra1,ra2);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skDrawableDraw(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 3;
  napi_value args[3];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_drawable_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_drawable_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_canvas_t* ra2 = NULL;
    if (ta2 != napi_null) {
      void **a2;
      void *pa2;
      a2 = &pa2;
      status = napi_get_value_external(env, args[1], a2);
      assert(status == napi_ok);
      
      ra2 = (sk_canvas_t*)*a2;
      }
  
  
    napi_valuetype ta3;
    status = napi_typeof(env, args[2], &ta3);
    assert(status == napi_ok);

    
    sk_matrix_t* ra3 = NULL;
    if (ta3 != napi_null) {
    void **a3;
    void *pa3;
    a3 = &pa3;
    status = napi_get_arraybuffer_info(env, args[2], a3, NULL);
    assert(status == napi_ok);
    
    ra3 = (sk_matrix_t*)*a3;
    }
  void* res = NULL;
 sk_drawable_draw(ra1,ra2,ra3);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skDrawableNewPictureSnapshot(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_drawable_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_drawable_t*)*a1;
      }
  sk_picture_t* res = sk_drawable_new_picture_snapshot(ra1);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skDrawableNotifyDrawingChanged(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_drawable_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_drawable_t*)*a1;
      }
  void* res = NULL;
 sk_drawable_notify_drawing_changed(ra1);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skRefcntUnique(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_refcnt_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_refcnt_t*)*a1;
      }
  _Bool res = sk_refcnt_unique(ra1);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skRefcntGetRefCount(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_refcnt_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_refcnt_t*)*a1;
      }
  int res = sk_refcnt_get_ref_count(ra1);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skRefcntSafeRef(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_refcnt_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_refcnt_t*)*a1;
      }
  void* res = NULL;
 sk_refcnt_safe_ref(ra1);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skRefcntSafeUnref(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_refcnt_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_refcnt_t*)*a1;
      }
  void* res = NULL;
 sk_refcnt_safe_unref(ra1);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skNvrefcntUnique(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_nvrefcnt_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_nvrefcnt_t*)*a1;
      }
  _Bool res = sk_nvrefcnt_unique(ra1);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skNvrefcntGetRefCount(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_nvrefcnt_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_nvrefcnt_t*)*a1;
      }
  int res = sk_nvrefcnt_get_ref_count(ra1);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skNvrefcntSafeRef(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_nvrefcnt_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_nvrefcnt_t*)*a1;
      }
  void* res = NULL;
 sk_nvrefcnt_safe_ref(ra1);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skNvrefcntSafeUnref(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_nvrefcnt_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_nvrefcnt_t*)*a1;
      }
  void* res = NULL;
 sk_nvrefcnt_safe_unref(ra1);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skColortypeGetDefault_8888(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  sk_colortype_t res = sk_colortype_get_default_8888();

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skImageNewRasterCopy(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 3;
  napi_value args[3];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_imageinfo_t* ra1 = NULL;
    if (ta1 != napi_null) {
    void **a1;
    void *pa1;
    a1 = &pa1;
    status = napi_get_arraybuffer_info(env, args[0], a1, NULL);
    assert(status == napi_ok);
    
    ra1 = (sk_imageinfo_t*)*a1;
    }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    void* ra2 = NULL;
    if (ta2 != napi_null) {
    void **a2;
    void *pa2;
    a2 = &pa2;
    status = napi_get_arraybuffer_info(env, args[1], a2, NULL);
    assert(status == napi_ok);
    
    ra2 = (void*)*a2;
    }
  
  
    
    int ra3;
    status = napi_get_value_int32(env, args[2], &ra3);
    assert(status == napi_ok);
  sk_image_t* res = sk_image_new_raster_copy(ra1,ra2,ra3);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skImageNewRasterCopyWithPixmap(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_pixmap_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_pixmap_t*)*a1;
      }
  sk_image_t* res = sk_image_new_raster_copy_with_pixmap(ra1);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skImageNewRasterData(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 3;
  napi_value args[3];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_imageinfo_t* ra1 = NULL;
    if (ta1 != napi_null) {
    void **a1;
    void *pa1;
    a1 = &pa1;
    status = napi_get_arraybuffer_info(env, args[0], a1, NULL);
    assert(status == napi_ok);
    
    ra1 = (sk_imageinfo_t*)*a1;
    }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_data_t* ra2 = NULL;
    if (ta2 != napi_null) {
      void **a2;
      void *pa2;
      a2 = &pa2;
      status = napi_get_value_external(env, args[1], a2);
      assert(status == napi_ok);
      
      ra2 = (sk_data_t*)*a2;
      }
  
  
    
    int ra3;
    status = napi_get_value_int32(env, args[2], &ra3);
    assert(status == napi_ok);
  sk_image_t* res = sk_image_new_raster_data(ra1,ra2,ra3);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skImageNewRaster(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 3;
  napi_value args[3];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_pixmap_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_pixmap_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_image_raster_release_proc ra2;
    if (ta2 != napi_null) {
      void **a2;
      void *pa2;
      a2 = &pa2;
      status = napi_get_value_external(env, args[1], a2);
      assert(status == napi_ok);
      
      ra2 = *((sk_image_raster_release_proc*)*a2);
      }
  
  
    napi_valuetype ta3;
    status = napi_typeof(env, args[2], &ta3);
    assert(status == napi_ok);

    
    void* ra3 = NULL;
    if (ta3 != napi_null) {
    void **a3;
    void *pa3;
    a3 = &pa3;
    status = napi_get_arraybuffer_info(env, args[2], a3, NULL);
    assert(status == napi_ok);
    
    ra3 = (void*)*a3;
    }
  sk_image_t* res = sk_image_new_raster(ra1,ra2,ra3);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skImageNewFromBitmap(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_bitmap_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_bitmap_t*)*a1;
      }
  sk_image_t* res = sk_image_new_from_bitmap(ra1);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skImageNewFromEncoded(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_data_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_data_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_irect_t* ra2 = NULL;
    if (ta2 != napi_null) {
    void **a2;
    void *pa2;
    a2 = &pa2;
    status = napi_get_arraybuffer_info(env, args[1], a2, NULL);
    assert(status == napi_ok);
    
    ra2 = (sk_irect_t*)*a2;
    }
  sk_image_t* res = sk_image_new_from_encoded(ra1,ra2);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skImageNewFromTexture(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 8;
  napi_value args[8];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    gr_context_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (gr_context_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    gr_backendtexture_t* ra2 = NULL;
    if (ta2 != napi_null) {
      void **a2;
      void *pa2;
      a2 = &pa2;
      status = napi_get_value_external(env, args[1], a2);
      assert(status == napi_ok);
      
      ra2 = (gr_backendtexture_t*)*a2;
      }
  
  
    
    int ra3;
    status = napi_get_value_int32(env, args[2], &ra3);
    assert(status == napi_ok);
  
  
    
    int ra4;
    status = napi_get_value_int32(env, args[3], &ra4);
    assert(status == napi_ok);
  
  
    
    int ra5;
    status = napi_get_value_int32(env, args[4], &ra5);
    assert(status == napi_ok);
  
  
    napi_valuetype ta6;
    status = napi_typeof(env, args[5], &ta6);
    assert(status == napi_ok);

    
    sk_colorspace_t* ra6 = NULL;
    if (ta6 != napi_null) {
      void **a6;
      void *pa6;
      a6 = &pa6;
      status = napi_get_value_external(env, args[5], a6);
      assert(status == napi_ok);
      
      ra6 = (sk_colorspace_t*)*a6;
      }
  
  
    napi_valuetype ta7;
    status = napi_typeof(env, args[6], &ta7);
    assert(status == napi_ok);

    
    sk_image_texture_release_proc ra7;
    if (ta7 != napi_null) {
      void **a7;
      void *pa7;
      a7 = &pa7;
      status = napi_get_value_external(env, args[6], a7);
      assert(status == napi_ok);
      
      ra7 = *((sk_image_texture_release_proc*)*a7);
      }
  
  
    napi_valuetype ta8;
    status = napi_typeof(env, args[7], &ta8);
    assert(status == napi_ok);

    
    void* ra8 = NULL;
    if (ta8 != napi_null) {
    void **a8;
    void *pa8;
    a8 = &pa8;
    status = napi_get_arraybuffer_info(env, args[7], a8, NULL);
    assert(status == napi_ok);
    
    ra8 = (void*)*a8;
    }
  sk_image_t* res = sk_image_new_from_texture(ra1,ra2,ra3,ra4,ra5,ra6,ra7,ra8);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skImageNewFromAdoptedTexture(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 6;
  napi_value args[6];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    gr_context_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (gr_context_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    gr_backendtexture_t* ra2 = NULL;
    if (ta2 != napi_null) {
      void **a2;
      void *pa2;
      a2 = &pa2;
      status = napi_get_value_external(env, args[1], a2);
      assert(status == napi_ok);
      
      ra2 = (gr_backendtexture_t*)*a2;
      }
  
  
    
    int ra3;
    status = napi_get_value_int32(env, args[2], &ra3);
    assert(status == napi_ok);
  
  
    
    int ra4;
    status = napi_get_value_int32(env, args[3], &ra4);
    assert(status == napi_ok);
  
  
    
    int ra5;
    status = napi_get_value_int32(env, args[4], &ra5);
    assert(status == napi_ok);
  
  
    napi_valuetype ta6;
    status = napi_typeof(env, args[5], &ta6);
    assert(status == napi_ok);

    
    sk_colorspace_t* ra6 = NULL;
    if (ta6 != napi_null) {
      void **a6;
      void *pa6;
      a6 = &pa6;
      status = napi_get_value_external(env, args[5], a6);
      assert(status == napi_ok);
      
      ra6 = (sk_colorspace_t*)*a6;
      }
  sk_image_t* res = sk_image_new_from_adopted_texture(ra1,ra2,ra3,ra4,ra5,ra6);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skImageNewFromPicture(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 4;
  napi_value args[4];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_picture_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_picture_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_isize_t* ra2 = NULL;
    if (ta2 != napi_null) {
    void **a2;
    void *pa2;
    a2 = &pa2;
    status = napi_get_arraybuffer_info(env, args[1], a2, NULL);
    assert(status == napi_ok);
    
    ra2 = (sk_isize_t*)*a2;
    }
  
  
    napi_valuetype ta3;
    status = napi_typeof(env, args[2], &ta3);
    assert(status == napi_ok);

    
    sk_matrix_t* ra3 = NULL;
    if (ta3 != napi_null) {
    void **a3;
    void *pa3;
    a3 = &pa3;
    status = napi_get_arraybuffer_info(env, args[2], a3, NULL);
    assert(status == napi_ok);
    
    ra3 = (sk_matrix_t*)*a3;
    }
  
  
    napi_valuetype ta4;
    status = napi_typeof(env, args[3], &ta4);
    assert(status == napi_ok);

    
    sk_paint_t* ra4 = NULL;
    if (ta4 != napi_null) {
      void **a4;
      void *pa4;
      a4 = &pa4;
      status = napi_get_value_external(env, args[3], a4);
      assert(status == napi_ok);
      
      ra4 = (sk_paint_t*)*a4;
      }
  sk_image_t* res = sk_image_new_from_picture(ra1,ra2,ra3,ra4);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skImageMakeSubset(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_image_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_image_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_irect_t* ra2 = NULL;
    if (ta2 != napi_null) {
    void **a2;
    void *pa2;
    a2 = &pa2;
    status = napi_get_arraybuffer_info(env, args[1], a2, NULL);
    assert(status == napi_ok);
    
    ra2 = (sk_irect_t*)*a2;
    }
  sk_image_t* res = sk_image_make_subset(ra1,ra2);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skImageMakeNonTextureImage(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_image_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_image_t*)*a1;
      }
  sk_image_t* res = sk_image_make_non_texture_image(ra1);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skImageMakeWithFilter(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 6;
  napi_value args[6];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_image_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_image_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_imagefilter_t* ra2 = NULL;
    if (ta2 != napi_null) {
      void **a2;
      void *pa2;
      a2 = &pa2;
      status = napi_get_value_external(env, args[1], a2);
      assert(status == napi_ok);
      
      ra2 = (sk_imagefilter_t*)*a2;
      }
  
  
    napi_valuetype ta3;
    status = napi_typeof(env, args[2], &ta3);
    assert(status == napi_ok);

    
    sk_irect_t* ra3 = NULL;
    if (ta3 != napi_null) {
    void **a3;
    void *pa3;
    a3 = &pa3;
    status = napi_get_arraybuffer_info(env, args[2], a3, NULL);
    assert(status == napi_ok);
    
    ra3 = (sk_irect_t*)*a3;
    }
  
  
    napi_valuetype ta4;
    status = napi_typeof(env, args[3], &ta4);
    assert(status == napi_ok);

    
    sk_irect_t* ra4 = NULL;
    if (ta4 != napi_null) {
    void **a4;
    void *pa4;
    a4 = &pa4;
    status = napi_get_arraybuffer_info(env, args[3], a4, NULL);
    assert(status == napi_ok);
    
    ra4 = (sk_irect_t*)*a4;
    }
  
  
    napi_valuetype ta5;
    status = napi_typeof(env, args[4], &ta5);
    assert(status == napi_ok);

    
    sk_irect_t* ra5 = NULL;
    if (ta5 != napi_null) {
    void **a5;
    void *pa5;
    a5 = &pa5;
    status = napi_get_arraybuffer_info(env, args[4], a5, NULL);
    assert(status == napi_ok);
    
    ra5 = (sk_irect_t*)*a5;
    }
  
  
    napi_valuetype ta6;
    status = napi_typeof(env, args[5], &ta6);
    assert(status == napi_ok);

    
    sk_ipoint_t* ra6 = NULL;
    if (ta6 != napi_null) {
    void **a6;
    void *pa6;
    a6 = &pa6;
    status = napi_get_arraybuffer_info(env, args[5], a6, NULL);
    assert(status == napi_ok);
    
    ra6 = (sk_ipoint_t*)*a6;
    }
  sk_image_t* res = sk_image_make_with_filter(ra1,ra2,ra3,ra4,ra5,ra6);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skImageRef(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_image_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_image_t*)*a1;
      }
  void* res = NULL;
 sk_image_ref(ra1);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skImageUnref(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_image_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_image_t*)*a1;
      }
  void* res = NULL;
 sk_image_unref(ra1);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skImageGetWidth(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_image_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_image_t*)*a1;
      }
  int res = sk_image_get_width(ra1);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skImageGetHeight(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_image_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_image_t*)*a1;
      }
  int res = sk_image_get_height(ra1);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skImageGetUniqueId(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_image_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_image_t*)*a1;
      }
  uint32_t res = sk_image_get_unique_id(ra1);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skImageGetAlphaType(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_image_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_image_t*)*a1;
      }
  sk_alphatype_t res = sk_image_get_alpha_type(ra1);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skImageGetColorType(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_image_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_image_t*)*a1;
      }
  sk_colortype_t res = sk_image_get_color_type(ra1);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skImageGetColorspace(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_image_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_image_t*)*a1;
      }
  sk_colorspace_t* res = sk_image_get_colorspace(ra1);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skImageIsAlphaOnly(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_image_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_image_t*)*a1;
      }
  _Bool res = sk_image_is_alpha_only(ra1);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skImageMakeShader(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 4;
  napi_value args[4];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_image_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_image_t*)*a1;
      }
  
  
    
    int ra2;
    status = napi_get_value_int32(env, args[1], &ra2);
    assert(status == napi_ok);
  
  
    
    int ra3;
    status = napi_get_value_int32(env, args[2], &ra3);
    assert(status == napi_ok);
  
  
    napi_valuetype ta4;
    status = napi_typeof(env, args[3], &ta4);
    assert(status == napi_ok);

    
    sk_matrix_t* ra4 = NULL;
    if (ta4 != napi_null) {
    void **a4;
    void *pa4;
    a4 = &pa4;
    status = napi_get_arraybuffer_info(env, args[3], a4, NULL);
    assert(status == napi_ok);
    
    ra4 = (sk_matrix_t*)*a4;
    }
  sk_shader_t* res = sk_image_make_shader(ra1,ra2,ra3,ra4);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skImagePeekPixels(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_image_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_image_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_pixmap_t* ra2 = NULL;
    if (ta2 != napi_null) {
      void **a2;
      void *pa2;
      a2 = &pa2;
      status = napi_get_value_external(env, args[1], a2);
      assert(status == napi_ok);
      
      ra2 = (sk_pixmap_t*)*a2;
      }
  _Bool res = sk_image_peek_pixels(ra1,ra2);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skImageIsTextureBacked(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_image_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_image_t*)*a1;
      }
  _Bool res = sk_image_is_texture_backed(ra1);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skImageIsLazyGenerated(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_image_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_image_t*)*a1;
      }
  _Bool res = sk_image_is_lazy_generated(ra1);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skImageReadPixels(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 7;
  napi_value args[7];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_image_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_image_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_imageinfo_t* ra2 = NULL;
    if (ta2 != napi_null) {
    void **a2;
    void *pa2;
    a2 = &pa2;
    status = napi_get_arraybuffer_info(env, args[1], a2, NULL);
    assert(status == napi_ok);
    
    ra2 = (sk_imageinfo_t*)*a2;
    }
  
  
    napi_valuetype ta3;
    status = napi_typeof(env, args[2], &ta3);
    assert(status == napi_ok);

    
    void* ra3 = NULL;
    if (ta3 != napi_null) {
    void **a3;
    void *pa3;
    a3 = &pa3;
    status = napi_get_arraybuffer_info(env, args[2], a3, NULL);
    assert(status == napi_ok);
    
    ra3 = (void*)*a3;
    }
  
  
    
    int ra4;
    status = napi_get_value_int32(env, args[3], &ra4);
    assert(status == napi_ok);
  
  
    
    int ra5;
    status = napi_get_value_int32(env, args[4], &ra5);
    assert(status == napi_ok);
  
  
    
    int ra6;
    status = napi_get_value_int32(env, args[5], &ra6);
    assert(status == napi_ok);
  
  
    
    int ra7;
    status = napi_get_value_int32(env, args[6], &ra7);
    assert(status == napi_ok);
  _Bool res = sk_image_read_pixels(ra1,ra2,ra3,ra4,ra5,ra6,ra7);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skImageReadPixelsIntoPixmap(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 5;
  napi_value args[5];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_image_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_image_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_pixmap_t* ra2 = NULL;
    if (ta2 != napi_null) {
      void **a2;
      void *pa2;
      a2 = &pa2;
      status = napi_get_value_external(env, args[1], a2);
      assert(status == napi_ok);
      
      ra2 = (sk_pixmap_t*)*a2;
      }
  
  
    
    int ra3;
    status = napi_get_value_int32(env, args[2], &ra3);
    assert(status == napi_ok);
  
  
    
    int ra4;
    status = napi_get_value_int32(env, args[3], &ra4);
    assert(status == napi_ok);
  
  
    
    int ra5;
    status = napi_get_value_int32(env, args[4], &ra5);
    assert(status == napi_ok);
  _Bool res = sk_image_read_pixels_into_pixmap(ra1,ra2,ra3,ra4,ra5);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skImageScalePixels(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 4;
  napi_value args[4];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_image_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_image_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_pixmap_t* ra2 = NULL;
    if (ta2 != napi_null) {
      void **a2;
      void *pa2;
      a2 = &pa2;
      status = napi_get_value_external(env, args[1], a2);
      assert(status == napi_ok);
      
      ra2 = (sk_pixmap_t*)*a2;
      }
  
  
    
    int ra3;
    status = napi_get_value_int32(env, args[2], &ra3);
    assert(status == napi_ok);
  
  
    
    int ra4;
    status = napi_get_value_int32(env, args[3], &ra4);
    assert(status == napi_ok);
  _Bool res = sk_image_scale_pixels(ra1,ra2,ra3,ra4);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skImageRefEncoded(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_image_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_image_t*)*a1;
      }
  sk_data_t* res = sk_image_ref_encoded(ra1);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skImageEncode(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_image_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_image_t*)*a1;
      }
  sk_data_t* res = sk_image_encode(ra1);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skImageEncodeSpecific(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 3;
  napi_value args[3];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_image_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_image_t*)*a1;
      }
  
  
    
    int ra2;
    status = napi_get_value_int32(env, args[1], &ra2);
    assert(status == napi_ok);
  
  
    
    int ra3;
    status = napi_get_value_int32(env, args[2], &ra3);
    assert(status == napi_ok);
  sk_data_t* res = sk_image_encode_specific(ra1,ra2,ra3);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skImagefilterCroprectNew(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  sk_imagefilter_croprect_t* res = sk_imagefilter_croprect_new();

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skImagefilterCroprectNewWithRect(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_rect_t* ra1 = NULL;
    if (ta1 != napi_null) {
    void **a1;
    void *pa1;
    a1 = &pa1;
    status = napi_get_arraybuffer_info(env, args[0], a1, NULL);
    assert(status == napi_ok);
    
    ra1 = (sk_rect_t*)*a1;
    }
  
  
    
    unsigned int ra2;
    status = napi_get_value_uint32(env, args[1], &ra2);
    assert(status == napi_ok);
  sk_imagefilter_croprect_t* res = sk_imagefilter_croprect_new_with_rect(ra1,ra2);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skImagefilterCroprectDestructor(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_imagefilter_croprect_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_imagefilter_croprect_t*)*a1;
      }
  void* res = NULL;
 sk_imagefilter_croprect_destructor(ra1);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skImagefilterCroprectGetRect(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_imagefilter_croprect_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_imagefilter_croprect_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_rect_t* ra2 = NULL;
    if (ta2 != napi_null) {
    void **a2;
    void *pa2;
    a2 = &pa2;
    status = napi_get_arraybuffer_info(env, args[1], a2, NULL);
    assert(status == napi_ok);
    
    ra2 = (sk_rect_t*)*a2;
    }
  void* res = NULL;
 sk_imagefilter_croprect_get_rect(ra1,ra2);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skImagefilterCroprectGetFlags(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_imagefilter_croprect_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_imagefilter_croprect_t*)*a1;
      }
  uint32_t res = sk_imagefilter_croprect_get_flags(ra1);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skImagefilterUnref(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_imagefilter_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_imagefilter_t*)*a1;
      }
  void* res = NULL;
 sk_imagefilter_unref(ra1);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skImagefilterNewMatrix(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 3;
  napi_value args[3];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_matrix_t* ra1 = NULL;
    if (ta1 != napi_null) {
    void **a1;
    void *pa1;
    a1 = &pa1;
    status = napi_get_arraybuffer_info(env, args[0], a1, NULL);
    assert(status == napi_ok);
    
    ra1 = (sk_matrix_t*)*a1;
    }
  
  
    
    int ra2;
    status = napi_get_value_int32(env, args[1], &ra2);
    assert(status == napi_ok);
  
  
    napi_valuetype ta3;
    status = napi_typeof(env, args[2], &ta3);
    assert(status == napi_ok);

    
    sk_imagefilter_t* ra3 = NULL;
    if (ta3 != napi_null) {
      void **a3;
      void *pa3;
      a3 = &pa3;
      status = napi_get_value_external(env, args[2], a3);
      assert(status == napi_ok);
      
      ra3 = (sk_imagefilter_t*)*a3;
      }
  sk_imagefilter_t* res = sk_imagefilter_new_matrix(ra1,ra2,ra3);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skImagefilterNewAlphaThreshold(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 4;
  napi_value args[4];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_region_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_region_t*)*a1;
      }
  
  
    
    double ra2;
    status = napi_get_value_double(env, args[1], &ra2);
    assert(status == napi_ok);
  
  
    
    double ra3;
    status = napi_get_value_double(env, args[2], &ra3);
    assert(status == napi_ok);
  
  
    napi_valuetype ta4;
    status = napi_typeof(env, args[3], &ta4);
    assert(status == napi_ok);

    
    sk_imagefilter_t* ra4 = NULL;
    if (ta4 != napi_null) {
      void **a4;
      void *pa4;
      a4 = &pa4;
      status = napi_get_value_external(env, args[3], a4);
      assert(status == napi_ok);
      
      ra4 = (sk_imagefilter_t*)*a4;
      }
  sk_imagefilter_t* res = sk_imagefilter_new_alpha_threshold(ra1,ra2,ra3,ra4);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skImagefilterNewBlur(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 4;
  napi_value args[4];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    
    double ra1;
    status = napi_get_value_double(env, args[0], &ra1);
    assert(status == napi_ok);
  
  
    
    double ra2;
    status = napi_get_value_double(env, args[1], &ra2);
    assert(status == napi_ok);
  
  
    napi_valuetype ta3;
    status = napi_typeof(env, args[2], &ta3);
    assert(status == napi_ok);

    
    sk_imagefilter_t* ra3 = NULL;
    if (ta3 != napi_null) {
      void **a3;
      void *pa3;
      a3 = &pa3;
      status = napi_get_value_external(env, args[2], a3);
      assert(status == napi_ok);
      
      ra3 = (sk_imagefilter_t*)*a3;
      }
  
  
    napi_valuetype ta4;
    status = napi_typeof(env, args[3], &ta4);
    assert(status == napi_ok);

    
    sk_imagefilter_croprect_t* ra4 = NULL;
    if (ta4 != napi_null) {
      void **a4;
      void *pa4;
      a4 = &pa4;
      status = napi_get_value_external(env, args[3], a4);
      assert(status == napi_ok);
      
      ra4 = (sk_imagefilter_croprect_t*)*a4;
      }
  sk_imagefilter_t* res = sk_imagefilter_new_blur(ra1,ra2,ra3,ra4);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skImagefilterNewColorFilter(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 3;
  napi_value args[3];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_colorfilter_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_colorfilter_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_imagefilter_t* ra2 = NULL;
    if (ta2 != napi_null) {
      void **a2;
      void *pa2;
      a2 = &pa2;
      status = napi_get_value_external(env, args[1], a2);
      assert(status == napi_ok);
      
      ra2 = (sk_imagefilter_t*)*a2;
      }
  
  
    napi_valuetype ta3;
    status = napi_typeof(env, args[2], &ta3);
    assert(status == napi_ok);

    
    sk_imagefilter_croprect_t* ra3 = NULL;
    if (ta3 != napi_null) {
      void **a3;
      void *pa3;
      a3 = &pa3;
      status = napi_get_value_external(env, args[2], a3);
      assert(status == napi_ok);
      
      ra3 = (sk_imagefilter_croprect_t*)*a3;
      }
  sk_imagefilter_t* res = sk_imagefilter_new_color_filter(ra1,ra2,ra3);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skImagefilterNewCompose(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_imagefilter_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_imagefilter_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_imagefilter_t* ra2 = NULL;
    if (ta2 != napi_null) {
      void **a2;
      void *pa2;
      a2 = &pa2;
      status = napi_get_value_external(env, args[1], a2);
      assert(status == napi_ok);
      
      ra2 = (sk_imagefilter_t*)*a2;
      }
  sk_imagefilter_t* res = sk_imagefilter_new_compose(ra1,ra2);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skImagefilterNewDisplacementMapEffect(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 6;
  napi_value args[6];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    
    int ra1;
    status = napi_get_value_int32(env, args[0], &ra1);
    assert(status == napi_ok);
  
  
    
    int ra2;
    status = napi_get_value_int32(env, args[1], &ra2);
    assert(status == napi_ok);
  
  
    
    double ra3;
    status = napi_get_value_double(env, args[2], &ra3);
    assert(status == napi_ok);
  
  
    napi_valuetype ta4;
    status = napi_typeof(env, args[3], &ta4);
    assert(status == napi_ok);

    
    sk_imagefilter_t* ra4 = NULL;
    if (ta4 != napi_null) {
      void **a4;
      void *pa4;
      a4 = &pa4;
      status = napi_get_value_external(env, args[3], a4);
      assert(status == napi_ok);
      
      ra4 = (sk_imagefilter_t*)*a4;
      }
  
  
    napi_valuetype ta5;
    status = napi_typeof(env, args[4], &ta5);
    assert(status == napi_ok);

    
    sk_imagefilter_t* ra5 = NULL;
    if (ta5 != napi_null) {
      void **a5;
      void *pa5;
      a5 = &pa5;
      status = napi_get_value_external(env, args[4], a5);
      assert(status == napi_ok);
      
      ra5 = (sk_imagefilter_t*)*a5;
      }
  
  
    napi_valuetype ta6;
    status = napi_typeof(env, args[5], &ta6);
    assert(status == napi_ok);

    
    sk_imagefilter_croprect_t* ra6 = NULL;
    if (ta6 != napi_null) {
      void **a6;
      void *pa6;
      a6 = &pa6;
      status = napi_get_value_external(env, args[5], a6);
      assert(status == napi_ok);
      
      ra6 = (sk_imagefilter_croprect_t*)*a6;
      }
  sk_imagefilter_t* res = sk_imagefilter_new_displacement_map_effect(ra1,ra2,ra3,ra4,ra5,ra6);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skImagefilterNewDropShadow(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 8;
  napi_value args[8];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    
    double ra1;
    status = napi_get_value_double(env, args[0], &ra1);
    assert(status == napi_ok);
  
  
    
    double ra2;
    status = napi_get_value_double(env, args[1], &ra2);
    assert(status == napi_ok);
  
  
    
    double ra3;
    status = napi_get_value_double(env, args[2], &ra3);
    assert(status == napi_ok);
  
  
    
    double ra4;
    status = napi_get_value_double(env, args[3], &ra4);
    assert(status == napi_ok);
  
  
    
    unsigned int ra5;
    status = napi_get_value_uint32(env, args[4], &ra5);
    assert(status == napi_ok);
  
  
    
    int ra6;
    status = napi_get_value_int32(env, args[5], &ra6);
    assert(status == napi_ok);
  
  
    napi_valuetype ta7;
    status = napi_typeof(env, args[6], &ta7);
    assert(status == napi_ok);

    
    sk_imagefilter_t* ra7 = NULL;
    if (ta7 != napi_null) {
      void **a7;
      void *pa7;
      a7 = &pa7;
      status = napi_get_value_external(env, args[6], a7);
      assert(status == napi_ok);
      
      ra7 = (sk_imagefilter_t*)*a7;
      }
  
  
    napi_valuetype ta8;
    status = napi_typeof(env, args[7], &ta8);
    assert(status == napi_ok);

    
    sk_imagefilter_croprect_t* ra8 = NULL;
    if (ta8 != napi_null) {
      void **a8;
      void *pa8;
      a8 = &pa8;
      status = napi_get_value_external(env, args[7], a8);
      assert(status == napi_ok);
      
      ra8 = (sk_imagefilter_croprect_t*)*a8;
      }
  sk_imagefilter_t* res = sk_imagefilter_new_drop_shadow(ra1,ra2,ra3,ra4,ra5,ra6,ra7,ra8);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skImagefilterNewDistantLitDiffuse(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 6;
  napi_value args[6];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_point3_t* ra1 = NULL;
    if (ta1 != napi_null) {
    void **a1;
    void *pa1;
    a1 = &pa1;
    status = napi_get_arraybuffer_info(env, args[0], a1, NULL);
    assert(status == napi_ok);
    
    ra1 = (sk_point3_t*)*a1;
    }
  
  
    
    unsigned int ra2;
    status = napi_get_value_uint32(env, args[1], &ra2);
    assert(status == napi_ok);
  
  
    
    double ra3;
    status = napi_get_value_double(env, args[2], &ra3);
    assert(status == napi_ok);
  
  
    
    double ra4;
    status = napi_get_value_double(env, args[3], &ra4);
    assert(status == napi_ok);
  
  
    napi_valuetype ta5;
    status = napi_typeof(env, args[4], &ta5);
    assert(status == napi_ok);

    
    sk_imagefilter_t* ra5 = NULL;
    if (ta5 != napi_null) {
      void **a5;
      void *pa5;
      a5 = &pa5;
      status = napi_get_value_external(env, args[4], a5);
      assert(status == napi_ok);
      
      ra5 = (sk_imagefilter_t*)*a5;
      }
  
  
    napi_valuetype ta6;
    status = napi_typeof(env, args[5], &ta6);
    assert(status == napi_ok);

    
    sk_imagefilter_croprect_t* ra6 = NULL;
    if (ta6 != napi_null) {
      void **a6;
      void *pa6;
      a6 = &pa6;
      status = napi_get_value_external(env, args[5], a6);
      assert(status == napi_ok);
      
      ra6 = (sk_imagefilter_croprect_t*)*a6;
      }
  sk_imagefilter_t* res = sk_imagefilter_new_distant_lit_diffuse(ra1,ra2,ra3,ra4,ra5,ra6);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skImagefilterNewPointLitDiffuse(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 6;
  napi_value args[6];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_point3_t* ra1 = NULL;
    if (ta1 != napi_null) {
    void **a1;
    void *pa1;
    a1 = &pa1;
    status = napi_get_arraybuffer_info(env, args[0], a1, NULL);
    assert(status == napi_ok);
    
    ra1 = (sk_point3_t*)*a1;
    }
  
  
    
    unsigned int ra2;
    status = napi_get_value_uint32(env, args[1], &ra2);
    assert(status == napi_ok);
  
  
    
    double ra3;
    status = napi_get_value_double(env, args[2], &ra3);
    assert(status == napi_ok);
  
  
    
    double ra4;
    status = napi_get_value_double(env, args[3], &ra4);
    assert(status == napi_ok);
  
  
    napi_valuetype ta5;
    status = napi_typeof(env, args[4], &ta5);
    assert(status == napi_ok);

    
    sk_imagefilter_t* ra5 = NULL;
    if (ta5 != napi_null) {
      void **a5;
      void *pa5;
      a5 = &pa5;
      status = napi_get_value_external(env, args[4], a5);
      assert(status == napi_ok);
      
      ra5 = (sk_imagefilter_t*)*a5;
      }
  
  
    napi_valuetype ta6;
    status = napi_typeof(env, args[5], &ta6);
    assert(status == napi_ok);

    
    sk_imagefilter_croprect_t* ra6 = NULL;
    if (ta6 != napi_null) {
      void **a6;
      void *pa6;
      a6 = &pa6;
      status = napi_get_value_external(env, args[5], a6);
      assert(status == napi_ok);
      
      ra6 = (sk_imagefilter_croprect_t*)*a6;
      }
  sk_imagefilter_t* res = sk_imagefilter_new_point_lit_diffuse(ra1,ra2,ra3,ra4,ra5,ra6);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skImagefilterNewSpotLitDiffuse(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 9;
  napi_value args[9];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_point3_t* ra1 = NULL;
    if (ta1 != napi_null) {
    void **a1;
    void *pa1;
    a1 = &pa1;
    status = napi_get_arraybuffer_info(env, args[0], a1, NULL);
    assert(status == napi_ok);
    
    ra1 = (sk_point3_t*)*a1;
    }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_point3_t* ra2 = NULL;
    if (ta2 != napi_null) {
    void **a2;
    void *pa2;
    a2 = &pa2;
    status = napi_get_arraybuffer_info(env, args[1], a2, NULL);
    assert(status == napi_ok);
    
    ra2 = (sk_point3_t*)*a2;
    }
  
  
    
    double ra3;
    status = napi_get_value_double(env, args[2], &ra3);
    assert(status == napi_ok);
  
  
    
    double ra4;
    status = napi_get_value_double(env, args[3], &ra4);
    assert(status == napi_ok);
  
  
    
    unsigned int ra5;
    status = napi_get_value_uint32(env, args[4], &ra5);
    assert(status == napi_ok);
  
  
    
    double ra6;
    status = napi_get_value_double(env, args[5], &ra6);
    assert(status == napi_ok);
  
  
    
    double ra7;
    status = napi_get_value_double(env, args[6], &ra7);
    assert(status == napi_ok);
  
  
    napi_valuetype ta8;
    status = napi_typeof(env, args[7], &ta8);
    assert(status == napi_ok);

    
    sk_imagefilter_t* ra8 = NULL;
    if (ta8 != napi_null) {
      void **a8;
      void *pa8;
      a8 = &pa8;
      status = napi_get_value_external(env, args[7], a8);
      assert(status == napi_ok);
      
      ra8 = (sk_imagefilter_t*)*a8;
      }
  
  
    napi_valuetype ta9;
    status = napi_typeof(env, args[8], &ta9);
    assert(status == napi_ok);

    
    sk_imagefilter_croprect_t* ra9 = NULL;
    if (ta9 != napi_null) {
      void **a9;
      void *pa9;
      a9 = &pa9;
      status = napi_get_value_external(env, args[8], a9);
      assert(status == napi_ok);
      
      ra9 = (sk_imagefilter_croprect_t*)*a9;
      }
  sk_imagefilter_t* res = sk_imagefilter_new_spot_lit_diffuse(ra1,ra2,ra3,ra4,ra5,ra6,ra7,ra8,ra9);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skImagefilterNewDistantLitSpecular(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 7;
  napi_value args[7];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_point3_t* ra1 = NULL;
    if (ta1 != napi_null) {
    void **a1;
    void *pa1;
    a1 = &pa1;
    status = napi_get_arraybuffer_info(env, args[0], a1, NULL);
    assert(status == napi_ok);
    
    ra1 = (sk_point3_t*)*a1;
    }
  
  
    
    unsigned int ra2;
    status = napi_get_value_uint32(env, args[1], &ra2);
    assert(status == napi_ok);
  
  
    
    double ra3;
    status = napi_get_value_double(env, args[2], &ra3);
    assert(status == napi_ok);
  
  
    
    double ra4;
    status = napi_get_value_double(env, args[3], &ra4);
    assert(status == napi_ok);
  
  
    
    double ra5;
    status = napi_get_value_double(env, args[4], &ra5);
    assert(status == napi_ok);
  
  
    napi_valuetype ta6;
    status = napi_typeof(env, args[5], &ta6);
    assert(status == napi_ok);

    
    sk_imagefilter_t* ra6 = NULL;
    if (ta6 != napi_null) {
      void **a6;
      void *pa6;
      a6 = &pa6;
      status = napi_get_value_external(env, args[5], a6);
      assert(status == napi_ok);
      
      ra6 = (sk_imagefilter_t*)*a6;
      }
  
  
    napi_valuetype ta7;
    status = napi_typeof(env, args[6], &ta7);
    assert(status == napi_ok);

    
    sk_imagefilter_croprect_t* ra7 = NULL;
    if (ta7 != napi_null) {
      void **a7;
      void *pa7;
      a7 = &pa7;
      status = napi_get_value_external(env, args[6], a7);
      assert(status == napi_ok);
      
      ra7 = (sk_imagefilter_croprect_t*)*a7;
      }
  sk_imagefilter_t* res = sk_imagefilter_new_distant_lit_specular(ra1,ra2,ra3,ra4,ra5,ra6,ra7);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skImagefilterNewPointLitSpecular(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 7;
  napi_value args[7];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_point3_t* ra1 = NULL;
    if (ta1 != napi_null) {
    void **a1;
    void *pa1;
    a1 = &pa1;
    status = napi_get_arraybuffer_info(env, args[0], a1, NULL);
    assert(status == napi_ok);
    
    ra1 = (sk_point3_t*)*a1;
    }
  
  
    
    unsigned int ra2;
    status = napi_get_value_uint32(env, args[1], &ra2);
    assert(status == napi_ok);
  
  
    
    double ra3;
    status = napi_get_value_double(env, args[2], &ra3);
    assert(status == napi_ok);
  
  
    
    double ra4;
    status = napi_get_value_double(env, args[3], &ra4);
    assert(status == napi_ok);
  
  
    
    double ra5;
    status = napi_get_value_double(env, args[4], &ra5);
    assert(status == napi_ok);
  
  
    napi_valuetype ta6;
    status = napi_typeof(env, args[5], &ta6);
    assert(status == napi_ok);

    
    sk_imagefilter_t* ra6 = NULL;
    if (ta6 != napi_null) {
      void **a6;
      void *pa6;
      a6 = &pa6;
      status = napi_get_value_external(env, args[5], a6);
      assert(status == napi_ok);
      
      ra6 = (sk_imagefilter_t*)*a6;
      }
  
  
    napi_valuetype ta7;
    status = napi_typeof(env, args[6], &ta7);
    assert(status == napi_ok);

    
    sk_imagefilter_croprect_t* ra7 = NULL;
    if (ta7 != napi_null) {
      void **a7;
      void *pa7;
      a7 = &pa7;
      status = napi_get_value_external(env, args[6], a7);
      assert(status == napi_ok);
      
      ra7 = (sk_imagefilter_croprect_t*)*a7;
      }
  sk_imagefilter_t* res = sk_imagefilter_new_point_lit_specular(ra1,ra2,ra3,ra4,ra5,ra6,ra7);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skImagefilterNewSpotLitSpecular(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 10;
  napi_value args[10];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_point3_t* ra1 = NULL;
    if (ta1 != napi_null) {
    void **a1;
    void *pa1;
    a1 = &pa1;
    status = napi_get_arraybuffer_info(env, args[0], a1, NULL);
    assert(status == napi_ok);
    
    ra1 = (sk_point3_t*)*a1;
    }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_point3_t* ra2 = NULL;
    if (ta2 != napi_null) {
    void **a2;
    void *pa2;
    a2 = &pa2;
    status = napi_get_arraybuffer_info(env, args[1], a2, NULL);
    assert(status == napi_ok);
    
    ra2 = (sk_point3_t*)*a2;
    }
  
  
    
    double ra3;
    status = napi_get_value_double(env, args[2], &ra3);
    assert(status == napi_ok);
  
  
    
    double ra4;
    status = napi_get_value_double(env, args[3], &ra4);
    assert(status == napi_ok);
  
  
    
    unsigned int ra5;
    status = napi_get_value_uint32(env, args[4], &ra5);
    assert(status == napi_ok);
  
  
    
    double ra6;
    status = napi_get_value_double(env, args[5], &ra6);
    assert(status == napi_ok);
  
  
    
    double ra7;
    status = napi_get_value_double(env, args[6], &ra7);
    assert(status == napi_ok);
  
  
    
    double ra8;
    status = napi_get_value_double(env, args[7], &ra8);
    assert(status == napi_ok);
  
  
    napi_valuetype ta9;
    status = napi_typeof(env, args[8], &ta9);
    assert(status == napi_ok);

    
    sk_imagefilter_t* ra9 = NULL;
    if (ta9 != napi_null) {
      void **a9;
      void *pa9;
      a9 = &pa9;
      status = napi_get_value_external(env, args[8], a9);
      assert(status == napi_ok);
      
      ra9 = (sk_imagefilter_t*)*a9;
      }
  
  
    napi_valuetype ta10;
    status = napi_typeof(env, args[9], &ta10);
    assert(status == napi_ok);

    
    sk_imagefilter_croprect_t* ra10 = NULL;
    if (ta10 != napi_null) {
      void **a10;
      void *pa10;
      a10 = &pa10;
      status = napi_get_value_external(env, args[9], a10);
      assert(status == napi_ok);
      
      ra10 = (sk_imagefilter_croprect_t*)*a10;
      }
  sk_imagefilter_t* res = sk_imagefilter_new_spot_lit_specular(ra1,ra2,ra3,ra4,ra5,ra6,ra7,ra8,ra9,ra10);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skImagefilterNewMagnifier(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 4;
  napi_value args[4];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_rect_t* ra1 = NULL;
    if (ta1 != napi_null) {
    void **a1;
    void *pa1;
    a1 = &pa1;
    status = napi_get_arraybuffer_info(env, args[0], a1, NULL);
    assert(status == napi_ok);
    
    ra1 = (sk_rect_t*)*a1;
    }
  
  
    
    double ra2;
    status = napi_get_value_double(env, args[1], &ra2);
    assert(status == napi_ok);
  
  
    napi_valuetype ta3;
    status = napi_typeof(env, args[2], &ta3);
    assert(status == napi_ok);

    
    sk_imagefilter_t* ra3 = NULL;
    if (ta3 != napi_null) {
      void **a3;
      void *pa3;
      a3 = &pa3;
      status = napi_get_value_external(env, args[2], a3);
      assert(status == napi_ok);
      
      ra3 = (sk_imagefilter_t*)*a3;
      }
  
  
    napi_valuetype ta4;
    status = napi_typeof(env, args[3], &ta4);
    assert(status == napi_ok);

    
    sk_imagefilter_croprect_t* ra4 = NULL;
    if (ta4 != napi_null) {
      void **a4;
      void *pa4;
      a4 = &pa4;
      status = napi_get_value_external(env, args[3], a4);
      assert(status == napi_ok);
      
      ra4 = (sk_imagefilter_croprect_t*)*a4;
      }
  sk_imagefilter_t* res = sk_imagefilter_new_magnifier(ra1,ra2,ra3,ra4);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skImagefilterNewMatrixConvolution(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 9;
  napi_value args[9];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_isize_t* ra1 = NULL;
    if (ta1 != napi_null) {
    void **a1;
    void *pa1;
    a1 = &pa1;
    status = napi_get_arraybuffer_info(env, args[0], a1, NULL);
    assert(status == napi_ok);
    
    ra1 = (sk_isize_t*)*a1;
    }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    double* ra2 = NULL;
    if (ta2 != napi_null) {
    void **a2;
    void *pa2;
    a2 = &pa2;
    status = napi_get_arraybuffer_info(env, args[1], a2, NULL);
    assert(status == napi_ok);
    
    ra2 = (double*)*a2;
    }
  
  
    
    double ra3;
    status = napi_get_value_double(env, args[2], &ra3);
    assert(status == napi_ok);
  
  
    
    double ra4;
    status = napi_get_value_double(env, args[3], &ra4);
    assert(status == napi_ok);
  
  
    napi_valuetype ta5;
    status = napi_typeof(env, args[4], &ta5);
    assert(status == napi_ok);

    
    sk_ipoint_t* ra5 = NULL;
    if (ta5 != napi_null) {
    void **a5;
    void *pa5;
    a5 = &pa5;
    status = napi_get_arraybuffer_info(env, args[4], a5, NULL);
    assert(status == napi_ok);
    
    ra5 = (sk_ipoint_t*)*a5;
    }
  
  
    
    int ra6;
    status = napi_get_value_int32(env, args[5], &ra6);
    assert(status == napi_ok);
  
  
    
    _Bool ra7;
    status = napi_get_value_bool(env, args[6], &ra7);
    assert(status == napi_ok);
  
  
    napi_valuetype ta8;
    status = napi_typeof(env, args[7], &ta8);
    assert(status == napi_ok);

    
    sk_imagefilter_t* ra8 = NULL;
    if (ta8 != napi_null) {
      void **a8;
      void *pa8;
      a8 = &pa8;
      status = napi_get_value_external(env, args[7], a8);
      assert(status == napi_ok);
      
      ra8 = (sk_imagefilter_t*)*a8;
      }
  
  
    napi_valuetype ta9;
    status = napi_typeof(env, args[8], &ta9);
    assert(status == napi_ok);

    
    sk_imagefilter_croprect_t* ra9 = NULL;
    if (ta9 != napi_null) {
      void **a9;
      void *pa9;
      a9 = &pa9;
      status = napi_get_value_external(env, args[8], a9);
      assert(status == napi_ok);
      
      ra9 = (sk_imagefilter_croprect_t*)*a9;
      }
  sk_imagefilter_t* res = sk_imagefilter_new_matrix_convolution(ra1,ra2,ra3,ra4,ra5,ra6,ra7,ra8,ra9);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skImagefilterNewMerge(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 3;
  napi_value args[3];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_imagefilter_t* ra1 = NULL;
    if (ta1 != napi_null) {
    void **a1;
    void *pa1;
    a1 = &pa1;
    status = napi_get_arraybuffer_info(env, args[0], a1, NULL);
    assert(status == napi_ok);
    
    ra1 = (sk_imagefilter_t*)*a1;
    }
  
  
    
    int ra2;
    status = napi_get_value_int32(env, args[1], &ra2);
    assert(status == napi_ok);
  
  
    napi_valuetype ta3;
    status = napi_typeof(env, args[2], &ta3);
    assert(status == napi_ok);

    
    sk_imagefilter_croprect_t* ra3 = NULL;
    if (ta3 != napi_null) {
      void **a3;
      void *pa3;
      a3 = &pa3;
      status = napi_get_value_external(env, args[2], a3);
      assert(status == napi_ok);
      
      ra3 = (sk_imagefilter_croprect_t*)*a3;
      }
  sk_imagefilter_t* res = sk_imagefilter_new_merge(ra1,ra2,ra3);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skImagefilterNewDilate(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 4;
  napi_value args[4];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    
    int ra1;
    status = napi_get_value_int32(env, args[0], &ra1);
    assert(status == napi_ok);
  
  
    
    int ra2;
    status = napi_get_value_int32(env, args[1], &ra2);
    assert(status == napi_ok);
  
  
    napi_valuetype ta3;
    status = napi_typeof(env, args[2], &ta3);
    assert(status == napi_ok);

    
    sk_imagefilter_t* ra3 = NULL;
    if (ta3 != napi_null) {
      void **a3;
      void *pa3;
      a3 = &pa3;
      status = napi_get_value_external(env, args[2], a3);
      assert(status == napi_ok);
      
      ra3 = (sk_imagefilter_t*)*a3;
      }
  
  
    napi_valuetype ta4;
    status = napi_typeof(env, args[3], &ta4);
    assert(status == napi_ok);

    
    sk_imagefilter_croprect_t* ra4 = NULL;
    if (ta4 != napi_null) {
      void **a4;
      void *pa4;
      a4 = &pa4;
      status = napi_get_value_external(env, args[3], a4);
      assert(status == napi_ok);
      
      ra4 = (sk_imagefilter_croprect_t*)*a4;
      }
  sk_imagefilter_t* res = sk_imagefilter_new_dilate(ra1,ra2,ra3,ra4);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skImagefilterNewErode(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 4;
  napi_value args[4];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    
    int ra1;
    status = napi_get_value_int32(env, args[0], &ra1);
    assert(status == napi_ok);
  
  
    
    int ra2;
    status = napi_get_value_int32(env, args[1], &ra2);
    assert(status == napi_ok);
  
  
    napi_valuetype ta3;
    status = napi_typeof(env, args[2], &ta3);
    assert(status == napi_ok);

    
    sk_imagefilter_t* ra3 = NULL;
    if (ta3 != napi_null) {
      void **a3;
      void *pa3;
      a3 = &pa3;
      status = napi_get_value_external(env, args[2], a3);
      assert(status == napi_ok);
      
      ra3 = (sk_imagefilter_t*)*a3;
      }
  
  
    napi_valuetype ta4;
    status = napi_typeof(env, args[3], &ta4);
    assert(status == napi_ok);

    
    sk_imagefilter_croprect_t* ra4 = NULL;
    if (ta4 != napi_null) {
      void **a4;
      void *pa4;
      a4 = &pa4;
      status = napi_get_value_external(env, args[3], a4);
      assert(status == napi_ok);
      
      ra4 = (sk_imagefilter_croprect_t*)*a4;
      }
  sk_imagefilter_t* res = sk_imagefilter_new_erode(ra1,ra2,ra3,ra4);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skImagefilterNewOffset(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 4;
  napi_value args[4];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    
    double ra1;
    status = napi_get_value_double(env, args[0], &ra1);
    assert(status == napi_ok);
  
  
    
    double ra2;
    status = napi_get_value_double(env, args[1], &ra2);
    assert(status == napi_ok);
  
  
    napi_valuetype ta3;
    status = napi_typeof(env, args[2], &ta3);
    assert(status == napi_ok);

    
    sk_imagefilter_t* ra3 = NULL;
    if (ta3 != napi_null) {
      void **a3;
      void *pa3;
      a3 = &pa3;
      status = napi_get_value_external(env, args[2], a3);
      assert(status == napi_ok);
      
      ra3 = (sk_imagefilter_t*)*a3;
      }
  
  
    napi_valuetype ta4;
    status = napi_typeof(env, args[3], &ta4);
    assert(status == napi_ok);

    
    sk_imagefilter_croprect_t* ra4 = NULL;
    if (ta4 != napi_null) {
      void **a4;
      void *pa4;
      a4 = &pa4;
      status = napi_get_value_external(env, args[3], a4);
      assert(status == napi_ok);
      
      ra4 = (sk_imagefilter_croprect_t*)*a4;
      }
  sk_imagefilter_t* res = sk_imagefilter_new_offset(ra1,ra2,ra3,ra4);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skImagefilterNewPicture(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_picture_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_picture_t*)*a1;
      }
  sk_imagefilter_t* res = sk_imagefilter_new_picture(ra1);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skImagefilterNewPictureWithCroprect(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_picture_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_picture_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_rect_t* ra2 = NULL;
    if (ta2 != napi_null) {
    void **a2;
    void *pa2;
    a2 = &pa2;
    status = napi_get_arraybuffer_info(env, args[1], a2, NULL);
    assert(status == napi_ok);
    
    ra2 = (sk_rect_t*)*a2;
    }
  sk_imagefilter_t* res = sk_imagefilter_new_picture_with_croprect(ra1,ra2);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skImagefilterNewTile(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 3;
  napi_value args[3];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_rect_t* ra1 = NULL;
    if (ta1 != napi_null) {
    void **a1;
    void *pa1;
    a1 = &pa1;
    status = napi_get_arraybuffer_info(env, args[0], a1, NULL);
    assert(status == napi_ok);
    
    ra1 = (sk_rect_t*)*a1;
    }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_rect_t* ra2 = NULL;
    if (ta2 != napi_null) {
    void **a2;
    void *pa2;
    a2 = &pa2;
    status = napi_get_arraybuffer_info(env, args[1], a2, NULL);
    assert(status == napi_ok);
    
    ra2 = (sk_rect_t*)*a2;
    }
  
  
    napi_valuetype ta3;
    status = napi_typeof(env, args[2], &ta3);
    assert(status == napi_ok);

    
    sk_imagefilter_t* ra3 = NULL;
    if (ta3 != napi_null) {
      void **a3;
      void *pa3;
      a3 = &pa3;
      status = napi_get_value_external(env, args[2], a3);
      assert(status == napi_ok);
      
      ra3 = (sk_imagefilter_t*)*a3;
      }
  sk_imagefilter_t* res = sk_imagefilter_new_tile(ra1,ra2,ra3);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skImagefilterNewXfermode(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 4;
  napi_value args[4];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    
    int ra1;
    status = napi_get_value_int32(env, args[0], &ra1);
    assert(status == napi_ok);
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_imagefilter_t* ra2 = NULL;
    if (ta2 != napi_null) {
      void **a2;
      void *pa2;
      a2 = &pa2;
      status = napi_get_value_external(env, args[1], a2);
      assert(status == napi_ok);
      
      ra2 = (sk_imagefilter_t*)*a2;
      }
  
  
    napi_valuetype ta3;
    status = napi_typeof(env, args[2], &ta3);
    assert(status == napi_ok);

    
    sk_imagefilter_t* ra3 = NULL;
    if (ta3 != napi_null) {
      void **a3;
      void *pa3;
      a3 = &pa3;
      status = napi_get_value_external(env, args[2], a3);
      assert(status == napi_ok);
      
      ra3 = (sk_imagefilter_t*)*a3;
      }
  
  
    napi_valuetype ta4;
    status = napi_typeof(env, args[3], &ta4);
    assert(status == napi_ok);

    
    sk_imagefilter_croprect_t* ra4 = NULL;
    if (ta4 != napi_null) {
      void **a4;
      void *pa4;
      a4 = &pa4;
      status = napi_get_value_external(env, args[3], a4);
      assert(status == napi_ok);
      
      ra4 = (sk_imagefilter_croprect_t*)*a4;
      }
  sk_imagefilter_t* res = sk_imagefilter_new_xfermode(ra1,ra2,ra3,ra4);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skImagefilterNewArithmetic(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 8;
  napi_value args[8];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    
    double ra1;
    status = napi_get_value_double(env, args[0], &ra1);
    assert(status == napi_ok);
  
  
    
    double ra2;
    status = napi_get_value_double(env, args[1], &ra2);
    assert(status == napi_ok);
  
  
    
    double ra3;
    status = napi_get_value_double(env, args[2], &ra3);
    assert(status == napi_ok);
  
  
    
    double ra4;
    status = napi_get_value_double(env, args[3], &ra4);
    assert(status == napi_ok);
  
  
    
    _Bool ra5;
    status = napi_get_value_bool(env, args[4], &ra5);
    assert(status == napi_ok);
  
  
    napi_valuetype ta6;
    status = napi_typeof(env, args[5], &ta6);
    assert(status == napi_ok);

    
    sk_imagefilter_t* ra6 = NULL;
    if (ta6 != napi_null) {
      void **a6;
      void *pa6;
      a6 = &pa6;
      status = napi_get_value_external(env, args[5], a6);
      assert(status == napi_ok);
      
      ra6 = (sk_imagefilter_t*)*a6;
      }
  
  
    napi_valuetype ta7;
    status = napi_typeof(env, args[6], &ta7);
    assert(status == napi_ok);

    
    sk_imagefilter_t* ra7 = NULL;
    if (ta7 != napi_null) {
      void **a7;
      void *pa7;
      a7 = &pa7;
      status = napi_get_value_external(env, args[6], a7);
      assert(status == napi_ok);
      
      ra7 = (sk_imagefilter_t*)*a7;
      }
  
  
    napi_valuetype ta8;
    status = napi_typeof(env, args[7], &ta8);
    assert(status == napi_ok);

    
    sk_imagefilter_croprect_t* ra8 = NULL;
    if (ta8 != napi_null) {
      void **a8;
      void *pa8;
      a8 = &pa8;
      status = napi_get_value_external(env, args[7], a8);
      assert(status == napi_ok);
      
      ra8 = (sk_imagefilter_croprect_t*)*a8;
      }
  sk_imagefilter_t* res = sk_imagefilter_new_arithmetic(ra1,ra2,ra3,ra4,ra5,ra6,ra7,ra8);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skImagefilterNewImageSource(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 4;
  napi_value args[4];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_image_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_image_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_rect_t* ra2 = NULL;
    if (ta2 != napi_null) {
    void **a2;
    void *pa2;
    a2 = &pa2;
    status = napi_get_arraybuffer_info(env, args[1], a2, NULL);
    assert(status == napi_ok);
    
    ra2 = (sk_rect_t*)*a2;
    }
  
  
    napi_valuetype ta3;
    status = napi_typeof(env, args[2], &ta3);
    assert(status == napi_ok);

    
    sk_rect_t* ra3 = NULL;
    if (ta3 != napi_null) {
    void **a3;
    void *pa3;
    a3 = &pa3;
    status = napi_get_arraybuffer_info(env, args[2], a3, NULL);
    assert(status == napi_ok);
    
    ra3 = (sk_rect_t*)*a3;
    }
  
  
    
    int ra4;
    status = napi_get_value_int32(env, args[3], &ra4);
    assert(status == napi_ok);
  sk_imagefilter_t* res = sk_imagefilter_new_image_source(ra1,ra2,ra3,ra4);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skImagefilterNewImageSourceDefault(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_image_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_image_t*)*a1;
      }
  sk_imagefilter_t* res = sk_imagefilter_new_image_source_default(ra1);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skImagefilterNewPaint(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_paint_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_paint_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_imagefilter_croprect_t* ra2 = NULL;
    if (ta2 != napi_null) {
      void **a2;
      void *pa2;
      a2 = &pa2;
      status = napi_get_value_external(env, args[1], a2);
      assert(status == napi_ok);
      
      ra2 = (sk_imagefilter_croprect_t*)*a2;
      }
  sk_imagefilter_t* res = sk_imagefilter_new_paint(ra1,ra2);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skMaskAllocImage(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    
    int ra1;
    status = napi_get_value_int32(env, args[0], &ra1);
    assert(status == napi_ok);
  uint8_t* res = sk_mask_alloc_image(ra1);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skMaskFreeImage(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    void* ra1 = NULL;
    if (ta1 != napi_null) {
    void **a1;
    void *pa1;
    a1 = &pa1;
    status = napi_get_arraybuffer_info(env, args[0], a1, NULL);
    assert(status == napi_ok);
    
    ra1 = (void*)*a1;
    }
  void* res = NULL;
 sk_mask_free_image(ra1);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skMaskIsEmpty(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_mask_t* ra1 = NULL;
    if (ta1 != napi_null) {
    void **a1;
    void *pa1;
    a1 = &pa1;
    status = napi_get_arraybuffer_info(env, args[0], a1, NULL);
    assert(status == napi_ok);
    
    ra1 = (sk_mask_t*)*a1;
    }
  _Bool res = sk_mask_is_empty(ra1);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skMaskComputeImageSize(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_mask_t* ra1 = NULL;
    if (ta1 != napi_null) {
    void **a1;
    void *pa1;
    a1 = &pa1;
    status = napi_get_arraybuffer_info(env, args[0], a1, NULL);
    assert(status == napi_ok);
    
    ra1 = (sk_mask_t*)*a1;
    }
  size_t res = sk_mask_compute_image_size(ra1);

  
  status = napi_create_int32(env, res, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skMaskComputeTotalImageSize(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_mask_t* ra1 = NULL;
    if (ta1 != napi_null) {
    void **a1;
    void *pa1;
    a1 = &pa1;
    status = napi_get_arraybuffer_info(env, args[0], a1, NULL);
    assert(status == napi_ok);
    
    ra1 = (sk_mask_t*)*a1;
    }
  size_t res = sk_mask_compute_total_image_size(ra1);

  
  status = napi_create_int32(env, res, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skMaskGetAddr_1(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 3;
  napi_value args[3];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_mask_t* ra1 = NULL;
    if (ta1 != napi_null) {
    void **a1;
    void *pa1;
    a1 = &pa1;
    status = napi_get_arraybuffer_info(env, args[0], a1, NULL);
    assert(status == napi_ok);
    
    ra1 = (sk_mask_t*)*a1;
    }
  
  
    
    int ra2;
    status = napi_get_value_int32(env, args[1], &ra2);
    assert(status == napi_ok);
  
  
    
    int ra3;
    status = napi_get_value_int32(env, args[2], &ra3);
    assert(status == napi_ok);
  uint8_t res = sk_mask_get_addr_1(ra1,ra2,ra3);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skMaskGetAddr_8(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 3;
  napi_value args[3];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_mask_t* ra1 = NULL;
    if (ta1 != napi_null) {
    void **a1;
    void *pa1;
    a1 = &pa1;
    status = napi_get_arraybuffer_info(env, args[0], a1, NULL);
    assert(status == napi_ok);
    
    ra1 = (sk_mask_t*)*a1;
    }
  
  
    
    int ra2;
    status = napi_get_value_int32(env, args[1], &ra2);
    assert(status == napi_ok);
  
  
    
    int ra3;
    status = napi_get_value_int32(env, args[2], &ra3);
    assert(status == napi_ok);
  uint8_t res = sk_mask_get_addr_8(ra1,ra2,ra3);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skMaskGetAddrLcd_16(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 3;
  napi_value args[3];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_mask_t* ra1 = NULL;
    if (ta1 != napi_null) {
    void **a1;
    void *pa1;
    a1 = &pa1;
    status = napi_get_arraybuffer_info(env, args[0], a1, NULL);
    assert(status == napi_ok);
    
    ra1 = (sk_mask_t*)*a1;
    }
  
  
    
    int ra2;
    status = napi_get_value_int32(env, args[1], &ra2);
    assert(status == napi_ok);
  
  
    
    int ra3;
    status = napi_get_value_int32(env, args[2], &ra3);
    assert(status == napi_ok);
  uint16_t res = sk_mask_get_addr_lcd_16(ra1,ra2,ra3);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skMaskGetAddr_32(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 3;
  napi_value args[3];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_mask_t* ra1 = NULL;
    if (ta1 != napi_null) {
    void **a1;
    void *pa1;
    a1 = &pa1;
    status = napi_get_arraybuffer_info(env, args[0], a1, NULL);
    assert(status == napi_ok);
    
    ra1 = (sk_mask_t*)*a1;
    }
  
  
    
    int ra2;
    status = napi_get_value_int32(env, args[1], &ra2);
    assert(status == napi_ok);
  
  
    
    int ra3;
    status = napi_get_value_int32(env, args[2], &ra3);
    assert(status == napi_ok);
  uint32_t res = sk_mask_get_addr_32(ra1,ra2,ra3);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skMaskGetAddr(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 3;
  napi_value args[3];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_mask_t* ra1 = NULL;
    if (ta1 != napi_null) {
    void **a1;
    void *pa1;
    a1 = &pa1;
    status = napi_get_arraybuffer_info(env, args[0], a1, NULL);
    assert(status == napi_ok);
    
    ra1 = (sk_mask_t*)*a1;
    }
  
  
    
    int ra2;
    status = napi_get_value_int32(env, args[1], &ra2);
    assert(status == napi_ok);
  
  
    
    int ra3;
    status = napi_get_value_int32(env, args[2], &ra3);
    assert(status == napi_ok);
  void* res = sk_mask_get_addr(ra1,ra2,ra3);

  
  status = napi_create_bigint_int64(env, res, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skMaskfilterRef(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_maskfilter_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_maskfilter_t*)*a1;
      }
  void* res = NULL;
 sk_maskfilter_ref(ra1);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skMaskfilterUnref(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_maskfilter_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_maskfilter_t*)*a1;
      }
  void* res = NULL;
 sk_maskfilter_unref(ra1);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skMaskfilterNewBlur(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    
    int ra1;
    status = napi_get_value_int32(env, args[0], &ra1);
    assert(status == napi_ok);
  
  
    
    double ra2;
    status = napi_get_value_double(env, args[1], &ra2);
    assert(status == napi_ok);
  sk_maskfilter_t* res = sk_maskfilter_new_blur(ra1,ra2);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skMaskfilterNewBlurWithFlags(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 4;
  napi_value args[4];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    
    int ra1;
    status = napi_get_value_int32(env, args[0], &ra1);
    assert(status == napi_ok);
  
  
    
    double ra2;
    status = napi_get_value_double(env, args[1], &ra2);
    assert(status == napi_ok);
  
  
    napi_valuetype ta3;
    status = napi_typeof(env, args[2], &ta3);
    assert(status == napi_ok);

    
    sk_rect_t* ra3 = NULL;
    if (ta3 != napi_null) {
    void **a3;
    void *pa3;
    a3 = &pa3;
    status = napi_get_arraybuffer_info(env, args[2], a3, NULL);
    assert(status == napi_ok);
    
    ra3 = (sk_rect_t*)*a3;
    }
  
  
    
    _Bool ra4;
    status = napi_get_value_bool(env, args[3], &ra4);
    assert(status == napi_ok);
  sk_maskfilter_t* res = sk_maskfilter_new_blur_with_flags(ra1,ra2,ra3,ra4);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skMaskfilterNewTable(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    uint8_t* ra1 = NULL;
    if (ta1 != napi_null) {
    void **a1;
    void *pa1;
    a1 = &pa1;
    status = napi_get_arraybuffer_info(env, args[0], a1, NULL);
    assert(status == napi_ok);
    
    ra1 = (uint8_t*)*a1;
    }
  sk_maskfilter_t* res = sk_maskfilter_new_table(ra1);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skMaskfilterNewGamma(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    
    double ra1;
    status = napi_get_value_double(env, args[0], &ra1);
    assert(status == napi_ok);
  sk_maskfilter_t* res = sk_maskfilter_new_gamma(ra1);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skMaskfilterNewClip(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    
    unsigned int ra1;
    status = napi_get_value_uint32(env, args[0], &ra1);
    assert(status == napi_ok);
  
  
    
    unsigned int ra2;
    status = napi_get_value_uint32(env, args[1], &ra2);
    assert(status == napi_ok);
  sk_maskfilter_t* res = sk_maskfilter_new_clip(ra1,ra2);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skMatrixTryInvert(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_matrix_t* ra1 = NULL;
    if (ta1 != napi_null) {
    void **a1;
    void *pa1;
    a1 = &pa1;
    status = napi_get_arraybuffer_info(env, args[0], a1, NULL);
    assert(status == napi_ok);
    
    ra1 = (sk_matrix_t*)*a1;
    }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_matrix_t* ra2 = NULL;
    if (ta2 != napi_null) {
    void **a2;
    void *pa2;
    a2 = &pa2;
    status = napi_get_arraybuffer_info(env, args[1], a2, NULL);
    assert(status == napi_ok);
    
    ra2 = (sk_matrix_t*)*a2;
    }
  _Bool res = sk_matrix_try_invert(ra1,ra2);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skMatrixConcat(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 3;
  napi_value args[3];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_matrix_t* ra1 = NULL;
    if (ta1 != napi_null) {
    void **a1;
    void *pa1;
    a1 = &pa1;
    status = napi_get_arraybuffer_info(env, args[0], a1, NULL);
    assert(status == napi_ok);
    
    ra1 = (sk_matrix_t*)*a1;
    }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_matrix_t* ra2 = NULL;
    if (ta2 != napi_null) {
    void **a2;
    void *pa2;
    a2 = &pa2;
    status = napi_get_arraybuffer_info(env, args[1], a2, NULL);
    assert(status == napi_ok);
    
    ra2 = (sk_matrix_t*)*a2;
    }
  
  
    napi_valuetype ta3;
    status = napi_typeof(env, args[2], &ta3);
    assert(status == napi_ok);

    
    sk_matrix_t* ra3 = NULL;
    if (ta3 != napi_null) {
    void **a3;
    void *pa3;
    a3 = &pa3;
    status = napi_get_arraybuffer_info(env, args[2], a3, NULL);
    assert(status == napi_ok);
    
    ra3 = (sk_matrix_t*)*a3;
    }
  void* res = NULL;
 sk_matrix_concat(ra1,ra2,ra3);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skMatrixPreConcat(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_matrix_t* ra1 = NULL;
    if (ta1 != napi_null) {
    void **a1;
    void *pa1;
    a1 = &pa1;
    status = napi_get_arraybuffer_info(env, args[0], a1, NULL);
    assert(status == napi_ok);
    
    ra1 = (sk_matrix_t*)*a1;
    }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_matrix_t* ra2 = NULL;
    if (ta2 != napi_null) {
    void **a2;
    void *pa2;
    a2 = &pa2;
    status = napi_get_arraybuffer_info(env, args[1], a2, NULL);
    assert(status == napi_ok);
    
    ra2 = (sk_matrix_t*)*a2;
    }
  void* res = NULL;
 sk_matrix_pre_concat(ra1,ra2);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skMatrixPostConcat(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_matrix_t* ra1 = NULL;
    if (ta1 != napi_null) {
    void **a1;
    void *pa1;
    a1 = &pa1;
    status = napi_get_arraybuffer_info(env, args[0], a1, NULL);
    assert(status == napi_ok);
    
    ra1 = (sk_matrix_t*)*a1;
    }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_matrix_t* ra2 = NULL;
    if (ta2 != napi_null) {
    void **a2;
    void *pa2;
    a2 = &pa2;
    status = napi_get_arraybuffer_info(env, args[1], a2, NULL);
    assert(status == napi_ok);
    
    ra2 = (sk_matrix_t*)*a2;
    }
  void* res = NULL;
 sk_matrix_post_concat(ra1,ra2);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skMatrixMapRect(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 3;
  napi_value args[3];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_matrix_t* ra1 = NULL;
    if (ta1 != napi_null) {
    void **a1;
    void *pa1;
    a1 = &pa1;
    status = napi_get_arraybuffer_info(env, args[0], a1, NULL);
    assert(status == napi_ok);
    
    ra1 = (sk_matrix_t*)*a1;
    }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_rect_t* ra2 = NULL;
    if (ta2 != napi_null) {
    void **a2;
    void *pa2;
    a2 = &pa2;
    status = napi_get_arraybuffer_info(env, args[1], a2, NULL);
    assert(status == napi_ok);
    
    ra2 = (sk_rect_t*)*a2;
    }
  
  
    napi_valuetype ta3;
    status = napi_typeof(env, args[2], &ta3);
    assert(status == napi_ok);

    
    sk_rect_t* ra3 = NULL;
    if (ta3 != napi_null) {
    void **a3;
    void *pa3;
    a3 = &pa3;
    status = napi_get_arraybuffer_info(env, args[2], a3, NULL);
    assert(status == napi_ok);
    
    ra3 = (sk_rect_t*)*a3;
    }
  void* res = NULL;
 sk_matrix_map_rect(ra1,ra2,ra3);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skMatrixMapPoints(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 4;
  napi_value args[4];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_matrix_t* ra1 = NULL;
    if (ta1 != napi_null) {
    void **a1;
    void *pa1;
    a1 = &pa1;
    status = napi_get_arraybuffer_info(env, args[0], a1, NULL);
    assert(status == napi_ok);
    
    ra1 = (sk_matrix_t*)*a1;
    }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_point_t* ra2 = NULL;
    if (ta2 != napi_null) {
    void **a2;
    void *pa2;
    a2 = &pa2;
    status = napi_get_arraybuffer_info(env, args[1], a2, NULL);
    assert(status == napi_ok);
    
    ra2 = (sk_point_t*)*a2;
    }
  
  
    napi_valuetype ta3;
    status = napi_typeof(env, args[2], &ta3);
    assert(status == napi_ok);

    
    sk_point_t* ra3 = NULL;
    if (ta3 != napi_null) {
    void **a3;
    void *pa3;
    a3 = &pa3;
    status = napi_get_arraybuffer_info(env, args[2], a3, NULL);
    assert(status == napi_ok);
    
    ra3 = (sk_point_t*)*a3;
    }
  
  
    
    int ra4;
    status = napi_get_value_int32(env, args[3], &ra4);
    assert(status == napi_ok);
  void* res = NULL;
 sk_matrix_map_points(ra1,ra2,ra3,ra4);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skMatrixMapVectors(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 4;
  napi_value args[4];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_matrix_t* ra1 = NULL;
    if (ta1 != napi_null) {
    void **a1;
    void *pa1;
    a1 = &pa1;
    status = napi_get_arraybuffer_info(env, args[0], a1, NULL);
    assert(status == napi_ok);
    
    ra1 = (sk_matrix_t*)*a1;
    }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_point_t* ra2 = NULL;
    if (ta2 != napi_null) {
    void **a2;
    void *pa2;
    a2 = &pa2;
    status = napi_get_arraybuffer_info(env, args[1], a2, NULL);
    assert(status == napi_ok);
    
    ra2 = (sk_point_t*)*a2;
    }
  
  
    napi_valuetype ta3;
    status = napi_typeof(env, args[2], &ta3);
    assert(status == napi_ok);

    
    sk_point_t* ra3 = NULL;
    if (ta3 != napi_null) {
    void **a3;
    void *pa3;
    a3 = &pa3;
    status = napi_get_arraybuffer_info(env, args[2], a3, NULL);
    assert(status == napi_ok);
    
    ra3 = (sk_point_t*)*a3;
    }
  
  
    
    int ra4;
    status = napi_get_value_int32(env, args[3], &ra4);
    assert(status == napi_ok);
  void* res = NULL;
 sk_matrix_map_vectors(ra1,ra2,ra3,ra4);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skMatrixMapXy(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 4;
  napi_value args[4];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_matrix_t* ra1 = NULL;
    if (ta1 != napi_null) {
    void **a1;
    void *pa1;
    a1 = &pa1;
    status = napi_get_arraybuffer_info(env, args[0], a1, NULL);
    assert(status == napi_ok);
    
    ra1 = (sk_matrix_t*)*a1;
    }
  
  
    
    double ra2;
    status = napi_get_value_double(env, args[1], &ra2);
    assert(status == napi_ok);
  
  
    
    double ra3;
    status = napi_get_value_double(env, args[2], &ra3);
    assert(status == napi_ok);
  
  
    napi_valuetype ta4;
    status = napi_typeof(env, args[3], &ta4);
    assert(status == napi_ok);

    
    sk_point_t* ra4 = NULL;
    if (ta4 != napi_null) {
    void **a4;
    void *pa4;
    a4 = &pa4;
    status = napi_get_arraybuffer_info(env, args[3], a4, NULL);
    assert(status == napi_ok);
    
    ra4 = (sk_point_t*)*a4;
    }
  void* res = NULL;
 sk_matrix_map_xy(ra1,ra2,ra3,ra4);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skMatrixMapVector(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 4;
  napi_value args[4];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_matrix_t* ra1 = NULL;
    if (ta1 != napi_null) {
    void **a1;
    void *pa1;
    a1 = &pa1;
    status = napi_get_arraybuffer_info(env, args[0], a1, NULL);
    assert(status == napi_ok);
    
    ra1 = (sk_matrix_t*)*a1;
    }
  
  
    
    double ra2;
    status = napi_get_value_double(env, args[1], &ra2);
    assert(status == napi_ok);
  
  
    
    double ra3;
    status = napi_get_value_double(env, args[2], &ra3);
    assert(status == napi_ok);
  
  
    napi_valuetype ta4;
    status = napi_typeof(env, args[3], &ta4);
    assert(status == napi_ok);

    
    sk_point_t* ra4 = NULL;
    if (ta4 != napi_null) {
    void **a4;
    void *pa4;
    a4 = &pa4;
    status = napi_get_arraybuffer_info(env, args[3], a4, NULL);
    assert(status == napi_ok);
    
    ra4 = (sk_point_t*)*a4;
    }
  void* res = NULL;
 sk_matrix_map_vector(ra1,ra2,ra3,ra4);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skMatrixMapRadius(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_matrix_t* ra1 = NULL;
    if (ta1 != napi_null) {
    void **a1;
    void *pa1;
    a1 = &pa1;
    status = napi_get_arraybuffer_info(env, args[0], a1, NULL);
    assert(status == napi_ok);
    
    ra1 = (sk_matrix_t*)*a1;
    }
  
  
    
    double ra2;
    status = napi_get_value_double(env, args[1], &ra2);
    assert(status == napi_ok);
  float res = sk_matrix_map_radius(ra1,ra2);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value sk_3dviewNew(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  sk_3dview_t* res = sk_3dview_new();

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value sk_3dviewDestroy(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_3dview_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_3dview_t*)*a1;
      }
  void* res = NULL;
 sk_3dview_destroy(ra1);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value sk_3dviewSave(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_3dview_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_3dview_t*)*a1;
      }
  void* res = NULL;
 sk_3dview_save(ra1);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value sk_3dviewRestore(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_3dview_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_3dview_t*)*a1;
      }
  void* res = NULL;
 sk_3dview_restore(ra1);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value sk_3dviewTranslate(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 4;
  napi_value args[4];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_3dview_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_3dview_t*)*a1;
      }
  
  
    
    double ra2;
    status = napi_get_value_double(env, args[1], &ra2);
    assert(status == napi_ok);
  
  
    
    double ra3;
    status = napi_get_value_double(env, args[2], &ra3);
    assert(status == napi_ok);
  
  
    
    double ra4;
    status = napi_get_value_double(env, args[3], &ra4);
    assert(status == napi_ok);
  void* res = NULL;
 sk_3dview_translate(ra1,ra2,ra3,ra4);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value sk_3dviewRotateXDegrees(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_3dview_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_3dview_t*)*a1;
      }
  
  
    
    double ra2;
    status = napi_get_value_double(env, args[1], &ra2);
    assert(status == napi_ok);
  void* res = NULL;
 sk_3dview_rotate_x_degrees(ra1,ra2);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value sk_3dviewRotateYDegrees(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_3dview_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_3dview_t*)*a1;
      }
  
  
    
    double ra2;
    status = napi_get_value_double(env, args[1], &ra2);
    assert(status == napi_ok);
  void* res = NULL;
 sk_3dview_rotate_y_degrees(ra1,ra2);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value sk_3dviewRotateZDegrees(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_3dview_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_3dview_t*)*a1;
      }
  
  
    
    double ra2;
    status = napi_get_value_double(env, args[1], &ra2);
    assert(status == napi_ok);
  void* res = NULL;
 sk_3dview_rotate_z_degrees(ra1,ra2);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value sk_3dviewRotateXRadians(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_3dview_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_3dview_t*)*a1;
      }
  
  
    
    double ra2;
    status = napi_get_value_double(env, args[1], &ra2);
    assert(status == napi_ok);
  void* res = NULL;
 sk_3dview_rotate_x_radians(ra1,ra2);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value sk_3dviewRotateYRadians(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_3dview_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_3dview_t*)*a1;
      }
  
  
    
    double ra2;
    status = napi_get_value_double(env, args[1], &ra2);
    assert(status == napi_ok);
  void* res = NULL;
 sk_3dview_rotate_y_radians(ra1,ra2);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value sk_3dviewRotateZRadians(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_3dview_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_3dview_t*)*a1;
      }
  
  
    
    double ra2;
    status = napi_get_value_double(env, args[1], &ra2);
    assert(status == napi_ok);
  void* res = NULL;
 sk_3dview_rotate_z_radians(ra1,ra2);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value sk_3dviewGetMatrix(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_3dview_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_3dview_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_matrix_t* ra2 = NULL;
    if (ta2 != napi_null) {
    void **a2;
    void *pa2;
    a2 = &pa2;
    status = napi_get_arraybuffer_info(env, args[1], a2, NULL);
    assert(status == napi_ok);
    
    ra2 = (sk_matrix_t*)*a2;
    }
  void* res = NULL;
 sk_3dview_get_matrix(ra1,ra2);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value sk_3dviewApplyToCanvas(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_3dview_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_3dview_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_canvas_t* ra2 = NULL;
    if (ta2 != napi_null) {
      void **a2;
      void *pa2;
      a2 = &pa2;
      status = napi_get_value_external(env, args[1], a2);
      assert(status == napi_ok);
      
      ra2 = (sk_canvas_t*)*a2;
      }
  void* res = NULL;
 sk_3dview_apply_to_canvas(ra1,ra2);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value sk_3dviewDotWithNormal(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 4;
  napi_value args[4];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_3dview_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_3dview_t*)*a1;
      }
  
  
    
    double ra2;
    status = napi_get_value_double(env, args[1], &ra2);
    assert(status == napi_ok);
  
  
    
    double ra3;
    status = napi_get_value_double(env, args[2], &ra3);
    assert(status == napi_ok);
  
  
    
    double ra4;
    status = napi_get_value_double(env, args[3], &ra4);
    assert(status == napi_ok);
  float res = sk_3dview_dot_with_normal(ra1,ra2,ra3,ra4);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skMatrix44Destroy(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_matrix44_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_matrix44_t*)*a1;
      }
  void* res = NULL;
 sk_matrix44_destroy(ra1);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skMatrix44New(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  sk_matrix44_t* res = sk_matrix44_new();

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skMatrix44NewIdentity(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  sk_matrix44_t* res = sk_matrix44_new_identity();

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skMatrix44NewCopy(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_matrix44_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_matrix44_t*)*a1;
      }
  sk_matrix44_t* res = sk_matrix44_new_copy(ra1);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skMatrix44NewConcat(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_matrix44_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_matrix44_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_matrix44_t* ra2 = NULL;
    if (ta2 != napi_null) {
      void **a2;
      void *pa2;
      a2 = &pa2;
      status = napi_get_value_external(env, args[1], a2);
      assert(status == napi_ok);
      
      ra2 = (sk_matrix44_t*)*a2;
      }
  sk_matrix44_t* res = sk_matrix44_new_concat(ra1,ra2);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skMatrix44NewMatrix(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_matrix_t* ra1 = NULL;
    if (ta1 != napi_null) {
    void **a1;
    void *pa1;
    a1 = &pa1;
    status = napi_get_arraybuffer_info(env, args[0], a1, NULL);
    assert(status == napi_ok);
    
    ra1 = (sk_matrix_t*)*a1;
    }
  sk_matrix44_t* res = sk_matrix44_new_matrix(ra1);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skMatrix44Equals(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_matrix44_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_matrix44_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_matrix44_t* ra2 = NULL;
    if (ta2 != napi_null) {
      void **a2;
      void *pa2;
      a2 = &pa2;
      status = napi_get_value_external(env, args[1], a2);
      assert(status == napi_ok);
      
      ra2 = (sk_matrix44_t*)*a2;
      }
  _Bool res = sk_matrix44_equals(ra1,ra2);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skMatrix44ToMatrix(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_matrix44_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_matrix44_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_matrix_t* ra2 = NULL;
    if (ta2 != napi_null) {
    void **a2;
    void *pa2;
    a2 = &pa2;
    status = napi_get_arraybuffer_info(env, args[1], a2, NULL);
    assert(status == napi_ok);
    
    ra2 = (sk_matrix_t*)*a2;
    }
  void* res = NULL;
 sk_matrix44_to_matrix(ra1,ra2);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skMatrix44GetType(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_matrix44_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_matrix44_t*)*a1;
      }
  sk_matrix44_type_mask_t res = sk_matrix44_get_type(ra1);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skMatrix44SetIdentity(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_matrix44_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_matrix44_t*)*a1;
      }
  void* res = NULL;
 sk_matrix44_set_identity(ra1);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skMatrix44Get(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 3;
  napi_value args[3];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_matrix44_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_matrix44_t*)*a1;
      }
  
  
    
    int ra2;
    status = napi_get_value_int32(env, args[1], &ra2);
    assert(status == napi_ok);
  
  
    
    int ra3;
    status = napi_get_value_int32(env, args[2], &ra3);
    assert(status == napi_ok);
  float res = sk_matrix44_get(ra1,ra2,ra3);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skMatrix44Set(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 4;
  napi_value args[4];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_matrix44_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_matrix44_t*)*a1;
      }
  
  
    
    int ra2;
    status = napi_get_value_int32(env, args[1], &ra2);
    assert(status == napi_ok);
  
  
    
    int ra3;
    status = napi_get_value_int32(env, args[2], &ra3);
    assert(status == napi_ok);
  
  
    
    double ra4;
    status = napi_get_value_double(env, args[3], &ra4);
    assert(status == napi_ok);
  void* res = NULL;
 sk_matrix44_set(ra1,ra2,ra3,ra4);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skMatrix44AsColMajor(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_matrix44_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_matrix44_t*)*a1;
      }
  
  
    
    double* ra2 = NULL;
    status = napi_get_value_double(env, args[1], ra2);
    assert(status == napi_ok);
  void* res = NULL;
 sk_matrix44_as_col_major(ra1,ra2);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skMatrix44AsRowMajor(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_matrix44_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_matrix44_t*)*a1;
      }
  
  
    
    double* ra2 = NULL;
    status = napi_get_value_double(env, args[1], ra2);
    assert(status == napi_ok);
  void* res = NULL;
 sk_matrix44_as_row_major(ra1,ra2);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skMatrix44SetColMajor(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_matrix44_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_matrix44_t*)*a1;
      }
  
  
    
    double* ra2 = NULL;
    status = napi_get_value_double(env, args[1], ra2);
    assert(status == napi_ok);
  void* res = NULL;
 sk_matrix44_set_col_major(ra1,ra2);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skMatrix44SetRowMajor(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_matrix44_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_matrix44_t*)*a1;
      }
  
  
    
    double* ra2 = NULL;
    status = napi_get_value_double(env, args[1], ra2);
    assert(status == napi_ok);
  void* res = NULL;
 sk_matrix44_set_row_major(ra1,ra2);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skMatrix44SetTranslate(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 4;
  napi_value args[4];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_matrix44_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_matrix44_t*)*a1;
      }
  
  
    
    double ra2;
    status = napi_get_value_double(env, args[1], &ra2);
    assert(status == napi_ok);
  
  
    
    double ra3;
    status = napi_get_value_double(env, args[2], &ra3);
    assert(status == napi_ok);
  
  
    
    double ra4;
    status = napi_get_value_double(env, args[3], &ra4);
    assert(status == napi_ok);
  void* res = NULL;
 sk_matrix44_set_translate(ra1,ra2,ra3,ra4);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skMatrix44PreTranslate(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 4;
  napi_value args[4];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_matrix44_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_matrix44_t*)*a1;
      }
  
  
    
    double ra2;
    status = napi_get_value_double(env, args[1], &ra2);
    assert(status == napi_ok);
  
  
    
    double ra3;
    status = napi_get_value_double(env, args[2], &ra3);
    assert(status == napi_ok);
  
  
    
    double ra4;
    status = napi_get_value_double(env, args[3], &ra4);
    assert(status == napi_ok);
  void* res = NULL;
 sk_matrix44_pre_translate(ra1,ra2,ra3,ra4);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skMatrix44PostTranslate(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 4;
  napi_value args[4];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_matrix44_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_matrix44_t*)*a1;
      }
  
  
    
    double ra2;
    status = napi_get_value_double(env, args[1], &ra2);
    assert(status == napi_ok);
  
  
    
    double ra3;
    status = napi_get_value_double(env, args[2], &ra3);
    assert(status == napi_ok);
  
  
    
    double ra4;
    status = napi_get_value_double(env, args[3], &ra4);
    assert(status == napi_ok);
  void* res = NULL;
 sk_matrix44_post_translate(ra1,ra2,ra3,ra4);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skMatrix44SetScale(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 4;
  napi_value args[4];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_matrix44_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_matrix44_t*)*a1;
      }
  
  
    
    double ra2;
    status = napi_get_value_double(env, args[1], &ra2);
    assert(status == napi_ok);
  
  
    
    double ra3;
    status = napi_get_value_double(env, args[2], &ra3);
    assert(status == napi_ok);
  
  
    
    double ra4;
    status = napi_get_value_double(env, args[3], &ra4);
    assert(status == napi_ok);
  void* res = NULL;
 sk_matrix44_set_scale(ra1,ra2,ra3,ra4);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skMatrix44PreScale(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 4;
  napi_value args[4];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_matrix44_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_matrix44_t*)*a1;
      }
  
  
    
    double ra2;
    status = napi_get_value_double(env, args[1], &ra2);
    assert(status == napi_ok);
  
  
    
    double ra3;
    status = napi_get_value_double(env, args[2], &ra3);
    assert(status == napi_ok);
  
  
    
    double ra4;
    status = napi_get_value_double(env, args[3], &ra4);
    assert(status == napi_ok);
  void* res = NULL;
 sk_matrix44_pre_scale(ra1,ra2,ra3,ra4);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skMatrix44PostScale(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 4;
  napi_value args[4];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_matrix44_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_matrix44_t*)*a1;
      }
  
  
    
    double ra2;
    status = napi_get_value_double(env, args[1], &ra2);
    assert(status == napi_ok);
  
  
    
    double ra3;
    status = napi_get_value_double(env, args[2], &ra3);
    assert(status == napi_ok);
  
  
    
    double ra4;
    status = napi_get_value_double(env, args[3], &ra4);
    assert(status == napi_ok);
  void* res = NULL;
 sk_matrix44_post_scale(ra1,ra2,ra3,ra4);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skMatrix44SetRotateAboutDegrees(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 5;
  napi_value args[5];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_matrix44_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_matrix44_t*)*a1;
      }
  
  
    
    double ra2;
    status = napi_get_value_double(env, args[1], &ra2);
    assert(status == napi_ok);
  
  
    
    double ra3;
    status = napi_get_value_double(env, args[2], &ra3);
    assert(status == napi_ok);
  
  
    
    double ra4;
    status = napi_get_value_double(env, args[3], &ra4);
    assert(status == napi_ok);
  
  
    
    double ra5;
    status = napi_get_value_double(env, args[4], &ra5);
    assert(status == napi_ok);
  void* res = NULL;
 sk_matrix44_set_rotate_about_degrees(ra1,ra2,ra3,ra4,ra5);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skMatrix44SetRotateAboutRadians(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 5;
  napi_value args[5];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_matrix44_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_matrix44_t*)*a1;
      }
  
  
    
    double ra2;
    status = napi_get_value_double(env, args[1], &ra2);
    assert(status == napi_ok);
  
  
    
    double ra3;
    status = napi_get_value_double(env, args[2], &ra3);
    assert(status == napi_ok);
  
  
    
    double ra4;
    status = napi_get_value_double(env, args[3], &ra4);
    assert(status == napi_ok);
  
  
    
    double ra5;
    status = napi_get_value_double(env, args[4], &ra5);
    assert(status == napi_ok);
  void* res = NULL;
 sk_matrix44_set_rotate_about_radians(ra1,ra2,ra3,ra4,ra5);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skMatrix44SetRotateAboutRadiansUnit(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 5;
  napi_value args[5];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_matrix44_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_matrix44_t*)*a1;
      }
  
  
    
    double ra2;
    status = napi_get_value_double(env, args[1], &ra2);
    assert(status == napi_ok);
  
  
    
    double ra3;
    status = napi_get_value_double(env, args[2], &ra3);
    assert(status == napi_ok);
  
  
    
    double ra4;
    status = napi_get_value_double(env, args[3], &ra4);
    assert(status == napi_ok);
  
  
    
    double ra5;
    status = napi_get_value_double(env, args[4], &ra5);
    assert(status == napi_ok);
  void* res = NULL;
 sk_matrix44_set_rotate_about_radians_unit(ra1,ra2,ra3,ra4,ra5);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skMatrix44SetConcat(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 3;
  napi_value args[3];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_matrix44_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_matrix44_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_matrix44_t* ra2 = NULL;
    if (ta2 != napi_null) {
      void **a2;
      void *pa2;
      a2 = &pa2;
      status = napi_get_value_external(env, args[1], a2);
      assert(status == napi_ok);
      
      ra2 = (sk_matrix44_t*)*a2;
      }
  
  
    napi_valuetype ta3;
    status = napi_typeof(env, args[2], &ta3);
    assert(status == napi_ok);

    
    sk_matrix44_t* ra3 = NULL;
    if (ta3 != napi_null) {
      void **a3;
      void *pa3;
      a3 = &pa3;
      status = napi_get_value_external(env, args[2], a3);
      assert(status == napi_ok);
      
      ra3 = (sk_matrix44_t*)*a3;
      }
  void* res = NULL;
 sk_matrix44_set_concat(ra1,ra2,ra3);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skMatrix44PreConcat(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_matrix44_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_matrix44_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_matrix44_t* ra2 = NULL;
    if (ta2 != napi_null) {
      void **a2;
      void *pa2;
      a2 = &pa2;
      status = napi_get_value_external(env, args[1], a2);
      assert(status == napi_ok);
      
      ra2 = (sk_matrix44_t*)*a2;
      }
  void* res = NULL;
 sk_matrix44_pre_concat(ra1,ra2);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skMatrix44PostConcat(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_matrix44_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_matrix44_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_matrix44_t* ra2 = NULL;
    if (ta2 != napi_null) {
      void **a2;
      void *pa2;
      a2 = &pa2;
      status = napi_get_value_external(env, args[1], a2);
      assert(status == napi_ok);
      
      ra2 = (sk_matrix44_t*)*a2;
      }
  void* res = NULL;
 sk_matrix44_post_concat(ra1,ra2);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skMatrix44Invert(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_matrix44_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_matrix44_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_matrix44_t* ra2 = NULL;
    if (ta2 != napi_null) {
      void **a2;
      void *pa2;
      a2 = &pa2;
      status = napi_get_value_external(env, args[1], a2);
      assert(status == napi_ok);
      
      ra2 = (sk_matrix44_t*)*a2;
      }
  _Bool res = sk_matrix44_invert(ra1,ra2);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skMatrix44Transpose(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_matrix44_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_matrix44_t*)*a1;
      }
  void* res = NULL;
 sk_matrix44_transpose(ra1);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skMatrix44MapScalars(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 3;
  napi_value args[3];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_matrix44_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_matrix44_t*)*a1;
      }
  
  
    
    double* ra2 = NULL;
    status = napi_get_value_double(env, args[1], ra2);
    assert(status == napi_ok);
  
  
    
    double* ra3 = NULL;
    status = napi_get_value_double(env, args[2], ra3);
    assert(status == napi_ok);
  void* res = NULL;
 sk_matrix44_map_scalars(ra1,ra2,ra3);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skMatrix44Map2(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 4;
  napi_value args[4];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_matrix44_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_matrix44_t*)*a1;
      }
  
  
    
    double* ra2 = NULL;
    status = napi_get_value_double(env, args[1], ra2);
    assert(status == napi_ok);
  
  
    
    int ra3;
    status = napi_get_value_int32(env, args[2], &ra3);
    assert(status == napi_ok);
  
  
    
    double* ra4 = NULL;
    status = napi_get_value_double(env, args[3], ra4);
    assert(status == napi_ok);
  void* res = NULL;
 sk_matrix44_map2(ra1,ra2,ra3,ra4);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skMatrix44Preserves_2dAxisAlignment(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_matrix44_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_matrix44_t*)*a1;
      }
  
  
    
    double ra2;
    status = napi_get_value_double(env, args[1], &ra2);
    assert(status == napi_ok);
  _Bool res = sk_matrix44_preserves_2d_axis_alignment(ra1,ra2);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skMatrix44Determinant(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_matrix44_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_matrix44_t*)*a1;
      }
  double res = sk_matrix44_determinant(ra1);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPaintNew(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  sk_paint_t* res = sk_paint_new();

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPaintClone(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_paint_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_paint_t*)*a1;
      }
  sk_paint_t* res = sk_paint_clone(ra1);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPaintDelete(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_paint_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_paint_t*)*a1;
      }
  void* res = NULL;
 sk_paint_delete(ra1);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPaintReset(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_paint_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_paint_t*)*a1;
      }
  void* res = NULL;
 sk_paint_reset(ra1);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPaintIsAntialias(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_paint_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_paint_t*)*a1;
      }
  _Bool res = sk_paint_is_antialias(ra1);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPaintSetAntialias(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_paint_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_paint_t*)*a1;
      }
  
  
    
    _Bool ra2;
    status = napi_get_value_bool(env, args[1], &ra2);
    assert(status == napi_ok);
  void* res = NULL;
 sk_paint_set_antialias(ra1,ra2);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPaintGetColor(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_paint_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_paint_t*)*a1;
      }
  sk_color_t res = sk_paint_get_color(ra1);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPaintSetColor(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_paint_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_paint_t*)*a1;
      }
  
  
    
    unsigned int ra2;
    status = napi_get_value_uint32(env, args[1], &ra2);
    assert(status == napi_ok);
  void* res = NULL;
 sk_paint_set_color(ra1,ra2);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPaintGetStyle(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_paint_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_paint_t*)*a1;
      }
  sk_paint_style_t res = sk_paint_get_style(ra1);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPaintSetStyle(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_paint_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_paint_t*)*a1;
      }
  
  
    
    int ra2;
    status = napi_get_value_int32(env, args[1], &ra2);
    assert(status == napi_ok);
  void* res = NULL;
 sk_paint_set_style(ra1,ra2);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPaintGetStrokeWidth(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_paint_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_paint_t*)*a1;
      }
  float res = sk_paint_get_stroke_width(ra1);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPaintSetStrokeWidth(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_paint_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_paint_t*)*a1;
      }
  
  
    
    double ra2;
    status = napi_get_value_double(env, args[1], &ra2);
    assert(status == napi_ok);
  void* res = NULL;
 sk_paint_set_stroke_width(ra1,ra2);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPaintGetStrokeMiter(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_paint_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_paint_t*)*a1;
      }
  float res = sk_paint_get_stroke_miter(ra1);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPaintSetStrokeMiter(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_paint_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_paint_t*)*a1;
      }
  
  
    
    double ra2;
    status = napi_get_value_double(env, args[1], &ra2);
    assert(status == napi_ok);
  void* res = NULL;
 sk_paint_set_stroke_miter(ra1,ra2);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPaintGetStrokeCap(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_paint_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_paint_t*)*a1;
      }
  sk_stroke_cap_t res = sk_paint_get_stroke_cap(ra1);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPaintSetStrokeCap(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_paint_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_paint_t*)*a1;
      }
  
  
    
    int ra2;
    status = napi_get_value_int32(env, args[1], &ra2);
    assert(status == napi_ok);
  void* res = NULL;
 sk_paint_set_stroke_cap(ra1,ra2);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPaintGetStrokeJoin(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_paint_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_paint_t*)*a1;
      }
  sk_stroke_join_t res = sk_paint_get_stroke_join(ra1);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPaintSetStrokeJoin(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_paint_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_paint_t*)*a1;
      }
  
  
    
    int ra2;
    status = napi_get_value_int32(env, args[1], &ra2);
    assert(status == napi_ok);
  void* res = NULL;
 sk_paint_set_stroke_join(ra1,ra2);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPaintSetShader(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_paint_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_paint_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_shader_t* ra2 = NULL;
    if (ta2 != napi_null) {
      void **a2;
      void *pa2;
      a2 = &pa2;
      status = napi_get_value_external(env, args[1], a2);
      assert(status == napi_ok);
      
      ra2 = (sk_shader_t*)*a2;
      }
  void* res = NULL;
 sk_paint_set_shader(ra1,ra2);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPaintSetMaskfilter(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_paint_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_paint_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_maskfilter_t* ra2 = NULL;
    if (ta2 != napi_null) {
      void **a2;
      void *pa2;
      a2 = &pa2;
      status = napi_get_value_external(env, args[1], a2);
      assert(status == napi_ok);
      
      ra2 = (sk_maskfilter_t*)*a2;
      }
  void* res = NULL;
 sk_paint_set_maskfilter(ra1,ra2);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPaintSetBlendmode(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_paint_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_paint_t*)*a1;
      }
  
  
    
    int ra2;
    status = napi_get_value_int32(env, args[1], &ra2);
    assert(status == napi_ok);
  void* res = NULL;
 sk_paint_set_blendmode(ra1,ra2);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPaintIsDither(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_paint_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_paint_t*)*a1;
      }
  _Bool res = sk_paint_is_dither(ra1);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPaintSetDither(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_paint_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_paint_t*)*a1;
      }
  
  
    
    _Bool ra2;
    status = napi_get_value_bool(env, args[1], &ra2);
    assert(status == napi_ok);
  void* res = NULL;
 sk_paint_set_dither(ra1,ra2);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPaintIsVerticaltext(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_paint_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_paint_t*)*a1;
      }
  _Bool res = sk_paint_is_verticaltext(ra1);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPaintSetVerticaltext(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_paint_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_paint_t*)*a1;
      }
  
  
    
    _Bool ra2;
    status = napi_get_value_bool(env, args[1], &ra2);
    assert(status == napi_ok);
  void* res = NULL;
 sk_paint_set_verticaltext(ra1,ra2);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPaintGetShader(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_paint_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_paint_t*)*a1;
      }
  sk_shader_t* res = sk_paint_get_shader(ra1);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPaintGetMaskfilter(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_paint_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_paint_t*)*a1;
      }
  sk_maskfilter_t* res = sk_paint_get_maskfilter(ra1);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPaintSetColorfilter(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_paint_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_paint_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_colorfilter_t* ra2 = NULL;
    if (ta2 != napi_null) {
      void **a2;
      void *pa2;
      a2 = &pa2;
      status = napi_get_value_external(env, args[1], a2);
      assert(status == napi_ok);
      
      ra2 = (sk_colorfilter_t*)*a2;
      }
  void* res = NULL;
 sk_paint_set_colorfilter(ra1,ra2);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPaintGetColorfilter(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_paint_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_paint_t*)*a1;
      }
  sk_colorfilter_t* res = sk_paint_get_colorfilter(ra1);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPaintSetImagefilter(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_paint_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_paint_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_imagefilter_t* ra2 = NULL;
    if (ta2 != napi_null) {
      void **a2;
      void *pa2;
      a2 = &pa2;
      status = napi_get_value_external(env, args[1], a2);
      assert(status == napi_ok);
      
      ra2 = (sk_imagefilter_t*)*a2;
      }
  void* res = NULL;
 sk_paint_set_imagefilter(ra1,ra2);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPaintGetImagefilter(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_paint_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_paint_t*)*a1;
      }
  sk_imagefilter_t* res = sk_paint_get_imagefilter(ra1);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPaintGetBlendmode(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_paint_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_paint_t*)*a1;
      }
  sk_blendmode_t res = sk_paint_get_blendmode(ra1);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPaintSetFilterQuality(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_paint_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_paint_t*)*a1;
      }
  
  
    
    int ra2;
    status = napi_get_value_int32(env, args[1], &ra2);
    assert(status == napi_ok);
  void* res = NULL;
 sk_paint_set_filter_quality(ra1,ra2);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPaintGetFilterQuality(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_paint_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_paint_t*)*a1;
      }
  sk_filter_quality_t res = sk_paint_get_filter_quality(ra1);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPaintGetTypeface(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_paint_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_paint_t*)*a1;
      }
  sk_typeface_t* res = sk_paint_get_typeface(ra1);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPaintSetTypeface(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_paint_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_paint_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_typeface_t* ra2 = NULL;
    if (ta2 != napi_null) {
      void **a2;
      void *pa2;
      a2 = &pa2;
      status = napi_get_value_external(env, args[1], a2);
      assert(status == napi_ok);
      
      ra2 = (sk_typeface_t*)*a2;
      }
  void* res = NULL;
 sk_paint_set_typeface(ra1,ra2);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPaintGetTextsize(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_paint_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_paint_t*)*a1;
      }
  float res = sk_paint_get_textsize(ra1);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPaintSetTextsize(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_paint_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_paint_t*)*a1;
      }
  
  
    
    double ra2;
    status = napi_get_value_double(env, args[1], &ra2);
    assert(status == napi_ok);
  void* res = NULL;
 sk_paint_set_textsize(ra1,ra2);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPaintGetTextAlign(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_paint_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_paint_t*)*a1;
      }
  sk_text_align_t res = sk_paint_get_text_align(ra1);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPaintSetTextAlign(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_paint_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_paint_t*)*a1;
      }
  
  
    
    int ra2;
    status = napi_get_value_int32(env, args[1], &ra2);
    assert(status == napi_ok);
  void* res = NULL;
 sk_paint_set_text_align(ra1,ra2);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPaintGetTextEncoding(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_paint_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_paint_t*)*a1;
      }
  sk_text_encoding_t res = sk_paint_get_text_encoding(ra1);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPaintSetTextEncoding(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_paint_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_paint_t*)*a1;
      }
  
  
    
    int ra2;
    status = napi_get_value_int32(env, args[1], &ra2);
    assert(status == napi_ok);
  void* res = NULL;
 sk_paint_set_text_encoding(ra1,ra2);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPaintGetTextScaleX(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_paint_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_paint_t*)*a1;
      }
  float res = sk_paint_get_text_scale_x(ra1);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPaintSetTextScaleX(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_paint_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_paint_t*)*a1;
      }
  
  
    
    double ra2;
    status = napi_get_value_double(env, args[1], &ra2);
    assert(status == napi_ok);
  void* res = NULL;
 sk_paint_set_text_scale_x(ra1,ra2);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPaintGetTextSkewX(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_paint_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_paint_t*)*a1;
      }
  float res = sk_paint_get_text_skew_x(ra1);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPaintSetTextSkewX(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_paint_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_paint_t*)*a1;
      }
  
  
    
    double ra2;
    status = napi_get_value_double(env, args[1], &ra2);
    assert(status == napi_ok);
  void* res = NULL;
 sk_paint_set_text_skew_x(ra1,ra2);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPaintBreakText(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 5;
  napi_value args[5];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_paint_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_paint_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    void* ra2 = NULL;
    if (ta2 != napi_null) {
    void **a2;
    void *pa2;
    a2 = &pa2;
    status = napi_get_arraybuffer_info(env, args[1], a2, NULL);
    assert(status == napi_ok);
    
    ra2 = (void*)*a2;
    }
  
  
    
    int ra3;
    status = napi_get_value_int32(env, args[2], &ra3);
    assert(status == napi_ok);
  
  
    
    double ra4;
    status = napi_get_value_double(env, args[3], &ra4);
    assert(status == napi_ok);
  
  
    
    double* ra5 = NULL;
    status = napi_get_value_double(env, args[4], ra5);
    assert(status == napi_ok);
  size_t res = sk_paint_break_text(ra1,ra2,ra3,ra4,ra5);

  
  status = napi_create_int32(env, res, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPaintMeasureText(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 4;
  napi_value args[4];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_paint_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_paint_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    void* ra2 = NULL;
    if (ta2 != napi_null) {
    void **a2;
    void *pa2;
    a2 = &pa2;
    status = napi_get_arraybuffer_info(env, args[1], a2, NULL);
    assert(status == napi_ok);
    
    ra2 = (void*)*a2;
    }
  
  
    
    int ra3;
    status = napi_get_value_int32(env, args[2], &ra3);
    assert(status == napi_ok);
  
  
    napi_valuetype ta4;
    status = napi_typeof(env, args[3], &ta4);
    assert(status == napi_ok);

    
    sk_rect_t* ra4 = NULL;
    if (ta4 != napi_null) {
    void **a4;
    void *pa4;
    a4 = &pa4;
    status = napi_get_arraybuffer_info(env, args[3], a4, NULL);
    assert(status == napi_ok);
    
    ra4 = (sk_rect_t*)*a4;
    }
  float res = sk_paint_measure_text(ra1,ra2,ra3,ra4);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPaintGetTextPath(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 5;
  napi_value args[5];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_paint_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_paint_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    void* ra2 = NULL;
    if (ta2 != napi_null) {
    void **a2;
    void *pa2;
    a2 = &pa2;
    status = napi_get_arraybuffer_info(env, args[1], a2, NULL);
    assert(status == napi_ok);
    
    ra2 = (void*)*a2;
    }
  
  
    
    int ra3;
    status = napi_get_value_int32(env, args[2], &ra3);
    assert(status == napi_ok);
  
  
    
    double ra4;
    status = napi_get_value_double(env, args[3], &ra4);
    assert(status == napi_ok);
  
  
    
    double ra5;
    status = napi_get_value_double(env, args[4], &ra5);
    assert(status == napi_ok);
  sk_path_t* res = sk_paint_get_text_path(ra1,ra2,ra3,ra4,ra5);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPaintGetPosTextPath(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 4;
  napi_value args[4];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_paint_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_paint_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    void* ra2 = NULL;
    if (ta2 != napi_null) {
    void **a2;
    void *pa2;
    a2 = &pa2;
    status = napi_get_arraybuffer_info(env, args[1], a2, NULL);
    assert(status == napi_ok);
    
    ra2 = (void*)*a2;
    }
  
  
    
    int ra3;
    status = napi_get_value_int32(env, args[2], &ra3);
    assert(status == napi_ok);
  
  
    napi_valuetype ta4;
    status = napi_typeof(env, args[3], &ta4);
    assert(status == napi_ok);

    
    sk_point_t* ra4 = NULL;
    if (ta4 != napi_null) {
    void **a4;
    void *pa4;
    a4 = &pa4;
    status = napi_get_arraybuffer_info(env, args[3], a4, NULL);
    assert(status == napi_ok);
    
    ra4 = (sk_point_t*)*a4;
    }
  sk_path_t* res = sk_paint_get_pos_text_path(ra1,ra2,ra3,ra4);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPaintGetFontmetrics(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 3;
  napi_value args[3];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_paint_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_paint_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_fontmetrics_t* ra2 = NULL;
    if (ta2 != napi_null) {
    void **a2;
    void *pa2;
    a2 = &pa2;
    status = napi_get_arraybuffer_info(env, args[1], a2, NULL);
    assert(status == napi_ok);
    
    ra2 = (sk_fontmetrics_t*)*a2;
    }
  
  
    
    double ra3;
    status = napi_get_value_double(env, args[2], &ra3);
    assert(status == napi_ok);
  float res = sk_paint_get_fontmetrics(ra1,ra2,ra3);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPaintGetPathEffect(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_paint_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_paint_t*)*a1;
      }
  sk_path_effect_t* res = sk_paint_get_path_effect(ra1);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPaintSetPathEffect(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_paint_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_paint_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_path_effect_t* ra2 = NULL;
    if (ta2 != napi_null) {
      void **a2;
      void *pa2;
      a2 = &pa2;
      status = napi_get_value_external(env, args[1], a2);
      assert(status == napi_ok);
      
      ra2 = (sk_path_effect_t*)*a2;
      }
  void* res = NULL;
 sk_paint_set_path_effect(ra1,ra2);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPaintIsLinearText(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_paint_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_paint_t*)*a1;
      }
  _Bool res = sk_paint_is_linear_text(ra1);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPaintSetLinearText(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_paint_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_paint_t*)*a1;
      }
  
  
    
    _Bool ra2;
    status = napi_get_value_bool(env, args[1], &ra2);
    assert(status == napi_ok);
  void* res = NULL;
 sk_paint_set_linear_text(ra1,ra2);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPaintIsSubpixelText(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_paint_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_paint_t*)*a1;
      }
  _Bool res = sk_paint_is_subpixel_text(ra1);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPaintSetSubpixelText(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_paint_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_paint_t*)*a1;
      }
  
  
    
    _Bool ra2;
    status = napi_get_value_bool(env, args[1], &ra2);
    assert(status == napi_ok);
  void* res = NULL;
 sk_paint_set_subpixel_text(ra1,ra2);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPaintIsLcdRenderText(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_paint_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_paint_t*)*a1;
      }
  _Bool res = sk_paint_is_lcd_render_text(ra1);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPaintSetLcdRenderText(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_paint_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_paint_t*)*a1;
      }
  
  
    
    _Bool ra2;
    status = napi_get_value_bool(env, args[1], &ra2);
    assert(status == napi_ok);
  void* res = NULL;
 sk_paint_set_lcd_render_text(ra1,ra2);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPaintIsEmbeddedBitmapText(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_paint_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_paint_t*)*a1;
      }
  _Bool res = sk_paint_is_embedded_bitmap_text(ra1);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPaintSetEmbeddedBitmapText(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_paint_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_paint_t*)*a1;
      }
  
  
    
    _Bool ra2;
    status = napi_get_value_bool(env, args[1], &ra2);
    assert(status == napi_ok);
  void* res = NULL;
 sk_paint_set_embedded_bitmap_text(ra1,ra2);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPaintGetHinting(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_paint_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_paint_t*)*a1;
      }
  sk_paint_hinting_t res = sk_paint_get_hinting(ra1);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPaintSetHinting(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_paint_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_paint_t*)*a1;
      }
  
  
    
    int ra2;
    status = napi_get_value_int32(env, args[1], &ra2);
    assert(status == napi_ok);
  void* res = NULL;
 sk_paint_set_hinting(ra1,ra2);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPaintIsAutohinted(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_paint_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_paint_t*)*a1;
      }
  _Bool res = sk_paint_is_autohinted(ra1);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPaintSetAutohinted(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_paint_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_paint_t*)*a1;
      }
  
  
    
    _Bool ra2;
    status = napi_get_value_bool(env, args[1], &ra2);
    assert(status == napi_ok);
  void* res = NULL;
 sk_paint_set_autohinted(ra1,ra2);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPaintIsFakeBoldText(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_paint_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_paint_t*)*a1;
      }
  _Bool res = sk_paint_is_fake_bold_text(ra1);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPaintSetFakeBoldText(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_paint_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_paint_t*)*a1;
      }
  
  
    
    _Bool ra2;
    status = napi_get_value_bool(env, args[1], &ra2);
    assert(status == napi_ok);
  void* res = NULL;
 sk_paint_set_fake_bold_text(ra1,ra2);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPaintIsDevKernText(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_paint_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_paint_t*)*a1;
      }
  _Bool res = sk_paint_is_dev_kern_text(ra1);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPaintSetDevKernText(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_paint_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_paint_t*)*a1;
      }
  
  
    
    _Bool ra2;
    status = napi_get_value_bool(env, args[1], &ra2);
    assert(status == napi_ok);
  void* res = NULL;
 sk_paint_set_dev_kern_text(ra1,ra2);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPaintGetFillPath(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 5;
  napi_value args[5];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_paint_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_paint_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_path_t* ra2 = NULL;
    if (ta2 != napi_null) {
      void **a2;
      void *pa2;
      a2 = &pa2;
      status = napi_get_value_external(env, args[1], a2);
      assert(status == napi_ok);
      
      ra2 = (sk_path_t*)*a2;
      }
  
  
    napi_valuetype ta3;
    status = napi_typeof(env, args[2], &ta3);
    assert(status == napi_ok);

    
    sk_path_t* ra3 = NULL;
    if (ta3 != napi_null) {
      void **a3;
      void *pa3;
      a3 = &pa3;
      status = napi_get_value_external(env, args[2], a3);
      assert(status == napi_ok);
      
      ra3 = (sk_path_t*)*a3;
      }
  
  
    napi_valuetype ta4;
    status = napi_typeof(env, args[3], &ta4);
    assert(status == napi_ok);

    
    sk_rect_t* ra4 = NULL;
    if (ta4 != napi_null) {
    void **a4;
    void *pa4;
    a4 = &pa4;
    status = napi_get_arraybuffer_info(env, args[3], a4, NULL);
    assert(status == napi_ok);
    
    ra4 = (sk_rect_t*)*a4;
    }
  
  
    
    double ra5;
    status = napi_get_value_double(env, args[4], &ra5);
    assert(status == napi_ok);
  _Bool res = sk_paint_get_fill_path(ra1,ra2,ra3,ra4,ra5);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPaintTextToGlyphs(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 4;
  napi_value args[4];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_paint_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_paint_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    void* ra2 = NULL;
    if (ta2 != napi_null) {
    void **a2;
    void *pa2;
    a2 = &pa2;
    status = napi_get_arraybuffer_info(env, args[1], a2, NULL);
    assert(status == napi_ok);
    
    ra2 = (void*)*a2;
    }
  
  
    
    int ra3;
    status = napi_get_value_int32(env, args[2], &ra3);
    assert(status == napi_ok);
  
  
    
    unsigned int* ra4 = NULL;
    status = napi_get_value_uint32(env, args[3], ra4);
    assert(status == napi_ok);
  int res = sk_paint_text_to_glyphs(ra1,ra2,ra3,ra4);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPaintContainsText(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 3;
  napi_value args[3];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_paint_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_paint_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    void* ra2 = NULL;
    if (ta2 != napi_null) {
    void **a2;
    void *pa2;
    a2 = &pa2;
    status = napi_get_arraybuffer_info(env, args[1], a2, NULL);
    assert(status == napi_ok);
    
    ra2 = (void*)*a2;
    }
  
  
    
    int ra3;
    status = napi_get_value_int32(env, args[2], &ra3);
    assert(status == napi_ok);
  _Bool res = sk_paint_contains_text(ra1,ra2,ra3);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPaintCountText(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 3;
  napi_value args[3];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_paint_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_paint_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    void* ra2 = NULL;
    if (ta2 != napi_null) {
    void **a2;
    void *pa2;
    a2 = &pa2;
    status = napi_get_arraybuffer_info(env, args[1], a2, NULL);
    assert(status == napi_ok);
    
    ra2 = (void*)*a2;
    }
  
  
    
    int ra3;
    status = napi_get_value_int32(env, args[2], &ra3);
    assert(status == napi_ok);
  int res = sk_paint_count_text(ra1,ra2,ra3);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPaintGetTextWidths(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 5;
  napi_value args[5];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_paint_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_paint_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    void* ra2 = NULL;
    if (ta2 != napi_null) {
    void **a2;
    void *pa2;
    a2 = &pa2;
    status = napi_get_arraybuffer_info(env, args[1], a2, NULL);
    assert(status == napi_ok);
    
    ra2 = (void*)*a2;
    }
  
  
    
    int ra3;
    status = napi_get_value_int32(env, args[2], &ra3);
    assert(status == napi_ok);
  
  
    
    double* ra4 = NULL;
    status = napi_get_value_double(env, args[3], ra4);
    assert(status == napi_ok);
  
  
    napi_valuetype ta5;
    status = napi_typeof(env, args[4], &ta5);
    assert(status == napi_ok);

    
    sk_rect_t* ra5 = NULL;
    if (ta5 != napi_null) {
    void **a5;
    void *pa5;
    a5 = &pa5;
    status = napi_get_arraybuffer_info(env, args[4], a5, NULL);
    assert(status == napi_ok);
    
    ra5 = (sk_rect_t*)*a5;
    }
  int res = sk_paint_get_text_widths(ra1,ra2,ra3,ra4,ra5);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPaintGetTextIntercepts(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 7;
  napi_value args[7];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_paint_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_paint_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    void* ra2 = NULL;
    if (ta2 != napi_null) {
    void **a2;
    void *pa2;
    a2 = &pa2;
    status = napi_get_arraybuffer_info(env, args[1], a2, NULL);
    assert(status == napi_ok);
    
    ra2 = (void*)*a2;
    }
  
  
    
    int ra3;
    status = napi_get_value_int32(env, args[2], &ra3);
    assert(status == napi_ok);
  
  
    
    double ra4;
    status = napi_get_value_double(env, args[3], &ra4);
    assert(status == napi_ok);
  
  
    
    double ra5;
    status = napi_get_value_double(env, args[4], &ra5);
    assert(status == napi_ok);
  
  
    napi_valuetype ta6;
    status = napi_typeof(env, args[5], &ta6);
    assert(status == napi_ok);

    
    double* ra6 = NULL;
    if (ta6 != napi_null) {
    void **a6;
    void *pa6;
    a6 = &pa6;
    status = napi_get_arraybuffer_info(env, args[5], a6, NULL);
    assert(status == napi_ok);
    
    ra6 = (double*)*a6;
    }
  
  
    
    double* ra7 = NULL;
    status = napi_get_value_double(env, args[6], ra7);
    assert(status == napi_ok);
  int res = sk_paint_get_text_intercepts(ra1,ra2,ra3,ra4,ra5,ra6,ra7);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPaintGetPosTextIntercepts(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 6;
  napi_value args[6];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_paint_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_paint_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    void* ra2 = NULL;
    if (ta2 != napi_null) {
    void **a2;
    void *pa2;
    a2 = &pa2;
    status = napi_get_arraybuffer_info(env, args[1], a2, NULL);
    assert(status == napi_ok);
    
    ra2 = (void*)*a2;
    }
  
  
    
    int ra3;
    status = napi_get_value_int32(env, args[2], &ra3);
    assert(status == napi_ok);
  
  
    napi_valuetype ta4;
    status = napi_typeof(env, args[3], &ta4);
    assert(status == napi_ok);

    
    sk_point_t* ra4 = NULL;
    if (ta4 != napi_null) {
    void **a4;
    void *pa4;
    a4 = &pa4;
    status = napi_get_arraybuffer_info(env, args[3], a4, NULL);
    assert(status == napi_ok);
    
    ra4 = (sk_point_t*)*a4;
    }
  
  
    napi_valuetype ta5;
    status = napi_typeof(env, args[4], &ta5);
    assert(status == napi_ok);

    
    double* ra5 = NULL;
    if (ta5 != napi_null) {
    void **a5;
    void *pa5;
    a5 = &pa5;
    status = napi_get_arraybuffer_info(env, args[4], a5, NULL);
    assert(status == napi_ok);
    
    ra5 = (double*)*a5;
    }
  
  
    
    double* ra6 = NULL;
    status = napi_get_value_double(env, args[5], ra6);
    assert(status == napi_ok);
  int res = sk_paint_get_pos_text_intercepts(ra1,ra2,ra3,ra4,ra5,ra6);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPaintGetPosTextHIntercepts(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 7;
  napi_value args[7];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_paint_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_paint_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    void* ra2 = NULL;
    if (ta2 != napi_null) {
    void **a2;
    void *pa2;
    a2 = &pa2;
    status = napi_get_arraybuffer_info(env, args[1], a2, NULL);
    assert(status == napi_ok);
    
    ra2 = (void*)*a2;
    }
  
  
    
    int ra3;
    status = napi_get_value_int32(env, args[2], &ra3);
    assert(status == napi_ok);
  
  
    
    double* ra4 = NULL;
    status = napi_get_value_double(env, args[3], ra4);
    assert(status == napi_ok);
  
  
    
    double ra5;
    status = napi_get_value_double(env, args[4], &ra5);
    assert(status == napi_ok);
  
  
    napi_valuetype ta6;
    status = napi_typeof(env, args[5], &ta6);
    assert(status == napi_ok);

    
    double* ra6 = NULL;
    if (ta6 != napi_null) {
    void **a6;
    void *pa6;
    a6 = &pa6;
    status = napi_get_arraybuffer_info(env, args[5], a6, NULL);
    assert(status == napi_ok);
    
    ra6 = (double*)*a6;
    }
  
  
    
    double* ra7 = NULL;
    status = napi_get_value_double(env, args[6], ra7);
    assert(status == napi_ok);
  int res = sk_paint_get_pos_text_h_intercepts(ra1,ra2,ra3,ra4,ra5,ra6,ra7);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPaintGetPosTextBlobIntercepts(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 4;
  napi_value args[4];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_paint_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_paint_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_textblob_t* ra2 = NULL;
    if (ta2 != napi_null) {
      void **a2;
      void *pa2;
      a2 = &pa2;
      status = napi_get_value_external(env, args[1], a2);
      assert(status == napi_ok);
      
      ra2 = (sk_textblob_t*)*a2;
      }
  
  
    napi_valuetype ta3;
    status = napi_typeof(env, args[2], &ta3);
    assert(status == napi_ok);

    
    double* ra3 = NULL;
    if (ta3 != napi_null) {
    void **a3;
    void *pa3;
    a3 = &pa3;
    status = napi_get_arraybuffer_info(env, args[2], a3, NULL);
    assert(status == napi_ok);
    
    ra3 = (double*)*a3;
    }
  
  
    
    double* ra4 = NULL;
    status = napi_get_value_double(env, args[3], ra4);
    assert(status == napi_ok);
  int res = sk_paint_get_pos_text_blob_intercepts(ra1,ra2,ra3,ra4);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPathNew(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  sk_path_t* res = sk_path_new();

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPathDelete(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_path_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_path_t*)*a1;
      }
  void* res = NULL;
 sk_path_delete(ra1);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPathMoveTo(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 3;
  napi_value args[3];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_path_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_path_t*)*a1;
      }
  
  
    
    double ra2;
    status = napi_get_value_double(env, args[1], &ra2);
    assert(status == napi_ok);
  
  
    
    double ra3;
    status = napi_get_value_double(env, args[2], &ra3);
    assert(status == napi_ok);
  void* res = NULL;
 sk_path_move_to(ra1,ra2,ra3);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPathLineTo(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 3;
  napi_value args[3];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_path_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_path_t*)*a1;
      }
  
  
    
    double ra2;
    status = napi_get_value_double(env, args[1], &ra2);
    assert(status == napi_ok);
  
  
    
    double ra3;
    status = napi_get_value_double(env, args[2], &ra3);
    assert(status == napi_ok);
  void* res = NULL;
 sk_path_line_to(ra1,ra2,ra3);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPathQuadTo(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 5;
  napi_value args[5];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_path_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_path_t*)*a1;
      }
  
  
    
    double ra2;
    status = napi_get_value_double(env, args[1], &ra2);
    assert(status == napi_ok);
  
  
    
    double ra3;
    status = napi_get_value_double(env, args[2], &ra3);
    assert(status == napi_ok);
  
  
    
    double ra4;
    status = napi_get_value_double(env, args[3], &ra4);
    assert(status == napi_ok);
  
  
    
    double ra5;
    status = napi_get_value_double(env, args[4], &ra5);
    assert(status == napi_ok);
  void* res = NULL;
 sk_path_quad_to(ra1,ra2,ra3,ra4,ra5);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPathConicTo(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 6;
  napi_value args[6];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_path_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_path_t*)*a1;
      }
  
  
    
    double ra2;
    status = napi_get_value_double(env, args[1], &ra2);
    assert(status == napi_ok);
  
  
    
    double ra3;
    status = napi_get_value_double(env, args[2], &ra3);
    assert(status == napi_ok);
  
  
    
    double ra4;
    status = napi_get_value_double(env, args[3], &ra4);
    assert(status == napi_ok);
  
  
    
    double ra5;
    status = napi_get_value_double(env, args[4], &ra5);
    assert(status == napi_ok);
  
  
    
    double ra6;
    status = napi_get_value_double(env, args[5], &ra6);
    assert(status == napi_ok);
  void* res = NULL;
 sk_path_conic_to(ra1,ra2,ra3,ra4,ra5,ra6);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPathCubicTo(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 7;
  napi_value args[7];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_path_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_path_t*)*a1;
      }
  
  
    
    double ra2;
    status = napi_get_value_double(env, args[1], &ra2);
    assert(status == napi_ok);
  
  
    
    double ra3;
    status = napi_get_value_double(env, args[2], &ra3);
    assert(status == napi_ok);
  
  
    
    double ra4;
    status = napi_get_value_double(env, args[3], &ra4);
    assert(status == napi_ok);
  
  
    
    double ra5;
    status = napi_get_value_double(env, args[4], &ra5);
    assert(status == napi_ok);
  
  
    
    double ra6;
    status = napi_get_value_double(env, args[5], &ra6);
    assert(status == napi_ok);
  
  
    
    double ra7;
    status = napi_get_value_double(env, args[6], &ra7);
    assert(status == napi_ok);
  void* res = NULL;
 sk_path_cubic_to(ra1,ra2,ra3,ra4,ra5,ra6,ra7);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPathArcTo(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 8;
  napi_value args[8];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_path_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_path_t*)*a1;
      }
  
  
    
    double ra2;
    status = napi_get_value_double(env, args[1], &ra2);
    assert(status == napi_ok);
  
  
    
    double ra3;
    status = napi_get_value_double(env, args[2], &ra3);
    assert(status == napi_ok);
  
  
    
    double ra4;
    status = napi_get_value_double(env, args[3], &ra4);
    assert(status == napi_ok);
  
  
    
    int ra5;
    status = napi_get_value_int32(env, args[4], &ra5);
    assert(status == napi_ok);
  
  
    
    int ra6;
    status = napi_get_value_int32(env, args[5], &ra6);
    assert(status == napi_ok);
  
  
    
    double ra7;
    status = napi_get_value_double(env, args[6], &ra7);
    assert(status == napi_ok);
  
  
    
    double ra8;
    status = napi_get_value_double(env, args[7], &ra8);
    assert(status == napi_ok);
  void* res = NULL;
 sk_path_arc_to(ra1,ra2,ra3,ra4,ra5,ra6,ra7,ra8);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPathRarcTo(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 8;
  napi_value args[8];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_path_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_path_t*)*a1;
      }
  
  
    
    double ra2;
    status = napi_get_value_double(env, args[1], &ra2);
    assert(status == napi_ok);
  
  
    
    double ra3;
    status = napi_get_value_double(env, args[2], &ra3);
    assert(status == napi_ok);
  
  
    
    double ra4;
    status = napi_get_value_double(env, args[3], &ra4);
    assert(status == napi_ok);
  
  
    
    int ra5;
    status = napi_get_value_int32(env, args[4], &ra5);
    assert(status == napi_ok);
  
  
    
    int ra6;
    status = napi_get_value_int32(env, args[5], &ra6);
    assert(status == napi_ok);
  
  
    
    double ra7;
    status = napi_get_value_double(env, args[6], &ra7);
    assert(status == napi_ok);
  
  
    
    double ra8;
    status = napi_get_value_double(env, args[7], &ra8);
    assert(status == napi_ok);
  void* res = NULL;
 sk_path_rarc_to(ra1,ra2,ra3,ra4,ra5,ra6,ra7,ra8);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPathArcToWithOval(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 5;
  napi_value args[5];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_path_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_path_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_rect_t* ra2 = NULL;
    if (ta2 != napi_null) {
    void **a2;
    void *pa2;
    a2 = &pa2;
    status = napi_get_arraybuffer_info(env, args[1], a2, NULL);
    assert(status == napi_ok);
    
    ra2 = (sk_rect_t*)*a2;
    }
  
  
    
    double ra3;
    status = napi_get_value_double(env, args[2], &ra3);
    assert(status == napi_ok);
  
  
    
    double ra4;
    status = napi_get_value_double(env, args[3], &ra4);
    assert(status == napi_ok);
  
  
    
    _Bool ra5;
    status = napi_get_value_bool(env, args[4], &ra5);
    assert(status == napi_ok);
  void* res = NULL;
 sk_path_arc_to_with_oval(ra1,ra2,ra3,ra4,ra5);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPathArcToWithPoints(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 6;
  napi_value args[6];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_path_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_path_t*)*a1;
      }
  
  
    
    double ra2;
    status = napi_get_value_double(env, args[1], &ra2);
    assert(status == napi_ok);
  
  
    
    double ra3;
    status = napi_get_value_double(env, args[2], &ra3);
    assert(status == napi_ok);
  
  
    
    double ra4;
    status = napi_get_value_double(env, args[3], &ra4);
    assert(status == napi_ok);
  
  
    
    double ra5;
    status = napi_get_value_double(env, args[4], &ra5);
    assert(status == napi_ok);
  
  
    
    double ra6;
    status = napi_get_value_double(env, args[5], &ra6);
    assert(status == napi_ok);
  void* res = NULL;
 sk_path_arc_to_with_points(ra1,ra2,ra3,ra4,ra5,ra6);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPathClose(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_path_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_path_t*)*a1;
      }
  void* res = NULL;
 sk_path_close(ra1);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPathAddRect(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 3;
  napi_value args[3];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_path_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_path_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_rect_t* ra2 = NULL;
    if (ta2 != napi_null) {
    void **a2;
    void *pa2;
    a2 = &pa2;
    status = napi_get_arraybuffer_info(env, args[1], a2, NULL);
    assert(status == napi_ok);
    
    ra2 = (sk_rect_t*)*a2;
    }
  
  
    
    int ra3;
    status = napi_get_value_int32(env, args[2], &ra3);
    assert(status == napi_ok);
  void* res = NULL;
 sk_path_add_rect(ra1,ra2,ra3);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPathAddRrect(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 3;
  napi_value args[3];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_path_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_path_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_rrect_t* ra2 = NULL;
    if (ta2 != napi_null) {
      void **a2;
      void *pa2;
      a2 = &pa2;
      status = napi_get_value_external(env, args[1], a2);
      assert(status == napi_ok);
      
      ra2 = (sk_rrect_t*)*a2;
      }
  
  
    
    int ra3;
    status = napi_get_value_int32(env, args[2], &ra3);
    assert(status == napi_ok);
  void* res = NULL;
 sk_path_add_rrect(ra1,ra2,ra3);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPathAddRrectStart(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 4;
  napi_value args[4];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_path_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_path_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_rrect_t* ra2 = NULL;
    if (ta2 != napi_null) {
      void **a2;
      void *pa2;
      a2 = &pa2;
      status = napi_get_value_external(env, args[1], a2);
      assert(status == napi_ok);
      
      ra2 = (sk_rrect_t*)*a2;
      }
  
  
    
    int ra3;
    status = napi_get_value_int32(env, args[2], &ra3);
    assert(status == napi_ok);
  
  
    
    unsigned int ra4;
    status = napi_get_value_uint32(env, args[3], &ra4);
    assert(status == napi_ok);
  void* res = NULL;
 sk_path_add_rrect_start(ra1,ra2,ra3,ra4);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPathAddRoundedRect(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 5;
  napi_value args[5];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_path_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_path_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_rect_t* ra2 = NULL;
    if (ta2 != napi_null) {
    void **a2;
    void *pa2;
    a2 = &pa2;
    status = napi_get_arraybuffer_info(env, args[1], a2, NULL);
    assert(status == napi_ok);
    
    ra2 = (sk_rect_t*)*a2;
    }
  
  
    
    double ra3;
    status = napi_get_value_double(env, args[2], &ra3);
    assert(status == napi_ok);
  
  
    
    double ra4;
    status = napi_get_value_double(env, args[3], &ra4);
    assert(status == napi_ok);
  
  
    
    int ra5;
    status = napi_get_value_int32(env, args[4], &ra5);
    assert(status == napi_ok);
  void* res = NULL;
 sk_path_add_rounded_rect(ra1,ra2,ra3,ra4,ra5);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPathAddOval(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 3;
  napi_value args[3];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_path_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_path_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_rect_t* ra2 = NULL;
    if (ta2 != napi_null) {
    void **a2;
    void *pa2;
    a2 = &pa2;
    status = napi_get_arraybuffer_info(env, args[1], a2, NULL);
    assert(status == napi_ok);
    
    ra2 = (sk_rect_t*)*a2;
    }
  
  
    
    int ra3;
    status = napi_get_value_int32(env, args[2], &ra3);
    assert(status == napi_ok);
  void* res = NULL;
 sk_path_add_oval(ra1,ra2,ra3);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPathAddCircle(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 5;
  napi_value args[5];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_path_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_path_t*)*a1;
      }
  
  
    
    double ra2;
    status = napi_get_value_double(env, args[1], &ra2);
    assert(status == napi_ok);
  
  
    
    double ra3;
    status = napi_get_value_double(env, args[2], &ra3);
    assert(status == napi_ok);
  
  
    
    double ra4;
    status = napi_get_value_double(env, args[3], &ra4);
    assert(status == napi_ok);
  
  
    
    int ra5;
    status = napi_get_value_int32(env, args[4], &ra5);
    assert(status == napi_ok);
  void* res = NULL;
 sk_path_add_circle(ra1,ra2,ra3,ra4,ra5);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPathGetBounds(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_path_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_path_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_rect_t* ra2 = NULL;
    if (ta2 != napi_null) {
    void **a2;
    void *pa2;
    a2 = &pa2;
    status = napi_get_arraybuffer_info(env, args[1], a2, NULL);
    assert(status == napi_ok);
    
    ra2 = (sk_rect_t*)*a2;
    }
  void* res = NULL;
 sk_path_get_bounds(ra1,ra2);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPathComputeTightBounds(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_path_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_path_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_rect_t* ra2 = NULL;
    if (ta2 != napi_null) {
    void **a2;
    void *pa2;
    a2 = &pa2;
    status = napi_get_arraybuffer_info(env, args[1], a2, NULL);
    assert(status == napi_ok);
    
    ra2 = (sk_rect_t*)*a2;
    }
  void* res = NULL;
 sk_path_compute_tight_bounds(ra1,ra2);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPathRmoveTo(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 3;
  napi_value args[3];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_path_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_path_t*)*a1;
      }
  
  
    
    double ra2;
    status = napi_get_value_double(env, args[1], &ra2);
    assert(status == napi_ok);
  
  
    
    double ra3;
    status = napi_get_value_double(env, args[2], &ra3);
    assert(status == napi_ok);
  void* res = NULL;
 sk_path_rmove_to(ra1,ra2,ra3);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPathRlineTo(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 3;
  napi_value args[3];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_path_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_path_t*)*a1;
      }
  
  
    
    double ra2;
    status = napi_get_value_double(env, args[1], &ra2);
    assert(status == napi_ok);
  
  
    
    double ra3;
    status = napi_get_value_double(env, args[2], &ra3);
    assert(status == napi_ok);
  void* res = NULL;
 sk_path_rline_to(ra1,ra2,ra3);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPathRquadTo(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 5;
  napi_value args[5];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_path_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_path_t*)*a1;
      }
  
  
    
    double ra2;
    status = napi_get_value_double(env, args[1], &ra2);
    assert(status == napi_ok);
  
  
    
    double ra3;
    status = napi_get_value_double(env, args[2], &ra3);
    assert(status == napi_ok);
  
  
    
    double ra4;
    status = napi_get_value_double(env, args[3], &ra4);
    assert(status == napi_ok);
  
  
    
    double ra5;
    status = napi_get_value_double(env, args[4], &ra5);
    assert(status == napi_ok);
  void* res = NULL;
 sk_path_rquad_to(ra1,ra2,ra3,ra4,ra5);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPathRconicTo(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 6;
  napi_value args[6];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_path_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_path_t*)*a1;
      }
  
  
    
    double ra2;
    status = napi_get_value_double(env, args[1], &ra2);
    assert(status == napi_ok);
  
  
    
    double ra3;
    status = napi_get_value_double(env, args[2], &ra3);
    assert(status == napi_ok);
  
  
    
    double ra4;
    status = napi_get_value_double(env, args[3], &ra4);
    assert(status == napi_ok);
  
  
    
    double ra5;
    status = napi_get_value_double(env, args[4], &ra5);
    assert(status == napi_ok);
  
  
    
    double ra6;
    status = napi_get_value_double(env, args[5], &ra6);
    assert(status == napi_ok);
  void* res = NULL;
 sk_path_rconic_to(ra1,ra2,ra3,ra4,ra5,ra6);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPathRcubicTo(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 7;
  napi_value args[7];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_path_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_path_t*)*a1;
      }
  
  
    
    double ra2;
    status = napi_get_value_double(env, args[1], &ra2);
    assert(status == napi_ok);
  
  
    
    double ra3;
    status = napi_get_value_double(env, args[2], &ra3);
    assert(status == napi_ok);
  
  
    
    double ra4;
    status = napi_get_value_double(env, args[3], &ra4);
    assert(status == napi_ok);
  
  
    
    double ra5;
    status = napi_get_value_double(env, args[4], &ra5);
    assert(status == napi_ok);
  
  
    
    double ra6;
    status = napi_get_value_double(env, args[5], &ra6);
    assert(status == napi_ok);
  
  
    
    double ra7;
    status = napi_get_value_double(env, args[6], &ra7);
    assert(status == napi_ok);
  void* res = NULL;
 sk_path_rcubic_to(ra1,ra2,ra3,ra4,ra5,ra6,ra7);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPathAddRectStart(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 4;
  napi_value args[4];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_path_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_path_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_rect_t* ra2 = NULL;
    if (ta2 != napi_null) {
    void **a2;
    void *pa2;
    a2 = &pa2;
    status = napi_get_arraybuffer_info(env, args[1], a2, NULL);
    assert(status == napi_ok);
    
    ra2 = (sk_rect_t*)*a2;
    }
  
  
    
    int ra3;
    status = napi_get_value_int32(env, args[2], &ra3);
    assert(status == napi_ok);
  
  
    
    unsigned int ra4;
    status = napi_get_value_uint32(env, args[3], &ra4);
    assert(status == napi_ok);
  void* res = NULL;
 sk_path_add_rect_start(ra1,ra2,ra3,ra4);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPathAddArc(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 4;
  napi_value args[4];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_path_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_path_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_rect_t* ra2 = NULL;
    if (ta2 != napi_null) {
    void **a2;
    void *pa2;
    a2 = &pa2;
    status = napi_get_arraybuffer_info(env, args[1], a2, NULL);
    assert(status == napi_ok);
    
    ra2 = (sk_rect_t*)*a2;
    }
  
  
    
    double ra3;
    status = napi_get_value_double(env, args[2], &ra3);
    assert(status == napi_ok);
  
  
    
    double ra4;
    status = napi_get_value_double(env, args[3], &ra4);
    assert(status == napi_ok);
  void* res = NULL;
 sk_path_add_arc(ra1,ra2,ra3,ra4);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPathGetFilltype(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_path_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_path_t*)*a1;
      }
  sk_path_filltype_t res = sk_path_get_filltype(ra1);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPathSetFilltype(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_path_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_path_t*)*a1;
      }
  
  
    
    int ra2;
    status = napi_get_value_int32(env, args[1], &ra2);
    assert(status == napi_ok);
  void* res = NULL;
 sk_path_set_filltype(ra1,ra2);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPathTransform(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_path_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_path_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_matrix_t* ra2 = NULL;
    if (ta2 != napi_null) {
    void **a2;
    void *pa2;
    a2 = &pa2;
    status = napi_get_arraybuffer_info(env, args[1], a2, NULL);
    assert(status == napi_ok);
    
    ra2 = (sk_matrix_t*)*a2;
    }
  void* res = NULL;
 sk_path_transform(ra1,ra2);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPathClone(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_path_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_path_t*)*a1;
      }
  sk_path_t* res = sk_path_clone(ra1);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPathAddPathOffset(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 5;
  napi_value args[5];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_path_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_path_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_path_t* ra2 = NULL;
    if (ta2 != napi_null) {
      void **a2;
      void *pa2;
      a2 = &pa2;
      status = napi_get_value_external(env, args[1], a2);
      assert(status == napi_ok);
      
      ra2 = (sk_path_t*)*a2;
      }
  
  
    
    double ra3;
    status = napi_get_value_double(env, args[2], &ra3);
    assert(status == napi_ok);
  
  
    
    double ra4;
    status = napi_get_value_double(env, args[3], &ra4);
    assert(status == napi_ok);
  
  
    
    int ra5;
    status = napi_get_value_int32(env, args[4], &ra5);
    assert(status == napi_ok);
  void* res = NULL;
 sk_path_add_path_offset(ra1,ra2,ra3,ra4,ra5);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPathAddPathMatrix(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 4;
  napi_value args[4];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_path_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_path_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_path_t* ra2 = NULL;
    if (ta2 != napi_null) {
      void **a2;
      void *pa2;
      a2 = &pa2;
      status = napi_get_value_external(env, args[1], a2);
      assert(status == napi_ok);
      
      ra2 = (sk_path_t*)*a2;
      }
  
  
    napi_valuetype ta3;
    status = napi_typeof(env, args[2], &ta3);
    assert(status == napi_ok);

    
    sk_matrix_t* ra3 = NULL;
    if (ta3 != napi_null) {
    void **a3;
    void *pa3;
    a3 = &pa3;
    status = napi_get_arraybuffer_info(env, args[2], a3, NULL);
    assert(status == napi_ok);
    
    ra3 = (sk_matrix_t*)*a3;
    }
  
  
    
    int ra4;
    status = napi_get_value_int32(env, args[3], &ra4);
    assert(status == napi_ok);
  void* res = NULL;
 sk_path_add_path_matrix(ra1,ra2,ra3,ra4);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPathAddPath(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 3;
  napi_value args[3];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_path_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_path_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_path_t* ra2 = NULL;
    if (ta2 != napi_null) {
      void **a2;
      void *pa2;
      a2 = &pa2;
      status = napi_get_value_external(env, args[1], a2);
      assert(status == napi_ok);
      
      ra2 = (sk_path_t*)*a2;
      }
  
  
    
    int ra3;
    status = napi_get_value_int32(env, args[2], &ra3);
    assert(status == napi_ok);
  void* res = NULL;
 sk_path_add_path(ra1,ra2,ra3);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPathAddPathReverse(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_path_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_path_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_path_t* ra2 = NULL;
    if (ta2 != napi_null) {
      void **a2;
      void *pa2;
      a2 = &pa2;
      status = napi_get_value_external(env, args[1], a2);
      assert(status == napi_ok);
      
      ra2 = (sk_path_t*)*a2;
      }
  void* res = NULL;
 sk_path_add_path_reverse(ra1,ra2);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPathReset(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_path_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_path_t*)*a1;
      }
  void* res = NULL;
 sk_path_reset(ra1);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPathRewind(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_path_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_path_t*)*a1;
      }
  void* res = NULL;
 sk_path_rewind(ra1);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPathCountPoints(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_path_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_path_t*)*a1;
      }
  int res = sk_path_count_points(ra1);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPathCountVerbs(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_path_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_path_t*)*a1;
      }
  int res = sk_path_count_verbs(ra1);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPathGetPoint(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 3;
  napi_value args[3];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_path_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_path_t*)*a1;
      }
  
  
    
    int ra2;
    status = napi_get_value_int32(env, args[1], &ra2);
    assert(status == napi_ok);
  
  
    napi_valuetype ta3;
    status = napi_typeof(env, args[2], &ta3);
    assert(status == napi_ok);

    
    sk_point_t* ra3 = NULL;
    if (ta3 != napi_null) {
    void **a3;
    void *pa3;
    a3 = &pa3;
    status = napi_get_arraybuffer_info(env, args[2], a3, NULL);
    assert(status == napi_ok);
    
    ra3 = (sk_point_t*)*a3;
    }
  void* res = NULL;
 sk_path_get_point(ra1,ra2,ra3);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPathGetPoints(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 3;
  napi_value args[3];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_path_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_path_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_point_t* ra2 = NULL;
    if (ta2 != napi_null) {
    void **a2;
    void *pa2;
    a2 = &pa2;
    status = napi_get_arraybuffer_info(env, args[1], a2, NULL);
    assert(status == napi_ok);
    
    ra2 = (sk_point_t*)*a2;
    }
  
  
    
    int ra3;
    status = napi_get_value_int32(env, args[2], &ra3);
    assert(status == napi_ok);
  int res = sk_path_get_points(ra1,ra2,ra3);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPathContains(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 3;
  napi_value args[3];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_path_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_path_t*)*a1;
      }
  
  
    
    double ra2;
    status = napi_get_value_double(env, args[1], &ra2);
    assert(status == napi_ok);
  
  
    
    double ra3;
    status = napi_get_value_double(env, args[2], &ra3);
    assert(status == napi_ok);
  _Bool res = sk_path_contains(ra1,ra2,ra3);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPathGetConvexity(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_path_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_path_t*)*a1;
      }
  sk_path_convexity_t res = sk_path_get_convexity(ra1);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPathSetConvexity(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_path_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_path_t*)*a1;
      }
  
  
    
    int ra2;
    status = napi_get_value_int32(env, args[1], &ra2);
    assert(status == napi_ok);
  void* res = NULL;
 sk_path_set_convexity(ra1,ra2);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPathParseSvgString(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_path_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_path_t*)*a1;
      }
  
  
    size_t la2;
    status = napi_get_value_string_utf8(env, args[1], NULL, 0, &la2);
    assert(status == napi_ok);
    char* ra2 = (char*)malloc(la2 + 1);
    status = napi_get_value_string_utf8(env, args[1], ra2, la2 + 1, &la2);
    assert(status == napi_ok);
  _Bool res = sk_path_parse_svg_string(ra1,ra2);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPathToSvgString(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_path_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_path_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_string_t* ra2 = NULL;
    if (ta2 != napi_null) {
      void **a2;
      void *pa2;
      a2 = &pa2;
      status = napi_get_value_external(env, args[1], a2);
      assert(status == napi_ok);
      
      ra2 = (sk_string_t*)*a2;
      }
  void* res = NULL;
 sk_path_to_svg_string(ra1,ra2);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPathGetLastPoint(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_path_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_path_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_point_t* ra2 = NULL;
    if (ta2 != napi_null) {
    void **a2;
    void *pa2;
    a2 = &pa2;
    status = napi_get_arraybuffer_info(env, args[1], a2, NULL);
    assert(status == napi_ok);
    
    ra2 = (sk_point_t*)*a2;
    }
  _Bool res = sk_path_get_last_point(ra1,ra2);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPathConvertConicToQuads(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 6;
  napi_value args[6];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_point_t* ra1 = NULL;
    if (ta1 != napi_null) {
    void **a1;
    void *pa1;
    a1 = &pa1;
    status = napi_get_arraybuffer_info(env, args[0], a1, NULL);
    assert(status == napi_ok);
    
    ra1 = (sk_point_t*)*a1;
    }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_point_t* ra2 = NULL;
    if (ta2 != napi_null) {
    void **a2;
    void *pa2;
    a2 = &pa2;
    status = napi_get_arraybuffer_info(env, args[1], a2, NULL);
    assert(status == napi_ok);
    
    ra2 = (sk_point_t*)*a2;
    }
  
  
    napi_valuetype ta3;
    status = napi_typeof(env, args[2], &ta3);
    assert(status == napi_ok);

    
    sk_point_t* ra3 = NULL;
    if (ta3 != napi_null) {
    void **a3;
    void *pa3;
    a3 = &pa3;
    status = napi_get_arraybuffer_info(env, args[2], a3, NULL);
    assert(status == napi_ok);
    
    ra3 = (sk_point_t*)*a3;
    }
  
  
    
    double ra4;
    status = napi_get_value_double(env, args[3], &ra4);
    assert(status == napi_ok);
  
  
    napi_valuetype ta5;
    status = napi_typeof(env, args[4], &ta5);
    assert(status == napi_ok);

    
    sk_point_t* ra5 = NULL;
    if (ta5 != napi_null) {
    void **a5;
    void *pa5;
    a5 = &pa5;
    status = napi_get_arraybuffer_info(env, args[4], a5, NULL);
    assert(status == napi_ok);
    
    ra5 = (sk_point_t*)*a5;
    }
  
  
    
    int ra6;
    status = napi_get_value_int32(env, args[5], &ra6);
    assert(status == napi_ok);
  int res = sk_path_convert_conic_to_quads(ra1,ra2,ra3,ra4,ra5,ra6);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPathAddPoly(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 4;
  napi_value args[4];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_path_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_path_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_point_t* ra2 = NULL;
    if (ta2 != napi_null) {
    void **a2;
    void *pa2;
    a2 = &pa2;
    status = napi_get_arraybuffer_info(env, args[1], a2, NULL);
    assert(status == napi_ok);
    
    ra2 = (sk_point_t*)*a2;
    }
  
  
    
    int ra3;
    status = napi_get_value_int32(env, args[2], &ra3);
    assert(status == napi_ok);
  
  
    
    _Bool ra4;
    status = napi_get_value_bool(env, args[3], &ra4);
    assert(status == napi_ok);
  void* res = NULL;
 sk_path_add_poly(ra1,ra2,ra3,ra4);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPathGetSegmentMasks(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_path_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_path_t*)*a1;
      }
  uint32_t res = sk_path_get_segment_masks(ra1);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPathIsOval(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_path_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_path_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_rect_t* ra2 = NULL;
    if (ta2 != napi_null) {
    void **a2;
    void *pa2;
    a2 = &pa2;
    status = napi_get_arraybuffer_info(env, args[1], a2, NULL);
    assert(status == napi_ok);
    
    ra2 = (sk_rect_t*)*a2;
    }
  _Bool res = sk_path_is_oval(ra1,ra2);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPathIsRrect(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_path_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_path_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_rrect_t* ra2 = NULL;
    if (ta2 != napi_null) {
      void **a2;
      void *pa2;
      a2 = &pa2;
      status = napi_get_value_external(env, args[1], a2);
      assert(status == napi_ok);
      
      ra2 = (sk_rrect_t*)*a2;
      }
  _Bool res = sk_path_is_rrect(ra1,ra2);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPathIsLine(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_path_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_path_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_point_t* ra2 = NULL;
    if (ta2 != napi_null) {
    void **a2;
    void *pa2;
    a2 = &pa2;
    status = napi_get_arraybuffer_info(env, args[1], a2, NULL);
    assert(status == napi_ok);
    
    ra2 = (sk_point_t*)*a2;
    }
  _Bool res = sk_path_is_line(ra1,ra2);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPathIsRect(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 4;
  napi_value args[4];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_path_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_path_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_rect_t* ra2 = NULL;
    if (ta2 != napi_null) {
    void **a2;
    void *pa2;
    a2 = &pa2;
    status = napi_get_arraybuffer_info(env, args[1], a2, NULL);
    assert(status == napi_ok);
    
    ra2 = (sk_rect_t*)*a2;
    }
  
  
    
    _Bool* ra3 = NULL;
    status = napi_get_value_bool(env, args[2], ra3);
    assert(status == napi_ok);
  
  
    
    int* ra4 = NULL;
    status = napi_get_value_int32(env, args[3], ra4);
    assert(status == napi_ok);
  _Bool res = sk_path_is_rect(ra1,ra2,ra3,ra4);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPathCreateIter(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_path_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_path_t*)*a1;
      }
  
  
    
    int ra2;
    status = napi_get_value_int32(env, args[1], &ra2);
    assert(status == napi_ok);
  sk_path_iterator_t* res = sk_path_create_iter(ra1,ra2);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPathIterNext(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 4;
  napi_value args[4];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_path_iterator_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_path_iterator_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_point_t* ra2 = NULL;
    if (ta2 != napi_null) {
    void **a2;
    void *pa2;
    a2 = &pa2;
    status = napi_get_arraybuffer_info(env, args[1], a2, NULL);
    assert(status == napi_ok);
    
    ra2 = (sk_point_t*)*a2;
    }
  
  
    
    int ra3;
    status = napi_get_value_int32(env, args[2], &ra3);
    assert(status == napi_ok);
  
  
    
    int ra4;
    status = napi_get_value_int32(env, args[3], &ra4);
    assert(status == napi_ok);
  sk_path_verb_t res = sk_path_iter_next(ra1,ra2,ra3,ra4);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPathIterConicWeight(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_path_iterator_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_path_iterator_t*)*a1;
      }
  float res = sk_path_iter_conic_weight(ra1);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPathIterIsCloseLine(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_path_iterator_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_path_iterator_t*)*a1;
      }
  int res = sk_path_iter_is_close_line(ra1);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPathIterIsClosedContour(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_path_iterator_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_path_iterator_t*)*a1;
      }
  int res = sk_path_iter_is_closed_contour(ra1);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPathIterDestroy(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_path_iterator_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_path_iterator_t*)*a1;
      }
  void* res = NULL;
 sk_path_iter_destroy(ra1);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPathCreateRawiter(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_path_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_path_t*)*a1;
      }
  sk_path_rawiterator_t* res = sk_path_create_rawiter(ra1);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPathRawiterPeek(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_path_rawiterator_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_path_rawiterator_t*)*a1;
      }
  sk_path_verb_t res = sk_path_rawiter_peek(ra1);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPathRawiterNext(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_path_rawiterator_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_path_rawiterator_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_point_t* ra2 = NULL;
    if (ta2 != napi_null) {
    void **a2;
    void *pa2;
    a2 = &pa2;
    status = napi_get_arraybuffer_info(env, args[1], a2, NULL);
    assert(status == napi_ok);
    
    ra2 = (sk_point_t*)*a2;
    }
  sk_path_verb_t res = sk_path_rawiter_next(ra1,ra2);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPathRawiterConicWeight(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_path_rawiterator_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_path_rawiterator_t*)*a1;
      }
  float res = sk_path_rawiter_conic_weight(ra1);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPathRawiterDestroy(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_path_rawiterator_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_path_rawiterator_t*)*a1;
      }
  void* res = NULL;
 sk_path_rawiter_destroy(ra1);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPathopOp(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 4;
  napi_value args[4];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_path_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_path_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_path_t* ra2 = NULL;
    if (ta2 != napi_null) {
      void **a2;
      void *pa2;
      a2 = &pa2;
      status = napi_get_value_external(env, args[1], a2);
      assert(status == napi_ok);
      
      ra2 = (sk_path_t*)*a2;
      }
  
  
    
    int ra3;
    status = napi_get_value_int32(env, args[2], &ra3);
    assert(status == napi_ok);
  
  
    napi_valuetype ta4;
    status = napi_typeof(env, args[3], &ta4);
    assert(status == napi_ok);

    
    sk_path_t* ra4 = NULL;
    if (ta4 != napi_null) {
      void **a4;
      void *pa4;
      a4 = &pa4;
      status = napi_get_value_external(env, args[3], a4);
      assert(status == napi_ok);
      
      ra4 = (sk_path_t*)*a4;
      }
  _Bool res = sk_pathop_op(ra1,ra2,ra3,ra4);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPathopSimplify(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_path_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_path_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_path_t* ra2 = NULL;
    if (ta2 != napi_null) {
      void **a2;
      void *pa2;
      a2 = &pa2;
      status = napi_get_value_external(env, args[1], a2);
      assert(status == napi_ok);
      
      ra2 = (sk_path_t*)*a2;
      }
  _Bool res = sk_pathop_simplify(ra1,ra2);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPathopTightBounds(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_path_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_path_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_rect_t* ra2 = NULL;
    if (ta2 != napi_null) {
    void **a2;
    void *pa2;
    a2 = &pa2;
    status = napi_get_arraybuffer_info(env, args[1], a2, NULL);
    assert(status == napi_ok);
    
    ra2 = (sk_rect_t*)*a2;
    }
  _Bool res = sk_pathop_tight_bounds(ra1,ra2);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skOpbuilderNew(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  sk_opbuilder_t* res = sk_opbuilder_new();

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skOpbuilderDestroy(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_opbuilder_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_opbuilder_t*)*a1;
      }
  void* res = NULL;
 sk_opbuilder_destroy(ra1);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skOpbuilderAdd(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 3;
  napi_value args[3];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_opbuilder_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_opbuilder_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_path_t* ra2 = NULL;
    if (ta2 != napi_null) {
      void **a2;
      void *pa2;
      a2 = &pa2;
      status = napi_get_value_external(env, args[1], a2);
      assert(status == napi_ok);
      
      ra2 = (sk_path_t*)*a2;
      }
  
  
    
    int ra3;
    status = napi_get_value_int32(env, args[2], &ra3);
    assert(status == napi_ok);
  void* res = NULL;
 sk_opbuilder_add(ra1,ra2,ra3);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skOpbuilderResolve(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_opbuilder_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_opbuilder_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_path_t* ra2 = NULL;
    if (ta2 != napi_null) {
      void **a2;
      void *pa2;
      a2 = &pa2;
      status = napi_get_value_external(env, args[1], a2);
      assert(status == napi_ok);
      
      ra2 = (sk_path_t*)*a2;
      }
  _Bool res = sk_opbuilder_resolve(ra1,ra2);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPathmeasureNew(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  sk_pathmeasure_t* res = sk_pathmeasure_new();

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPathmeasureNewWithPath(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 3;
  napi_value args[3];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_path_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_path_t*)*a1;
      }
  
  
    
    _Bool ra2;
    status = napi_get_value_bool(env, args[1], &ra2);
    assert(status == napi_ok);
  
  
    
    double ra3;
    status = napi_get_value_double(env, args[2], &ra3);
    assert(status == napi_ok);
  sk_pathmeasure_t* res = sk_pathmeasure_new_with_path(ra1,ra2,ra3);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPathmeasureDestroy(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_pathmeasure_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_pathmeasure_t*)*a1;
      }
  void* res = NULL;
 sk_pathmeasure_destroy(ra1);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPathmeasureSetPath(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 3;
  napi_value args[3];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_pathmeasure_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_pathmeasure_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_path_t* ra2 = NULL;
    if (ta2 != napi_null) {
      void **a2;
      void *pa2;
      a2 = &pa2;
      status = napi_get_value_external(env, args[1], a2);
      assert(status == napi_ok);
      
      ra2 = (sk_path_t*)*a2;
      }
  
  
    
    _Bool ra3;
    status = napi_get_value_bool(env, args[2], &ra3);
    assert(status == napi_ok);
  void* res = NULL;
 sk_pathmeasure_set_path(ra1,ra2,ra3);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPathmeasureGetLength(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_pathmeasure_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_pathmeasure_t*)*a1;
      }
  float res = sk_pathmeasure_get_length(ra1);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPathmeasureGetPosTan(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 4;
  napi_value args[4];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_pathmeasure_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_pathmeasure_t*)*a1;
      }
  
  
    
    double ra2;
    status = napi_get_value_double(env, args[1], &ra2);
    assert(status == napi_ok);
  
  
    napi_valuetype ta3;
    status = napi_typeof(env, args[2], &ta3);
    assert(status == napi_ok);

    
    sk_point_t* ra3 = NULL;
    if (ta3 != napi_null) {
    void **a3;
    void *pa3;
    a3 = &pa3;
    status = napi_get_arraybuffer_info(env, args[2], a3, NULL);
    assert(status == napi_ok);
    
    ra3 = (sk_point_t*)*a3;
    }
  
  
    napi_valuetype ta4;
    status = napi_typeof(env, args[3], &ta4);
    assert(status == napi_ok);

    
    sk_vector_t* ra4 = NULL;
    if (ta4 != napi_null) {
    void **a4;
    void *pa4;
    a4 = &pa4;
    status = napi_get_arraybuffer_info(env, args[3], a4, NULL);
    assert(status == napi_ok);
    
    ra4 = (sk_vector_t*)*a4;
    }
  _Bool res = sk_pathmeasure_get_pos_tan(ra1,ra2,ra3,ra4);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPathmeasureGetMatrix(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 4;
  napi_value args[4];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_pathmeasure_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_pathmeasure_t*)*a1;
      }
  
  
    
    double ra2;
    status = napi_get_value_double(env, args[1], &ra2);
    assert(status == napi_ok);
  
  
    napi_valuetype ta3;
    status = napi_typeof(env, args[2], &ta3);
    assert(status == napi_ok);

    
    sk_matrix_t* ra3 = NULL;
    if (ta3 != napi_null) {
    void **a3;
    void *pa3;
    a3 = &pa3;
    status = napi_get_arraybuffer_info(env, args[2], a3, NULL);
    assert(status == napi_ok);
    
    ra3 = (sk_matrix_t*)*a3;
    }
  
  
    
    int ra4;
    status = napi_get_value_int32(env, args[3], &ra4);
    assert(status == napi_ok);
  _Bool res = sk_pathmeasure_get_matrix(ra1,ra2,ra3,ra4);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPathmeasureGetSegment(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 5;
  napi_value args[5];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_pathmeasure_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_pathmeasure_t*)*a1;
      }
  
  
    
    double ra2;
    status = napi_get_value_double(env, args[1], &ra2);
    assert(status == napi_ok);
  
  
    
    double ra3;
    status = napi_get_value_double(env, args[2], &ra3);
    assert(status == napi_ok);
  
  
    napi_valuetype ta4;
    status = napi_typeof(env, args[3], &ta4);
    assert(status == napi_ok);

    
    sk_path_t* ra4 = NULL;
    if (ta4 != napi_null) {
      void **a4;
      void *pa4;
      a4 = &pa4;
      status = napi_get_value_external(env, args[3], a4);
      assert(status == napi_ok);
      
      ra4 = (sk_path_t*)*a4;
      }
  
  
    
    _Bool ra5;
    status = napi_get_value_bool(env, args[4], &ra5);
    assert(status == napi_ok);
  _Bool res = sk_pathmeasure_get_segment(ra1,ra2,ra3,ra4,ra5);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPathmeasureIsClosed(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_pathmeasure_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_pathmeasure_t*)*a1;
      }
  _Bool res = sk_pathmeasure_is_closed(ra1);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPathmeasureNextContour(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_pathmeasure_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_pathmeasure_t*)*a1;
      }
  _Bool res = sk_pathmeasure_next_contour(ra1);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPathEffectUnref(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_path_effect_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_path_effect_t*)*a1;
      }
  void* res = NULL;
 sk_path_effect_unref(ra1);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPathEffectCreateCompose(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_path_effect_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_path_effect_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_path_effect_t* ra2 = NULL;
    if (ta2 != napi_null) {
      void **a2;
      void *pa2;
      a2 = &pa2;
      status = napi_get_value_external(env, args[1], a2);
      assert(status == napi_ok);
      
      ra2 = (sk_path_effect_t*)*a2;
      }
  sk_path_effect_t* res = sk_path_effect_create_compose(ra1,ra2);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPathEffectCreateSum(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_path_effect_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_path_effect_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_path_effect_t* ra2 = NULL;
    if (ta2 != napi_null) {
      void **a2;
      void *pa2;
      a2 = &pa2;
      status = napi_get_value_external(env, args[1], a2);
      assert(status == napi_ok);
      
      ra2 = (sk_path_effect_t*)*a2;
      }
  sk_path_effect_t* res = sk_path_effect_create_sum(ra1,ra2);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPathEffectCreateDiscrete(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 3;
  napi_value args[3];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    
    double ra1;
    status = napi_get_value_double(env, args[0], &ra1);
    assert(status == napi_ok);
  
  
    
    double ra2;
    status = napi_get_value_double(env, args[1], &ra2);
    assert(status == napi_ok);
  
  
    
    unsigned int ra3;
    status = napi_get_value_uint32(env, args[2], &ra3);
    assert(status == napi_ok);
  sk_path_effect_t* res = sk_path_effect_create_discrete(ra1,ra2,ra3);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPathEffectCreateCorner(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    
    double ra1;
    status = napi_get_value_double(env, args[0], &ra1);
    assert(status == napi_ok);
  sk_path_effect_t* res = sk_path_effect_create_corner(ra1);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPathEffectCreate_1dPath(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 4;
  napi_value args[4];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_path_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_path_t*)*a1;
      }
  
  
    
    double ra2;
    status = napi_get_value_double(env, args[1], &ra2);
    assert(status == napi_ok);
  
  
    
    double ra3;
    status = napi_get_value_double(env, args[2], &ra3);
    assert(status == napi_ok);
  
  
    
    int ra4;
    status = napi_get_value_int32(env, args[3], &ra4);
    assert(status == napi_ok);
  sk_path_effect_t* res = sk_path_effect_create_1d_path(ra1,ra2,ra3,ra4);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPathEffectCreate_2dLine(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    
    double ra1;
    status = napi_get_value_double(env, args[0], &ra1);
    assert(status == napi_ok);
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_matrix_t* ra2 = NULL;
    if (ta2 != napi_null) {
    void **a2;
    void *pa2;
    a2 = &pa2;
    status = napi_get_arraybuffer_info(env, args[1], a2, NULL);
    assert(status == napi_ok);
    
    ra2 = (sk_matrix_t*)*a2;
    }
  sk_path_effect_t* res = sk_path_effect_create_2d_line(ra1,ra2);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPathEffectCreate_2dPath(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_matrix_t* ra1 = NULL;
    if (ta1 != napi_null) {
    void **a1;
    void *pa1;
    a1 = &pa1;
    status = napi_get_arraybuffer_info(env, args[0], a1, NULL);
    assert(status == napi_ok);
    
    ra1 = (sk_matrix_t*)*a1;
    }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_path_t* ra2 = NULL;
    if (ta2 != napi_null) {
      void **a2;
      void *pa2;
      a2 = &pa2;
      status = napi_get_value_external(env, args[1], a2);
      assert(status == napi_ok);
      
      ra2 = (sk_path_t*)*a2;
      }
  sk_path_effect_t* res = sk_path_effect_create_2d_path(ra1,ra2);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPathEffectCreateDash(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 3;
  napi_value args[3];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    double* ra1 = NULL;
    if (ta1 != napi_null) {
    void **a1;
    void *pa1;
    a1 = &pa1;
    status = napi_get_arraybuffer_info(env, args[0], a1, NULL);
    assert(status == napi_ok);
    
    ra1 = (double*)*a1;
    }
  
  
    
    int ra2;
    status = napi_get_value_int32(env, args[1], &ra2);
    assert(status == napi_ok);
  
  
    
    double ra3;
    status = napi_get_value_double(env, args[2], &ra3);
    assert(status == napi_ok);
  sk_path_effect_t* res = sk_path_effect_create_dash(ra1,ra2,ra3);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPathEffectCreateTrim(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 3;
  napi_value args[3];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    
    double ra1;
    status = napi_get_value_double(env, args[0], &ra1);
    assert(status == napi_ok);
  
  
    
    double ra2;
    status = napi_get_value_double(env, args[1], &ra2);
    assert(status == napi_ok);
  
  
    
    int ra3;
    status = napi_get_value_int32(env, args[2], &ra3);
    assert(status == napi_ok);
  sk_path_effect_t* res = sk_path_effect_create_trim(ra1,ra2,ra3);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPictureRecorderNew(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  sk_picture_recorder_t* res = sk_picture_recorder_new();

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPictureRecorderDelete(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_picture_recorder_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_picture_recorder_t*)*a1;
      }
  void* res = NULL;
 sk_picture_recorder_delete(ra1);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPictureRecorderBeginRecording(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_picture_recorder_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_picture_recorder_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_rect_t* ra2 = NULL;
    if (ta2 != napi_null) {
    void **a2;
    void *pa2;
    a2 = &pa2;
    status = napi_get_arraybuffer_info(env, args[1], a2, NULL);
    assert(status == napi_ok);
    
    ra2 = (sk_rect_t*)*a2;
    }
  sk_canvas_t* res = sk_picture_recorder_begin_recording(ra1,ra2);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPictureRecorderEndRecording(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_picture_recorder_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_picture_recorder_t*)*a1;
      }
  sk_picture_t* res = sk_picture_recorder_end_recording(ra1);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPictureRecorderEndRecordingAsDrawable(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_picture_recorder_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_picture_recorder_t*)*a1;
      }
  sk_drawable_t* res = sk_picture_recorder_end_recording_as_drawable(ra1);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPictureGetRecordingCanvas(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_picture_recorder_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_picture_recorder_t*)*a1;
      }
  sk_canvas_t* res = sk_picture_get_recording_canvas(ra1);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPictureRef(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_picture_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_picture_t*)*a1;
      }
  void* res = NULL;
 sk_picture_ref(ra1);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPictureUnref(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_picture_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_picture_t*)*a1;
      }
  void* res = NULL;
 sk_picture_unref(ra1);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPictureGetUniqueId(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_picture_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_picture_t*)*a1;
      }
  uint32_t res = sk_picture_get_unique_id(ra1);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPictureGetCullRect(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_picture_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_picture_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_rect_t* ra2 = NULL;
    if (ta2 != napi_null) {
    void **a2;
    void *pa2;
    a2 = &pa2;
    status = napi_get_arraybuffer_info(env, args[1], a2, NULL);
    assert(status == napi_ok);
    
    ra2 = (sk_rect_t*)*a2;
    }
  void* res = NULL;
 sk_picture_get_cull_rect(ra1,ra2);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPixmapDestructor(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_pixmap_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_pixmap_t*)*a1;
      }
  void* res = NULL;
 sk_pixmap_destructor(ra1);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPixmapNew(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  sk_pixmap_t* res = sk_pixmap_new();

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPixmapNewWithParams(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 3;
  napi_value args[3];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_imageinfo_t* ra1 = NULL;
    if (ta1 != napi_null) {
    void **a1;
    void *pa1;
    a1 = &pa1;
    status = napi_get_arraybuffer_info(env, args[0], a1, NULL);
    assert(status == napi_ok);
    
    ra1 = (sk_imageinfo_t*)*a1;
    }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    void* ra2 = NULL;
    if (ta2 != napi_null) {
    void **a2;
    void *pa2;
    a2 = &pa2;
    status = napi_get_arraybuffer_info(env, args[1], a2, NULL);
    assert(status == napi_ok);
    
    ra2 = (void*)*a2;
    }
  
  
    
    int ra3;
    status = napi_get_value_int32(env, args[2], &ra3);
    assert(status == napi_ok);
  sk_pixmap_t* res = sk_pixmap_new_with_params(ra1,ra2,ra3);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPixmapReset(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_pixmap_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_pixmap_t*)*a1;
      }
  void* res = NULL;
 sk_pixmap_reset(ra1);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPixmapResetWithParams(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 4;
  napi_value args[4];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_pixmap_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_pixmap_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_imageinfo_t* ra2 = NULL;
    if (ta2 != napi_null) {
    void **a2;
    void *pa2;
    a2 = &pa2;
    status = napi_get_arraybuffer_info(env, args[1], a2, NULL);
    assert(status == napi_ok);
    
    ra2 = (sk_imageinfo_t*)*a2;
    }
  
  
    napi_valuetype ta3;
    status = napi_typeof(env, args[2], &ta3);
    assert(status == napi_ok);

    
    void* ra3 = NULL;
    if (ta3 != napi_null) {
    void **a3;
    void *pa3;
    a3 = &pa3;
    status = napi_get_arraybuffer_info(env, args[2], a3, NULL);
    assert(status == napi_ok);
    
    ra3 = (void*)*a3;
    }
  
  
    
    int ra4;
    status = napi_get_value_int32(env, args[3], &ra4);
    assert(status == napi_ok);
  void* res = NULL;
 sk_pixmap_reset_with_params(ra1,ra2,ra3,ra4);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPixmapGetInfo(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_pixmap_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_pixmap_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_imageinfo_t* ra2 = NULL;
    if (ta2 != napi_null) {
    void **a2;
    void *pa2;
    a2 = &pa2;
    status = napi_get_arraybuffer_info(env, args[1], a2, NULL);
    assert(status == napi_ok);
    
    ra2 = (sk_imageinfo_t*)*a2;
    }
  void* res = NULL;
 sk_pixmap_get_info(ra1,ra2);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPixmapGetRowBytes(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_pixmap_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_pixmap_t*)*a1;
      }
  size_t res = sk_pixmap_get_row_bytes(ra1);

  
  status = napi_create_int32(env, res, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPixmapGetPixels(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_pixmap_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_pixmap_t*)*a1;
      }
  void* res = sk_pixmap_get_pixels(ra1);

  
  status = napi_create_bigint_int64(env, res, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPixmapGetPixelsWithXy(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 3;
  napi_value args[3];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_pixmap_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_pixmap_t*)*a1;
      }
  
  
    
    int ra2;
    status = napi_get_value_int32(env, args[1], &ra2);
    assert(status == napi_ok);
  
  
    
    int ra3;
    status = napi_get_value_int32(env, args[2], &ra3);
    assert(status == napi_ok);
  void* res = sk_pixmap_get_pixels_with_xy(ra1,ra2,ra3);

  
  status = napi_create_bigint_int64(env, res, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPixmapGetPixelColor(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 3;
  napi_value args[3];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_pixmap_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_pixmap_t*)*a1;
      }
  
  
    
    int ra2;
    status = napi_get_value_int32(env, args[1], &ra2);
    assert(status == napi_ok);
  
  
    
    int ra3;
    status = napi_get_value_int32(env, args[2], &ra3);
    assert(status == napi_ok);
  sk_color_t res = sk_pixmap_get_pixel_color(ra1,ra2,ra3);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPixmapEncodeImage(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 4;
  napi_value args[4];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_wstream_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_wstream_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_pixmap_t* ra2 = NULL;
    if (ta2 != napi_null) {
      void **a2;
      void *pa2;
      a2 = &pa2;
      status = napi_get_value_external(env, args[1], a2);
      assert(status == napi_ok);
      
      ra2 = (sk_pixmap_t*)*a2;
      }
  
  
    
    int ra3;
    status = napi_get_value_int32(env, args[2], &ra3);
    assert(status == napi_ok);
  
  
    
    int ra4;
    status = napi_get_value_int32(env, args[3], &ra4);
    assert(status == napi_ok);
  _Bool res = sk_pixmap_encode_image(ra1,ra2,ra3,ra4);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPixmapReadPixels(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 7;
  napi_value args[7];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_pixmap_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_pixmap_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_imageinfo_t* ra2 = NULL;
    if (ta2 != napi_null) {
    void **a2;
    void *pa2;
    a2 = &pa2;
    status = napi_get_arraybuffer_info(env, args[1], a2, NULL);
    assert(status == napi_ok);
    
    ra2 = (sk_imageinfo_t*)*a2;
    }
  
  
    napi_valuetype ta3;
    status = napi_typeof(env, args[2], &ta3);
    assert(status == napi_ok);

    
    void* ra3 = NULL;
    if (ta3 != napi_null) {
    void **a3;
    void *pa3;
    a3 = &pa3;
    status = napi_get_arraybuffer_info(env, args[2], a3, NULL);
    assert(status == napi_ok);
    
    ra3 = (void*)*a3;
    }
  
  
    
    int ra4;
    status = napi_get_value_int32(env, args[3], &ra4);
    assert(status == napi_ok);
  
  
    
    int ra5;
    status = napi_get_value_int32(env, args[4], &ra5);
    assert(status == napi_ok);
  
  
    
    int ra6;
    status = napi_get_value_int32(env, args[5], &ra6);
    assert(status == napi_ok);
  
  
    
    int ra7;
    status = napi_get_value_int32(env, args[6], &ra7);
    assert(status == napi_ok);
  _Bool res = sk_pixmap_read_pixels(ra1,ra2,ra3,ra4,ra5,ra6,ra7);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPixmapScalePixels(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 3;
  napi_value args[3];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_pixmap_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_pixmap_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_pixmap_t* ra2 = NULL;
    if (ta2 != napi_null) {
      void **a2;
      void *pa2;
      a2 = &pa2;
      status = napi_get_value_external(env, args[1], a2);
      assert(status == napi_ok);
      
      ra2 = (sk_pixmap_t*)*a2;
      }
  
  
    
    int ra3;
    status = napi_get_value_int32(env, args[2], &ra3);
    assert(status == napi_ok);
  _Bool res = sk_pixmap_scale_pixels(ra1,ra2,ra3);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPixmapExtractSubset(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 3;
  napi_value args[3];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_pixmap_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_pixmap_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_pixmap_t* ra2 = NULL;
    if (ta2 != napi_null) {
      void **a2;
      void *pa2;
      a2 = &pa2;
      status = napi_get_value_external(env, args[1], a2);
      assert(status == napi_ok);
      
      ra2 = (sk_pixmap_t*)*a2;
      }
  
  
    napi_valuetype ta3;
    status = napi_typeof(env, args[2], &ta3);
    assert(status == napi_ok);

    
    sk_irect_t* ra3 = NULL;
    if (ta3 != napi_null) {
    void **a3;
    void *pa3;
    a3 = &pa3;
    status = napi_get_arraybuffer_info(env, args[2], a3, NULL);
    assert(status == napi_ok);
    
    ra3 = (sk_irect_t*)*a3;
    }
  _Bool res = sk_pixmap_extract_subset(ra1,ra2,ra3);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPixmapEraseColor(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 3;
  napi_value args[3];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_pixmap_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_pixmap_t*)*a1;
      }
  
  
    
    unsigned int ra2;
    status = napi_get_value_uint32(env, args[1], &ra2);
    assert(status == napi_ok);
  
  
    napi_valuetype ta3;
    status = napi_typeof(env, args[2], &ta3);
    assert(status == napi_ok);

    
    sk_irect_t* ra3 = NULL;
    if (ta3 != napi_null) {
    void **a3;
    void *pa3;
    a3 = &pa3;
    status = napi_get_arraybuffer_info(env, args[2], a3, NULL);
    assert(status == napi_ok);
    
    ra3 = (sk_irect_t*)*a3;
    }
  _Bool res = sk_pixmap_erase_color(ra1,ra2,ra3);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skColorUnpremultiply(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_pmcolor_t ra1;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = *((sk_pmcolor_t*)*a1);
      }
  sk_color_t res = sk_color_unpremultiply(ra1);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skColorPremultiply(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_color_t ra1;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = *((sk_color_t*)*a1);
      }
  sk_pmcolor_t res = sk_color_premultiply(ra1);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skColorUnpremultiplyArray(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 3;
  napi_value args[3];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_pmcolor_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_pmcolor_t*)*a1;
      }
  
  
    
    int ra2;
    status = napi_get_value_int32(env, args[1], &ra2);
    assert(status == napi_ok);
  
  
    napi_valuetype ta3;
    status = napi_typeof(env, args[2], &ta3);
    assert(status == napi_ok);

    
    sk_color_t* ra3 = NULL;
    if (ta3 != napi_null) {
      void **a3;
      void *pa3;
      a3 = &pa3;
      status = napi_get_value_external(env, args[2], a3);
      assert(status == napi_ok);
      
      ra3 = (sk_color_t*)*a3;
      }
  void* res = NULL;
 sk_color_unpremultiply_array(ra1,ra2,ra3);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skColorPremultiplyArray(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 3;
  napi_value args[3];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_color_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_color_t*)*a1;
      }
  
  
    
    int ra2;
    status = napi_get_value_int32(env, args[1], &ra2);
    assert(status == napi_ok);
  
  
    napi_valuetype ta3;
    status = napi_typeof(env, args[2], &ta3);
    assert(status == napi_ok);

    
    sk_pmcolor_t* ra3 = NULL;
    if (ta3 != napi_null) {
      void **a3;
      void *pa3;
      a3 = &pa3;
      status = napi_get_value_external(env, args[2], a3);
      assert(status == napi_ok);
      
      ra3 = (sk_pmcolor_t*)*a3;
      }
  void* res = NULL;
 sk_color_premultiply_array(ra1,ra2,ra3);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skColorGetBitShift(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 4;
  napi_value args[4];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    
    int* ra1 = NULL;
    status = napi_get_value_int32(env, args[0], ra1);
    assert(status == napi_ok);
  
  
    
    int* ra2 = NULL;
    status = napi_get_value_int32(env, args[1], ra2);
    assert(status == napi_ok);
  
  
    
    int* ra3 = NULL;
    status = napi_get_value_int32(env, args[2], ra3);
    assert(status == napi_ok);
  
  
    
    int* ra4 = NULL;
    status = napi_get_value_int32(env, args[3], ra4);
    assert(status == napi_ok);
  void* res = NULL;
 sk_color_get_bit_shift(ra1,ra2,ra3,ra4);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skSwizzleSwapRb(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 3;
  napi_value args[3];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    
    unsigned int* ra1 = NULL;
    status = napi_get_value_uint32(env, args[0], ra1);
    assert(status == napi_ok);
  
  
    
    unsigned int* ra2 = NULL;
    status = napi_get_value_uint32(env, args[1], ra2);
    assert(status == napi_ok);
  
  
    
    int ra3;
    status = napi_get_value_int32(env, args[2], &ra3);
    assert(status == napi_ok);
  void* res = NULL;
 sk_swizzle_swap_rb(ra1,ra2,ra3);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skWebpencoderEncode(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 3;
  napi_value args[3];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_wstream_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_wstream_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_pixmap_t* ra2 = NULL;
    if (ta2 != napi_null) {
      void **a2;
      void *pa2;
      a2 = &pa2;
      status = napi_get_value_external(env, args[1], a2);
      assert(status == napi_ok);
      
      ra2 = (sk_pixmap_t*)*a2;
      }
  
  
    napi_valuetype ta3;
    status = napi_typeof(env, args[2], &ta3);
    assert(status == napi_ok);

    
    sk_webpencoder_options_t ra3;
    if (ta3 != napi_null) {
    void **a3;
    void *pa3;
    a3 = &pa3;
    status = napi_get_arraybuffer_info(env, args[2], a3, NULL);
    assert(status == napi_ok);
    
    ra3 = *((sk_webpencoder_options_t*)*a3);
    }
  _Bool res = sk_webpencoder_encode(ra1,ra2,ra3);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skJpegencoderEncode(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 3;
  napi_value args[3];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_wstream_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_wstream_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_pixmap_t* ra2 = NULL;
    if (ta2 != napi_null) {
      void **a2;
      void *pa2;
      a2 = &pa2;
      status = napi_get_value_external(env, args[1], a2);
      assert(status == napi_ok);
      
      ra2 = (sk_pixmap_t*)*a2;
      }
  
  
    napi_valuetype ta3;
    status = napi_typeof(env, args[2], &ta3);
    assert(status == napi_ok);

    
    sk_jpegencoder_options_t ra3;
    if (ta3 != napi_null) {
    void **a3;
    void *pa3;
    a3 = &pa3;
    status = napi_get_arraybuffer_info(env, args[2], a3, NULL);
    assert(status == napi_ok);
    
    ra3 = *((sk_jpegencoder_options_t*)*a3);
    }
  _Bool res = sk_jpegencoder_encode(ra1,ra2,ra3);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skPngencoderEncode(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 3;
  napi_value args[3];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_wstream_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_wstream_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_pixmap_t* ra2 = NULL;
    if (ta2 != napi_null) {
      void **a2;
      void *pa2;
      a2 = &pa2;
      status = napi_get_value_external(env, args[1], a2);
      assert(status == napi_ok);
      
      ra2 = (sk_pixmap_t*)*a2;
      }
  
  
    napi_valuetype ta3;
    status = napi_typeof(env, args[2], &ta3);
    assert(status == napi_ok);

    
    sk_pngencoder_options_t ra3;
    if (ta3 != napi_null) {
    void **a3;
    void *pa3;
    a3 = &pa3;
    status = napi_get_arraybuffer_info(env, args[2], a3, NULL);
    assert(status == napi_ok);
    
    ra3 = *((sk_pngencoder_options_t*)*a3);
    }
  _Bool res = sk_pngencoder_encode(ra1,ra2,ra3);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skRegionNew(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  sk_region_t* res = sk_region_new();

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skRegionNew2(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_region_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_region_t*)*a1;
      }
  sk_region_t* res = sk_region_new2(ra1);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skRegionDelete(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_region_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_region_t*)*a1;
      }
  void* res = NULL;
 sk_region_delete(ra1);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skRegionContains(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_region_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_region_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_region_t* ra2 = NULL;
    if (ta2 != napi_null) {
      void **a2;
      void *pa2;
      a2 = &pa2;
      status = napi_get_value_external(env, args[1], a2);
      assert(status == napi_ok);
      
      ra2 = (sk_region_t*)*a2;
      }
  _Bool res = sk_region_contains(ra1,ra2);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skRegionContains2(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 3;
  napi_value args[3];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_region_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_region_t*)*a1;
      }
  
  
    
    int ra2;
    status = napi_get_value_int32(env, args[1], &ra2);
    assert(status == napi_ok);
  
  
    
    int ra3;
    status = napi_get_value_int32(env, args[2], &ra3);
    assert(status == napi_ok);
  _Bool res = sk_region_contains2(ra1,ra2,ra3);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skRegionIntersectsRect(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_region_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_region_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_irect_t* ra2 = NULL;
    if (ta2 != napi_null) {
    void **a2;
    void *pa2;
    a2 = &pa2;
    status = napi_get_arraybuffer_info(env, args[1], a2, NULL);
    assert(status == napi_ok);
    
    ra2 = (sk_irect_t*)*a2;
    }
  _Bool res = sk_region_intersects_rect(ra1,ra2);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skRegionIntersects(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_region_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_region_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_region_t* ra2 = NULL;
    if (ta2 != napi_null) {
      void **a2;
      void *pa2;
      a2 = &pa2;
      status = napi_get_value_external(env, args[1], a2);
      assert(status == napi_ok);
      
      ra2 = (sk_region_t*)*a2;
      }
  _Bool res = sk_region_intersects(ra1,ra2);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skRegionSetPath(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 3;
  napi_value args[3];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_region_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_region_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_path_t* ra2 = NULL;
    if (ta2 != napi_null) {
      void **a2;
      void *pa2;
      a2 = &pa2;
      status = napi_get_value_external(env, args[1], a2);
      assert(status == napi_ok);
      
      ra2 = (sk_path_t*)*a2;
      }
  
  
    napi_valuetype ta3;
    status = napi_typeof(env, args[2], &ta3);
    assert(status == napi_ok);

    
    sk_region_t* ra3 = NULL;
    if (ta3 != napi_null) {
      void **a3;
      void *pa3;
      a3 = &pa3;
      status = napi_get_value_external(env, args[2], a3);
      assert(status == napi_ok);
      
      ra3 = (sk_region_t*)*a3;
      }
  _Bool res = sk_region_set_path(ra1,ra2,ra3);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skRegionSetRect(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_region_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_region_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_irect_t* ra2 = NULL;
    if (ta2 != napi_null) {
    void **a2;
    void *pa2;
    a2 = &pa2;
    status = napi_get_arraybuffer_info(env, args[1], a2, NULL);
    assert(status == napi_ok);
    
    ra2 = (sk_irect_t*)*a2;
    }
  _Bool res = sk_region_set_rect(ra1,ra2);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skRegionSetRegion(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_region_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_region_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_region_t* ra2 = NULL;
    if (ta2 != napi_null) {
      void **a2;
      void *pa2;
      a2 = &pa2;
      status = napi_get_value_external(env, args[1], a2);
      assert(status == napi_ok);
      
      ra2 = (sk_region_t*)*a2;
      }
  _Bool res = sk_region_set_region(ra1,ra2);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skRegionOp(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 6;
  napi_value args[6];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_region_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_region_t*)*a1;
      }
  
  
    
    int ra2;
    status = napi_get_value_int32(env, args[1], &ra2);
    assert(status == napi_ok);
  
  
    
    int ra3;
    status = napi_get_value_int32(env, args[2], &ra3);
    assert(status == napi_ok);
  
  
    
    int ra4;
    status = napi_get_value_int32(env, args[3], &ra4);
    assert(status == napi_ok);
  
  
    
    int ra5;
    status = napi_get_value_int32(env, args[4], &ra5);
    assert(status == napi_ok);
  
  
    
    int ra6;
    status = napi_get_value_int32(env, args[5], &ra6);
    assert(status == napi_ok);
  _Bool res = sk_region_op(ra1,ra2,ra3,ra4,ra5,ra6);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skRegionOp2(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 3;
  napi_value args[3];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_region_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_region_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_region_t* ra2 = NULL;
    if (ta2 != napi_null) {
      void **a2;
      void *pa2;
      a2 = &pa2;
      status = napi_get_value_external(env, args[1], a2);
      assert(status == napi_ok);
      
      ra2 = (sk_region_t*)*a2;
      }
  
  
    
    int ra3;
    status = napi_get_value_int32(env, args[2], &ra3);
    assert(status == napi_ok);
  _Bool res = sk_region_op2(ra1,ra2,ra3);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skRegionGetBounds(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_region_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_region_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_irect_t* ra2 = NULL;
    if (ta2 != napi_null) {
    void **a2;
    void *pa2;
    a2 = &pa2;
    status = napi_get_arraybuffer_info(env, args[1], a2, NULL);
    assert(status == napi_ok);
    
    ra2 = (sk_irect_t*)*a2;
    }
  void* res = NULL;
 sk_region_get_bounds(ra1,ra2);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skRrectNew(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  sk_rrect_t* res = sk_rrect_new();

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skRrectNewCopy(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_rrect_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_rrect_t*)*a1;
      }
  sk_rrect_t* res = sk_rrect_new_copy(ra1);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skRrectDelete(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_rrect_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_rrect_t*)*a1;
      }
  void* res = NULL;
 sk_rrect_delete(ra1);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skRrectGetType(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_rrect_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_rrect_t*)*a1;
      }
  sk_rrect_type_t res = sk_rrect_get_type(ra1);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skRrectGetRect(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_rrect_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_rrect_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_rect_t* ra2 = NULL;
    if (ta2 != napi_null) {
    void **a2;
    void *pa2;
    a2 = &pa2;
    status = napi_get_arraybuffer_info(env, args[1], a2, NULL);
    assert(status == napi_ok);
    
    ra2 = (sk_rect_t*)*a2;
    }
  void* res = NULL;
 sk_rrect_get_rect(ra1,ra2);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skRrectGetRadii(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 3;
  napi_value args[3];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_rrect_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_rrect_t*)*a1;
      }
  
  
    
    int ra2;
    status = napi_get_value_int32(env, args[1], &ra2);
    assert(status == napi_ok);
  
  
    napi_valuetype ta3;
    status = napi_typeof(env, args[2], &ta3);
    assert(status == napi_ok);

    
    sk_vector_t* ra3 = NULL;
    if (ta3 != napi_null) {
    void **a3;
    void *pa3;
    a3 = &pa3;
    status = napi_get_arraybuffer_info(env, args[2], a3, NULL);
    assert(status == napi_ok);
    
    ra3 = (sk_vector_t*)*a3;
    }
  void* res = NULL;
 sk_rrect_get_radii(ra1,ra2,ra3);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skRrectGetWidth(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_rrect_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_rrect_t*)*a1;
      }
  float res = sk_rrect_get_width(ra1);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skRrectGetHeight(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_rrect_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_rrect_t*)*a1;
      }
  float res = sk_rrect_get_height(ra1);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skRrectSetEmpty(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_rrect_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_rrect_t*)*a1;
      }
  void* res = NULL;
 sk_rrect_set_empty(ra1);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skRrectSetRect(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_rrect_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_rrect_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_rect_t* ra2 = NULL;
    if (ta2 != napi_null) {
    void **a2;
    void *pa2;
    a2 = &pa2;
    status = napi_get_arraybuffer_info(env, args[1], a2, NULL);
    assert(status == napi_ok);
    
    ra2 = (sk_rect_t*)*a2;
    }
  void* res = NULL;
 sk_rrect_set_rect(ra1,ra2);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skRrectSetOval(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_rrect_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_rrect_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_rect_t* ra2 = NULL;
    if (ta2 != napi_null) {
    void **a2;
    void *pa2;
    a2 = &pa2;
    status = napi_get_arraybuffer_info(env, args[1], a2, NULL);
    assert(status == napi_ok);
    
    ra2 = (sk_rect_t*)*a2;
    }
  void* res = NULL;
 sk_rrect_set_oval(ra1,ra2);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skRrectSetRectXy(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 4;
  napi_value args[4];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_rrect_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_rrect_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_rect_t* ra2 = NULL;
    if (ta2 != napi_null) {
    void **a2;
    void *pa2;
    a2 = &pa2;
    status = napi_get_arraybuffer_info(env, args[1], a2, NULL);
    assert(status == napi_ok);
    
    ra2 = (sk_rect_t*)*a2;
    }
  
  
    
    double ra3;
    status = napi_get_value_double(env, args[2], &ra3);
    assert(status == napi_ok);
  
  
    
    double ra4;
    status = napi_get_value_double(env, args[3], &ra4);
    assert(status == napi_ok);
  void* res = NULL;
 sk_rrect_set_rect_xy(ra1,ra2,ra3,ra4);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skRrectSetNinePatch(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 6;
  napi_value args[6];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_rrect_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_rrect_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_rect_t* ra2 = NULL;
    if (ta2 != napi_null) {
    void **a2;
    void *pa2;
    a2 = &pa2;
    status = napi_get_arraybuffer_info(env, args[1], a2, NULL);
    assert(status == napi_ok);
    
    ra2 = (sk_rect_t*)*a2;
    }
  
  
    
    double ra3;
    status = napi_get_value_double(env, args[2], &ra3);
    assert(status == napi_ok);
  
  
    
    double ra4;
    status = napi_get_value_double(env, args[3], &ra4);
    assert(status == napi_ok);
  
  
    
    double ra5;
    status = napi_get_value_double(env, args[4], &ra5);
    assert(status == napi_ok);
  
  
    
    double ra6;
    status = napi_get_value_double(env, args[5], &ra6);
    assert(status == napi_ok);
  void* res = NULL;
 sk_rrect_set_nine_patch(ra1,ra2,ra3,ra4,ra5,ra6);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skRrectSetRectRadii(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 3;
  napi_value args[3];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_rrect_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_rrect_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_rect_t* ra2 = NULL;
    if (ta2 != napi_null) {
    void **a2;
    void *pa2;
    a2 = &pa2;
    status = napi_get_arraybuffer_info(env, args[1], a2, NULL);
    assert(status == napi_ok);
    
    ra2 = (sk_rect_t*)*a2;
    }
  
  
    napi_valuetype ta3;
    status = napi_typeof(env, args[2], &ta3);
    assert(status == napi_ok);

    
    sk_vector_t* ra3 = NULL;
    if (ta3 != napi_null) {
    void **a3;
    void *pa3;
    a3 = &pa3;
    status = napi_get_arraybuffer_info(env, args[2], a3, NULL);
    assert(status == napi_ok);
    
    ra3 = (sk_vector_t*)*a3;
    }
  void* res = NULL;
 sk_rrect_set_rect_radii(ra1,ra2,ra3);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skRrectInset(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 3;
  napi_value args[3];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_rrect_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_rrect_t*)*a1;
      }
  
  
    
    double ra2;
    status = napi_get_value_double(env, args[1], &ra2);
    assert(status == napi_ok);
  
  
    
    double ra3;
    status = napi_get_value_double(env, args[2], &ra3);
    assert(status == napi_ok);
  void* res = NULL;
 sk_rrect_inset(ra1,ra2,ra3);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skRrectOutset(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 3;
  napi_value args[3];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_rrect_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_rrect_t*)*a1;
      }
  
  
    
    double ra2;
    status = napi_get_value_double(env, args[1], &ra2);
    assert(status == napi_ok);
  
  
    
    double ra3;
    status = napi_get_value_double(env, args[2], &ra3);
    assert(status == napi_ok);
  void* res = NULL;
 sk_rrect_outset(ra1,ra2,ra3);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skRrectOffset(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 3;
  napi_value args[3];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_rrect_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_rrect_t*)*a1;
      }
  
  
    
    double ra2;
    status = napi_get_value_double(env, args[1], &ra2);
    assert(status == napi_ok);
  
  
    
    double ra3;
    status = napi_get_value_double(env, args[2], &ra3);
    assert(status == napi_ok);
  void* res = NULL;
 sk_rrect_offset(ra1,ra2,ra3);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skRrectContains(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_rrect_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_rrect_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_rect_t* ra2 = NULL;
    if (ta2 != napi_null) {
    void **a2;
    void *pa2;
    a2 = &pa2;
    status = napi_get_arraybuffer_info(env, args[1], a2, NULL);
    assert(status == napi_ok);
    
    ra2 = (sk_rect_t*)*a2;
    }
  _Bool res = sk_rrect_contains(ra1,ra2);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skRrectIsValid(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_rrect_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_rrect_t*)*a1;
      }
  _Bool res = sk_rrect_is_valid(ra1);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skRrectTransform(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 3;
  napi_value args[3];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_rrect_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_rrect_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_matrix_t* ra2 = NULL;
    if (ta2 != napi_null) {
    void **a2;
    void *pa2;
    a2 = &pa2;
    status = napi_get_arraybuffer_info(env, args[1], a2, NULL);
    assert(status == napi_ok);
    
    ra2 = (sk_matrix_t*)*a2;
    }
  
  
    napi_valuetype ta3;
    status = napi_typeof(env, args[2], &ta3);
    assert(status == napi_ok);

    
    sk_rrect_t* ra3 = NULL;
    if (ta3 != napi_null) {
      void **a3;
      void *pa3;
      a3 = &pa3;
      status = napi_get_value_external(env, args[2], a3);
      assert(status == napi_ok);
      
      ra3 = (sk_rrect_t*)*a3;
      }
  _Bool res = sk_rrect_transform(ra1,ra2,ra3);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skShaderRef(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_shader_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_shader_t*)*a1;
      }
  void* res = NULL;
 sk_shader_ref(ra1);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skShaderUnref(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_shader_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_shader_t*)*a1;
      }
  void* res = NULL;
 sk_shader_unref(ra1);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skShaderNewLinearGradient(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 6;
  napi_value args[6];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_point_t* ra1 = NULL;
    if (ta1 != napi_null) {
    void **a1;
    void *pa1;
    a1 = &pa1;
    status = napi_get_arraybuffer_info(env, args[0], a1, NULL);
    assert(status == napi_ok);
    
    ra1 = (sk_point_t*)*a1;
    }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_color_t* ra2 = NULL;
    if (ta2 != napi_null) {
    void **a2;
    void *pa2;
    a2 = &pa2;
    status = napi_get_arraybuffer_info(env, args[1], a2, NULL);
    assert(status == napi_ok);
    
    ra2 = (sk_color_t*)*a2;
    }
  
  
    napi_valuetype ta3;
    status = napi_typeof(env, args[2], &ta3);
    assert(status == napi_ok);

    
    double* ra3 = NULL;
    if (ta3 != napi_null) {
    void **a3;
    void *pa3;
    a3 = &pa3;
    status = napi_get_arraybuffer_info(env, args[2], a3, NULL);
    assert(status == napi_ok);
    
    ra3 = (double*)*a3;
    }
  
  
    
    int ra4;
    status = napi_get_value_int32(env, args[3], &ra4);
    assert(status == napi_ok);
  
  
    
    int ra5;
    status = napi_get_value_int32(env, args[4], &ra5);
    assert(status == napi_ok);
  
  
    napi_valuetype ta6;
    status = napi_typeof(env, args[5], &ta6);
    assert(status == napi_ok);

    
    sk_matrix_t* ra6 = NULL;
    if (ta6 != napi_null) {
    void **a6;
    void *pa6;
    a6 = &pa6;
    status = napi_get_arraybuffer_info(env, args[5], a6, NULL);
    assert(status == napi_ok);
    
    ra6 = (sk_matrix_t*)*a6;
    }
  sk_shader_t* res = sk_shader_new_linear_gradient(ra1,ra2,ra3,ra4,ra5,ra6);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skShaderNewRadialGradient(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 7;
  napi_value args[7];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_point_t* ra1 = NULL;
    if (ta1 != napi_null) {
    void **a1;
    void *pa1;
    a1 = &pa1;
    status = napi_get_arraybuffer_info(env, args[0], a1, NULL);
    assert(status == napi_ok);
    
    ra1 = (sk_point_t*)*a1;
    }
  
  
    
    double ra2;
    status = napi_get_value_double(env, args[1], &ra2);
    assert(status == napi_ok);
  
  
    napi_valuetype ta3;
    status = napi_typeof(env, args[2], &ta3);
    assert(status == napi_ok);

    
    sk_color_t* ra3 = NULL;
    if (ta3 != napi_null) {
    void **a3;
    void *pa3;
    a3 = &pa3;
    status = napi_get_arraybuffer_info(env, args[2], a3, NULL);
    assert(status == napi_ok);
    
    ra3 = (sk_color_t*)*a3;
    }
  
  
    napi_valuetype ta4;
    status = napi_typeof(env, args[3], &ta4);
    assert(status == napi_ok);

    
    double* ra4 = NULL;
    if (ta4 != napi_null) {
    void **a4;
    void *pa4;
    a4 = &pa4;
    status = napi_get_arraybuffer_info(env, args[3], a4, NULL);
    assert(status == napi_ok);
    
    ra4 = (double*)*a4;
    }
  
  
    
    int ra5;
    status = napi_get_value_int32(env, args[4], &ra5);
    assert(status == napi_ok);
  
  
    
    int ra6;
    status = napi_get_value_int32(env, args[5], &ra6);
    assert(status == napi_ok);
  
  
    napi_valuetype ta7;
    status = napi_typeof(env, args[6], &ta7);
    assert(status == napi_ok);

    
    sk_matrix_t* ra7 = NULL;
    if (ta7 != napi_null) {
    void **a7;
    void *pa7;
    a7 = &pa7;
    status = napi_get_arraybuffer_info(env, args[6], a7, NULL);
    assert(status == napi_ok);
    
    ra7 = (sk_matrix_t*)*a7;
    }
  sk_shader_t* res = sk_shader_new_radial_gradient(ra1,ra2,ra3,ra4,ra5,ra6,ra7);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skShaderNewSweepGradient(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 8;
  napi_value args[8];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_point_t* ra1 = NULL;
    if (ta1 != napi_null) {
    void **a1;
    void *pa1;
    a1 = &pa1;
    status = napi_get_arraybuffer_info(env, args[0], a1, NULL);
    assert(status == napi_ok);
    
    ra1 = (sk_point_t*)*a1;
    }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_color_t* ra2 = NULL;
    if (ta2 != napi_null) {
    void **a2;
    void *pa2;
    a2 = &pa2;
    status = napi_get_arraybuffer_info(env, args[1], a2, NULL);
    assert(status == napi_ok);
    
    ra2 = (sk_color_t*)*a2;
    }
  
  
    napi_valuetype ta3;
    status = napi_typeof(env, args[2], &ta3);
    assert(status == napi_ok);

    
    double* ra3 = NULL;
    if (ta3 != napi_null) {
    void **a3;
    void *pa3;
    a3 = &pa3;
    status = napi_get_arraybuffer_info(env, args[2], a3, NULL);
    assert(status == napi_ok);
    
    ra3 = (double*)*a3;
    }
  
  
    
    int ra4;
    status = napi_get_value_int32(env, args[3], &ra4);
    assert(status == napi_ok);
  
  
    
    int ra5;
    status = napi_get_value_int32(env, args[4], &ra5);
    assert(status == napi_ok);
  
  
    
    double ra6;
    status = napi_get_value_double(env, args[5], &ra6);
    assert(status == napi_ok);
  
  
    
    double ra7;
    status = napi_get_value_double(env, args[6], &ra7);
    assert(status == napi_ok);
  
  
    napi_valuetype ta8;
    status = napi_typeof(env, args[7], &ta8);
    assert(status == napi_ok);

    
    sk_matrix_t* ra8 = NULL;
    if (ta8 != napi_null) {
    void **a8;
    void *pa8;
    a8 = &pa8;
    status = napi_get_arraybuffer_info(env, args[7], a8, NULL);
    assert(status == napi_ok);
    
    ra8 = (sk_matrix_t*)*a8;
    }
  sk_shader_t* res = sk_shader_new_sweep_gradient(ra1,ra2,ra3,ra4,ra5,ra6,ra7,ra8);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skShaderNewTwoPointConicalGradient(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 9;
  napi_value args[9];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_point_t* ra1 = NULL;
    if (ta1 != napi_null) {
    void **a1;
    void *pa1;
    a1 = &pa1;
    status = napi_get_arraybuffer_info(env, args[0], a1, NULL);
    assert(status == napi_ok);
    
    ra1 = (sk_point_t*)*a1;
    }
  
  
    
    double ra2;
    status = napi_get_value_double(env, args[1], &ra2);
    assert(status == napi_ok);
  
  
    napi_valuetype ta3;
    status = napi_typeof(env, args[2], &ta3);
    assert(status == napi_ok);

    
    sk_point_t* ra3 = NULL;
    if (ta3 != napi_null) {
    void **a3;
    void *pa3;
    a3 = &pa3;
    status = napi_get_arraybuffer_info(env, args[2], a3, NULL);
    assert(status == napi_ok);
    
    ra3 = (sk_point_t*)*a3;
    }
  
  
    
    double ra4;
    status = napi_get_value_double(env, args[3], &ra4);
    assert(status == napi_ok);
  
  
    napi_valuetype ta5;
    status = napi_typeof(env, args[4], &ta5);
    assert(status == napi_ok);

    
    sk_color_t* ra5 = NULL;
    if (ta5 != napi_null) {
    void **a5;
    void *pa5;
    a5 = &pa5;
    status = napi_get_arraybuffer_info(env, args[4], a5, NULL);
    assert(status == napi_ok);
    
    ra5 = (sk_color_t*)*a5;
    }
  
  
    napi_valuetype ta6;
    status = napi_typeof(env, args[5], &ta6);
    assert(status == napi_ok);

    
    double* ra6 = NULL;
    if (ta6 != napi_null) {
    void **a6;
    void *pa6;
    a6 = &pa6;
    status = napi_get_arraybuffer_info(env, args[5], a6, NULL);
    assert(status == napi_ok);
    
    ra6 = (double*)*a6;
    }
  
  
    
    int ra7;
    status = napi_get_value_int32(env, args[6], &ra7);
    assert(status == napi_ok);
  
  
    
    int ra8;
    status = napi_get_value_int32(env, args[7], &ra8);
    assert(status == napi_ok);
  
  
    napi_valuetype ta9;
    status = napi_typeof(env, args[8], &ta9);
    assert(status == napi_ok);

    
    sk_matrix_t* ra9 = NULL;
    if (ta9 != napi_null) {
    void **a9;
    void *pa9;
    a9 = &pa9;
    status = napi_get_arraybuffer_info(env, args[8], a9, NULL);
    assert(status == napi_ok);
    
    ra9 = (sk_matrix_t*)*a9;
    }
  sk_shader_t* res = sk_shader_new_two_point_conical_gradient(ra1,ra2,ra3,ra4,ra5,ra6,ra7,ra8,ra9);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skShaderNewEmpty(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  sk_shader_t* res = sk_shader_new_empty();

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skShaderNewColor(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    
    unsigned int ra1;
    status = napi_get_value_uint32(env, args[0], &ra1);
    assert(status == napi_ok);
  sk_shader_t* res = sk_shader_new_color(ra1);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skShaderNewBitmap(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 4;
  napi_value args[4];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_bitmap_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_bitmap_t*)*a1;
      }
  
  
    
    int ra2;
    status = napi_get_value_int32(env, args[1], &ra2);
    assert(status == napi_ok);
  
  
    
    int ra3;
    status = napi_get_value_int32(env, args[2], &ra3);
    assert(status == napi_ok);
  
  
    napi_valuetype ta4;
    status = napi_typeof(env, args[3], &ta4);
    assert(status == napi_ok);

    
    sk_matrix_t* ra4 = NULL;
    if (ta4 != napi_null) {
    void **a4;
    void *pa4;
    a4 = &pa4;
    status = napi_get_arraybuffer_info(env, args[3], a4, NULL);
    assert(status == napi_ok);
    
    ra4 = (sk_matrix_t*)*a4;
    }
  sk_shader_t* res = sk_shader_new_bitmap(ra1,ra2,ra3,ra4);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skShaderNewPicture(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 5;
  napi_value args[5];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_picture_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_picture_t*)*a1;
      }
  
  
    
    int ra2;
    status = napi_get_value_int32(env, args[1], &ra2);
    assert(status == napi_ok);
  
  
    
    int ra3;
    status = napi_get_value_int32(env, args[2], &ra3);
    assert(status == napi_ok);
  
  
    napi_valuetype ta4;
    status = napi_typeof(env, args[3], &ta4);
    assert(status == napi_ok);

    
    sk_matrix_t* ra4 = NULL;
    if (ta4 != napi_null) {
    void **a4;
    void *pa4;
    a4 = &pa4;
    status = napi_get_arraybuffer_info(env, args[3], a4, NULL);
    assert(status == napi_ok);
    
    ra4 = (sk_matrix_t*)*a4;
    }
  
  
    napi_valuetype ta5;
    status = napi_typeof(env, args[4], &ta5);
    assert(status == napi_ok);

    
    sk_rect_t* ra5 = NULL;
    if (ta5 != napi_null) {
    void **a5;
    void *pa5;
    a5 = &pa5;
    status = napi_get_arraybuffer_info(env, args[4], a5, NULL);
    assert(status == napi_ok);
    
    ra5 = (sk_rect_t*)*a5;
    }
  sk_shader_t* res = sk_shader_new_picture(ra1,ra2,ra3,ra4,ra5);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skShaderNewLocalMatrix(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_shader_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_shader_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_matrix_t* ra2 = NULL;
    if (ta2 != napi_null) {
    void **a2;
    void *pa2;
    a2 = &pa2;
    status = napi_get_arraybuffer_info(env, args[1], a2, NULL);
    assert(status == napi_ok);
    
    ra2 = (sk_matrix_t*)*a2;
    }
  sk_shader_t* res = sk_shader_new_local_matrix(ra1,ra2);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skShaderNewColorFilter(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_shader_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_shader_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_colorfilter_t* ra2 = NULL;
    if (ta2 != napi_null) {
      void **a2;
      void *pa2;
      a2 = &pa2;
      status = napi_get_value_external(env, args[1], a2);
      assert(status == napi_ok);
      
      ra2 = (sk_colorfilter_t*)*a2;
      }
  sk_shader_t* res = sk_shader_new_color_filter(ra1,ra2);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skShaderNewPerlinNoiseFractalNoise(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 5;
  napi_value args[5];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    
    double ra1;
    status = napi_get_value_double(env, args[0], &ra1);
    assert(status == napi_ok);
  
  
    
    double ra2;
    status = napi_get_value_double(env, args[1], &ra2);
    assert(status == napi_ok);
  
  
    
    int ra3;
    status = napi_get_value_int32(env, args[2], &ra3);
    assert(status == napi_ok);
  
  
    
    double ra4;
    status = napi_get_value_double(env, args[3], &ra4);
    assert(status == napi_ok);
  
  
    napi_valuetype ta5;
    status = napi_typeof(env, args[4], &ta5);
    assert(status == napi_ok);

    
    sk_isize_t* ra5 = NULL;
    if (ta5 != napi_null) {
    void **a5;
    void *pa5;
    a5 = &pa5;
    status = napi_get_arraybuffer_info(env, args[4], a5, NULL);
    assert(status == napi_ok);
    
    ra5 = (sk_isize_t*)*a5;
    }
  sk_shader_t* res = sk_shader_new_perlin_noise_fractal_noise(ra1,ra2,ra3,ra4,ra5);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skShaderNewPerlinNoiseTurbulence(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 5;
  napi_value args[5];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    
    double ra1;
    status = napi_get_value_double(env, args[0], &ra1);
    assert(status == napi_ok);
  
  
    
    double ra2;
    status = napi_get_value_double(env, args[1], &ra2);
    assert(status == napi_ok);
  
  
    
    int ra3;
    status = napi_get_value_int32(env, args[2], &ra3);
    assert(status == napi_ok);
  
  
    
    double ra4;
    status = napi_get_value_double(env, args[3], &ra4);
    assert(status == napi_ok);
  
  
    napi_valuetype ta5;
    status = napi_typeof(env, args[4], &ta5);
    assert(status == napi_ok);

    
    sk_isize_t* ra5 = NULL;
    if (ta5 != napi_null) {
    void **a5;
    void *pa5;
    a5 = &pa5;
    status = napi_get_arraybuffer_info(env, args[4], a5, NULL);
    assert(status == napi_ok);
    
    ra5 = (sk_isize_t*)*a5;
    }
  sk_shader_t* res = sk_shader_new_perlin_noise_turbulence(ra1,ra2,ra3,ra4,ra5);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skShaderNewPerlinNoiseImprovedNoise(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 4;
  napi_value args[4];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    
    double ra1;
    status = napi_get_value_double(env, args[0], &ra1);
    assert(status == napi_ok);
  
  
    
    double ra2;
    status = napi_get_value_double(env, args[1], &ra2);
    assert(status == napi_ok);
  
  
    
    int ra3;
    status = napi_get_value_int32(env, args[2], &ra3);
    assert(status == napi_ok);
  
  
    
    double ra4;
    status = napi_get_value_double(env, args[3], &ra4);
    assert(status == napi_ok);
  sk_shader_t* res = sk_shader_new_perlin_noise_improved_noise(ra1,ra2,ra3,ra4);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skShaderNewCompose(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_shader_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_shader_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_shader_t* ra2 = NULL;
    if (ta2 != napi_null) {
      void **a2;
      void *pa2;
      a2 = &pa2;
      status = napi_get_value_external(env, args[1], a2);
      assert(status == napi_ok);
      
      ra2 = (sk_shader_t*)*a2;
      }
  sk_shader_t* res = sk_shader_new_compose(ra1,ra2);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skShaderNewComposeWithMode(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 3;
  napi_value args[3];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_shader_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_shader_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_shader_t* ra2 = NULL;
    if (ta2 != napi_null) {
      void **a2;
      void *pa2;
      a2 = &pa2;
      status = napi_get_value_external(env, args[1], a2);
      assert(status == napi_ok);
      
      ra2 = (sk_shader_t*)*a2;
      }
  
  
    
    int ra3;
    status = napi_get_value_int32(env, args[2], &ra3);
    assert(status == napi_ok);
  sk_shader_t* res = sk_shader_new_compose_with_mode(ra1,ra2,ra3);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skStreamAssetDestroy(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_stream_asset_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_stream_asset_t*)*a1;
      }
  void* res = NULL;
 sk_stream_asset_destroy(ra1);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skFilestreamNew(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    size_t la1;
    status = napi_get_value_string_utf8(env, args[0], NULL, 0, &la1);
    assert(status == napi_ok);
    char* ra1 = (char*)malloc(la1 + 1);
    status = napi_get_value_string_utf8(env, args[0], ra1, la1 + 1, &la1);
    assert(status == napi_ok);
  sk_stream_filestream_t* res = sk_filestream_new(ra1);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skFilestreamDestroy(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_stream_filestream_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_stream_filestream_t*)*a1;
      }
  void* res = NULL;
 sk_filestream_destroy(ra1);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skFilestreamIsValid(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_stream_filestream_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_stream_filestream_t*)*a1;
      }
  _Bool res = sk_filestream_is_valid(ra1);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skMemorystreamNew(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  sk_stream_memorystream_t* res = sk_memorystream_new();

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skMemorystreamNewWithLength(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    
    int ra1;
    status = napi_get_value_int32(env, args[0], &ra1);
    assert(status == napi_ok);
  sk_stream_memorystream_t* res = sk_memorystream_new_with_length(ra1);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skMemorystreamNewWithData(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 3;
  napi_value args[3];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    void* ra1 = NULL;
    if (ta1 != napi_null) {
    void **a1;
    void *pa1;
    a1 = &pa1;
    status = napi_get_arraybuffer_info(env, args[0], a1, NULL);
    assert(status == napi_ok);
    
    ra1 = (void*)*a1;
    }
  
  
    
    int ra2;
    status = napi_get_value_int32(env, args[1], &ra2);
    assert(status == napi_ok);
  
  
    
    _Bool ra3;
    status = napi_get_value_bool(env, args[2], &ra3);
    assert(status == napi_ok);
  sk_stream_memorystream_t* res = sk_memorystream_new_with_data(ra1,ra2,ra3);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skMemorystreamNewWithSkdata(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_data_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_data_t*)*a1;
      }
  sk_stream_memorystream_t* res = sk_memorystream_new_with_skdata(ra1);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skMemorystreamSetMemory(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 4;
  napi_value args[4];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_stream_memorystream_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_stream_memorystream_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    void* ra2 = NULL;
    if (ta2 != napi_null) {
    void **a2;
    void *pa2;
    a2 = &pa2;
    status = napi_get_arraybuffer_info(env, args[1], a2, NULL);
    assert(status == napi_ok);
    
    ra2 = (void*)*a2;
    }
  
  
    
    int ra3;
    status = napi_get_value_int32(env, args[2], &ra3);
    assert(status == napi_ok);
  
  
    
    _Bool ra4;
    status = napi_get_value_bool(env, args[3], &ra4);
    assert(status == napi_ok);
  void* res = NULL;
 sk_memorystream_set_memory(ra1,ra2,ra3,ra4);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skMemorystreamDestroy(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_stream_memorystream_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_stream_memorystream_t*)*a1;
      }
  void* res = NULL;
 sk_memorystream_destroy(ra1);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skStreamRead(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 3;
  napi_value args[3];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_stream_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_stream_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    void* ra2 = NULL;
    if (ta2 != napi_null) {
    void **a2;
    void *pa2;
    a2 = &pa2;
    status = napi_get_arraybuffer_info(env, args[1], a2, NULL);
    assert(status == napi_ok);
    
    ra2 = (void*)*a2;
    }
  
  
    
    int ra3;
    status = napi_get_value_int32(env, args[2], &ra3);
    assert(status == napi_ok);
  size_t res = sk_stream_read(ra1,ra2,ra3);

  
  status = napi_create_int32(env, res, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skStreamPeek(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 3;
  napi_value args[3];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_stream_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_stream_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    void* ra2 = NULL;
    if (ta2 != napi_null) {
    void **a2;
    void *pa2;
    a2 = &pa2;
    status = napi_get_arraybuffer_info(env, args[1], a2, NULL);
    assert(status == napi_ok);
    
    ra2 = (void*)*a2;
    }
  
  
    
    int ra3;
    status = napi_get_value_int32(env, args[2], &ra3);
    assert(status == napi_ok);
  size_t res = sk_stream_peek(ra1,ra2,ra3);

  
  status = napi_create_int32(env, res, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skStreamSkip(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_stream_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_stream_t*)*a1;
      }
  
  
    
    int ra2;
    status = napi_get_value_int32(env, args[1], &ra2);
    assert(status == napi_ok);
  size_t res = sk_stream_skip(ra1,ra2);

  
  status = napi_create_int32(env, res, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skStreamIsAtEnd(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_stream_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_stream_t*)*a1;
      }
  _Bool res = sk_stream_is_at_end(ra1);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skStreamReadS8(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_stream_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_stream_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    int8_t* ra2 = NULL;
    if (ta2 != napi_null) {
      void **a2;
      void *pa2;
      a2 = &pa2;
      status = napi_get_value_external(env, args[1], a2);
      assert(status == napi_ok);
      
      ra2 = (int8_t*)*a2;
      }
  _Bool res = sk_stream_read_s8(ra1,ra2);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skStreamReadS16(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_stream_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_stream_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    int16_t* ra2 = NULL;
    if (ta2 != napi_null) {
      void **a2;
      void *pa2;
      a2 = &pa2;
      status = napi_get_value_external(env, args[1], a2);
      assert(status == napi_ok);
      
      ra2 = (int16_t*)*a2;
      }
  _Bool res = sk_stream_read_s16(ra1,ra2);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skStreamReadS32(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_stream_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_stream_t*)*a1;
      }
  
  
    
    int* ra2 = NULL;
    status = napi_get_value_int32(env, args[1], ra2);
    assert(status == napi_ok);
  _Bool res = sk_stream_read_s32(ra1,ra2);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skStreamReadU8(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_stream_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_stream_t*)*a1;
      }
  
  
    
    unsigned int* ra2 = NULL;
    status = napi_get_value_uint32(env, args[1], ra2);
    assert(status == napi_ok);
  _Bool res = sk_stream_read_u8(ra1,ra2);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skStreamReadU16(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_stream_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_stream_t*)*a1;
      }
  
  
    
    unsigned int* ra2 = NULL;
    status = napi_get_value_uint32(env, args[1], ra2);
    assert(status == napi_ok);
  _Bool res = sk_stream_read_u16(ra1,ra2);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skStreamReadU32(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_stream_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_stream_t*)*a1;
      }
  
  
    
    unsigned int* ra2 = NULL;
    status = napi_get_value_uint32(env, args[1], ra2);
    assert(status == napi_ok);
  _Bool res = sk_stream_read_u32(ra1,ra2);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skStreamReadBool(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_stream_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_stream_t*)*a1;
      }
  
  
    
    _Bool* ra2 = NULL;
    status = napi_get_value_bool(env, args[1], ra2);
    assert(status == napi_ok);
  _Bool res = sk_stream_read_bool(ra1,ra2);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skStreamRewind(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_stream_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_stream_t*)*a1;
      }
  _Bool res = sk_stream_rewind(ra1);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skStreamHasPosition(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_stream_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_stream_t*)*a1;
      }
  _Bool res = sk_stream_has_position(ra1);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skStreamGetPosition(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_stream_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_stream_t*)*a1;
      }
  size_t res = sk_stream_get_position(ra1);

  
  status = napi_create_int32(env, res, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skStreamSeek(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_stream_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_stream_t*)*a1;
      }
  
  
    
    int ra2;
    status = napi_get_value_int32(env, args[1], &ra2);
    assert(status == napi_ok);
  _Bool res = sk_stream_seek(ra1,ra2);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skStreamMove(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_stream_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_stream_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    long int ra2;
    if (ta2 != napi_null) {
      void **a2;
      void *pa2;
      a2 = &pa2;
      status = napi_get_value_external(env, args[1], a2);
      assert(status == napi_ok);
      
      ra2 = *((long int*)*a2);
      }
  _Bool res = sk_stream_move(ra1,ra2);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skStreamHasLength(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_stream_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_stream_t*)*a1;
      }
  _Bool res = sk_stream_has_length(ra1);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skStreamGetLength(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_stream_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_stream_t*)*a1;
      }
  size_t res = sk_stream_get_length(ra1);

  
  status = napi_create_int32(env, res, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skStreamGetMemoryBase(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_stream_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_stream_t*)*a1;
      }
  void* res = sk_stream_get_memory_base(ra1);

  
  status = napi_create_bigint_int64(env, res, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skStreamFork(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_stream_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_stream_t*)*a1;
      }
  sk_stream_t* res = sk_stream_fork(ra1);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skStreamDuplicate(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_stream_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_stream_t*)*a1;
      }
  sk_stream_t* res = sk_stream_duplicate(ra1);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skStreamDestroy(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_stream_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_stream_t*)*a1;
      }
  void* res = NULL;
 sk_stream_destroy(ra1);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skFilewstreamNew(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    size_t la1;
    status = napi_get_value_string_utf8(env, args[0], NULL, 0, &la1);
    assert(status == napi_ok);
    char* ra1 = (char*)malloc(la1 + 1);
    status = napi_get_value_string_utf8(env, args[0], ra1, la1 + 1, &la1);
    assert(status == napi_ok);
  sk_wstream_filestream_t* res = sk_filewstream_new(ra1);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skFilewstreamDestroy(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_wstream_filestream_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_wstream_filestream_t*)*a1;
      }
  void* res = NULL;
 sk_filewstream_destroy(ra1);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skFilewstreamIsValid(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_wstream_filestream_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_wstream_filestream_t*)*a1;
      }
  _Bool res = sk_filewstream_is_valid(ra1);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skDynamicmemorywstreamNew(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  sk_wstream_dynamicmemorystream_t* res = sk_dynamicmemorywstream_new();

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skDynamicmemorywstreamDetachAsStream(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_wstream_dynamicmemorystream_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_wstream_dynamicmemorystream_t*)*a1;
      }
  sk_stream_asset_t* res = sk_dynamicmemorywstream_detach_as_stream(ra1);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skDynamicmemorywstreamDetachAsData(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_wstream_dynamicmemorystream_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_wstream_dynamicmemorystream_t*)*a1;
      }
  sk_data_t* res = sk_dynamicmemorywstream_detach_as_data(ra1);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skDynamicmemorywstreamCopyTo(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_wstream_dynamicmemorystream_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_wstream_dynamicmemorystream_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    void* ra2 = NULL;
    if (ta2 != napi_null) {
    void **a2;
    void *pa2;
    a2 = &pa2;
    status = napi_get_arraybuffer_info(env, args[1], a2, NULL);
    assert(status == napi_ok);
    
    ra2 = (void*)*a2;
    }
  void* res = NULL;
 sk_dynamicmemorywstream_copy_to(ra1,ra2);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skDynamicmemorywstreamWriteToStream(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_wstream_dynamicmemorystream_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_wstream_dynamicmemorystream_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_wstream_t* ra2 = NULL;
    if (ta2 != napi_null) {
      void **a2;
      void *pa2;
      a2 = &pa2;
      status = napi_get_value_external(env, args[1], a2);
      assert(status == napi_ok);
      
      ra2 = (sk_wstream_t*)*a2;
      }
  _Bool res = sk_dynamicmemorywstream_write_to_stream(ra1,ra2);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skDynamicmemorywstreamDestroy(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_wstream_dynamicmemorystream_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_wstream_dynamicmemorystream_t*)*a1;
      }
  void* res = NULL;
 sk_dynamicmemorywstream_destroy(ra1);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skWstreamWrite(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 3;
  napi_value args[3];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_wstream_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_wstream_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    void* ra2 = NULL;
    if (ta2 != napi_null) {
    void **a2;
    void *pa2;
    a2 = &pa2;
    status = napi_get_arraybuffer_info(env, args[1], a2, NULL);
    assert(status == napi_ok);
    
    ra2 = (void*)*a2;
    }
  
  
    
    int ra3;
    status = napi_get_value_int32(env, args[2], &ra3);
    assert(status == napi_ok);
  _Bool res = sk_wstream_write(ra1,ra2,ra3);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skWstreamNewline(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_wstream_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_wstream_t*)*a1;
      }
  _Bool res = sk_wstream_newline(ra1);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skWstreamFlush(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_wstream_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_wstream_t*)*a1;
      }
  void* res = NULL;
 sk_wstream_flush(ra1);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skWstreamBytesWritten(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_wstream_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_wstream_t*)*a1;
      }
  size_t res = sk_wstream_bytes_written(ra1);

  
  status = napi_create_int32(env, res, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skWstreamWrite_8(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_wstream_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_wstream_t*)*a1;
      }
  
  
    
    unsigned int ra2;
    status = napi_get_value_uint32(env, args[1], &ra2);
    assert(status == napi_ok);
  _Bool res = sk_wstream_write_8(ra1,ra2);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skWstreamWrite_16(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_wstream_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_wstream_t*)*a1;
      }
  
  
    
    unsigned int ra2;
    status = napi_get_value_uint32(env, args[1], &ra2);
    assert(status == napi_ok);
  _Bool res = sk_wstream_write_16(ra1,ra2);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skWstreamWrite_32(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_wstream_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_wstream_t*)*a1;
      }
  
  
    
    unsigned int ra2;
    status = napi_get_value_uint32(env, args[1], &ra2);
    assert(status == napi_ok);
  _Bool res = sk_wstream_write_32(ra1,ra2);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skWstreamWriteText(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_wstream_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_wstream_t*)*a1;
      }
  
  
    size_t la2;
    status = napi_get_value_string_utf8(env, args[1], NULL, 0, &la2);
    assert(status == napi_ok);
    char* ra2 = (char*)malloc(la2 + 1);
    status = napi_get_value_string_utf8(env, args[1], ra2, la2 + 1, &la2);
    assert(status == napi_ok);
  _Bool res = sk_wstream_write_text(ra1,ra2);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skWstreamWriteDecAsText(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_wstream_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_wstream_t*)*a1;
      }
  
  
    
    int ra2;
    status = napi_get_value_int32(env, args[1], &ra2);
    assert(status == napi_ok);
  _Bool res = sk_wstream_write_dec_as_text(ra1,ra2);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skWstreamWriteBigdecAsText(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 3;
  napi_value args[3];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_wstream_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_wstream_t*)*a1;
      }
  
  
    
    int ra2;
    status = napi_get_value_int32(env, args[1], &ra2);
    assert(status == napi_ok);
  
  
    
    int ra3;
    status = napi_get_value_int32(env, args[2], &ra3);
    assert(status == napi_ok);
  _Bool res = sk_wstream_write_bigdec_as_text(ra1,ra2,ra3);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skWstreamWriteHexAsText(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 3;
  napi_value args[3];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_wstream_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_wstream_t*)*a1;
      }
  
  
    
    unsigned int ra2;
    status = napi_get_value_uint32(env, args[1], &ra2);
    assert(status == napi_ok);
  
  
    
    int ra3;
    status = napi_get_value_int32(env, args[2], &ra3);
    assert(status == napi_ok);
  _Bool res = sk_wstream_write_hex_as_text(ra1,ra2,ra3);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skWstreamWriteScalarAsText(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_wstream_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_wstream_t*)*a1;
      }
  
  
    
    double ra2;
    status = napi_get_value_double(env, args[1], &ra2);
    assert(status == napi_ok);
  _Bool res = sk_wstream_write_scalar_as_text(ra1,ra2);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skWstreamWriteBool(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_wstream_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_wstream_t*)*a1;
      }
  
  
    
    _Bool ra2;
    status = napi_get_value_bool(env, args[1], &ra2);
    assert(status == napi_ok);
  _Bool res = sk_wstream_write_bool(ra1,ra2);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skWstreamWriteScalar(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_wstream_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_wstream_t*)*a1;
      }
  
  
    
    double ra2;
    status = napi_get_value_double(env, args[1], &ra2);
    assert(status == napi_ok);
  _Bool res = sk_wstream_write_scalar(ra1,ra2);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skWstreamWritePackedUint(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_wstream_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_wstream_t*)*a1;
      }
  
  
    
    int ra2;
    status = napi_get_value_int32(env, args[1], &ra2);
    assert(status == napi_ok);
  _Bool res = sk_wstream_write_packed_uint(ra1,ra2);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skWstreamWriteStream(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 3;
  napi_value args[3];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_wstream_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_wstream_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_stream_t* ra2 = NULL;
    if (ta2 != napi_null) {
      void **a2;
      void *pa2;
      a2 = &pa2;
      status = napi_get_value_external(env, args[1], a2);
      assert(status == napi_ok);
      
      ra2 = (sk_stream_t*)*a2;
      }
  
  
    
    int ra3;
    status = napi_get_value_int32(env, args[2], &ra3);
    assert(status == napi_ok);
  _Bool res = sk_wstream_write_stream(ra1,ra2,ra3);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skWstreamGetSizeOfPackedUint(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    
    int ra1;
    status = napi_get_value_int32(env, args[0], &ra1);
    assert(status == napi_ok);
  int res = sk_wstream_get_size_of_packed_uint(ra1);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skStringNewEmpty(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  sk_string_t* res = sk_string_new_empty();

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skStringNewWithCopy(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    size_t la1;
    status = napi_get_value_string_utf8(env, args[0], NULL, 0, &la1);
    assert(status == napi_ok);
    char* ra1 = (char*)malloc(la1 + 1);
    status = napi_get_value_string_utf8(env, args[0], ra1, la1 + 1, &la1);
    assert(status == napi_ok);
  
  
    
    int ra2;
    status = napi_get_value_int32(env, args[1], &ra2);
    assert(status == napi_ok);
  sk_string_t* res = sk_string_new_with_copy(ra1,ra2);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skStringDestructor(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_string_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_string_t*)*a1;
      }
  void* res = NULL;
 sk_string_destructor(ra1);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skStringGetSize(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_string_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_string_t*)*a1;
      }
  size_t res = sk_string_get_size(ra1);

  
  status = napi_create_int32(env, res, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skStringGetCStr(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_string_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_string_t*)*a1;
      }
  char* res = sk_string_get_c_str(ra1);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skSurfaceNewNull(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    
    int ra1;
    status = napi_get_value_int32(env, args[0], &ra1);
    assert(status == napi_ok);
  
  
    
    int ra2;
    status = napi_get_value_int32(env, args[1], &ra2);
    assert(status == napi_ok);
  sk_surface_t* res = sk_surface_new_null(ra1,ra2);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skSurfaceNewRaster(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 3;
  napi_value args[3];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_imageinfo_t* ra1 = NULL;
    if (ta1 != napi_null) {
    void **a1;
    void *pa1;
    a1 = &pa1;
    status = napi_get_arraybuffer_info(env, args[0], a1, NULL);
    assert(status == napi_ok);
    
    ra1 = (sk_imageinfo_t*)*a1;
    }
  
  
    
    int ra2;
    status = napi_get_value_int32(env, args[1], &ra2);
    assert(status == napi_ok);
  
  
    napi_valuetype ta3;
    status = napi_typeof(env, args[2], &ta3);
    assert(status == napi_ok);

    
    sk_surfaceprops_t* ra3 = NULL;
    if (ta3 != napi_null) {
      void **a3;
      void *pa3;
      a3 = &pa3;
      status = napi_get_value_external(env, args[2], a3);
      assert(status == napi_ok);
      
      ra3 = (sk_surfaceprops_t*)*a3;
      }
  sk_surface_t* res = sk_surface_new_raster(ra1,ra2,ra3);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skSurfaceNewRasterDirect(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 6;
  napi_value args[6];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_imageinfo_t* ra1 = NULL;
    if (ta1 != napi_null) {
    void **a1;
    void *pa1;
    a1 = &pa1;
    status = napi_get_arraybuffer_info(env, args[0], a1, NULL);
    assert(status == napi_ok);
    
    ra1 = (sk_imageinfo_t*)*a1;
    }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    void* ra2 = NULL;
    if (ta2 != napi_null) {
    void **a2;
    void *pa2;
    a2 = &pa2;
    status = napi_get_arraybuffer_info(env, args[1], a2, NULL);
    assert(status == napi_ok);
    
    ra2 = (void*)*a2;
    }
  
  
    
    int ra3;
    status = napi_get_value_int32(env, args[2], &ra3);
    assert(status == napi_ok);
  
  
    napi_valuetype ta4;
    status = napi_typeof(env, args[3], &ta4);
    assert(status == napi_ok);

    
    sk_surface_raster_release_proc ra4;
    if (ta4 != napi_null) {
      void **a4;
      void *pa4;
      a4 = &pa4;
      status = napi_get_value_external(env, args[3], a4);
      assert(status == napi_ok);
      
      ra4 = *((sk_surface_raster_release_proc*)*a4);
      }
  
  
    napi_valuetype ta5;
    status = napi_typeof(env, args[4], &ta5);
    assert(status == napi_ok);

    
    void* ra5 = NULL;
    if (ta5 != napi_null) {
    void **a5;
    void *pa5;
    a5 = &pa5;
    status = napi_get_arraybuffer_info(env, args[4], a5, NULL);
    assert(status == napi_ok);
    
    ra5 = (void*)*a5;
    }
  
  
    napi_valuetype ta6;
    status = napi_typeof(env, args[5], &ta6);
    assert(status == napi_ok);

    
    sk_surfaceprops_t* ra6 = NULL;
    if (ta6 != napi_null) {
      void **a6;
      void *pa6;
      a6 = &pa6;
      status = napi_get_value_external(env, args[5], a6);
      assert(status == napi_ok);
      
      ra6 = (sk_surfaceprops_t*)*a6;
      }
  sk_surface_t* res = sk_surface_new_raster_direct(ra1,ra2,ra3,ra4,ra5,ra6);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skSurfaceNewBackendTexture(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 7;
  napi_value args[7];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    gr_context_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (gr_context_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    gr_backendtexture_t* ra2 = NULL;
    if (ta2 != napi_null) {
      void **a2;
      void *pa2;
      a2 = &pa2;
      status = napi_get_value_external(env, args[1], a2);
      assert(status == napi_ok);
      
      ra2 = (gr_backendtexture_t*)*a2;
      }
  
  
    
    int ra3;
    status = napi_get_value_int32(env, args[2], &ra3);
    assert(status == napi_ok);
  
  
    
    int ra4;
    status = napi_get_value_int32(env, args[3], &ra4);
    assert(status == napi_ok);
  
  
    
    int ra5;
    status = napi_get_value_int32(env, args[4], &ra5);
    assert(status == napi_ok);
  
  
    napi_valuetype ta6;
    status = napi_typeof(env, args[5], &ta6);
    assert(status == napi_ok);

    
    sk_colorspace_t* ra6 = NULL;
    if (ta6 != napi_null) {
      void **a6;
      void *pa6;
      a6 = &pa6;
      status = napi_get_value_external(env, args[5], a6);
      assert(status == napi_ok);
      
      ra6 = (sk_colorspace_t*)*a6;
      }
  
  
    napi_valuetype ta7;
    status = napi_typeof(env, args[6], &ta7);
    assert(status == napi_ok);

    
    sk_surfaceprops_t* ra7 = NULL;
    if (ta7 != napi_null) {
      void **a7;
      void *pa7;
      a7 = &pa7;
      status = napi_get_value_external(env, args[6], a7);
      assert(status == napi_ok);
      
      ra7 = (sk_surfaceprops_t*)*a7;
      }
  sk_surface_t* res = sk_surface_new_backend_texture(ra1,ra2,ra3,ra4,ra5,ra6,ra7);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skSurfaceNewBackendRenderTarget(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 6;
  napi_value args[6];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    gr_context_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (gr_context_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    gr_backendrendertarget_t* ra2 = NULL;
    if (ta2 != napi_null) {
      void **a2;
      void *pa2;
      a2 = &pa2;
      status = napi_get_value_external(env, args[1], a2);
      assert(status == napi_ok);
      
      ra2 = (gr_backendrendertarget_t*)*a2;
      }
  
  
    
    int ra3;
    status = napi_get_value_int32(env, args[2], &ra3);
    assert(status == napi_ok);
  
  
    
    int ra4;
    status = napi_get_value_int32(env, args[3], &ra4);
    assert(status == napi_ok);
  
  
    napi_valuetype ta5;
    status = napi_typeof(env, args[4], &ta5);
    assert(status == napi_ok);

    
    sk_colorspace_t* ra5 = NULL;
    if (ta5 != napi_null) {
      void **a5;
      void *pa5;
      a5 = &pa5;
      status = napi_get_value_external(env, args[4], a5);
      assert(status == napi_ok);
      
      ra5 = (sk_colorspace_t*)*a5;
      }
  
  
    napi_valuetype ta6;
    status = napi_typeof(env, args[5], &ta6);
    assert(status == napi_ok);

    
    sk_surfaceprops_t* ra6 = NULL;
    if (ta6 != napi_null) {
      void **a6;
      void *pa6;
      a6 = &pa6;
      status = napi_get_value_external(env, args[5], a6);
      assert(status == napi_ok);
      
      ra6 = (sk_surfaceprops_t*)*a6;
      }
  sk_surface_t* res = sk_surface_new_backend_render_target(ra1,ra2,ra3,ra4,ra5,ra6);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skSurfaceNewBackendTextureAsRenderTarget(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 7;
  napi_value args[7];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    gr_context_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (gr_context_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    gr_backendtexture_t* ra2 = NULL;
    if (ta2 != napi_null) {
      void **a2;
      void *pa2;
      a2 = &pa2;
      status = napi_get_value_external(env, args[1], a2);
      assert(status == napi_ok);
      
      ra2 = (gr_backendtexture_t*)*a2;
      }
  
  
    
    int ra3;
    status = napi_get_value_int32(env, args[2], &ra3);
    assert(status == napi_ok);
  
  
    
    int ra4;
    status = napi_get_value_int32(env, args[3], &ra4);
    assert(status == napi_ok);
  
  
    
    int ra5;
    status = napi_get_value_int32(env, args[4], &ra5);
    assert(status == napi_ok);
  
  
    napi_valuetype ta6;
    status = napi_typeof(env, args[5], &ta6);
    assert(status == napi_ok);

    
    sk_colorspace_t* ra6 = NULL;
    if (ta6 != napi_null) {
      void **a6;
      void *pa6;
      a6 = &pa6;
      status = napi_get_value_external(env, args[5], a6);
      assert(status == napi_ok);
      
      ra6 = (sk_colorspace_t*)*a6;
      }
  
  
    napi_valuetype ta7;
    status = napi_typeof(env, args[6], &ta7);
    assert(status == napi_ok);

    
    sk_surfaceprops_t* ra7 = NULL;
    if (ta7 != napi_null) {
      void **a7;
      void *pa7;
      a7 = &pa7;
      status = napi_get_value_external(env, args[6], a7);
      assert(status == napi_ok);
      
      ra7 = (sk_surfaceprops_t*)*a7;
      }
  sk_surface_t* res = sk_surface_new_backend_texture_as_render_target(ra1,ra2,ra3,ra4,ra5,ra6,ra7);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skSurfaceNewRenderTarget(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 7;
  napi_value args[7];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    gr_context_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (gr_context_t*)*a1;
      }
  
  
    
    _Bool ra2;
    status = napi_get_value_bool(env, args[1], &ra2);
    assert(status == napi_ok);
  
  
    napi_valuetype ta3;
    status = napi_typeof(env, args[2], &ta3);
    assert(status == napi_ok);

    
    sk_imageinfo_t* ra3 = NULL;
    if (ta3 != napi_null) {
    void **a3;
    void *pa3;
    a3 = &pa3;
    status = napi_get_arraybuffer_info(env, args[2], a3, NULL);
    assert(status == napi_ok);
    
    ra3 = (sk_imageinfo_t*)*a3;
    }
  
  
    
    int ra4;
    status = napi_get_value_int32(env, args[3], &ra4);
    assert(status == napi_ok);
  
  
    
    int ra5;
    status = napi_get_value_int32(env, args[4], &ra5);
    assert(status == napi_ok);
  
  
    napi_valuetype ta6;
    status = napi_typeof(env, args[5], &ta6);
    assert(status == napi_ok);

    
    sk_surfaceprops_t* ra6 = NULL;
    if (ta6 != napi_null) {
      void **a6;
      void *pa6;
      a6 = &pa6;
      status = napi_get_value_external(env, args[5], a6);
      assert(status == napi_ok);
      
      ra6 = (sk_surfaceprops_t*)*a6;
      }
  
  
    
    _Bool ra7;
    status = napi_get_value_bool(env, args[6], &ra7);
    assert(status == napi_ok);
  sk_surface_t* res = sk_surface_new_render_target(ra1,ra2,ra3,ra4,ra5,ra6,ra7);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skSurfaceUnref(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_surface_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_surface_t*)*a1;
      }
  void* res = NULL;
 sk_surface_unref(ra1);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skSurfaceGetCanvas(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_surface_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_surface_t*)*a1;
      }
  sk_canvas_t* res = sk_surface_get_canvas(ra1);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skSurfaceNewImageSnapshot(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_surface_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_surface_t*)*a1;
      }
  sk_image_t* res = sk_surface_new_image_snapshot(ra1);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skSurfaceDraw(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 5;
  napi_value args[5];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_surface_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_surface_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_canvas_t* ra2 = NULL;
    if (ta2 != napi_null) {
      void **a2;
      void *pa2;
      a2 = &pa2;
      status = napi_get_value_external(env, args[1], a2);
      assert(status == napi_ok);
      
      ra2 = (sk_canvas_t*)*a2;
      }
  
  
    
    double ra3;
    status = napi_get_value_double(env, args[2], &ra3);
    assert(status == napi_ok);
  
  
    
    double ra4;
    status = napi_get_value_double(env, args[3], &ra4);
    assert(status == napi_ok);
  
  
    napi_valuetype ta5;
    status = napi_typeof(env, args[4], &ta5);
    assert(status == napi_ok);

    
    sk_paint_t* ra5 = NULL;
    if (ta5 != napi_null) {
      void **a5;
      void *pa5;
      a5 = &pa5;
      status = napi_get_value_external(env, args[4], a5);
      assert(status == napi_ok);
      
      ra5 = (sk_paint_t*)*a5;
      }
  void* res = NULL;
 sk_surface_draw(ra1,ra2,ra3,ra4,ra5);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skSurfacePeekPixels(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_surface_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_surface_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_pixmap_t* ra2 = NULL;
    if (ta2 != napi_null) {
      void **a2;
      void *pa2;
      a2 = &pa2;
      status = napi_get_value_external(env, args[1], a2);
      assert(status == napi_ok);
      
      ra2 = (sk_pixmap_t*)*a2;
      }
  _Bool res = sk_surface_peek_pixels(ra1,ra2);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skSurfaceReadPixels(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 6;
  napi_value args[6];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_surface_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_surface_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_imageinfo_t* ra2 = NULL;
    if (ta2 != napi_null) {
    void **a2;
    void *pa2;
    a2 = &pa2;
    status = napi_get_arraybuffer_info(env, args[1], a2, NULL);
    assert(status == napi_ok);
    
    ra2 = (sk_imageinfo_t*)*a2;
    }
  
  
    napi_valuetype ta3;
    status = napi_typeof(env, args[2], &ta3);
    assert(status == napi_ok);

    
    void* ra3 = NULL;
    if (ta3 != napi_null) {
    void **a3;
    void *pa3;
    a3 = &pa3;
    status = napi_get_arraybuffer_info(env, args[2], a3, NULL);
    assert(status == napi_ok);
    
    ra3 = (void*)*a3;
    }
  
  
    
    int ra4;
    status = napi_get_value_int32(env, args[3], &ra4);
    assert(status == napi_ok);
  
  
    
    int ra5;
    status = napi_get_value_int32(env, args[4], &ra5);
    assert(status == napi_ok);
  
  
    
    int ra6;
    status = napi_get_value_int32(env, args[5], &ra6);
    assert(status == napi_ok);
  _Bool res = sk_surface_read_pixels(ra1,ra2,ra3,ra4,ra5,ra6);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skSurfaceGetProps(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_surface_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_surface_t*)*a1;
      }
  sk_surfaceprops_t* res = sk_surface_get_props(ra1);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skSurfacepropsNew(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    
    unsigned int ra1;
    status = napi_get_value_uint32(env, args[0], &ra1);
    assert(status == napi_ok);
  
  
    
    int ra2;
    status = napi_get_value_int32(env, args[1], &ra2);
    assert(status == napi_ok);
  sk_surfaceprops_t* res = sk_surfaceprops_new(ra1,ra2);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skSurfacepropsDelete(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_surfaceprops_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_surfaceprops_t*)*a1;
      }
  void* res = NULL;
 sk_surfaceprops_delete(ra1);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skSurfacepropsGetFlags(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_surfaceprops_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_surfaceprops_t*)*a1;
      }
  uint32_t res = sk_surfaceprops_get_flags(ra1);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skSurfacepropsGetPixelGeometry(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_surfaceprops_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_surfaceprops_t*)*a1;
      }
  sk_pixelgeometry_t res = sk_surfaceprops_get_pixel_geometry(ra1);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skSvgcanvasCreate(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_rect_t* ra1 = NULL;
    if (ta1 != napi_null) {
    void **a1;
    void *pa1;
    a1 = &pa1;
    status = napi_get_arraybuffer_info(env, args[0], a1, NULL);
    assert(status == napi_ok);
    
    ra1 = (sk_rect_t*)*a1;
    }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_xmlwriter_t* ra2 = NULL;
    if (ta2 != napi_null) {
      void **a2;
      void *pa2;
      a2 = &pa2;
      status = napi_get_value_external(env, args[1], a2);
      assert(status == napi_ok);
      
      ra2 = (sk_xmlwriter_t*)*a2;
      }
  sk_canvas_t* res = sk_svgcanvas_create(ra1,ra2);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skTextblobRef(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_textblob_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_textblob_t*)*a1;
      }
  void* res = NULL;
 sk_textblob_ref(ra1);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skTextblobUnref(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_textblob_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_textblob_t*)*a1;
      }
  void* res = NULL;
 sk_textblob_unref(ra1);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skTextblobGetUniqueId(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_textblob_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_textblob_t*)*a1;
      }
  uint32_t res = sk_textblob_get_unique_id(ra1);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skTextblobGetBounds(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_textblob_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_textblob_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_rect_t* ra2 = NULL;
    if (ta2 != napi_null) {
    void **a2;
    void *pa2;
    a2 = &pa2;
    status = napi_get_arraybuffer_info(env, args[1], a2, NULL);
    assert(status == napi_ok);
    
    ra2 = (sk_rect_t*)*a2;
    }
  void* res = NULL;
 sk_textblob_get_bounds(ra1,ra2);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skTextblobBuilderNew(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  sk_textblob_builder_t* res = sk_textblob_builder_new();

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skTextblobBuilderDelete(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_textblob_builder_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_textblob_builder_t*)*a1;
      }
  void* res = NULL;
 sk_textblob_builder_delete(ra1);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skTextblobBuilderMake(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_textblob_builder_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_textblob_builder_t*)*a1;
      }
  sk_textblob_t* res = sk_textblob_builder_make(ra1);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skTextblobBuilderAllocRunText(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 9;
  napi_value args[9];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_textblob_builder_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_textblob_builder_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_paint_t* ra2 = NULL;
    if (ta2 != napi_null) {
      void **a2;
      void *pa2;
      a2 = &pa2;
      status = napi_get_value_external(env, args[1], a2);
      assert(status == napi_ok);
      
      ra2 = (sk_paint_t*)*a2;
      }
  
  
    
    int ra3;
    status = napi_get_value_int32(env, args[2], &ra3);
    assert(status == napi_ok);
  
  
    
    double ra4;
    status = napi_get_value_double(env, args[3], &ra4);
    assert(status == napi_ok);
  
  
    
    double ra5;
    status = napi_get_value_double(env, args[4], &ra5);
    assert(status == napi_ok);
  
  
    
    int ra6;
    status = napi_get_value_int32(env, args[5], &ra6);
    assert(status == napi_ok);
  
  
    napi_valuetype ta7;
    status = napi_typeof(env, args[6], &ta7);
    assert(status == napi_ok);

    
    sk_string_t* ra7 = NULL;
    if (ta7 != napi_null) {
      void **a7;
      void *pa7;
      a7 = &pa7;
      status = napi_get_value_external(env, args[6], a7);
      assert(status == napi_ok);
      
      ra7 = (sk_string_t*)*a7;
      }
  
  
    napi_valuetype ta8;
    status = napi_typeof(env, args[7], &ta8);
    assert(status == napi_ok);

    
    sk_rect_t* ra8 = NULL;
    if (ta8 != napi_null) {
    void **a8;
    void *pa8;
    a8 = &pa8;
    status = napi_get_arraybuffer_info(env, args[7], a8, NULL);
    assert(status == napi_ok);
    
    ra8 = (sk_rect_t*)*a8;
    }
  
  
    napi_valuetype ta9;
    status = napi_typeof(env, args[8], &ta9);
    assert(status == napi_ok);

    
    sk_textblob_builder_runbuffer_t* ra9 = NULL;
    if (ta9 != napi_null) {
    void **a9;
    void *pa9;
    a9 = &pa9;
    status = napi_get_arraybuffer_info(env, args[8], a9, NULL);
    assert(status == napi_ok);
    
    ra9 = (sk_textblob_builder_runbuffer_t*)*a9;
    }
  void* res = NULL;
 sk_textblob_builder_alloc_run_text(ra1,ra2,ra3,ra4,ra5,ra6,ra7,ra8,ra9);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skTextblobBuilderAllocRunTextPosH(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 8;
  napi_value args[8];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_textblob_builder_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_textblob_builder_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_paint_t* ra2 = NULL;
    if (ta2 != napi_null) {
      void **a2;
      void *pa2;
      a2 = &pa2;
      status = napi_get_value_external(env, args[1], a2);
      assert(status == napi_ok);
      
      ra2 = (sk_paint_t*)*a2;
      }
  
  
    
    int ra3;
    status = napi_get_value_int32(env, args[2], &ra3);
    assert(status == napi_ok);
  
  
    
    double ra4;
    status = napi_get_value_double(env, args[3], &ra4);
    assert(status == napi_ok);
  
  
    
    int ra5;
    status = napi_get_value_int32(env, args[4], &ra5);
    assert(status == napi_ok);
  
  
    napi_valuetype ta6;
    status = napi_typeof(env, args[5], &ta6);
    assert(status == napi_ok);

    
    sk_string_t* ra6 = NULL;
    if (ta6 != napi_null) {
      void **a6;
      void *pa6;
      a6 = &pa6;
      status = napi_get_value_external(env, args[5], a6);
      assert(status == napi_ok);
      
      ra6 = (sk_string_t*)*a6;
      }
  
  
    napi_valuetype ta7;
    status = napi_typeof(env, args[6], &ta7);
    assert(status == napi_ok);

    
    sk_rect_t* ra7 = NULL;
    if (ta7 != napi_null) {
    void **a7;
    void *pa7;
    a7 = &pa7;
    status = napi_get_arraybuffer_info(env, args[6], a7, NULL);
    assert(status == napi_ok);
    
    ra7 = (sk_rect_t*)*a7;
    }
  
  
    napi_valuetype ta8;
    status = napi_typeof(env, args[7], &ta8);
    assert(status == napi_ok);

    
    sk_textblob_builder_runbuffer_t* ra8 = NULL;
    if (ta8 != napi_null) {
    void **a8;
    void *pa8;
    a8 = &pa8;
    status = napi_get_arraybuffer_info(env, args[7], a8, NULL);
    assert(status == napi_ok);
    
    ra8 = (sk_textblob_builder_runbuffer_t*)*a8;
    }
  void* res = NULL;
 sk_textblob_builder_alloc_run_text_pos_h(ra1,ra2,ra3,ra4,ra5,ra6,ra7,ra8);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skTextblobBuilderAllocRunTextPos(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 7;
  napi_value args[7];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_textblob_builder_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_textblob_builder_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_paint_t* ra2 = NULL;
    if (ta2 != napi_null) {
      void **a2;
      void *pa2;
      a2 = &pa2;
      status = napi_get_value_external(env, args[1], a2);
      assert(status == napi_ok);
      
      ra2 = (sk_paint_t*)*a2;
      }
  
  
    
    int ra3;
    status = napi_get_value_int32(env, args[2], &ra3);
    assert(status == napi_ok);
  
  
    
    int ra4;
    status = napi_get_value_int32(env, args[3], &ra4);
    assert(status == napi_ok);
  
  
    napi_valuetype ta5;
    status = napi_typeof(env, args[4], &ta5);
    assert(status == napi_ok);

    
    sk_string_t* ra5 = NULL;
    if (ta5 != napi_null) {
      void **a5;
      void *pa5;
      a5 = &pa5;
      status = napi_get_value_external(env, args[4], a5);
      assert(status == napi_ok);
      
      ra5 = (sk_string_t*)*a5;
      }
  
  
    napi_valuetype ta6;
    status = napi_typeof(env, args[5], &ta6);
    assert(status == napi_ok);

    
    sk_rect_t* ra6 = NULL;
    if (ta6 != napi_null) {
    void **a6;
    void *pa6;
    a6 = &pa6;
    status = napi_get_arraybuffer_info(env, args[5], a6, NULL);
    assert(status == napi_ok);
    
    ra6 = (sk_rect_t*)*a6;
    }
  
  
    napi_valuetype ta7;
    status = napi_typeof(env, args[6], &ta7);
    assert(status == napi_ok);

    
    sk_textblob_builder_runbuffer_t* ra7 = NULL;
    if (ta7 != napi_null) {
    void **a7;
    void *pa7;
    a7 = &pa7;
    status = napi_get_arraybuffer_info(env, args[6], a7, NULL);
    assert(status == napi_ok);
    
    ra7 = (sk_textblob_builder_runbuffer_t*)*a7;
    }
  void* res = NULL;
 sk_textblob_builder_alloc_run_text_pos(ra1,ra2,ra3,ra4,ra5,ra6,ra7);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skTypefaceCreateDefault(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  sk_typeface_t* res = sk_typeface_create_default();

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skTypefaceRefDefault(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  sk_typeface_t* res = sk_typeface_ref_default();

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skTypefaceCreateFromNameWithFontStyle(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    size_t la1;
    status = napi_get_value_string_utf8(env, args[0], NULL, 0, &la1);
    assert(status == napi_ok);
    char* ra1 = (char*)malloc(la1 + 1);
    status = napi_get_value_string_utf8(env, args[0], ra1, la1 + 1, &la1);
    assert(status == napi_ok);
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_fontstyle_t* ra2 = NULL;
    if (ta2 != napi_null) {
      void **a2;
      void *pa2;
      a2 = &pa2;
      status = napi_get_value_external(env, args[1], a2);
      assert(status == napi_ok);
      
      ra2 = (sk_fontstyle_t*)*a2;
      }
  sk_typeface_t* res = sk_typeface_create_from_name_with_font_style(ra1,ra2);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skTypefaceUnref(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_typeface_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_typeface_t*)*a1;
      }
  void* res = NULL;
 sk_typeface_unref(ra1);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skTypefaceCreateFromFile(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    size_t la1;
    status = napi_get_value_string_utf8(env, args[0], NULL, 0, &la1);
    assert(status == napi_ok);
    char* ra1 = (char*)malloc(la1 + 1);
    status = napi_get_value_string_utf8(env, args[0], ra1, la1 + 1, &la1);
    assert(status == napi_ok);
  
  
    
    int ra2;
    status = napi_get_value_int32(env, args[1], &ra2);
    assert(status == napi_ok);
  sk_typeface_t* res = sk_typeface_create_from_file(ra1,ra2);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skTypefaceCreateFromStream(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_stream_asset_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_stream_asset_t*)*a1;
      }
  
  
    
    int ra2;
    status = napi_get_value_int32(env, args[1], &ra2);
    assert(status == napi_ok);
  sk_typeface_t* res = sk_typeface_create_from_stream(ra1,ra2);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skTypefaceCharsToGlyphs(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 5;
  napi_value args[5];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_typeface_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_typeface_t*)*a1;
      }
  
  
    size_t la2;
    status = napi_get_value_string_utf8(env, args[1], NULL, 0, &la2);
    assert(status == napi_ok);
    char* ra2 = (char*)malloc(la2 + 1);
    status = napi_get_value_string_utf8(env, args[1], ra2, la2 + 1, &la2);
    assert(status == napi_ok);
  
  
    
    int ra3;
    status = napi_get_value_int32(env, args[2], &ra3);
    assert(status == napi_ok);
  
  
    napi_valuetype ta4;
    status = napi_typeof(env, args[3], &ta4);
    assert(status == napi_ok);

    
    uint16_t* ra4 = NULL;
    if (ta4 != napi_null) {
    void **a4;
    void *pa4;
    a4 = &pa4;
    status = napi_get_arraybuffer_info(env, args[3], a4, NULL);
    assert(status == napi_ok);
    
    ra4 = (uint16_t*)*a4;
    }
  
  
    
    int ra5;
    status = napi_get_value_int32(env, args[4], &ra5);
    assert(status == napi_ok);
  int res = sk_typeface_chars_to_glyphs(ra1,ra2,ra3,ra4,ra5);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skTypefaceOpenStream(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_typeface_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_typeface_t*)*a1;
      }
  
  
    
    int* ra2 = NULL;
    status = napi_get_value_int32(env, args[1], ra2);
    assert(status == napi_ok);
  sk_stream_asset_t* res = sk_typeface_open_stream(ra1,ra2);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skTypefaceGetUnitsPerEm(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_typeface_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_typeface_t*)*a1;
      }
  int res = sk_typeface_get_units_per_em(ra1);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skTypefaceGetFamilyName(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_typeface_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_typeface_t*)*a1;
      }
  sk_string_t* res = sk_typeface_get_family_name(ra1);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skTypefaceGetFontstyle(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_typeface_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_typeface_t*)*a1;
      }
  sk_fontstyle_t* res = sk_typeface_get_fontstyle(ra1);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skTypefaceGetFontWeight(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_typeface_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_typeface_t*)*a1;
      }
  int res = sk_typeface_get_font_weight(ra1);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skTypefaceGetFontWidth(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_typeface_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_typeface_t*)*a1;
      }
  int res = sk_typeface_get_font_width(ra1);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skTypefaceGetFontSlant(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_typeface_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_typeface_t*)*a1;
      }
  sk_font_style_slant_t res = sk_typeface_get_font_slant(ra1);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skTypefaceCountTables(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_typeface_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_typeface_t*)*a1;
      }
  int res = sk_typeface_count_tables(ra1);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skTypefaceGetTableTags(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_typeface_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_typeface_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_font_table_tag_t* ra2 = NULL;
    if (ta2 != napi_null) {
    void **a2;
    void *pa2;
    a2 = &pa2;
    status = napi_get_arraybuffer_info(env, args[1], a2, NULL);
    assert(status == napi_ok);
    
    ra2 = (sk_font_table_tag_t*)*a2;
    }
  int res = sk_typeface_get_table_tags(ra1,ra2);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skTypefaceGetTableSize(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_typeface_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_typeface_t*)*a1;
      }
  
  
    
    unsigned int ra2;
    status = napi_get_value_uint32(env, args[1], &ra2);
    assert(status == napi_ok);
  size_t res = sk_typeface_get_table_size(ra1,ra2);

  
  status = napi_create_int32(env, res, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skTypefaceGetTableData(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 5;
  napi_value args[5];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_typeface_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_typeface_t*)*a1;
      }
  
  
    
    unsigned int ra2;
    status = napi_get_value_uint32(env, args[1], &ra2);
    assert(status == napi_ok);
  
  
    
    int ra3;
    status = napi_get_value_int32(env, args[2], &ra3);
    assert(status == napi_ok);
  
  
    
    int ra4;
    status = napi_get_value_int32(env, args[3], &ra4);
    assert(status == napi_ok);
  
  
    napi_valuetype ta5;
    status = napi_typeof(env, args[4], &ta5);
    assert(status == napi_ok);

    
    void* ra5 = NULL;
    if (ta5 != napi_null) {
    void **a5;
    void *pa5;
    a5 = &pa5;
    status = napi_get_arraybuffer_info(env, args[4], a5, NULL);
    assert(status == napi_ok);
    
    ra5 = (void*)*a5;
    }
  size_t res = sk_typeface_get_table_data(ra1,ra2,ra3,ra4,ra5);

  
  status = napi_create_int32(env, res, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skTypefaceIsFixedPitch(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_typeface_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_typeface_t*)*a1;
      }
  bool res = sk_typeface_is_fixed_pitch(ra1);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skFontmgrCreateDefault(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  sk_fontmgr_t* res = sk_fontmgr_create_default();

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skFontmgrRefDefault(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  sk_fontmgr_t* res = sk_fontmgr_ref_default();

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skFontmgrUnref(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_fontmgr_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_fontmgr_t*)*a1;
      }
  void* res = NULL;
 sk_fontmgr_unref(ra1);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skFontmgrCountFamilies(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_fontmgr_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_fontmgr_t*)*a1;
      }
  int res = sk_fontmgr_count_families(ra1);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skFontmgrGetFamilyName(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 3;
  napi_value args[3];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_fontmgr_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_fontmgr_t*)*a1;
      }
  
  
    
    int ra2;
    status = napi_get_value_int32(env, args[1], &ra2);
    assert(status == napi_ok);
  
  
    napi_valuetype ta3;
    status = napi_typeof(env, args[2], &ta3);
    assert(status == napi_ok);

    
    sk_string_t* ra3 = NULL;
    if (ta3 != napi_null) {
      void **a3;
      void *pa3;
      a3 = &pa3;
      status = napi_get_value_external(env, args[2], a3);
      assert(status == napi_ok);
      
      ra3 = (sk_string_t*)*a3;
      }
  void* res = NULL;
 sk_fontmgr_get_family_name(ra1,ra2,ra3);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skFontmgrCreateStyleset(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_fontmgr_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_fontmgr_t*)*a1;
      }
  
  
    
    int ra2;
    status = napi_get_value_int32(env, args[1], &ra2);
    assert(status == napi_ok);
  sk_fontstyleset_t* res = sk_fontmgr_create_styleset(ra1,ra2);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skFontmgrMatchFamily(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_fontmgr_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_fontmgr_t*)*a1;
      }
  
  
    size_t la2;
    status = napi_get_value_string_utf8(env, args[1], NULL, 0, &la2);
    assert(status == napi_ok);
    char* ra2 = (char*)malloc(la2 + 1);
    status = napi_get_value_string_utf8(env, args[1], ra2, la2 + 1, &la2);
    assert(status == napi_ok);
  sk_fontstyleset_t* res = sk_fontmgr_match_family(ra1,ra2);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skFontmgrMatchFamilyStyle(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 3;
  napi_value args[3];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_fontmgr_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_fontmgr_t*)*a1;
      }
  
  
    size_t la2;
    status = napi_get_value_string_utf8(env, args[1], NULL, 0, &la2);
    assert(status == napi_ok);
    char* ra2 = (char*)malloc(la2 + 1);
    status = napi_get_value_string_utf8(env, args[1], ra2, la2 + 1, &la2);
    assert(status == napi_ok);
  
  
    napi_valuetype ta3;
    status = napi_typeof(env, args[2], &ta3);
    assert(status == napi_ok);

    
    sk_fontstyle_t* ra3 = NULL;
    if (ta3 != napi_null) {
      void **a3;
      void *pa3;
      a3 = &pa3;
      status = napi_get_value_external(env, args[2], a3);
      assert(status == napi_ok);
      
      ra3 = (sk_fontstyle_t*)*a3;
      }
  sk_typeface_t* res = sk_fontmgr_match_family_style(ra1,ra2,ra3);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skFontmgrMatchFamilyStyleCharacter(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 6;
  napi_value args[6];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_fontmgr_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_fontmgr_t*)*a1;
      }
  
  
    size_t la2;
    status = napi_get_value_string_utf8(env, args[1], NULL, 0, &la2);
    assert(status == napi_ok);
    char* ra2 = (char*)malloc(la2 + 1);
    status = napi_get_value_string_utf8(env, args[1], ra2, la2 + 1, &la2);
    assert(status == napi_ok);
  
  
    napi_valuetype ta3;
    status = napi_typeof(env, args[2], &ta3);
    assert(status == napi_ok);

    
    sk_fontstyle_t* ra3 = NULL;
    if (ta3 != napi_null) {
      void **a3;
      void *pa3;
      a3 = &pa3;
      status = napi_get_value_external(env, args[2], a3);
      assert(status == napi_ok);
      
      ra3 = (sk_fontstyle_t*)*a3;
      }
  
  
    size_t la4;
    status = napi_get_value_string_utf8(env, args[3], NULL, 0, &la4);
    assert(status == napi_ok);
    char* ra4 = (char*)malloc(la4 + 1);
    status = napi_get_value_string_utf8(env, args[3], ra4, la4 + 1, &la4);
    assert(status == napi_ok);
  
  
    
    int ra5;
    status = napi_get_value_int32(env, args[4], &ra5);
    assert(status == napi_ok);
  
  
    
    int ra6;
    status = napi_get_value_int32(env, args[5], &ra6);
    assert(status == napi_ok);
  sk_typeface_t* res = sk_fontmgr_match_family_style_character(ra1,ra2,ra3,ra4,ra5,ra6);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skFontmgrMatchFaceStyle(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 3;
  napi_value args[3];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_fontmgr_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_fontmgr_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_typeface_t* ra2 = NULL;
    if (ta2 != napi_null) {
      void **a2;
      void *pa2;
      a2 = &pa2;
      status = napi_get_value_external(env, args[1], a2);
      assert(status == napi_ok);
      
      ra2 = (sk_typeface_t*)*a2;
      }
  
  
    napi_valuetype ta3;
    status = napi_typeof(env, args[2], &ta3);
    assert(status == napi_ok);

    
    sk_fontstyle_t* ra3 = NULL;
    if (ta3 != napi_null) {
      void **a3;
      void *pa3;
      a3 = &pa3;
      status = napi_get_value_external(env, args[2], a3);
      assert(status == napi_ok);
      
      ra3 = (sk_fontstyle_t*)*a3;
      }
  sk_typeface_t* res = sk_fontmgr_match_face_style(ra1,ra2,ra3);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skFontmgrCreateFromData(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 3;
  napi_value args[3];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_fontmgr_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_fontmgr_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_data_t* ra2 = NULL;
    if (ta2 != napi_null) {
      void **a2;
      void *pa2;
      a2 = &pa2;
      status = napi_get_value_external(env, args[1], a2);
      assert(status == napi_ok);
      
      ra2 = (sk_data_t*)*a2;
      }
  
  
    
    int ra3;
    status = napi_get_value_int32(env, args[2], &ra3);
    assert(status == napi_ok);
  sk_typeface_t* res = sk_fontmgr_create_from_data(ra1,ra2,ra3);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skFontmgrCreateFromStream(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 3;
  napi_value args[3];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_fontmgr_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_fontmgr_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_stream_asset_t* ra2 = NULL;
    if (ta2 != napi_null) {
      void **a2;
      void *pa2;
      a2 = &pa2;
      status = napi_get_value_external(env, args[1], a2);
      assert(status == napi_ok);
      
      ra2 = (sk_stream_asset_t*)*a2;
      }
  
  
    
    int ra3;
    status = napi_get_value_int32(env, args[2], &ra3);
    assert(status == napi_ok);
  sk_typeface_t* res = sk_fontmgr_create_from_stream(ra1,ra2,ra3);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skFontmgrCreateFromFile(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 3;
  napi_value args[3];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_fontmgr_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_fontmgr_t*)*a1;
      }
  
  
    size_t la2;
    status = napi_get_value_string_utf8(env, args[1], NULL, 0, &la2);
    assert(status == napi_ok);
    char* ra2 = (char*)malloc(la2 + 1);
    status = napi_get_value_string_utf8(env, args[1], ra2, la2 + 1, &la2);
    assert(status == napi_ok);
  
  
    
    int ra3;
    status = napi_get_value_int32(env, args[2], &ra3);
    assert(status == napi_ok);
  sk_typeface_t* res = sk_fontmgr_create_from_file(ra1,ra2,ra3);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skFontstyleNew(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 3;
  napi_value args[3];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    
    int ra1;
    status = napi_get_value_int32(env, args[0], &ra1);
    assert(status == napi_ok);
  
  
    
    int ra2;
    status = napi_get_value_int32(env, args[1], &ra2);
    assert(status == napi_ok);
  
  
    
    int ra3;
    status = napi_get_value_int32(env, args[2], &ra3);
    assert(status == napi_ok);
  sk_fontstyle_t* res = sk_fontstyle_new(ra1,ra2,ra3);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skFontstyleDelete(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_fontstyle_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_fontstyle_t*)*a1;
      }
  void* res = NULL;
 sk_fontstyle_delete(ra1);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skFontstyleGetWeight(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_fontstyle_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_fontstyle_t*)*a1;
      }
  int res = sk_fontstyle_get_weight(ra1);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skFontstyleGetWidth(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_fontstyle_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_fontstyle_t*)*a1;
      }
  int res = sk_fontstyle_get_width(ra1);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skFontstyleGetSlant(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_fontstyle_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_fontstyle_t*)*a1;
      }
  sk_font_style_slant_t res = sk_fontstyle_get_slant(ra1);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skFontstylesetCreateEmpty(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  sk_fontstyleset_t* res = sk_fontstyleset_create_empty();

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skFontstylesetUnref(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_fontstyleset_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_fontstyleset_t*)*a1;
      }
  void* res = NULL;
 sk_fontstyleset_unref(ra1);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skFontstylesetGetCount(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_fontstyleset_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_fontstyleset_t*)*a1;
      }
  int res = sk_fontstyleset_get_count(ra1);

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skFontstylesetGetStyle(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 4;
  napi_value args[4];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_fontstyleset_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_fontstyleset_t*)*a1;
      }
  
  
    
    int ra2;
    status = napi_get_value_int32(env, args[1], &ra2);
    assert(status == napi_ok);
  
  
    napi_valuetype ta3;
    status = napi_typeof(env, args[2], &ta3);
    assert(status == napi_ok);

    
    sk_fontstyle_t* ra3 = NULL;
    if (ta3 != napi_null) {
      void **a3;
      void *pa3;
      a3 = &pa3;
      status = napi_get_value_external(env, args[2], a3);
      assert(status == napi_ok);
      
      ra3 = (sk_fontstyle_t*)*a3;
      }
  
  
    napi_valuetype ta4;
    status = napi_typeof(env, args[3], &ta4);
    assert(status == napi_ok);

    
    sk_string_t* ra4 = NULL;
    if (ta4 != napi_null) {
      void **a4;
      void *pa4;
      a4 = &pa4;
      status = napi_get_value_external(env, args[3], a4);
      assert(status == napi_ok);
      
      ra4 = (sk_string_t*)*a4;
      }
  void* res = NULL;
 sk_fontstyleset_get_style(ra1,ra2,ra3,ra4);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skFontstylesetCreateTypeface(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_fontstyleset_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_fontstyleset_t*)*a1;
      }
  
  
    
    int ra2;
    status = napi_get_value_int32(env, args[1], &ra2);
    assert(status == napi_ok);
  sk_typeface_t* res = sk_fontstyleset_create_typeface(ra1,ra2);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skFontstylesetMatchStyle(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_fontstyleset_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_fontstyleset_t*)*a1;
      }
  
  
    napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    sk_fontstyle_t* ra2 = NULL;
    if (ta2 != napi_null) {
      void **a2;
      void *pa2;
      a2 = &pa2;
      status = napi_get_value_external(env, args[1], a2);
      assert(status == napi_ok);
      
      ra2 = (sk_fontstyle_t*)*a2;
      }
  sk_typeface_t* res = sk_fontstyleset_match_style(ra1,ra2);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skVerticesUnref(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_vertices_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_vertices_t*)*a1;
      }
  void* res = NULL;
 sk_vertices_unref(ra1);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skVerticesRef(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_vertices_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_vertices_t*)*a1;
      }
  void* res = NULL;
 sk_vertices_ref(ra1);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skVerticesMakeCopy(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 7;
  napi_value args[7];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    
    int ra1;
    status = napi_get_value_int32(env, args[0], &ra1);
    assert(status == napi_ok);
  
  
    
    int ra2;
    status = napi_get_value_int32(env, args[1], &ra2);
    assert(status == napi_ok);
  
  
    napi_valuetype ta3;
    status = napi_typeof(env, args[2], &ta3);
    assert(status == napi_ok);

    
    sk_point_t* ra3 = NULL;
    if (ta3 != napi_null) {
    void **a3;
    void *pa3;
    a3 = &pa3;
    status = napi_get_arraybuffer_info(env, args[2], a3, NULL);
    assert(status == napi_ok);
    
    ra3 = (sk_point_t*)*a3;
    }
  
  
    napi_valuetype ta4;
    status = napi_typeof(env, args[3], &ta4);
    assert(status == napi_ok);

    
    sk_point_t* ra4 = NULL;
    if (ta4 != napi_null) {
    void **a4;
    void *pa4;
    a4 = &pa4;
    status = napi_get_arraybuffer_info(env, args[3], a4, NULL);
    assert(status == napi_ok);
    
    ra4 = (sk_point_t*)*a4;
    }
  
  
    napi_valuetype ta5;
    status = napi_typeof(env, args[4], &ta5);
    assert(status == napi_ok);

    
    sk_color_t* ra5 = NULL;
    if (ta5 != napi_null) {
      void **a5;
      void *pa5;
      a5 = &pa5;
      status = napi_get_value_external(env, args[4], a5);
      assert(status == napi_ok);
      
      ra5 = (sk_color_t*)*a5;
      }
  
  
    
    int ra6;
    status = napi_get_value_int32(env, args[5], &ra6);
    assert(status == napi_ok);
  
  
    
    unsigned int* ra7 = NULL;
    status = napi_get_value_uint32(env, args[6], ra7);
    assert(status == napi_ok);
  sk_vertices_t* res = sk_vertices_make_copy(ra1,ra2,ra3,ra4,ra5,ra6,ra7);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skXmlstreamwriterNew(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_wstream_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_wstream_t*)*a1;
      }
  sk_xmlstreamwriter_t* res = sk_xmlstreamwriter_new(ra1);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value skXmlstreamwriterDelete(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    sk_xmlstreamwriter_t* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (sk_xmlstreamwriter_t*)*a1;
      }
  void* res = NULL;
 sk_xmlstreamwriter_delete(ra1);

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}


