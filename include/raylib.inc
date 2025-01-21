[BITS 64]

; =======[CONSTANTS]=======

; ConfigFlags enum constants
%assign FLAG_VSYNC_HINT               0x00000040
%assign FLAG_FULLSCREEN_MODE          0x00000002
%assign FLAG_WINDOW_RESIZABLE         0x00000004
%assign FLAG_WINDOW_UNDECORATED       0x00000008
%assign FLAG_WINDOW_HIDDEN            0x00000080
%assign FLAG_WINDOW_MINIMIZED         0x00000200
%assign FLAG_WINDOW_MAXIMIZED         0x00000400
%assign FLAG_WINDOW_UNFOCUSED         0x00000800
%assign FLAG_WINDOW_TOPMOST           0x00001000
%assign FLAG_WINDOW_ALWAYS_RUN        0x00000100
%assign FLAG_WINDOW_TRANSPARENT       0x00000010
%assign FLAG_WINDOW_HIGHDPI           0x00002000
%assign FLAG_WINDOW_MOUSE_PASSTHROUGH 0x00004000
%assign FLAG_BORDERLESS_WINDOWED_MODE 0x00008000
%assign FLAG_MSAA_4X_HINT             0x00000020
%assign FLAG_INTERLACED_HINT          0x00010000
; =-=-=-=-=-=-=-=

; TraceLogLevel Enum Constants
%assign LOG_ALL     0
%assign LOG_TRACE   1
%assign LOG_DEBUG   2
%assign LOG_INFO    3
%assign LOG_WARNING 4
%assign LOG_ERROR   5
%assign LOG_FATAL   6
%assign LOG_NONE    7
; =-=-=-=-=-=-=-=

; Keys
%assign    KEY_NULL             0
%assign    KEY_APOSTROPHE       39       
%assign    KEY_COMMA            44       
%assign    KEY_MINUS            45       
%assign    KEY_PERIOD           46       
%assign    KEY_SLASH            47       
%assign    KEY_ZERO             48       
%assign    KEY_ONE              49       
%assign    KEY_TWO              50       
%assign    KEY_THREE            51       
%assign    KEY_FOUR             52       
%assign    KEY_FIVE             53       
%assign    KEY_SIX              54       
%assign    KEY_SEVEN            55       
%assign    KEY_EIGHT            56       
%assign    KEY_NINE             57       
%assign    KEY_SEMICOLON        59       
%assign    KEY_EQUAL            61       
%assign    KEY_A                65
%assign    KEY_B                66
%assign    KEY_C                67
%assign    KEY_D                68
%assign    KEY_E                69
%assign    KEY_F                70
%assign    KEY_G                71
%assign    KEY_H                72
%assign    KEY_I                73
%assign    KEY_J                74
%assign    KEY_K                75
%assign    KEY_L                76
%assign    KEY_M                77
%assign    KEY_N                78
%assign    KEY_O                79
%assign    KEY_P                80
%assign    KEY_Q                81
%assign    KEY_R                82
%assign    KEY_S                83
%assign    KEY_T                84
%assign    KEY_U                85
%assign    KEY_V                86
%assign    KEY_W                87
%assign    KEY_X                88
%assign    KEY_Y                89
%assign    KEY_Z                90
%assign    KEY_LEFT_BRACKET     91       
%assign    KEY_BACKSLASH        92       
%assign    KEY_RIGHT_BRACKET    93       
%assign    KEY_GRAVE            96      
%assign    KEY_SPACE            32       
%assign    KEY_ESCAPE           256    
%assign    KEY_ENTER            257     
%assign    KEY_TAB              258      
%assign    KEY_BACKSPACE        259     
%assign    KEY_INSERT           260    
%assign    KEY_DELETE           261
%assign    KEY_RIGHT            262   
%assign    KEY_LEFT             263      
%assign    KEY_DOWN             264      
%assign    KEY_UP               265   
%assign    KEY_PAGE_UP          266    
%assign    KEY_PAGE_DOWN        267      
%assign    KEY_HOME             268     
%assign    KEY_END              269     
%assign    KEY_CAPS_LOCK        280     
%assign    KEY_SCROLL_LOCK      281      
%assign    KEY_NUM_LOCK         282     
%assign    KEY_PRINT_SCREEN     283      
%assign    KEY_PAUSE            284     
%assign    KEY_F1               290      
%assign    KEY_F2               291      
%assign    KEY_F3               292      
%assign    KEY_F4               293      
%assign    KEY_F5               294      
%assign    KEY_F6               295      
%assign    KEY_F7               296      
%assign    KEY_F8               297      
%assign    KEY_F9               298      
%assign    KEY_F10              299      
%assign    KEY_F11              300      
%assign    KEY_F12              301               
%assign    KEY_LEFT_SHIFT       340  
%assign    KEY_LEFT_CONTROL     341 
%assign    KEY_LEFT_ALT         342    
%assign    KEY_LEFT_SUPER       343     
%assign    KEY_RIGHT_SHIFT      344      
%assign    KEY_RIGHT_CONTROL    345      
%assign    KEY_RIGHT_ALT        346      
%assign    KEY_RIGHT_SUPER      347      
%assign    KEY_KB_MENU          348      
%assign    KEY_KP_0             320      
%assign    KEY_KP_1             321      
%assign    KEY_KP_2             322      
%assign    KEY_KP_3             323      
%assign    KEY_KP_4             324      
%assign    KEY_KP_5             325      
%assign    KEY_KP_6             326      
%assign    KEY_KP_7             327      
%assign    KEY_KP_8             328      
%assign    KEY_KP_9             329      
%assign    KEY_KP_DECIMAL       330      
%assign    KEY_KP_DIVIDE        331      
%assign    KEY_KP_MULTIPLY      332      
%assign    KEY_KP_SUBTRACT      333      
%assign    KEY_KP_ADD           334      
%assign    KEY_KP_ENTER         335     
%assign    KEY_KP_EQUAL         336    
%assign    KEY_BACK             4    
%assign    KEY_MENU             5    
%assign    KEY_VOLUME_UP        24    
%assign    KEY_VOLUME_DOWN      25
; Mouse Buttons
%assign MOUSE_BUTTON_LEFT    0
%assign MOUDE_BUTTON_RIGHT   1
%assign MOUDE_BUTTON_MIDDLE  2
%assign MOUDE_BUTTON_SIDE    3
%assign MOUDE_BUTTON_EXTEA   4
%assign MOUDE_BUTTON_FORWARD 5
%assign MOUDE_BUTTON_BACK    6
; Mouse Cursor
%assign MOUSE_CURSOR_DEFAULT            0
%assign MOUSE_CURSOR_ARROW              1
%assign MOUSE_CURSOR_IBEAM              2
%assign MOUSE_CURSOR_CROSSHAIR          3
%assign MOUSE_CURSOR_POINTING_HAND      4
%assign MOUSE_CURSOR_RESIZE_EW          5
%assign MOUSE_CURSOR_RESIZE_NS          6
%assign MOUSE_CURSOR_RESIZE_NWSE        7
%assign MOUSE_CURSOR_RESIZE_NESW        8
%assign MOUSE_CURSOR_RESIZE_ALL         9
%assign MOUSE_CURSOR_RESIZE_NOT_ALLOWED 10
; Gamepad Buttons
%assign GAMEPAD_BUTTON_UNKNOWN          0
%assign GAMEPAD_BUTTON_LEFT_FACE_UP     1
%assign GAMEPAD_BUTTON_LEFT_FACE_RIGHT  2
%assign GAMEPAD_BUTTON_LEFT_FACE_DOWN   3
%assign GAMEPAD_BUTTON_LEFT_FACE_LEFT   4
%assign GAMEPAD_BUTTON_RIGHT_FACE_UP    5
%assign GAMEPAD_BUTTON_RIGHT_FACE_RIGHT 6
%assign GAMEPAD_BUTTON_RIGHT_FACE_DOWN  7
%assign GAMEPAD_BUTTON_RIGHT_FACE_LEFT  8
%assign GAMEPAD_BUTTON_LEFT_TRIGGER_1   9
%assign GAMEPAD_BUTTON_LEFT_TRIGGER_2   10
%assign GAMEPAD_BUTTON_RIGHT_TRIGGER_1  11
%assign GAMEPAD_BUTTON_RIGHT_TRIGGER_2  12
%assign GAMEPAD_BUTTON_MIDDLE_LEFT      13
%assign GAMEPAD_BUTTON_MIDDLE           14
%assign GAMEPAD_BUTTON_MIDDLE_RIGHT     15
%assign GAMEPAD_BUTTON_LEFT_THUMB       16
%assign GAMEPAD_BUTTON_RIGHT_THUMB      17
; Gamepad axes
%assign GAMEPAD_AXIS_LEFT_X        0
%assign GAMEPAD_AXIS_LEFT_Y        1
%assign GAMEPAD_AXIS_RIGHT_X       2
%assign GAMEPAD_AXIS_RIGHT_Y       3
%assign GAMEPAD_AXIS_LEFT_TRIGGER  4
%assign GAMEPAD_AXIS_RIGHT_TRIGGER 5
; Material Map index
%assign MATERIAL_MAP_ALBEDO     0
%assign MATERIAL_MAP_METALNESS  1
%assign MATERIAL_MAP_NORMAL     2
%assign MATERIAL_MAP_ROUGHNESS  3
%assign MATERIAL_MAP_OCCULSION  4
%assign MATERIAL_MAP_EMISSION   5
%assign MATERIAL_MAP_HEIGHT     6
%assign MATERIAL_MAP_CUBEMAP    7
%assign MATERIAL_MAP_IRRADIANCE 8
%assign MATERIAL_MAP_PREFILTER  9
%assign MATERIAL_MAP_BRDF       10

