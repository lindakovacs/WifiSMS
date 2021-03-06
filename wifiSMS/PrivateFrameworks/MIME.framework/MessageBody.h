/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@class Message;



@interface MessageBody : WRObject 
{
    Message *_message;
}


- (id)rawData;
- (id)contentToOffset:(NSUInteger)arg1 resultOffset:(NSUInteger*)arg2 asHTML:(BOOL)arg3;
- (id)htmlContentToOffset:(NSUInteger)arg1 resultOffset:(NSUInteger*)arg2;
- (id)contentToOffset:(NSUInteger)arg1 resultOffset:(NSUInteger*)arg2 asHTML:(BOOL)arg3 isComplete:(BOOL*)arg4;
- (id)htmlContent;
- (BOOL)isHTML;
- (BOOL)isRich;
- (void)setMessage:(id)arg1;
- (id)message;
- (NSUInteger)numberOfAttachmentsSigned:(BOOL*)arg1 encrypted:(BOOL*)arg2;
- (id)attachments;
- (id)textHtmlPart;
- (void)dealloc;

@end
