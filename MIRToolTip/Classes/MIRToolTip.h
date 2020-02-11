//
//  MIRToolTip.h
//  MIRToolTip
//
//  Created by Mohammed Mir on 23/12/2019.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef void(^handler)(void);
typedef void(^completion)(BOOL finished);

typedef NS_ENUM(NSInteger, AlertType) {
    // Green alert view with check mark image.
    AlertTypeSuccess = 0,
    // Red alert view with error image
    AlertTypeError = 1,
    // Orange alert view with warning image
    AlertTypeWarning = 2,
    // Light green alert with info image.
    AlertTypeInfo = 3,
    // Custom alert, default - info image and light blue background color
    AlertTypeCustom = 4
};

typedef NS_ENUM(NSInteger, AlertPosition) {
    // Alert will show from top
    AlertPositionTop = 0,
    // Alert will show from bottom
    AlertPositionBottom = 1
};

@interface MIRToolTip : UIViewController

@property (strong, nonatomic) UIColor* alertViewBackgroundColor;
@property (nonatomic, assign) NSTextAlignment textAlignment;
@property (strong, nonatomic) UIColor* titleLabelTextColor;
@property (strong, nonatomic) UIColor* messageLabelTextColor;
@property (strong, nonatomic) UIFont* titleLabelFont;
@property (strong, nonatomic) UIFont* messageLabelFont;

/**
 @author Mohammed Mir
 
 Method is show card alert view
 
 @param title Title for alert view
 @param message Subtitle for alertview, can be empty and nil
 @param duration duration after which alert will dismiss
 @param hideOnSwipe YES/NO for swipe dismiss alert view
 @param hideOnTap YES/NO for tap dismiss alert view
 @param type alert type
 @param position alert position
 @param didHide completion block when notification did hide.
 */

+ (instancetype)showCardAlertWithTitle:(NSString *)title
                               message:(NSString *)message
                              duration:(NSTimeInterval)duration
                           hideOnSwipe:(BOOL)hideOnSwipe
                             hideOnTap:(BOOL)hideOnTap
                             alertType:(AlertType)type
                         alertPosition:(AlertPosition)position
                               didHide:(completion)didHide;

/**
 @author Mohammed Mir
 
 Only Initialize ISMessages and you can customize alert, to show alert you need call method [show]
 
 @param title Title for alert view
 @param message Subtitle for alertview, can be empty and nil
 @param iconImage image for alert. If nil then alert will show with image by alert type
 @param duration duration after which alert will dismiss
 @param hideOnSwipe YES/NO for swipe dismiss alert view
 @param hideOnTap YES/NO for tap dismiss alert view
 @param type alert type
 @param position alert position
 */

+ (instancetype)cardAlertWithTitle:(NSString*)title
                           message:(NSString*)message
                         iconImage:(UIImage*)iconImage
                          duration:(NSTimeInterval)duration
                       hideOnSwipe:(BOOL)hideOnSwipe
                         hideOnTap:(BOOL)hideOnTap
                         alertType:(AlertType)type
                     alertPosition:(AlertPosition)position;

/**
 @author Mohammed Mir
 
 handler is callback block
 */

- (void)show:(nullable handler)handler didHide:(completion)didHide;

/**
 @author Mohammed Mir
 
 Method is hide alert view
 
 @param animated @(YES/NO) animated hide
 */

+ (void)hideAlertAnimated:(BOOL)animated;



@end

NS_ASSUME_NONNULL_END
