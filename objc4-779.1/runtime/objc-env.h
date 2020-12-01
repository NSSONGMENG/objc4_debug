// -*- truncate-lines: t; -*-

// OPTION(var, env, help)
// XCode环境变量


/// 打印加载的镜像和运行库信息
OPTION( PrintImages,              OBJC_PRINT_IMAGES,               "log image and library names as they are loaded")
/// 打印加载镜像花的时间
OPTION( PrintImageTimes,          OBJC_PRINT_IMAGE_TIMES,          "measure duration of image loading steps")
/// 打印 Class 及 Category 的 + (void)load 方法的调用信息
OPTION( PrintLoading,             OBJC_PRINT_LOAD_METHODS,         "log calls to class and category +load methods")
/// 打印 Class 的 + (void)initialize 的调用信息
OPTION( PrintInitializing,        OBJC_PRINT_INITIALIZE_METHODS,   "log calls to class +initialize methods")
/// 打印通过 +resolveClassMethod: 和+resolveInstanceMethod:生成的方法
OPTION( PrintResolving,           OBJC_PRINT_RESOLVED_METHODS,     "log methods created by +resolveClassMethod: and +resolveInstanceMethod:")
/// 打印类和分类的设置进入
OPTION( PrintConnecting,          OBJC_PRINT_CLASS_SETUP,          "log progress of class and category setup")
/// 打印协议设置进度
OPTION( PrintProtocols,           OBJC_PRINT_PROTOCOL_SETUP,       "log progress of protocol setup")
/// 打印ivars的处理过程
OPTION( PrintIvars,               OBJC_PRINT_IVAR_SETUP,           "log processing of non-fragile ivars")
/// 打印类的处理过程
OPTION( PrintVtables,             OBJC_PRINT_VTABLE_SETUP,         "log processing of class vtables")
/// 打印 vtable 被覆盖的方法
OPTION( PrintVtableImages,        OBJC_PRINT_VTABLE_IMAGES,        "print vtable images showing overridden methods")
/// 打印方法缓存的设置过程
OPTION( PrintCaches,              OBJC_PRINT_CACHE_SETUP,          "log processing of method caches")
/// 打印从 CFType 无缝转换到 NSObject 将要使用的类（如 CFArrayRef 到 NSArray * ）
OPTION( PrintFuture,              OBJC_PRINT_FUTURE_CLASSES,       "log use of future classes for toll-free bridging")
/// 打印 dyld 共享缓存预优化信息
OPTION( PrintPreopt,              OBJC_PRINT_PREOPTIMIZATION,      "log preoptimization courtesy of dyld shared cache")
/// 打印类实例中的 C++ 对象的构造与析构调用
OPTION( PrintCxxCtors,            OBJC_PRINT_CXX_CTORS,            "log calls to C++ ctors and dtors for instance variables")
/// 打印异常处理
OPTION( PrintExceptions,          OBJC_PRINT_EXCEPTIONS,           "log exception handling")
/// 打印每次objc_exception_throw()抛出异常的回溯信息
OPTION( PrintExceptionThrow,      OBJC_PRINT_EXCEPTION_THROW,      "log backtrace of every objc_exception_throw()")
/// 打印异常处理器的过程
OPTION( PrintAltHandlers,         OBJC_PRINT_ALT_HANDLERS,         "log processing of exception alt handlers")
/// ### 打印被category替换的方法
OPTION( PrintReplacedMethods,     OBJC_PRINT_REPLACED_METHODS,     "log methods replaced by category implementations")
/// 打印所有废弃的方法调用
OPTION( PrintDeprecation,         OBJC_PRINT_DEPRECATION_WARNINGS, "warn about calls to deprecated runtime functions")
/// 打印自动释放池释放操作
OPTION( PrintPoolHiwat,           OBJC_PRINT_POOL_HIGHWATER,       "log high-water marks for autorelease pools")
/// 打印重写了NSObject类核心方法的类【+new, ±class, ±self, ±isKindOfClass:, ±respondsToSelector】
OPTION( PrintCustomCore,          OBJC_PRINT_CUSTOM_CORE,          "log classes with custom core methods")
/// 打印包含用户调用retain/release方法的类
OPTION( PrintCustomRR,            OBJC_PRINT_CUSTOM_RR,            "log classes with custom retain/release methods")
/// 打印包含用户调用allocWithZone方法的类
OPTION( PrintCustomAWZ,           OBJC_PRINT_CUSTOM_AWZ,           "log classes with custom allocWithZone methods")
/// 打印需要访问原始isa的类
OPTION( PrintRawIsa,              OBJC_PRINT_RAW_ISA,              "log classes that require raw pointer isa fields")

