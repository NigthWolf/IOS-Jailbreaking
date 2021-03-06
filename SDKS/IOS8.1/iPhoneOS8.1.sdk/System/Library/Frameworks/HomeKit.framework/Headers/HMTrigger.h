// HMTrigger.h
// HomeKit
//
// Copyright (c) 2013-2014 Apple Inc. All rights reserved.

#import <Foundation/Foundation.h>
#import <HomeKit/HMDefines.h>

@class HMActionSet;

/*!
 * @brief Represents a trigger event.
 *
 * @discussion This class describes a trigger which is an event that can
 *             be used to execute one or more action sets when the event fires.
 */
NS_CLASS_AVAILABLE_IOS(8_0)
@interface HMTrigger : NSObject

- (instancetype)init NS_UNAVAILABLE;

/*!
 * @brief Name of the trigger.
 */
@property(readonly, copy, nonatomic) NSString *name;

/*!
 * @brief State of the trigger.
 *
 * @discussion TRUE if the trigger is enable, FALSE otherwise.
 */
@property(readonly, getter=isEnabled, nonatomic) BOOL enabled;

/*!
 * @abstract Array of HMActionSet objects that represent all the action sets associated
 *           with this trigger.
 */
@property(readonly, copy, nonatomic) NSArray *actionSets;

/*!
 * @brief The date that this trigger was most recently fired.
 */
@property(readonly, copy, nonatomic) NSDate *lastFireDate;

/*!
 * @brief This method is used to change the name of the trigger.
 *
 * @param name New name for the trigger.
 *
 * @param completion Block that is invoked once the request is processed.
 *                   The NSError provides more information on the status of the request.
 */
- (void)updateName:(NSString *)name completionHandler:(void (^)(NSError *error))completion;

/*!
 * @brief Registers an action set to be executed when the trigger is fired.
 *
 * @param actionSet HMActionSet to execute when the trigger fires. The order of execution of the
 *                  action set is not guaranteed.
 *
 * @param completion Block that is invoked once the request is processed. 
 *                   The NSError provides more information on the status of the request.
 */
- (void)addActionSet:(HMActionSet *)actionSet completionHandler:(void (^)(NSError *error))completion;

/*!
 * @brief De-registers an action set from the trigger.
 *
 * @param actionSet The HMActionSet to disassociate from the trigger. 
 *
 * @param completion Block that is invoked once the request is processed. 
 *                   The NSError provides more information on the status of the request.
 */
- (void)removeActionSet:(HMActionSet *)actionSet completionHandler:(void (^)(NSError *error))completion;

/*!
 * @brief Enables or disables the trigger. 
 * @discussion In order for the trigger to be enabled the following criteria must be met:
 *             1. The trigger must be added to a home.
 *             2. The trigger must have at least one action set associated with it.
 *             3. Each action set added to the trigger must have at least one action.
 *             4. For HMTimerTrigger: The next fire date of the timer trigger must be less
 *                than 5 weeks in the future.
 *
 * @param enable Setting this to TRUE will enable the trigger, FALSE will disable it.
 *
 * @param completion Block that is invoked once the request is processed. 
 *                   The NSError provides more information on the status of the request.
 */
- (void)enable:(BOOL)enable completionHandler:(void (^)(NSError *error))completion;

@end