; shader location index
%assign SHADER_LOC_VERTEX_POSITION    0
%assign SHADER_LOC_VERTEX_TEXCOORD01  1
%assign SHADER_LOC_VERTEX_TEXCOORD02  2
%assign SHADER_LOC_VERTEX_NORMAL      3
%assign SHADER_LOC_VERTEX_TANGENT     4
%assign SHADER_LOC_VERTEX_COLOR       5
%assign SHADER_LOC_MATRIX_MVP         6
%assign SHADER_LOC_MATRIX_VIEW        7
%assign SHADER_LOC_MATRIX_PROJECTION  8
%assign SHADER_LOC_MATRIX_MODEL       9
%assign SHADER_LOC_MATRIX_NORMAL      10
%assign SHADER_LOC_VECTOR_VIEW        11
%assign SHADER_LOC_COLOR_DIFFUSE      12
%assign SHADER_LOC_COLOR_SPECULAR     13
%assign SHADER_LOC_COLOR_AMBIENT      14
%assign SHADER_LOC_MAP_ALBEDO         15
%assign SHADER_LOC_MAP_METALNESS      16
%assign SHADER_LOC_MAP_NORMAL         18
%assign SHADER_LOC_MAP_ROUGHNESS      19
%assign SHADER_LOC_MAP_OCCULSION      20
%assign SHADER_LOC_MAP_EMISSION       21
%assign SHADER_LOC_MAP_HEIGHT         22
%assign SHADER_LOC_MAP_CUBEMAP        23
%assign SHADER_LOC_MAP_IRRADIANCE     24
%assign SHADER_LOC_MAP_PREFILTER      25
%assign SHADER_LOC_MAP_BRDF           26
%assign SHADER_LOC_VERTEX_BONEIDS     27
%assign SHADER_LOC_VERTEX_BONEWEIGHTS 28
%assign SHADER_LOC_BONE_MATRICES      29
%assign SHADER_LOC_VERTEX_INSTANCE_TX 30

