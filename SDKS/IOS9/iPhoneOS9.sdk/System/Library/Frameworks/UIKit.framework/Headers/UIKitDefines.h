//
//  UIKitDefines.h
//  UIKit
//
//  Copyright (c) 2007-2014 Apple Inc. All rights reserved.
//

#import <Availability.h>

#ifdef __cplusplus
#define UIKIT_EXTERN		extern "C" __attribute__((visibility ("default")))
#else
#define UIKIT_EXTERN	        extern __attribute__((visibility ("default")))
#endif

#define UIKIT_STATIC_INLINE	static inline

#define UIKIT_AVAILABLE_IOS_ONLY(vers)      __IOS_AVAILABLE(vers) __WATCHOS_UNAVAILABLE
#define UIKIT_AVAILABLE_WATCHOS_ONLY(vers)  __IOS_UNAVAILABLE __WATCHOS_AVAILABLE(vers)
