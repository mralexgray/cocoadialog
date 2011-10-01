/* KABubbleWindow from Colloquy (colloquy.info).
 * I think they got this from an old version of Growl (growl.info).
 */

#import <Cocoa/Cocoa.h>

@interface KABubbleWindow : NSWindow
{
	NSPoint startingPoint;
}

- (id)initWithContentRect:(NSRect)contentRect
				styleMask:(unsigned long)aStyle
				  backing:(NSBackingStoreType)bufferingType
					defer:(BOOL)flag;
@end
