static const int32_t ilog_table[2049] = {
    0x0, 0x0, 0x58b90c0, 0x8c9f540, 0xb172180, 0xce02100, 0xe558600, 0xf913950,
    0x10a2b240, 0x1193ea80, 0x126bb1c0, 0x132ee3c0, 0x13e116c0, 0x14850420, 0x151cca20, 0x15aa1640,
    0x162e4300, 0x16aa6bc0, 0x171f7b40, 0x178e3600, 0x17f74280, 0x185b2ea0, 0x18ba7480, 0x19157e00,
    0x196ca780, 0x19c04200, 0x1a1094e0, 0x1a5ddfc0, 0x1aa85ae0, 0x1af038c0, 0x1b35a700, 0x1b78ce40,
    0x1bb9d3c0, 0x1bf8d900, 0x1c35fc80, 0x1c715a60, 0x1cab0c00, 0x1ce328e0, 0x1d19c6c0, 0x1d4ef960,
    0x1d82d340, 0x1db56540, 0x1de6bf60, 0x1e16f020, 0x1e460540, 0x1e740b80, 0x1ea10ec0, 0x1ecd1a20,
    0x1ef83840, 0x1f2272a0, 0x1f4bd2c0, 0x1f746100, 0x1f9c25a0, 0x1fc32860, 0x1fe97080, 0x200f04c0,
    0x2033eb80, 0x20582b40, 0x207bc980, 0x209ecc00, 0x20c137c0, 0x20e311c0, 0x21045f00, 0x212523c0,
    0x21456480, 0x21652540, 0x218469c0, 0x21a33600, 0x21c18d40, 0x21df7340, 0x21fceb00, 0x2219f800,
    0x22369cc0, 0x2252dc80, 0x226eb9c0, 0x228a3740, 0x22a55780, 0x22c01d00, 0x22da8a40, 0x22f4a100,
    0x230e6400, 0x2327d500, 0x2340f600, 0x2359c900, 0x23725000, 0x238a8cc0, 0x23a280c0, 0x23ba2e00,
    0x23d19600, 0x23e8ba40, 0x23ff9c40, 0x24163d80, 0x242c9f80, 0x2442c380, 0x2458ab00, 0x246e5700,
    0x2483c900, 0x24990200, 0x24ae0380, 0x24c2ce40, 0x24d76380, 0x24ebc440, 0x24fff1c0, 0x2513ecc0,
    0x2527b680, 0x253b4f80, 0x254eb940, 0x2561f400, 0x25750140, 0x2587e180, 0x259a9580, 0x25ad1e40,
    0x25bf7c40, 0x25d1b0c0, 0x25e3bc00, 0x25f59f00, 0x26075a40, 0x2618eec0, 0x262a5cc0, 0x263ba500,
    0x264cc880, 0x265dc780, 0x266ea280, 0x267f5a80, 0x268fefc0, 0x26a06300, 0x26b0b480, 0x26c0e540,
    0x26d0f540, 0x26e0e540, 0x26f0b600, 0x27006780, 0x270ffa80, 0x271f6f40, 0x272ec6c0, 0x273e00c0,
    0x274d1e00, 0x275c1f00, 0x276b0400, 0x2779cd80, 0x27887bc0, 0x27970f80, 0x27a588c0, 0x27b3e800,
    0x27c22d80, 0x27d059c0, 0x27de6d40, 0x27ec6800, 0x27fa4a80, 0x28081500, 0x2815c800, 0x28236380,
    0x2830e840, 0x283e5640, 0x284badc0, 0x2858ef40, 0x28661b00, 0x28733100, 0x288031c0, 0x288d1dc0,
    0x2899f4c0, 0x28a6b740, 0x28b365c0, 0x28c00000, 0x28cc86c0, 0x28d8fa00, 0x28e559c0, 0x28f1a6c0,
    0x28fde0c0, 0x290a0840, 0x29161d80, 0x29222080, 0x292e1180, 0x2939f100, 0x2945bec0, 0x29517b40,
    0x295d26c0, 0x2968c140, 0x29744b00, 0x297fc440, 0x298b2d00, 0x29968580, 0x29a1ce40, 0x29ad0700,
    0x29b83040, 0x29c34a00, 0x29ce5440, 0x29d94f80, 0x29e43bc0, 0x29ef1900, 0x29f9e7c0, 0x2a04a800,
    0x2a0f59c0, 0x2a19fd40, 0x2a2492c0, 0x2a2f1a80, 0x2a399440, 0x2a440040, 0x2a4e5f00, 0x2a58b040,
    0x2a62f440, 0x2a6d2b00, 0x2a775500, 0x2a817240, 0x2a8b8280, 0x2a958640, 0x2a9f7d80, 0x2aa96880,
    0x2ab34740, 0x2abd19c0, 0x2ac6e040, 0x2ad09b00, 0x2ada4a00, 0x2ae3ed40, 0x2aed84c0, 0x2af71100,
    0x2b009200, 0x2b0a0780, 0x2b137240, 0x2b1cd1c0, 0x2b262640, 0x2b2f7000, 0x2b38af00, 0x2b41e340,
    0x2b4b0d00, 0x2b542c80, 0x2b5d4180, 0x2b664c40, 0x2b6f4cc0, 0x2b784340, 0x2b812fc0, 0x2b8a1240,
    0x2b92eb00, 0x2b9bba00, 0x2ba47f80, 0x2bad3b40, 0x2bb5ed80, 0x2bbe9640, 0x2bc735c0, 0x2bcfcc00,
    0x2bd85940, 0x2be0dd40, 0x2be95840, 0x2bf1ca40, 0x2bfa3340, 0x2c0293c0, 0x2c0aeb40, 0x2c133a40,
    0x2c1b8080, 0x2c23be40, 0x2c2bf3c0, 0x2c3420c0, 0x2c3c4540, 0x2c4461c0, 0x2c4c7600, 0x2c548200,
    0x2c5c8600, 0x2c648200, 0x2c6c7600, 0x2c746240, 0x2c7c46c0, 0x2c842340, 0x2c8bf840, 0x2c93c580,
    0x2c9b8b40, 0x2ca34980, 0x2cab0000, 0x2cb2af80, 0x2cba5780, 0x2cc1f800, 0x2cc99180, 0x2cd123c0,
    0x2cd8aec0, 0x2ce032c0, 0x2ce7afc0, 0x2cef25c0, 0x2cf694c0, 0x2cfdfd00, 0x2d055e40, 0x2d0cb8c0,
    0x2d140c80, 0x2d1b59c0, 0x2d22a040, 0x2d29e000, 0x2d311980, 0x2d384c40, 0x2d3f78c0, 0x2d469e80,
    0x2d4dbe40, 0x2d54d780, 0x2d5bea80, 0x2d62f740, 0x2d69fe00, 0x2d70fe40, 0x2d77f8c0, 0x2d7eed00,
    0x2d85db40, 0x2d8cc380, 0x2d93a5c0, 0x2d9a8240, 0x2da158c0, 0x2da82980, 0x2daef440, 0x2db5b980,
    0x2dbc7900, 0x2dc332c0, 0x2dc9e700, 0x2dd09580, 0x2dd73e80, 0x2ddde200, 0x2de48000, 0x2deb1880,
    0x2df1abc0, 0x2df83980, 0x2dfec1c0, 0x2e0544c0, 0x2e0bc280, 0x2e123b00, 0x2e18ae80, 0x2e1f1c80,
    0x2e258580, 0x2e2be940, 0x2e324800, 0x2e38a1c0, 0x2e3ef680, 0x2e454640, 0x2e4b90c0, 0x2e51d6c0,
    0x2e581780, 0x2e5e5380, 0x2e648ac0, 0x2e6abd00, 0x2e70ea80, 0x2e771380, 0x2e7d3780, 0x2e8356c0,
    0x2e897180, 0x2e8f87c0, 0x2e959900, 0x2e9ba600, 0x2ea1ae40, 0x2ea7b200, 0x2eadb140, 0x2eb3ac00,
    0x2eb9a240, 0x2ebf9440, 0x2ec581c0, 0x2ecb6ac0, 0x2ed14f80, 0x2ed73000, 0x2edd0c00, 0x2ee2e400,
    0x2ee8b780, 0x2eee86c0, 0x2ef45200, 0x2efa1900, 0x2effdbc0, 0x2f059a40, 0x2f0b5500, 0x2f110b40,
    0x2f16bdc0, 0x2f1c6c00, 0x2f221640, 0x2f27bcc0, 0x2f2d5f00, 0x2f32fd80, 0x2f3897c0, 0x2f3e2e40,
    0x2f43c100, 0x2f494fc0, 0x2f4edac0, 0x2f5461c0, 0x2f59e500, 0x2f5f6480, 0x2f64e040, 0x2f6a5840,
    0x2f6fcc80, 0x2f753d00, 0x2f7aa9c0, 0x2f801300, 0x2f857880, 0x2f8ada80, 0x2f9038c0, 0x2f959340,
    0x2f9aea80, 0x2fa03e00, 0x2fa58e00, 0x2faada80, 0x2fb02380, 0x2fb56900, 0x2fbaab40, 0x2fbfe9c0,
    0x2fc52500, 0x2fca5cc0, 0x2fcf9100, 0x2fd4c200, 0x2fd9efc0, 0x2fdf1a00, 0x2fe44100, 0x2fe96480,
    0x2fee8500, 0x2ff3a200, 0x2ff8bbc0, 0x2ffdd280, 0x3002e5c0, 0x3007f600, 0x300d0300, 0x30120cc0,
    0x30171340, 0x301c16c0, 0x30211700, 0x30261440, 0x302b0e40, 0x30300540, 0x3034f940, 0x3039ea00,
    0x303ed800, 0x3043c2c0, 0x3048aa80, 0x304d8f40, 0x30527100, 0x30575000, 0x305c2bc0, 0x306104c0,
    0x3065dac0, 0x306aadc0, 0x306f7e00, 0x30744b40, 0x30791580, 0x307ddd40, 0x3082a1c0, 0x308763c0,
    0x308c22c0, 0x3090df00, 0x30959840, 0x309a4f00, 0x309f0300, 0x30a3b400, 0x30a86280, 0x30ad0e00,
    0x30b1b700, 0x30b65d40, 0x30bb00c0, 0x30bfa180, 0x30c43fc0, 0x30c8db40, 0x30cd7400, 0x30d20a40,
    0x30d69dc0, 0x30db2ec0, 0x30dfbd40, 0x30e44900, 0x30e8d240, 0x30ed58c0, 0x30f1dd00, 0x30f65e80,
    0x30fadd80, 0x30ff5a00, 0x3103d400, 0x31084b80, 0x310cc080, 0x31113300, 0x3115a300, 0x311a10c0,
    0x311e7bc0, 0x3122e480, 0x31274ac0, 0x312baec0, 0x31301040, 0x31346f40, 0x3138cc00, 0x313d2640,
    0x31417e40, 0x3145d3c0, 0x314a2700, 0x314e7800, 0x3152c680, 0x31571300, 0x315b5cc0, 0x315fa480,
    0x3163ea00, 0x31682d00, 0x316c6e00, 0x3170ac80, 0x3174e900, 0x31792300, 0x317d5b00, 0x31819080,
    0x3185c400, 0x3189f540, 0x318e2480, 0x31925140, 0x31967c00, 0x319aa480, 0x319ecb00, 0x31a2ef40,
    0x31a71140, 0x31ab3140, 0x31af4f00, 0x31b36ac0, 0x31b78480, 0x31bb9c00, 0x31bfb180, 0x31c3c4c0,
    0x31c7d600, 0x31cbe540, 0x31cff280, 0x31d3fd80, 0x31d806c0, 0x31dc0dc0, 0x31e012c0, 0x31e415c0,
    0x31e816c0, 0x31ec15c0, 0x31f012c0, 0x31f40dc0, 0x31f806c0, 0x31fbfe00, 0x31fff300, 0x3203e640,
    0x3207d780, 0x320bc6c0, 0x320fb400, 0x32139f80, 0x32178900, 0x321b7080, 0x321f5640, 0x32233a00,
    0x32271c00, 0x322afc00, 0x322eda40, 0x3232b680, 0x323690c0, 0x323a6980, 0x323e4040, 0x32421500,
    0x3245e840, 0x3249b940, 0x324d88c0, 0x32515680, 0x32552240, 0x3258ec40, 0x325cb480, 0x32607ac0,
    0x32643f80, 0x32680280, 0x326bc380, 0x326f82c0, 0x32734080, 0x3276fc40, 0x327ab680, 0x327e6ec0,
    0x32822580, 0x3285da80, 0x32898dc0, 0x328d3f40, 0x3290ef00, 0x32949d00, 0x32984980, 0x329bf440,
    0x329f9d40, 0x32a344c0, 0x32a6ea80, 0x32aa8e80, 0x32ae3100, 0x32b1d1c0, 0x32b570c0, 0x32b90e40,
    0x32bcaa40, 0x32c04480, 0x32c3dd00, 0x32c77400, 0x32cb0980, 0x32ce9d40, 0x32d22f40, 0x32d5c000,
    0x32d94f00, 0x32dcdc80, 0x32e06840, 0x32e3f280, 0x32e77b40, 0x32eb0280, 0x32ee8800, 0x32f20c00,
    0x32f58ec0, 0x32f90fc0, 0x32fc8f00, 0x33000d00, 0x33038980, 0x33070440, 0x330a7dc0, 0x330df580,
    0x33116c00, 0x3314e0c0, 0x33185440, 0x331bc600, 0x331f3680, 0x3322a580, 0x33261300, 0x33297f00,
    0x332ce980, 0x33305280, 0x3333ba40, 0x33372040, 0x333a8500, 0x333de880, 0x33414a40, 0x3344aac0,
    0x334809c0, 0x334b6780, 0x334ec380, 0x33521e40, 0x335577c0, 0x3358cfc0, 0x335c2640, 0x335f7b80,
    0x3362cf40, 0x336621c0, 0x336972c0, 0x336cc280, 0x337010c0, 0x33735dc0, 0x3376a940, 0x3379f380,
    0x337d3c80, 0x33808400, 0x3383ca40, 0x33870f00, 0x338a5280, 0x338d94c0, 0x3390d580, 0x33941500,
    0x33975340, 0x339a9040, 0x339dcbc0, 0x33a10640, 0x33a43f40, 0x33a776c0, 0x33aaad40, 0x33ade280,
    0x33b11640, 0x33b448c0, 0x33b77a00, 0x33baaa00, 0x33bdd8c0, 0x33c10640, 0x33c43280, 0x33c75d80,
    0x33ca8740, 0x33cdafc0, 0x33d0d700, 0x33d3fcc0, 0x33d72180, 0x33da4500, 0x33dd6780, 0x33e08880,
    0x33e3a840, 0x33e6c700, 0x33e9e440, 0x33ed0080, 0x33f01b80, 0x33f33540, 0x33f64dc0, 0x33f96540,
    0x33fc7b40, 0x33ff9040, 0x3402a440, 0x3405b6c0, 0x3408c840, 0x340bd880, 0x340ee780, 0x3411f580,
    0x34150240, 0x34180e00, 0x341b1880, 0x341e21c0, 0x342129c0, 0x342430c0, 0x342736c0, 0x342a3b80,
    0x342d3f00, 0x34304180, 0x343342c0, 0x34364300, 0x34394200, 0x343c4000, 0x343f3cc0, 0x34423880,
    0x34453300, 0x34482c80, 0x344b2500, 0x344e1c40, 0x34511280, 0x34540780, 0x3456fb80, 0x3459ee80,
    0x345ce040, 0x345fd100, 0x3462c0c0, 0x3465af40, 0x34689cc0, 0x346b8940, 0x346e74c0, 0x34715f00,
    0x34744840, 0x34773080, 0x347a1780, 0x347cfdc0, 0x347fe2c0, 0x3482c6c0, 0x3485a9c0, 0x34888b80,
    0x348b6c80, 0x348e4c40, 0x34912b00, 0x349408c0, 0x3496e5c0, 0x3499c140, 0x349c9c00, 0x349f75c0,
    0x34a24e80, 0x34a52640, 0x34a7fcc0, 0x34aad280, 0x34ada700, 0x34b07ac0, 0x34b34d80, 0x34b61f00,
    0x34b8efc0, 0x34bbbf80, 0x34be8e40, 0x34c15bc0, 0x34c42880, 0x34c6f440, 0x34c9bf00, 0x34cc8900,
    0x34cf51c0, 0x34d21980, 0x34d4e080, 0x34d7a680, 0x34da6b80, 0x34dd2f80, 0x34dff280, 0x34e2b480,
    0x34e575c0, 0x34e83600, 0x34eaf540, 0x34edb380, 0x34f07100, 0x34f32d80, 0x34f5e900, 0x34f8a380,
    0x34fb5d40, 0x34fe1600, 0x3500cdc0, 0x35038480, 0x35063a80, 0x3508ef80, 0x350ba3c0, 0x350e5700,
    0x35110940, 0x3513bac0, 0x35166b40, 0x35191ac0, 0x351bc980, 0x351e7740, 0x35212400, 0x3523d000,
    0x35267b40, 0x35292580, 0x352bcec0, 0x352e7740, 0x35311ec0, 0x3533c580, 0x35366b40, 0x35391040,
    0x353bb440, 0x353e5780, 0x3540f9c0, 0x35439b40, 0x35463c00, 0x3548db80, 0x354b7a80, 0x354e1880,
    0x3550b5c0, 0x35535200, 0x3555ed80, 0x35588800, 0x355b21c0, 0x355dbac0, 0x356052c0, 0x3562ea00,
    0x35658080, 0x35681600, 0x356aaac0, 0x356d3ec0, 0x356fd1c0, 0x35726400, 0x3574f540, 0x35778600,
    0x357a15c0, 0x357ca4c0, 0x357f32c0, 0x3581c000, 0x35844c80, 0x3586d840, 0x35896340, 0x358bed40,
    0x358e7680, 0x3590ff00, 0x359386c0, 0x35960d80, 0x359893c0, 0x359b1900, 0x359d9d80, 0x35a02100,
    0x35a2a400, 0x35a52600, 0x35a7a780, 0x35aa2800, 0x35aca7c0, 0x35af26c0, 0x35b1a500, 0x35b42280,
    0x35b69f00, 0x35b91b00, 0x35bb9600, 0x35be1080, 0x35c08a00, 0x35c302c0, 0x35c57ac0, 0x35c7f240,
    0x35ca68c0, 0x35ccde80, 0x35cf5380, 0x35d1c7c0, 0x35d43b40, 0x35d6ae00, 0x35d92000, 0x35db9140,
    0x35de01c0, 0x35e07180, 0x35e2e0c0, 0x35e54f00, 0x35e7bc80, 0x35ea2940, 0x35ec9580, 0x35ef00c0,
    0x35f16b80, 0x35f3d540, 0x35f63e80, 0x35f8a700, 0x35fb0ec0, 0x35fd75c0, 0x35ffdc00, 0x36024180,
    0x3604a640, 0x36070a80, 0x36096dc0, 0x360bd080, 0x360e3280, 0x361093c0, 0x3612f480, 0x36155440,
    0x3617b380, 0x361a1200, 0x361c6fc0, 0x361eccc0, 0x36212900, 0x362384c0, 0x3625dfc0, 0x36283a00,
    0x362a93c0, 0x362cec80, 0x362f44c0, 0x36319c40, 0x3633f340, 0x36364940, 0x36389ec0, 0x363af380,
    0x363d47c0, 0x363f9b40, 0x3641ee00, 0x36444000, 0x36469180, 0x3648e240, 0x364b3240, 0x364d81c0,
    0x364fd080, 0x36521e80, 0x36546c00, 0x3656b8c0, 0x365904c0, 0x365b5040, 0x365d9b00, 0x365fe500,
    0x36622e80, 0x36647780, 0x3666bf80, 0x36690700, 0x366b4e00, 0x366d9440, 0x366fd9c0, 0x36721ec0,
    0x36746300, 0x3676a680, 0x3678e980, 0x367b2c00, 0x367d6dc0, 0x367faec0, 0x3681ef40, 0x36842f00,
    0x36866e40, 0x3688acc0, 0x368aeac0, 0x368d2800, 0x368f64c0, 0x3691a0c0, 0x3693dc40, 0x36961700,
    0x36985140, 0x369a8ac0, 0x369cc3c0, 0x369efc00, 0x36a133c0, 0x36a36b00, 0x36a5a180, 0x36a7d740,
    0x36aa0c80, 0x36ac4140, 0x36ae7540, 0x36b0a8c0, 0x36b2db80, 0x36b50dc0, 0x36b73f80, 0x36b97080,
    0x36bba100, 0x36bdd0c0, 0x36c00000, 0x36c22e80, 0x36c45cc0, 0x36c68a00, 0x36c8b700, 0x36cae340,
    0x36cd0f00, 0x36cf3a00, 0x36d16480, 0x36d38e80, 0x36d5b7c0, 0x36d7e080, 0x36da08c0, 0x36dc3040,
    0x36de5740, 0x36e07dc0, 0x36e2a3c0, 0x36e4c900, 0x36e6ed80, 0x36e911c0, 0x36eb3540, 0x36ed5840,
    0x36ef7ac0, 0x36f19c80, 0x36f3bdc0, 0x36f5de80, 0x36f7fec0, 0x36fa1e40, 0x36fc3d40, 0x36fe5bc0,
    0x370079c0, 0x37029700, 0x3704b3c0, 0x3706d000, 0x3708ebc0, 0x370b06c0, 0x370d2140, 0x370f3b80,
    0x371154c0, 0x37136dc0, 0x37158600, 0x37179e00, 0x3719b540, 0x371bcc00, 0x371de200, 0x371ff7c0,
    0x37220cc0, 0x37242140, 0x37263540, 0x372848c0, 0x372a5bc0, 0x372c6e00, 0x372e8000, 0x37309140,
    0x3732a200, 0x3734b240, 0x3736c200, 0x3738d140, 0x373adfc0, 0x373cee00, 0x373efb80, 0x374108c0,
    0x37431540, 0x37452140, 0x37472cc0, 0x374937c0, 0x374b4240, 0x374d4c00, 0x374f5580, 0x37515e80,
    0x375366c0, 0x37556ec0, 0x37577600, 0x37597d00, 0x375b8340, 0x375d8900, 0x375f8e40, 0x37619300,
    0x37639780, 0x37659b40, 0x37679e80, 0x3769a140, 0x376ba380, 0x376da540, 0x376fa680, 0x3771a740,
    0x3773a780, 0x3775a740, 0x3777a680, 0x3779a540, 0x377ba380, 0x377da140, 0x377f9e80, 0x37819b40,
    0x37839780, 0x37859340, 0x37878ec0, 0x37898980, 0x378b83c0, 0x378d7d80, 0x378f7700, 0x37916fc0,
    0x37936840, 0x37956000, 0x37975780, 0x37994e40, 0x379b44c0, 0x379d3ac0, 0x379f3040, 0x37a12540,
    0x37a319c0, 0x37a50dc0, 0x37a70140, 0x37a8f480, 0x37aae700, 0x37acd940, 0x37aecac0, 0x37b0bc00,
    0x37b2acc0, 0x37b49d00, 0x37b68cc0, 0x37b87c00, 0x37ba6b00, 0x37bc5940, 0x37be4740, 0x37c034c0,
    0x37c22180, 0x37c40e40, 0x37c5fa40, 0x37c7e5c0, 0x37c9d100, 0x37cbbb80, 0x37cda5c0, 0x37cf8f80,
    0x37d17900, 0x37d361c0, 0x37d54a00, 0x37d73200, 0x37d91980, 0x37db0080, 0x37dce740, 0x37decd40,
    0x37e0b300, 0x37e29840, 0x37e47d00, 0x37e66140, 0x37e84540, 0x37ea2880, 0x37ec0b80, 0x37edee40,
    0x37efd040, 0x37f1b200, 0x37f39340, 0x37f57400, 0x37f75440, 0x37f93440, 0x37fb1380, 0x37fcf280,
    0x37fed140, 0x3800af40, 0x38028d00, 0x38046a40, 0x38064740, 0x38082380, 0x3809ff80, 0x380bdb00,
    0x380db640, 0x380f9100, 0x38116b40, 0x38134500, 0x38151e80, 0x3816f740, 0x3818d000, 0x381aa800,
    0x381c7fc0, 0x381e5700, 0x38202dc0, 0x38220440, 0x3823da40, 0x3825afc0, 0x38278500, 0x382959c0,
    0x382b2e00, 0x382d0200, 0x382ed580, 0x3830a880, 0x38327b40, 0x38344d80, 0x38361f40, 0x3837f0c0,
    0x3839c1c0, 0x383b9240, 0x383d6280, 0x383f3240, 0x38410180, 0x3842d080, 0x38449f00, 0x38466d40,
    0x38483b00, 0x384a0840, 0x384bd540, 0x384da1c0, 0x384f6dc0, 0x38513980, 0x385304c0, 0x3854cfc0,
    0x38569a40, 0x38586440, 0x385a2e00, 0x385bf740, 0x385dc000, 0x385f8880, 0x386150c0, 0x38631880,
    0x3864dfc0, 0x3866a6c0, 0x38686d40, 0x386a3340, 0x386bf900, 0x386dbe40, 0x386f8340, 0x387147c0,
    0x38730c00, 0x3874cfc0, 0x38769340, 0x38785640, 0x387a18c0, 0x387bdb00, 0x387d9cc0, 0x387f5e40,
    0x38811f80, 0x3882e000, 0x3884a080, 0x38866040, 0x38881fc0, 0x3889df00, 0x388b9dc0, 0x388d5c40,
    0x388f1a40, 0x3890d7c0, 0x38929500, 0x38945200, 0x38960e80, 0x3897ca80, 0x38998640, 0x389b41c0,
    0x389cfcc0, 0x389eb740, 0x38a07180, 0x38a22b80, 0x38a3e500, 0x38a59e00, 0x38a756c0, 0x38a90f40,
    0x38aac740, 0x38ac7f00, 0x38ae3640, 0x38afed00, 0x38b1a3c0, 0x38b359c0, 0x38b50fc0, 0x38b6c500,
    0x38b87a40, 0x38ba2f00, 0x38bbe340, 0x38bd9740, 0x38bf4b00, 0x38c0fe40, 0x38c2b100, 0x38c463c0,
    0x38c615c0, 0x38c7c7c0, 0x38c97940, 0x38cb2a40, 0x38ccdb00, 0x38ce8b80, 0x38d03b80, 0x38d1eb40,
    0x38d39a80, 0x38d54980, 0x38d6f800, 0x38d8a680, 0x38da5440, 0x38dc0200, 0x38ddaf00, 0x38df5c00,
    0x38e10880, 0x38e2b4c0, 0x38e46080, 0x38e60c00, 0x38e7b700, 0x38e961c0, 0x38eb0c40, 0x38ecb640,
    0x38ee6000, 0x38f00980, 0x38f1b280, 0x38f35b40, 0x38f50380, 0x38f6ab80, 0x38f85340, 0x38f9fa80,
    0x38fba180, 0x38fd4840, 0x38feee80, 0x39009480, 0x39023a00, 0x3903df40, 0x39058440, 0x39072900,
    0x3908cd40, 0x390a7100, 0x390c14c0, 0x390db800, 0x390f5b00, 0x3910fd80, 0x39129fc0, 0x391441c0,
    0x3915e340, 0x39178480, 0x39192580, 0x391ac600, 0x391c6640, 0x391e0640, 0x391fa5c0, 0x39214500,
    0x3922e400, 0x392482c0, 0x39262100, 0x3927bf00, 0x39295c80, 0x392afa00, 0x392c9700, 0x392e3380,
    0x392fd000, 0x39316c00, 0x39330780, 0x3934a300, 0x39363e00, 0x3937d8c0, 0x39397340, 0x393b0d40,
    0x393ca700, 0x393e4080, 0x393fd980, 0x39417240, 0x39430ac0, 0x3944a300, 0x39463ac0, 0x3947d240,
    0x39496980, 0x394b0080, 0x394c9700, 0x394e2d40, 0x394fc340, 0x39515900, 0x3952ee40, 0x39548340,
    0x39561800, 0x3957ac40, 0x39594080, 0x395ad440, 0x395c67c0, 0x395dfac0, 0x395f8d80, 0x39612040,
    0x3962b240, 0x39644440, 0x3965d5c0, 0x39676740, 0x3968f840, 0x396a88c0, 0x396c1940, 0x396da940,
    0x396f3900, 0x3970c880, 0x397257c0, 0x3973e680, 0x39757500, 0x39770340, 0x39789140, 0x397a1ec0,
    0x397bac40, 0x397d3940, 0x397ec600, 0x39805280, 0x3981de80, 0x39836a80, 0x3984f600, 0x39868140,
    0x39880c00, 0x398996c0, 0x398b2100, 0x398cab40, 0x398e3500, 0x398fbe40, 0x39914780, 0x3992d080,
    0x39945900, 0x3995e140, 0x39976940, 0x3998f100, 0x399a7840, 0x399bff80, 0x399d8640, 0x399f0cc0,
    0x39a09300, 0x39a21900, 0x39a39ec0, 0x39a52400, 0x39a6a940, 0x39a82e00, 0x39a9b280, 0x39ab36c0,
    0x39acba80, 0x39ae3e40, 0x39afc180, 0x39b144c0, 0x39b2c780, 0x39b44a00, 0x39b5cc40, 0x39b74e00,
    0x39b8cfc0, 0x39ba5100, 0x39bbd240, 0x39bd5300, 0x39bed380, 0x39c053c0, 0x39c1d3c0, 0x39c35340,
    0x39c4d2c0, 0x39c651c0, 0x39c7d0c0, 0x39c94f40, 0x39cacd80, 0x39cc4b80, 0x39cdc940, 0x39cf46c0,
    0x39d0c3c0, 0x39d240c0, 0x39d3bd40, 0x39d539c0, 0x39d6b5c0, 0x39d83180, 0x39d9ad00, 0x39db2840,
    0x39dca340, 0x39de1dc0, 0x39df9840, 0x39e11280, 0x39e28c40, 0x39e40600, 0x39e57f40, 0x39e6f840,
    0x39e87100, 0x39e9e980, 0x39eb61c0, 0x39ecd9c0, 0x39ee5180, 0x39efc900, 0x39f14000, 0x39f2b700,
    0x39f42d80, 0x39f5a400, 0x39f71a00, 0x39f88fc0, 0x39fa0580, 0x39fb7ac0, 0x39fcefc0, 0x39fe6480,
    0x39ffd900, 0x3a014d40, 0x3a02c140, 0x3a0434c0, 0x3a05a840, 0x3a071b80, 0x3a088e80, 0x3a0a0100,
    0x3a0b7380, 0x3a0ce580, 0x3a0e5780, 0x3a0fc900, 0x3a113a80, 0x3a12ab80, 0x3a141c40, 0x3a158cc0,
    0x3a16fd40, 0x3a186d40, 0x3a19dd00, 0x3a1b4c80, 0x3a1cbbc0, 0x3a1e2ac0, 0x3a1f9980, 0x3a210840,
    0x3a227680, 0x3a23e440, 0x3a255200, 0x3a26bf80, 0x3a282cc0, 0x3a2999c0, 0x3a2b0680, 0x3a2c7300,
    0x3a2ddf40, 0x3a2f4b40, 0x3a30b700, 0x3a322240, 0x3a338d80, 0x3a34f880, 0x3a366340, 0x3a37cdc0,
    0x3a3937c0, 0x3a3aa1c0, 0x3a3c0b80, 0x3a3d7500, 0x3a3ede40, 0x3a404740, 0x3a41afc0, 0x3a431840,
    0x3a448080, 0x3a45e880, 0x3a475040, 0x3a48b7c0, 0x3a4a1f00, 0x3a4b85c0, 0x3a4cec80, 0x3a4e5300,
    0x3a4fb940, 0x3a511f40, 0x3a528500, 0x3a53ea80, 0x3a554fc0, 0x3a56b4c0, 0x3a5819c0, 0x3a597e40,
    0x3a5ae280, 0x3a5c4680, 0x3a5daa40, 0x3a5f0e00, 0x3a607140, 0x3a61d440, 0x3a633740, 0x3a6499c0,
    0x3a65fc40, 0x3a675e40, 0x3a68c040, 0x3a6a21c0, 0x3a6b8340, 0x3a6ce480, 0x3a6e4540, 0x3a6fa600,
    0x3a710680, 0x3a7266c0, 0x3a73c6c0, 0x3a752680, 0x3a768600, 0x3a77e540, 0x3a794440, 0x3a7aa340,
    0x3a7c01c0, 0x3a7d6000, 0x3a7ebe40, 0x3a801c00, 0x3a8179c0, 0x3a82d700, 0x3a843440, 0x3a859140,
    0x3a86ee00, 0x3a884a80, 0x3a89a6c0, 0x3a8b02c0, 0x3a8c5e80, 0x3a8dba00, 0x3a8f1540, 0x3a907080,
    0x3a91cb40, 0x3a932600, 0x3a948040, 0x3a95da80, 0x3a973480, 0x3a988e40, 0x3a99e7c0, 0x3a9b4100,
    0x3a9c9a00, 0x3a9df2c0, 0x3a9f4b80, 0x3aa0a3c0, 0x3aa1fc00, 0x3aa353c0, 0x3aa4ab80, 0x3aa60300,
    0x3aa75a40, 0x3aa8b140, 0x3aaa0800, 0x3aab5e80, 0x3aacb4c0, 0x3aae0b00, 0x3aaf60c0, 0x3ab0b680,
    0x3ab20c00, 0x3ab36140, 0x3ab4b640, 0x3ab60b00, 0x3ab75f80, 0x3ab8b400, 0x3aba0800, 0x3abb5c00,
    0x3abcaf80, 0x3abe0300, 0x3abf5640, 0x3ac0a940, 0x3ac1fc00, 0x3ac34ec0, 0x3ac4a100, 0x3ac5f340,
    0x3ac74500, 0x3ac896c0, 0x3ac9e840, 0x3acb3980, 0x3acc8a80, 0x3acddb80, 0x3acf2c00, 0x3ad07c80,
    0x3ad1ccc0, 0x3ad31c80, 0x3ad46c40, 0x3ad5bc00, 0x3ad70b40, 0x3ad85a40, 0x3ad9a940, 0x3adaf800,
    0x3adc4680, 0x3add94c0, 0x3adee2c0, 0x3ae03080, 0x3ae17e40, 0x3ae2cb80, 0x3ae418c0, 0x3ae565c0,
    0x3ae6b280, 0x3ae7ff40, 0x3ae94b80, 0x3aea97c0, 0x3aebe380, 0x3aed2f40, 0x3aee7ac0, 0x3aefc600,
    0x3af11140, 0x3af25c00, 0x3af3a6c0, 0x3af4f140, 0x3af63b80, 0x3af78580, 0x3af8cf80, 0x3afa1900,
    0x3afb6280, 0x3afcabc0, 0x3afdf4c0, 0x3aff3d80, 0x3b008600, 0x3b01ce80, 0x3b0316c0, 0x3b045ec0,
    0x3b05a680, 0x3b06ee00, 0x3b083580, 0x3b097c80, 0x3b0ac380, 0x3b0c0a40, 0x3b0d50c0, 0x3b0e9740,
    0x3b0fdd40, 0x3b112340, 0x3b126900, 0x3b13ae80, 0x3b14f400, 0x3b163900, 0x3b177e00, 0x3b18c2c0,
    0x3b1a0740, 0x3b1b4bc0, 0x3b1c8fc0, 0x3b1dd3c0, 0x3b1f1780, 0x3b205b00, 0x3b219e40, 0x3b22e180,
    0x3b242480, 0x3b256700, 0x3b26a9c0, 0x3b27ec00, 0x3b292e40, 0x3b2a7000, 0x3b2bb1c0, 0x3b2cf380,
    0x3b2e34c0, 0x3b2f7600, 0x3b30b6c0, 0x3b31f780, 0x3b333840, 0x3b347880, 0x3b35b8c0, 0x3b36f8c0,
    0x3b383880, 0x3b397800, 0x3b3ab780, 0x3b3bf6c0, 0x3b3d35c0, 0x3b3e7480, 0x3b3fb340, 0x3b40f180,
    0x3b422fc0, 0x3b436dc0, 0x3b44abc0, 0x3b45e940, 0x3b4726c0, 0x3b486400, 0x3b49a140, 0x3b4ade00,
    0x3b4c1ac0, 0x3b4d5740, 0x3b4e9380, 0x3b4fcfc0, 0x3b510b80, 0x3b524740, 0x3b538300, 0x3b54be40,
    0x3b55f980, 0x3b573480, 0x3b586f40, 0x3b59a9c0, 0x3b5ae440, 0x3b5c1e80, 0x3b5d5880, 0x3b5e9240,
    0x3b5fcc00, 0x3b610580, 0x3b623ec0, 0x3b6377c0, 0x3b64b0c0, 0x3b65e980, 0x3b672200, 0x3b685a80,
    0x3b699280, 0x3b6aca80, 0x3b6c0240, 0x3b6d3a00, 0x3b6e7180, 0x3b6fa880, 0x3b70dfc0, 0x3b721680,
    0x3b734d40, 0x3b7483c0, 0x3b75ba00, 0x3b76f040, 0x3b782640, 0x3b795c00, 0x3b7a9180, 0x3b7bc700,
    0x3b7cfc40, 0x3b7e3140, 0x3b7f6600, 0x3b809ac0, 0x3b81cf40, 0x3b830380, 0x3b8437c0, 0x3b856b80,
    0x3b869f80, 0x3b87d300, 0x3b890680, 0x3b8a3980, 0x3b8b6cc0, 0x3b8c9f80, 0x3b8dd240, 0x3b8f04c0,
    0x3b903700, 0x3b916940, 0x3b929b40, 0x3b93cd00, 0x3b94fe80, 0x3b963000, 0x3b976140, 0x3b989280,
    0x3b99c340, 0x3b9af400, 0x3b9c2480, 0x3b9d5500, 0x3b9e8540, 0x3b9fb540, 0x3ba0e500, 0x3ba214c0,
    0x3ba34440, 0x3ba47380, 0x3ba5a2c0, 0x3ba6d1c0, 0x3ba80080, 0x3ba92f00, 0x3baa5d80, 0x3bab8bc0,
    0x3bacb9c0, 0x3bade7c0, 0x3baf1580, 0x3bb04300, 0x3bb17080, 0x3bb29dc0, 0x3bb3cac0, 0x3bb4f7c0,
    0x3bb62480, 0x3bb75100, 0x3bb87d40, 0x3bb9a980, 0x3bbad580, 0x3bbc0140, 0x3bbd2d00, 0x3bbe5880,
    0x3bbf8400, 0x3bc0af00, 0x3bc1da00, 0x3bc304c0, 0x3bc42f80, 0x3bc55a00, 0x3bc68440, 0x3bc7ae80,
    0x3bc8d880, 0x3bca0240, 0x3bcb2c00, 0x3bcc5540, 0x3bcd7ec0, 0x3bcea7c0, 0x3bcfd0c0, 0x3bd0f980,
    0x3bd22240, 0x3bd34ac0, 0x3bd47300, 0x3bd59b00, 0x3bd6c300, 0x3bd7eac0, 0x3bd91280, 0x3bda3a00,
    0x3bdb6140, 0x3bdc8840, 0x3bddaf40, 0x3bded600, 0x3bdffcc0, 0x3be12340, 0x3be24980, 0x3be36f80,
    0x3be49580, 0x3be5bb40, 0x3be6e100, 0x3be80680, 0x3be92bc0, 0x3bea5100, 0x3beb75c0, 0x3bec9ac0,
    0x3bedbf40, 0x3beee3c0, 0x3bf00840, 0x3bf12c40, 0x3bf25040, 0x3bf37440, 0x3bf497c0, 0x3bf5bb40,
    0x3bf6dec0, 0x3bf80200, 0x3bf92500, 0x3bfa47c0, 0x3bfb6a80, 0x3bfc8d00, 0x3bfdaf80, 0x3bfed1c0,
    0x3bfff3c0, 0x3c011580, 0x3c023740, 0x3c035900, 0x3c047a40, 0x3c059b80, 0x3c06bcc0, 0x3c07ddc0,
    0x3c08fe80, 0x3c0a1f00, 0x3c0b3f80, 0x3c0c5fc0, 0x3c0d8000, 0x3c0ea000, 0x3c0fbfc0, 0x3c10df80,
    0x3c11ff00, 0x3c131e40, 0x3c143d80, 0x3c155c80, 0x3c167b80, 0x3c179a40, 0x3c18b8c0, 0x3c19d740,
    0x3c1af580, 0x3c1c1380, 0x3c1d3180, 0x3c1e4f40, 0x3c1f6d00, 0x3c208a80, 0x3c21a7c0, 0x3c22c500,
    0x3c23e200, 0x3c24fec0, 0x3c261b80, 0x3c273800, 0x3c285480, 0x3c2970c0, 0x3c2a8cc0, 0x3c2ba8c0,
    0x3c2cc480, 0x3c2de040, 0x3c2efbc0, 0x3c301700, 0x3c313240, 0x3c324d40, 0x3c336800, 0x3c3482c0,
    0x3c359d40, 0x3c36b7c0, 0x3c37d200, 0x3c38ec00, 0x3c3a0600, 0x3c3b1fc0, 0x3c3c3980, 0x3c3d5300,
    0x3c3e6c40, 0x3c3f8580, 0x3c409e80, 0x3c41b780, 0x3c42d040, 0x3c43e8c0, 0x3c450140, 0x3c461980,
    0x3c4731c0, 0x3c4849c0, 0x3c496180, 0x3c4a7940, 0x3c4b90c0, 0x3c4ca800, 0x3c4dbf40, 0x3c4ed680,
    0x3c4fed80, 0x3c510440, 0x3c521ac0, 0x3c533180, 0x3c5447c0, 0x3c555e00, 0x3c567400, 0x3c578a00,
    0x3c589fc0, 0x3c59b540, 0x3c5acac0, 0x3c5be000, 0x3c5cf540, 0x3c5e0a40, 0x3c5f1f40, 0x3c603400,
    0x3c614880, 0x3c625d00, 0x3c637140, 0x3c648580, 0x3c659980, 0x3c66ad40, 0x3c67c100, 0x3c68d4c0,
    0x3c69e800, 0x3c6afb80, 0x3c6c0e80, 0x3c6d2180, 0x3c6e3480, 0x3c6f4700, 0x3c7059c0, 0x3c716c00,
    0x3c727e40, 0x3c739080, 0x3c74a280, 0x3c75b440, 0x3c76c600, 0x3c77d7c0, 0x3c78e900, 0x3c79fa40,
    0x3c7b0b80, 0x3c7c1c80, 0x3c7d2d40, 0x3c7e3e00, 0x3c7f4e80, 0x3c805f00, 0x3c816f40, 0x3c827f80,
    0x3c838f80, 0x3c849f40, 0x3c85af00, 0x3c86bec0, 0x3c87ce00, 0x3c88dd40, 0x3c89ec80, 0x3c8afb80,
    0x3c8c0a80, 0x3c8d1940, 0x3c8e27c0, 0x3c8f3640, 0x3c904480, 0x3c9152c0, 0x3c9260c0, 0x3c936ec0,
    0x3c947c80, 0x3c958a00, 0x3c969780, 0x3c97a500, 0x3c98b200, 0x3c99bf40, 0x3c9acc40, 0x3c9bd900,
    0x3c9ce580, 0x3c9df200, 0x3c9efe80, 0x3ca00ac0, 0x3ca116c0, 0x3ca222c0, 0x3ca32ec0, 0x3ca43a40,
    0x3ca54600, 0x3ca65140, 0x3ca75cc0, 0x3ca867c0, 0x3ca972c0, 0x3caa7dc0, 0x3cab8880, 0x3cac9300,
    0x3cad9d80, 0x3caea7c0, 0x3cafb200, 0x3cb0bc00, 0x3cb1c600, 0x3cb2cfc0, 0x3cb3d980, 0x3cb4e300,
    0x3cb5ec80, 0x3cb6f5c0, 0x3cb7fec0, 0x3cb907c0, 0x3cba10c0, 0x3cbb1980, 0x3cbc2200, 0x3cbd2a80,
    0x3cbe32c0, 0x3cbf3b00, 0x3cc04300, 0x3cc14b00, 0x3cc252c0, 0x3cc35a80, 0x3cc46200, 0x3cc56940,
    0x3cc67080, 0x3cc777c0, 0x3cc87ec0, 0x3cc98580, 0x3cca8c40, 0x3ccb9300, 0x3ccc9980, 0x3ccd9fc0,
    0x3ccea600, 0x3ccfac00, 0x3cd0b200, 0x3cd1b7c0, 0x3cd2bd80, 0x3cd3c300, 0x3cd4c880, 0x3cd5cdc0,
    0x3cd6d300, 0x3cd7d800, 0x3cd8dcc0, 0x3cd9e1c0, 0x3cdae640, 0x3cdbeac0, 0x3cdcef40, 0x3cddf380,
    0x3cdef780, 0x3cdffb80, 0x3ce0ff80, 0x3ce20340, 0x3ce306c0, 0x3ce40a40, 0x3ce50dc0, 0x3ce610c0,
    0x3ce71400, 0x3ce81700, 0x3ce919c0, 0x3cea1c80, 0x3ceb1f00, 0x3cec2180, 0x3ced23c0, 0x3cee2600,
    0x3cef2840, 0x3cf02a00, 0x3cf12c00, 0x3cf22dc0, 0x3cf32f40, 0x3cf430c0, 0x3cf53200, 0x3cf63340,
    0x3cf73440, 0x3cf83540, 0x3cf93600, 0x3cfa36c0, 0x3cfb3740, 0x3cfc37c0, 0x3cfd3800, 0x3cfe3840,
    0x3cff3840};
