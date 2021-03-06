/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class SAWeatherBarometricPressure, NSString, SAWeatherWindSpeed, SAWeatherCondition, NSNumber;

@interface SAWeatherCurrentConditions : AceObject <SAAceSerializable> {
}

@property(retain) SAWeatherBarometricPressure * barometricPressure;
@property(retain) SAWeatherCondition * condition;
@property(retain) NSNumber * dayOfWeek;
@property(copy) NSString * dewPoint;
@property(copy) NSString * feelsLike;
@property(copy) NSString * heatIndex;
@property(copy) NSString * moonPhase;
@property(copy) NSString * percentHumidity;
@property(retain) NSNumber * percentOfMoonFaceVisible;
@property(copy) NSString * sunrise;
@property(copy) NSString * sunset;
@property(copy) NSString * temperature;
@property(copy) NSString * timeOfObservation;
@property(copy) NSString * timeZone;
@property(copy) NSString * visibility;
@property(copy) NSString * windChill;
@property(retain) SAWeatherWindSpeed * windSpeed;

+ (id)currentConditions;
+ (id)currentConditionsWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)dayOfWeek;
- (void)setCondition:(id)arg1;
- (id)condition;
- (id)timeZone;
- (void)setTimeZone:(id)arg1;
- (id)visibility;
- (void)setVisibility:(id)arg1;
- (void)setBarometricPressure:(id)arg1;
- (id)dewPoint;
- (void)setDewPoint:(id)arg1;
- (id)feelsLike;
- (void)setFeelsLike:(id)arg1;
- (id)heatIndex;
- (void)setHeatIndex:(id)arg1;
- (id)moonPhase;
- (void)setMoonPhase:(id)arg1;
- (id)percentHumidity;
- (void)setPercentHumidity:(id)arg1;
- (id)percentOfMoonFaceVisible;
- (void)setPercentOfMoonFaceVisible:(id)arg1;
- (id)sunrise;
- (void)setSunrise:(id)arg1;
- (id)sunset;
- (void)setSunset:(id)arg1;
- (id)temperature;
- (void)setTemperature:(id)arg1;
- (id)timeOfObservation;
- (void)setTimeOfObservation:(id)arg1;
- (id)windChill;
- (void)setWindChill:(id)arg1;
- (id)windSpeed;
- (void)setWindSpeed:(id)arg1;
- (id)barometricPressure;
- (id)encodedClassName;
- (void)setDayOfWeek:(id)arg1;

@end