/// 关于卸载时表现不佳镜像的警告，_unload_image()中使用
OPTION( DebugUnload,              OBJC_DEBUG_UNLOAD,               "warn about poorly-behaving bundles when unloaded")
/// 关于后续对superclass的操作可能破坏子类的警告
OPTION( DebugFragileSuperclasses, OBJC_DEBUG_FRAGILE_SUPERCLASSES, "warn about subclasses that may have been broken by subsequent changes to superclasses")
/// 关于@synchronized()token给nil的警告，操作将不会执行
OPTION( DebugNilSync,             OBJC_DEBUG_NIL_SYNC,             "warn about @synchronized(nil), which does no synchronization")
/// 打印突发地重新布置 non-fragile ivars 的行为
OPTION( DebugNonFragileIvars,     OBJC_DEBUG_NONFRAGILE_IVARS,     "capriciously rearrange non-fragile ivars")
/// 记录更多关于alt handler的错误使用信息
OPTION( DebugAltHandlers,         OBJC_DEBUG_ALT_HANDLERS,         "record more info about bad alt handler use")
/// 关于可能造成内存泄漏的没有自动释放池的自动释放现象
OPTION( DebugMissingPools,        OBJC_DEBUG_MISSING_POOLS,        "warn about autorelease with no pool in place, which may be a leak")
/// 当自动释放吃无需弹出时停止，并允许堆调试期跟踪自动释放吃
OPTION( DebugPoolAllocation,      OBJC_DEBUG_POOL_ALLOCATION,      "halt when autorelease pools are popped out of order, and allow heap debuggers to track autorelease pools")
/// 当存在多个相同名字的类时停止
OPTION( DebugDuplicateClasses,    OBJC_DEBUG_DUPLICATE_CLASSES,    "halt when multiple classes with the same name are present")
/// 通过退出而不是崩溃停止进程
OPTION( DebugDontCrash,           OBJC_DEBUG_DONT_CRASH,           "halt the process by exiting instead of crashing")

/// 禁用vtable分发
OPTION( DisableVtables,           OBJC_DISABLE_VTABLES,            "disable vtable dispatch")
/// 禁用通过dyld共享缓存提供的预优化
OPTION( DisablePreopt,            OBJC_DISABLE_PREOPTIMIZATION,    "disable preoptimization courtesy of dyld shared cache")
/// 禁用NSNumber等的target pointer优化
OPTION( DisableTaggedPointers,    OBJC_DISABLE_TAGGED_POINTERS,    "disable tagged pointer optimization of NSNumber et al.")
/// 禁用指针混淆
OPTION( DisableTaggedPointerObfuscation, OBJC_DISABLE_TAG_OBFUSCATION,    "disable obfuscation of tagged pointers")
/// 禁用非指针的isa字段
OPTION( DisableNonpointerIsa,     OBJC_DISABLE_NONPOINTER_ISA,     "disable non-pointer isa fields")
/// 禁用fork后对+initialize的安全检查
OPTION( DisableInitializeForkSafety, OBJC_DISABLE_INITIALIZE_FORK_SAFETY, "disable safety checks for +initialize after fork")