; Shader uniform type
%assign SHADER_UNIFORM_FLOAT    0  
%assign SHADER_UNIFORM_VEC2     1
%assign SHADER_UNIFORM_VEC3     2
%assign SHADER_UNIFORM_VEC4     3
%assign SHADER_UNIFORM_INT      4
%assign SHADER_UNIFORM_IVEC2    5
%assign SHADER_UNIFORM_IVEC3    6
%assign SHADER_UNIFORM_IVEC4    7
%assign SHADER_UNIFORM_UINT     8
%assign SHADER_UNIFORM_UVEC2    9
%assign SHADER_UNIFORM_UVEC3    10
%assign SHADER_UNIFORM_UVEC4    11
%assign SHADER_UNIFORM_SAMPLER2 12

; Shader attribute type
%assign SHADER_ATTRIB_FLOAT 0
%assign SHADER_ATTRIB_VEC2  1
%assign SHADER_ATTRIB_VEC3  2
%assign SHADER_ATTRIB_VEC4  3

; Pixel formats (1 indexed)
%assign PIXELFORMAT_UNCOMPRESSED_GRAYSCALE    1
%assign PIXELFORMAT_UNCOMPRESSED_GRAY_ALPHA   2
%assign PIXELFORMAT_UNCOMPRESSED_R5G6B5       3
%assign PIXELFORMAT_UNCOMPRESSED_R8G8B8       4
%assign PIXELFORMAT_UNCOMPRESSED_R5G5B5A1     5
%assign PIXELFORMAT_UNCOMPRESSED_R4G4B4A4     6
%assign PIXELFORMAT_UNCOMPRESSED_R8G8B8A8     7
%assign PIXELFORMAT_UNCOMPRESSED_R32          8
%assign PIXELFORMAT_UNCOMPRESSED_R32G32B32    9
%assign PIXELFORMAT_UNCOMPRESSED_R32G32B32A32 10
%assign PIXELFORMAT_UNCOMPRESSED_R16          11
%assign PIXELFORMAT_UNCOMPRESSED_R16G16B16    12
%assign PIXELFORMAT_UNCOMPRESSED_R16G16B16A16 13
%assign PIXELFORMAT_COMPRESSED_DXT1_RGB       14
%assign PIXELFORMAT_COMPRESSED_DXT1_RGBA      15
%assign PIXELFORMAT_COMPRESSED_DXT3_RGBA      16
%assign PIXELFORMAT_COMPRESSED_DXT5_RGBA      17
%assign PIXELFORMAT_COMPRESSED_ETC1_RGB       18
%assign PIXELFORMAT_COMPRESSED_ETC2_RGB       19
%assign PIXELFORMAT_COMPRESSED_ETC2_EAC_RGBA  20
%assign PIXELFORMAT_COMPRESSED_PVRT_RGB       21
%assign PIXELFORMAT_COMPRESSED_PVRT_RGBA      22
%assign PIXELFORMAT_COMPRESSED_ASTC_4x4_RGBA  23
%assign PIXELFORMAT_COMPRESSED_ASTC_8x8_RGBA  24

; Tex Parameters (filter mode)
%assign TEXTURE_FILTER_POINT           0
%assign TEXTURE_FILTER_BILINEAR        1
%assign TEXTURE_FILTER_TRILINEAR       2
%assign TEXTURE_FILTER_ANISOTROPIC_4X  3
%assign TEXTURE_FILTER_ANISOTROPIC_8X  4
%assign TEXTURE_FILTER_ANISOTROPIC_16X 5

; Tex parameters (wrap mode)
%assign TEXTURE_WRAP_REPEAT        0
%assign TEXTURE_WRAP_CLAMP         1
%assign TEXTURE_WRAP_MIRROR_REPEAT 2
%assign TEXTURE_WRAP_MIRROR_CLAMP  3

; Cubemap layouts
%assign CUBEMAP_LAYOUT_AUTO_DETECT         0
%assign CUBEMAP_LAYOUT_LINE_VERTICAL       1
%assign CUBEMAP_LAYOUT_LINE_HORIZONTAL     2
%assign CUBEMAP_LAYOUT_CROSS_THREE_BY_FOUR 3
%assign CUBEMAP_LAYOUT_CROSS_FOUR_BY_THREE 4

; Font types
%assign FONT_DEFAULT 0
%assign FONT_BITMAP  1
%assign FONT_SDF     2

; Color blending modes
%assign BLEND_ALPHA             0
%assign BLEND_ADDITIVE          1
%assign BLEND_MULTIPLIED        2
%assign BLEND_ADD_COLORS        3
%assign BLEND_SUBTRACT_COLORS   4
%assign BLEND_ALPHA_PREMULTIPLY 5
%assign BLEND_CUSTOM            6
%assign BLEND_CUSTOM_SEPERATE   7

; Gestures
%assign GESTURE_NONE        0
%assign GESTURE_TAP         1
%assign GESTURE_DOUBLETAP   2
%assign GESTURE_HOLD        4
%assign GESTURE_DRAG        8
%assign GESTURE_SWIPE_RIGHT 16
%assign GESTURE_SWIPE_LEFT  32
%assign GESTURE_SWIPE_UP    64
%assign GESTURE_SWIPE_DOWN  128
%assign GESTURE_PINCH_IN    256
%assign GESTURE_PINCH_OUT   512

; Camera modes
%assign CAMERA_CUSTOM       0
%assign CAMERA_FREE         1
%assign CAMERA_ORBITAL      2
%assign CAMERA_FIRST_PERSON 3
%assign CAMERA_THIRD_PERSON 4

; Camera porjection
%assign CAMERA_PERSPECTIVE  0
%assign CAMERA_ORTHOGRAPHIC 1

