/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSBezierPathStub;



@interface MFCocoaPath : MFPath 
{
    NSBezierPathStub *m_path;
    NSInteger m_state;
}


- (id)init;
- (id)initWithPath:(id)arg1 state:(NSInteger)arg2;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (NSInteger)state;
- (BOOL)isOpen;
- (NSInteger)begin;
- (NSInteger)end;
- (NSInteger)abort;
- (struct CGPoint { float x1; float x2; })currentPoint;
- (NSInteger)closeFigure;
- (NSInteger)flatten;
- (NSInteger)widen:(id)arg1;
- (NSInteger)stroke:(id)arg1;
- (NSInteger)fill:(id)arg1;
- (id)getBezierPath;
- (void)appendBezierPath:(id)arg1 dc:(id)arg2;

@end
