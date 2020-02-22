{
  "variables": {
    "skia": "<@(module_root_dir)/libs"
  },
  "targets": [
    {
      "target_name": "skiaJS",
      "sources": [ "generated/index.c" ],
      "include_dirs": [
        "<@(module_root_dir)",
      ],
      "conditions": [
      [
        "OS=='linux'",
        {
        "libraries": [
          "-Wl,-rpath=\'$${ORIGIN}/../../../libs/linux'",
          "<(skia)/linux/libSkiaSharp.so"
        ]
        }
       ],
      	[
          "OS=='win'",
          {
          	"libraries": [
          		"<(skia)/win32/libSkiaSharp.lib",
          	]
          }
        ],
        [
          "OS=='mac'",
          {
            "xcode_settings": {
              "OTHER_LDFLAGS": [
                "<(skia)/darwin/libSkiaSharp.dylib",
                "-Wl,-rpath -Wl,@loader_path/../../../libs/darwin"
              ]
            }
          }
        ]
      ]
    }
  ]
}