; NPatch layout
%assign NPATCH_NINE_PATCH             0
%assign NPATCH_THREE_PATCH_VERTICAL   1
%assign NPATCH_THREE_PATHC_HORIZONTAL 2

; =======[TYPES]=======

; Boolean impl
%assign true 1
%assign false 0

%define _DBOOL_ db
%define _RESBOOL_ resb
; =-=-=-=-=-=-=-=

; float type macros
%define _DFLOAT_ _DFLOAT_
%define resd resd
; =-=-=-=-=-=-=-=

section .bss
; Color impl
struc Color
    .r: resb 1 ; 0-255
    .g: resb 1 ; 0-255
    .b: resb 1 ; 0-255
    .a: resb 1 ; 0-255
endstruc

%macro _DCOLOR_ 4
    istruc Color
        at Color.r, db %1
        at Color.g, db %2
        at Color.b, db %3
        at Color.a, db %4
    iend
%endmacro

%macro _RESCOLOR_ 1
    resq %1
%endmacro
; =-=-=-=-=-=-=-=

; Vectors
struc Vector2
    .x: resd 1 ; 32 bits for float
    .y: resd 1 ; 32 bits for float
endstruc

%macro _DVEC2_ 2
    istruc Vector2
        at Vector2.x, _DFLOAT_ %1
        at Vector2.y, _DFLOAT_ %2
    iend
%endmacro
%assign Vector2_SIZEOF 8

struc Vector3
    .x: resd 1 ; 32 bits for float
    .y: resd 1 ; 32 bits for float
    .z: resd 1 ; 32 bits for float
endstruc

%macro _DVEC3_ 3
    istruc Vector3
        at Vector3.x, _DFLOAT_ %1
        at Vector3.y, _DFLOAT_ %2
        at Vector3.z, _DFLOAT_ %3
    iend
%endmacro
%assign Vector3_SIZEOF 12

struc Vector4
    .w: resd 1 ; 32 bits for float
    .x: resd 1 ; 32 bits for float
    .y: resd 1 ; 32 bits for float
    .z: resd 1 ; 32 bits for float
endstruc

%macro _DVEC4_ 4
    istruc Vector4
        at Vector4.w, _DFLOAT_ %1
        at Vector4.x, _DFLOAT_ %2
        at Vector4.y, _DFLOAT_ %3
        at Vector4.z, _DFLOAT_ %4
    iend
%endmacro
%assign Vector4_SIZEOF 16
; =-=-=-=-=-=-=-=

; Matrix impl
struc Matrix
    .m0:  resd 1
    .m4:  resd 1
    .m8:  resd 1
    .m12: resd 1
    .m1:  resd 1
    .m5:  resd 1
    .m9:  resd 1
    .m13: resd 1
    .m2:  resd 1
    .m6:  resd 1
    .m10: resd 1
    .m14: resd 1
    .m3:  resd 1
    .m7:  resd 1
    .m11: resd 1
    .m15: resd 1
endstruc

; I **HIGHLY** Recommend istruc'ing this instead of using the macro (for readability)
%macro _DMATRIX_ 16
    istruc Matrix
        at Matrix.m0,  _DFLOAT_ %1
        at Matrix.m4,  _DFLOAT_ %2
        at Matrix.m8,  _DFLOAT_ %3
        at Matrix.m12, _DFLOAT_ %4
        at Matrix.m1,  _DFLOAT_ %5
        at Matrix.m5,  _DFLOAT_ %6
        at Matrix.m9,  _DFLOAT_ %7
        at Matrix.m13, _DFLOAT_ %8
        at Matrix.m2,  _DFLOAT_ %9
        at Matrix.m6,  _DFLOAT_ %10
        at Matrix.m10, _DFLOAT_ %11
        at Matrix.m14, _DFLOAT_ %12
        at Matrix.m3,  _DFLOAT_ %13
        at Matrix.m7,  _DFLOAT_ %14
        at Matrix.m11, _DFLOAT_ %15
        at Matrix.m15, _DFLOAT_ %16
    iend
%endmacro
%assign Matrix_SIZEOF 64
; =-=-=-=-=-=-=-=

; Rectangle impl
struc Rectangle
    .x:      resd 1
    .y:      resd 1
    .width:  resd 1
    .height: resd 1
endstruc

%macro _DREC_ 4
    istruc Rectangle
        at Rectangle.x,      _DFLOAT_ %1
        at Rectangle.y,      _DFLOAT_ %2
        at Rectangle.width,  _DFLOAT_ %3
        at Rectangle.height, _DFLOAT_ %4 
    iend
%endmacro
%assign Rectangle_SIZEOF 16
; =-=-=-=-=-=-=-=

; Image struct impl
struc Image
    ._data:   resq 1
    .width:   resd 1
    .height:  resd 1
    .mipmaps: resd 1
    .format:  resd 1
endstruc
%assign Image_SIZEOF 24
; =-=-=-=-=-=-=-=

; Texture struct impl
struc Texture
    .id:      resd 1
    .width:   resd 1
    .height:  resd 1
    .mipmaps: resd 1
    .format:  resd 1
endstruc
%assign Texture_SIZEOF 20
; =-=-=-=-=-=-=-=

; RenderTexture struct impl
struc RenderTexture
    .id:      resd 1
    .texture: resd 5 ; Same as Texture struct
    .depth:   resd 5 ; Same as Texture struct
endstruc
%assign RenderTexture_SIZEOF 44
; =-=-=-=-=-=-=-=

; NPatchInfo struct impl
struc NPatchInfo
    .source:  resd 4
    .left:    resd 1
    .top:     resd 1
    .right:   resd 1
    .bottom:  resd 1
    .layout:  resd 1
endstruc
%assign NPatchInfo_SIZEOF 36
; =-=-=-=-=-=-=-=

