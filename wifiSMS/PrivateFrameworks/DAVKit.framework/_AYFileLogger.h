/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/DAVKit.framework/DAVKit
 */

@class NSURL;



@interface _AYFileLogger : AYLogger 
{
    struct __sFILE { char *x1; NSInteger x2; NSInteger x3; short x4; short x5; struct __sbuf { 
            char *_base; 
            NSInteger _size; 
        } x6; NSInteger x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { 
            char *_base; 
            NSInteger _size; 
        } x13; struct __sFILEX {} *x14; NSInteger x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { 
            char *_base; 
            NSInteger _size; 
        } x18; NSInteger x19; long long x20; } *_logFile;
    NSURL *_urlToFile;
}


- (id)init;
- (void)dealloc;
- (void)finalize;
- (id)urlToFile;
- (void)dumpLogInFile:(char *)arg1 function:(const char *)arg2 line:(NSUInteger)arg3 withType:(id)arg4 level:(NSInteger)arg5 message:(id)arg6;

@end