; GlyphInfo struct impl
struc GlyphInfo
    .value:    resd 1
    .offsetX:  resd 1
    .offsetY:  resd 1
    .advanceX: resd 1
    .image:    resb 28
endstruc
%assign GlyphInfo_SIZEOF 44
; =-=-=-=-=-=-=-=

; Font struct impl
struc Font
    .baseSize:     resd 1
    .glyphCount:   resd 1
    .glyphPadding: resd 1
    .texture:      resb 20
endstruc
%assign Font_SIZEOF 32
; =-=-=-=-=-=-=-=

; Camera impl
struc Camera3D
    .position:   resd 3
    .target:     resd 3
    .up:         resd 3
    .fovy:       resd 1
    .projection: resd       1
endstruc
%assign Camera3D_SIZEOF 44

struc Camera2D
    .offset:   resd 2
    .target:   resd 2
    .rotation: resd 1
    .zoom:     resd 1
endstruc
%assign Camera2D_SIZEOF 24
; =-=-=-=-=-=-=-=

; Mesh struct impl
struc Mesh
    .vertexCount:   resd 1
    .triangleCount: resd 1
    .vertices:      resq 1
    .texcoords:     resq 1
    .texcoords2:    resq 1
    .normals:       resq 1
    .tangents:      resq 1
    .colors:        resq 1
    .indices:       resq 1
    .animVertices:  resq 1
    .animNormals:   resq 1
    .boneIds:       resq 1
    .boneWeights:   resq 1
    .boneMatrices:  resq 1
    .boneCount:     resd 1
    .vaoId:         resd 1
    .vboId:         resq 1
endstruc
%assign Mesh_SIZEOF 120
; =-=-=-=-=-=-=-=

; Shader
struc Shader
    .id:   resd 1
    .locs: resq 1
endstruc
%assign Shader_SIZEOF 12

; =-=-=-=-=-=-=-=

; MaterialMap
struc MaterialMap
    .texture: resb       20
    .color:   resb       4
    .value:   resd 1
endstruc
%assign MaterialMap_SIZEOF 28
; =-=-=-=-=-=-=-=

; Material
struc Material
    .shader: resb 12
    .maps:   resq 1
    .params: resd 4
endstruc
%assign Material_SIZEOF 34
; =-=-=-=-=-=-=-=

; Transform
struc Transform
    .translation: resd 3
    .rotation:    resd 4
    .scale:       resd 3
endstruc
%assign Transform_SIZEOF 40
; =-=-=-=-=-=-=-=

; BoneInfo
struc BoneInfo
    .name:   resb 32
    .parent: resd 1
endstruc
%assign BoneInfo_SIZEOF 36
; =-=-=-=-=-=-=-=

; Model
struc Model
    .transfrom:     resd 16
    .meshCount:     resd       1
    .materialCount: resd       1
    .meshes:        resq       1
    .materials:     resq       1
    .meshMaterial:  resq       1
    .boneCount:     resd       1
    .bones:         resq       1
    .bindPose:      resq       1
endstruc
%assign Model_SIZEOF 116
; =-=-=-=-=-=-=-=

; ModelAnimation
struc ModelAnimation
    .boneCount:  resd 1
    .frameCount: resd 1
    .bones:      resq 1
    .framePoses: resq 1
    .name:       resb 32
endstruc
%assign ModelAnimation_SIZEOF 56
; =-=-=-=-=-=-=-=

; Ray
struc Ray
    .position  resd 3
    .direction resd 3
endstruc
%assign Ray_SIZEOF 24
; =-=-=-=-=-=-=-=

; RayCollision
struc RayCollision
    .hit:      resb 1
    .distance: resd 1
    .point:    resd 3
    .normal:   resd 3
endstruc
%assign RayCollision_SIZEOF 29
; =-=-=-=-=-=-=-=

; BoundingBox
struc BoundingBox
    .min resd 3
    .max resd 3
endstruc
%assign BoundingBox_SIZEOF 24
; =-=-=-=-=-=-=-=

; Wave
struc Wave
    .frameCount resd 1
    .sampleRate resd 1
    .sampleSize resd 1
    .channels   resd 1
    ._data      resq 1
endstruc
%assign Wave_SIZEOF 24
; =-=-=-=-=-=-=-=

; AudioStream
struc AudioStream
    .buffer     resq 1
    .processor  resq 1
    .sampleRate resd 1
    .sampleSize resd 1
    .channels   resd 1
endstruc
%assign AudioStream_SIZEOF 28
; =-=-=-=-=-=-=-=

; Sound
struc Sound
    .stream     resb 28
    .frameCount resd 1
endstruc
%assign Sound_SIZEOF 32
; =-=-=-=-=-=-=-=

; Music
struc Music
    .stream     resb      28
    .frameCount resd      1
    .looping    _RESBOOL_ 1
    .ctxType    resd      1
    .ctxData    resq      1
endstruc
%assign Music_SIZEOF 45
; =-=-=-=-=-=-=-=

; VR Structs
struc VrDeviceInfo
    .hResolution            resd       1
    .vResolotion            resd       1
    .hScreenSize            resd 1
    .vScreenSize            resd 1
    .eyeToScreenDistance    resd 1
    .lensSeperationDistance resd 1
    .interpupillaryDistance resd 1
    .lensDistortionValues   resd 4
    .chromaAbCorrection     resd 4
endstruc
%assign VrDeviceInfo_SIZEOF 60

struc VrStereoConfig
    .projection        resd 32
    .viewOffset        resd 32
    .leftLensCenter    resd 2
    .rightLensCenter   resd 2
    .leftScreenCenter  resd 2
    .rightScreenCenter resd 2
    .scale             resd 2
    .scaleIn           resd 2
endstruc
%assign VrStereoConfig_SIZEOF 304
; =-=-=-=-=-=-=-=

; FilePathList
struc FilePathList
    .capacity resd 1
    .count    resd 1
    .paths    resq 1
endstruc
%assign FilePathList_SIZEOF 16
; =-=-=-=-=-=-=-=

; AutomationEvent
struc AutomationEvent
    .frame  resd 1
    .type   resd 1
    .params resd 4
endstruc
%assign AutomationEvent_SIZEOF 24
; =-=-=-=-=-=-=-=

; AutomationEventList
struc AutomationEventList
    .capacity resd 1
    .count    resd 1
    .events   resq 1
endstruc
%assign AutomationEventList_SIZEOF 16
; =-=-=-=-=-=-=-=

section .rodata
LIGHTGRAY:  _DCOLOR_ 200, 200, 200, 0xFF
GRAY:       _DCOLOR_ 130, 130, 130, 0xFF
DARKGRAY:   _DCOLOR_ 80,  80,  80,  0xFF
YELLOW:     _DCOLOR_ 253, 249, 0,   0xFF
GOLD:       _DCOLOR_ 255, 203, 0,   0xFF
ORANGE:     _DCOLOR_ 255, 161, 0,   0xFF
PINK:       _DCOLOR_ 255, 109, 194, 0xFF
RED:        _DCOLOR_ 230, 41,  55,  0xFF
MAROON:     _DCOLOR_ 190, 33,  55,  0xFF
GREEN:      _DCOLOR_ 0,   228, 48,  0xFF
LIME:       _DCOLOR_ 0,   158, 47,  0xFF
DARKGREEN:  _DCOLOR_ 0,   117, 44,  0xFF
SKYBLUE:    _DCOLOR_ 102, 191, 255, 0xFF
BLUE:       _DCOLOR_ 0,   121, 241, 0xFF
DARKBLUE:   _DCOLOR_ 0,   82,  172, 0xFF
PURPLE:     _DCOLOR_ 200, 122, 255, 0xFF
VIOLET:     _DCOLOR_ 135, 60,  190, 0xFF
DARKPURPLE: _DCOLOR_ 112, 31,  126, 0xFF
BEIGE:      _DCOLOR_ 211, 176, 131, 0xFF
BROWN:      _DCOLOR_ 127, 106, 79,  0xFF
DARKBROWN:  _DCOLOR_ 76,  63,  47,  0xFF
WHITE:      _DCOLOR_ 255, 255, 255, 0xFF
BLACK:      _DCOLOR_ 0,   0,   0,   0xFF
BLANK:      _DCOLOR_ 0,   0,   0,   0x00
MAGENTA:    _DCOLOR_ 255, 0,   255, 0xFF
RAYWHITE:   _DCOLOR_ 245, 245, 245, 0xFF

; Function defs
section .text.raylib
; Windows
extern InitWindow, CloseWindow, WindowShouldClose, IsWindowReady, IsWindowFullscreen
extern IsWindowHidden, IsWindowMinimized, IsWindowMaximized, IsWindowFocused, IsWindowResized
extern IsWindowState, SetWindowState, ClearWindowState, ToggleFullscreen, ToggleBorderlessWindowed
extern MaximizeWindow, MinimizeWindow, RestoreWindow, SetWindowIcon, SetWindowIcons, SetWindowTitle
extern SetWindowPosition, SetWindowMonitor, SetWindowMinSize, SetWindowMaxSize, SetWindowSize
extern SetWindowOpacity, SetWindowFocused, GetWindowHandle, GetScreenWidth, GetScreenHeight
extern GetRenderWidth, GetRenderHeight, GetMonitorCount, GetCurrentMonitor, GetMonitorPosition
extern GetMonitorWidth, GetMonitorHeight, GetMonitorPhysicalWidth, GetMonitorPhysicalHeight
extern GetMonitorRefreshRate, GetWindowPosition, GetWindowScaleDPI, GetMonitorName, SetClipboardText
extern GetClipboardText, GetClipboardImage, EnableEventWaiting, DisableEventWaiting

; Cursors
extern ShowCursor, HideCursor, IsCursorHidden, EnableCursor, DisableCursor, IsCursorOnScreen

; Drawings
extern ClearBackground, BeginDrawing, EndDrawing, BeginMode2D, EndMode2D, BeginMode3D
extern EndMode3D, BeginTextureMode, EndTextureMode, BeginShaderMode, EndShaderMode
extern BeginBlendMode, EndBlendMode, BeginScissorMode, EndScissorMode, BeginVrStereoMode
extern EndVrStereoMode

; VR Stereos
extern LoadVrStereoConfig, UnloadVrStereoConfig

; Shader managements
extern LoadShader, LoadShaderFromMemory, IsShaderValid, GetShaderLocation, GetShaderLocationAttrib
extern SetShaderValue, SetShaderValueV, SetShaderValueMatrix, SetShaderValueTexture, UnloadShader

; Timings
extern SetTargetFPS, GetFrameTime, GetTime, GetFPS

; frame control (pro)
extern SwapScreenBuffer, PollInputEvents, WaitTime

; RNGs
extern SetRandomSeed, GetRandomValue, LoadRandomSequence, UnloadRandomSequence

; Miscs
extern TakeScreenshot, SetConfigFlags, OpenURL

; Utils
extern TraceLog, SetTraceLogLevel, MemAlloc, MemRealloc, MemFree
extern SetTraceLogCallback, SetLoadFileDataCallback, SetSaveFileDataCallback, SetLoadFileTextCallback
extern SetSaveFileTextCallback, LoadFileData, UnloadFileData, SaveFileData, ExportDataAsCode, LoadFileText, UnloadFileText, SaveFileText
extern FileExists, DirectoryExists, IsFileExtension, GetFileLength, GetFileExtension, GetFileName, GetFileNameWithoutExt, GetDirectoryPath
extern GetPrevDirectoryPath, GetWorkingDirectory, GetApplicationDriectory, MakeDirectory, ChangeDirectory, IsPathFile, IsFileNameValid, LoadDirectoryFiles
extern LoadDirectoryFilesEx, UnloadDirectoryFiles, LoadDroppedFiles, UnloadDroppedFiles, GetFileModTime

; Compression & Encoding
extern CompressData, DecompressData, EncodeDataBase64, DecodeDataBase64, ComputeCRC32, ComputeMD5, ComputeSHA1

; Automation events
extern LoadAutomationEventList, UnloadAutomationEventList, ExportAutomationEventList, SetAutomationEventList, SetAutomationEventBaseFrame
extern StartAutomationEventRecording, StopAutomationEventRecording, PlayAutomationEvent

; Input Handling
extern IsKeyPressed, IsKeyPressedRepeat, IsKeyDown, IsKeyReleased, IsKeyUp, GetKeyPressed, GetCharPressed, SetExitKey

; Gamepad handling
extern IsGamepadAvailable, GetGamepadName, IsGamepadButtonPressed, IsGamepadButtonDown, IsGamepadButtonReleased, IsGamepadButtonUp
extern GetGamepadButtonPressed, GetGamepadAxisCount, GetGamepadAxisMovement, SetGamepadMappings, SetGamepadVibration

; Mouse handling
extern IsMouseButtonPressed, IsMouseButtonDown, IsMouseButtonReleased, IsMouseButtonUp, GetMouseX, GetMouseY, GetMousePosition, GetMouseDelta
extern SetMousePosition, SetMouseOffset, SetMouseScale, GetMouseWheelMove, GetMouseWheelMoveV, SetMouseCursor

; Touch handling
extern GetTouchX, GetTouchY, GetTouchPosition, GetTouchPointId, GetTouchPointCount, SetGesturesEnabled, IsGestureDetected, GetGestureDetected
extern GetGestureHoldDuration, GetGestureDragVector, GetGestureDragAngle, GetGesturePinchVector, GetGesturePinchAngle

; Camera
extern UpdateCamera, UpdateCameraPro

; Audio device management
extern InitAudioDevice, CloseAudioDevice, IsAudioDeviceReady, SetMasterVolume, GetMasterVolume

; Audio load/unload
extern LoadWave, LoadWaveFromMemory, IsWaveValid, LoadSound, LoadSoundFromWave, LoadSoundAlias, IsSoundValid, UpdateSound, UnloadWave, UnloadSound
extern UnloadSoundAlias, ExportWave, ExportWaveAsCode

; Audio management
extern PlaySound, StopSound, PauseSound, ResumeSound, IsSoundPlaying, SetSoundVolume, SetSoundPitch, SetSoundPan, WaveCopy, WaveCrop, WaveFormat
extern LoadWaveSamples, UnloadWaveSamples

; Music management
extern LoadMusicStream, LoadMusicStreamFromMemory, IsMusicValid, UnloadMusicStream, PlayMusicStream, IsMusicStreamPlaying, UpdateMusicStream, StopMusicStream
extern PauseMusicStream, ResumeMusicStream, SeekMusicStream, SetMusicVolume, SetMusicPitch, SetMusicPan, GetMusicTimeLength, GetMusicTimePlayed

; Audio stream management
extern LoadAudioStream, IsAudioStreamValid, UnloadAudioStream, UpdateAudioStream, IsAudioStreamProcessed, PlayAudioStream, PauseAudioStream, ResumeAudioStream
extern IsAudioStreamPlaying, StopAudioStream, SetAudioStreamVolume, SetAudioStreamVolume, SetAudioStreamPitch, SetAudioStreamPan
extern SetAudioStreamBufferSizeDefault, SetAudioStreamCallback, AttachAudioStreamProcessor, DetachAudioStreamProcessor, AttachAudioMixedProcessor
extern DetachAudioMixedProcessor

; Basic 3D geometric shape drawing
extern DrawLine3D, DrawPoint3D, DrawCircle3D, DrawTriangle3D, DrawTriangleStrip3D, DrawCube, DrawCubeV, DrawCubeWires, DrawCubeWiresV, DrawSphere
extern DrawSphereWires, DrawSphereEx, DrawCylinder, DrawCylinderEx, DrawCylinderWires, DrawCylinderWiresEx, DrawCapsule, DrawCapsuleWires, DrawPlane
extern DrawRay, DrawGrid

; Model Management
extern LoadModel, LoadModelFromMesh, IsModelValid, UnloadModel, GetModelBoundingBox

; Model drawing
extern DrawModel, DrawModelEx, DrawModelWires, DrawModelWiresEx, DrawModelPoints, DrawModelPointsEx, DrawBoundingBox, DrawBillboard, DrawBillboardRec
extern DrawBillboardPro

; Mesh management
extern UploadMesh, UpdateMeshBuffer, UnloadMesh, DrawMesh, DrawMeshInstanced, GetMeshBoundingBox, GenMeshTangents, ExportMesh, ExportMeshAsCode

; Mesh generation
extern GenMeshPoly, GenMeshPlane, GenMeshCube, GenMeshSphere, GenMeshHemiSphere, GenMeshCylinder, GenMeshCone, GenMeshTorus, GenMeshKnot, GenMeshHeightMap
extern GenMeshCubicmap

; Material load/unload
extern LoadMaterials, LoadMaterialDefault, IsMaterialValid, UnloadMaterial, SetMaterialTexture, SetModelMeshMaterial

; Model animation loading
extern LoadModelAnimations, UpdateModelAnimation, UpdateModelAnimationBones, UnloadModelAnimation, UnloadModelAnimations, IsModelAnimationValid

; Collision Detection
extern CheckCollisionSpheres, CheckCollisionBoxes, CheckCollisionBoxSphere, GetRayCollisionSphere, GetRayCollisionBox, GetRayCollisionMesh
extern GetRayCollisionTriangle, GetRayCollisionQuad

extern SetShapesTexture, GetShapesTexture, GetShapesTextureRectangle

; Basic shape drawing
extern DrawPixel, DrawPixelV, DrawLine, DrawLineV, DrawLineStrip, DrawLineBezier, DrawCircle, DrawCircleSector, DrawCircleSectorLines
extern DrawCircleGradient, DrawCircleV, DrawEllipse, DrawEllipseLines, DrawRing, DrawRingLines, DrawRectangle, DrawRectangleV
extern DrawRactangleRec, DrawRectanglePro, DrawRectangleGradientV, DrawRectangleGradientH, DrawRectangleGradientEx
extern DrawRectangleLines, DrawRectangleLinesEx, DrawRectangleRounded, DrawRectangleRoundedLines, DrawRectangleRoundedLinesEx, DrawTriangle
extern DrawTriangleLines, DrawTriangleFan, DrawTriangleStrip, DrawPoly, DrawPolyLines, DrawPolyLinesEx

; Spline drawing
extern DrawSplineLinear, DrawSplineBasis, DrawSplineCatmullRom, DrawSplineBezierQuadratic, DrawSplineBezierCubic, DrawSplineSegmentLinear
extern DrawSplineSegmentBasis, DrawSplineSegmentCatmullRom, DrawSplineSegmentBezierQuadratic, DrawSplineBezierCubic

; Spline point eval
extern GetSplinePointLinear, GetSplinePointBasis, GetSplinePointCatmullRom, GetSplinePointBezierQuad, GetSplinePointBezierCubic

; Basic shape collision detection
extern CheckCollisionRecs, CheckCollisionCircles, CheckCollisionCircleRec, CheckCollisionCircleLine, CheckCollisionPointRec, CheckCollisionPointCircle
extern CheckCollisionPointTriangle, CheckCollisionPointLine, CheckCollisionPointPoly, CheckCollisionLines, GetCollisionRec

; Font loading
extern GetFontDefault, LoadFont, LoadFontEx, LoadFontFromImage, LoadFontFromMemory, IsFontValid, LoadFontData, GenImageFontAtlas, UnloadFontData, UnloadFont
extern ExportFontAsCode

; Text drawing functions
extern DrawFPS, DrawText, DrawTextEx, DrawTextPro, DrawTextCodepoint, DrawTextCodepoints

; Text font info functions
extern SetTextLineSpacing, MeasureText, MeasureTextEx, GetGlyphIndex, GetGlyphInfo, GetGlyphAtlasRec

; Codepoints
extern LoadUTF8, UnloadUTF8, LoadCodepoints, UnloadCodepoints, GetCodepointCount, GeCodepoint, GetCodepointNext, GetCodepointPrevious, CodepointToUTF8

; Text string management
extern TextCopy, TextIsEqual, TextLength, TextFormat, TextSubText, TextReplace, TextInsert, TextJoin, TextSplit, TextAppend, TextFindIndex, TextToUpper
extern TextToLower, TextToSnake, TextToPascal, TextToCamel, TextToInteger, TextToFloat

; Image loading
extern LoadImage, LoadImageRaw, LoadImageAnim, LoadImageAnimFromMemory, LoadImageFromMemory, LoadImageFromTexture, LoadImageFromScreen
extern IsImageValid, UnloadImage, ExportImage, ExportImageToMemory, ExportImageAsCode

; Image generation
extern GenImageColor, GenImageGradientLinear, GenImageGradientRadial, GenImageGradientSquare, GenImageChecked, GenImageWhiteNoise, GenImagePerlinNoise
extern GenImageCellular, GenImageText

; Image manipulation
extern ImageCopy, ImageFromImage, ImageFromChannel, ImageText, ImageTextEx, ImageFormat, ImageToPOT, ImageCrop, ImageAlphaCrop, ImageAlphaClear
extern ImageAlphaMask, ImageAlphaPremultiply, ImageBlurGaussian, ImageKernelConvolution, ImageResize, ImageResizeNN, ImageResizeCanvas, ImageMipmaps
extern ImageDither, ImageFlipVertical, ImageFlipHorizontal, ImageRotate, ImageRotateCW, ImageRotateCCW, ImageColorTint, ImageColorInvert, ImageColorGrayscale
extern ImageColorContrast, ImageColorBrightness, ImageColorReplace, LoadImageColors, LoadImagePallete, GetImageAlphaBorder, GetImageColor

; Image drawing
extern ImageClearBackground, ImageDrawPixel, ImageDrawPixelV, ImageDrawLine, ImageDrawLineV, ImageDrawLineEx, ImageDrawCircle, ImageDrawCircleV
extern ImageDrawCircleLines, ImageDrawCircleLinesV, ImageDrawRectangle, ImageDrawRectangleV, ImageDrawRectangleRec, ImageDrawRectangleLines
extern ImageDrawTriangle, ImageDrawTriangleEx, ImageDrawTriangleLines, ImageDrawTriangleFan, ImageDrawStrip, ImageDrawText, ImageDrawTextEx

; Texture Loading
extern LoadTexture, LoadTextureFromImage, LoadTextureCubemap, LoadRenderTexture, IsTextureValid, UnloadTexture, IsRenderTextureValid
extern UnloadRenderTexture, UpdateTexture, UpdateTextureRec

; Texture config
extern GenTextureMipmaps, SetTextureFilter, SetTextureWrap

; Texture drawing
extern DrawTexture, DrawTextureV, DrawTextureEx, DrawTextureRec, DrawTexturePro, DrawTextureNPatch

; Color/pixel
extern ColorIsEqual, Fade, ColorToInt, ColorNormalize, ColorFromNormalized, ColorToHSV, ColorFromHSV, ColorTint, ColorBrightness, ColorContrast
extern ColorAlpha, ColorAlphaBlend, ColorLerp, GetColor, GetPixelColor, SetPixelColor, GetPixelDataSize