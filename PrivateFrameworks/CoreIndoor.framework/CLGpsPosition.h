/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreIndoor.framework/CoreIndoor
 */

@interface CLGpsPosition : NSObject <NSSecureCoding> {
    struct time_point<std::__1::chrono::steady_clock, std::__1::chrono::duration<long long, std::__1::ratio<1, 1000000000> > > { 
        struct duration<long long, std::__1::ratio<1, 1000000000> > { 
            long long __rep_; 
        } __d_; 
    }  _expiry;
    struct { 
        int suitability; 
        struct { 
            double latitude; 
            double longitude; 
        } coordinate; 
        double horizontalAccuracy; 
        double altitude; 
        double verticalAccuracy; 
        double speed; 
        double speedAccuracy; 
        double course; 
        double courseAccuracy; 
        double timestamp; 
        int confidence; 
        double lifespan; 
        int type; 
        struct { 
            double latitude; 
            double longitude; 
        } rawCoordinate; 
        double rawCourse; 
        int floor; 
        unsigned int integrity; 
        int referenceFrame; 
        int rawReferenceFrame; 
        int signalEnvironmentType; 
    }  _gpsLocation;
    struct { 
        double odometer; 
        double deltaDistance; 
        double deltaDistanceAccuracy; 
        double timestampGps; 
        double machtime; 
        float horzUncSemiMaj; 
        float horzUncSemiMin; 
        float horzUncSemiMajAz; 
        bool isFitnessMatch; 
        int matchQuality; 
        struct { 
            double latitude; 
            double longitude; 
        } matchCoordinate; 
        double matchCourse; 
        int matchFormOfWay; 
        int matchRoadClass; 
        bool matchShifted; 
        struct { 
            double rawUnmodifiedCourse; 
            double rawUnmodifiedCourseUnc; 
            bool isStatic; 
            bool isMounted; 
        } mapMatcherData; 
        struct { 
            double value; 
            double std; 
        } pressure; 
        int undulationModel; 
        float undulation; 
        struct { 
            double latitude; 
            double longitude; 
        } specialCoordinate; 
        double specialHorizontalAccuracy; 
        double machContinuousTime; 
        int originDevice; 
        bool isMatcherPropagatedCoordinates; 
        double slope; 
        double maxAbsSlope; 
        double groundAltitude; 
        double groundAltitudeUncertainty; 
        double rawHorizontalAccuracy; 
        double rawCourseAccuracy; 
        bool isCoordinateFused; 
        struct { 
            double latitude; 
            double longitude; 
        } fusedCoordinate; 
        double fusedHorizontalAccuracy; 
        int fusedReferenceFrame; 
        double fusedCourse; 
        double fusedCourseAccuracy; 
    }  _gpsLocationPrivate;
}

@property (nonatomic, readonly) /* Warning: unhandled struct encoding: '{time_point<std::__1::chrono::steady_clock' */ struct  expiry; /* unknown property attribute:  1000000000> >=q}} */
@property (nonatomic, readonly) struct { int x1; struct { double x_2_1_1; double x_2_1_2; } x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; int x11; double x12; int x13; struct { double x_14_1_1; double x_14_1_2; } x14; double x15; int x16; unsigned int x17; int x18; int x19; int x20; } gpsLocation;
@property (nonatomic, readonly) struct { double x1; double x2; double x3; double x4; double x5; float x6; float x7; float x8; bool x9; int x10; struct { double x_11_1_1; double x_11_1_2; } x11; double x12; int x13; int x14; bool x15; struct { double x_16_1_1; double x_16_1_2; bool x_16_1_3; bool x_16_1_4; } x16; struct { double x_17_1_1; double x_17_1_2; } x17; int x18; float x19; struct { double x_20_1_1; double x_20_1_2; } x20; double x21; double x22; int x23; bool x24; double x25; double x26; double x27; double x28; double x29; double x30; bool x31; struct { double x_32_1_1; double x_32_1_2; } x32; double x33; int x34; double x35; double x36; } gpsLocationPrivate;

+ (bool)supportsSecureCoding;

- (id).cxx_construct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (struct time_point<std::__1::chrono::steady_clock, std::__1::chrono::duration<long long, std::__1::ratio<1, 1000000000> > > { struct duration<long long, std::__1::ratio<1, 1000000000> > { long long x_1_1_1; } x1; })expiry;
- (struct { int x1; struct { double x_2_1_1; double x_2_1_2; } x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; int x11; double x12; int x13; struct { double x_14_1_1; double x_14_1_2; } x14; double x15; int x16; unsigned int x17; int x18; int x19; int x20; })gpsLocation;
- (struct { double x1; double x2; double x3; double x4; double x5; float x6; float x7; float x8; bool x9; int x10; struct { double x_11_1_1; double x_11_1_2; } x11; double x12; int x13; int x14; bool x15; struct { double x_16_1_1; double x_16_1_2; bool x_16_1_3; bool x_16_1_4; } x16; struct { double x_17_1_1; double x_17_1_2; } x17; int x18; float x19; struct { double x_20_1_1; double x_20_1_2; } x20; double x21; double x22; int x23; bool x24; double x25; double x26; double x27; double x28; double x29; double x30; bool x31; struct { double x_32_1_1; double x_32_1_2; } x32; double x33; int x34; double x35; double x36; })gpsLocationPrivate;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithLocation:(const struct { int x1; struct { double x_2_1_1; double x_2_1_2; } x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; int x11; double x12; int x13; struct { double x_14_1_1; double x_14_1_2; } x14; double x15; int x16; unsigned int x17; int x18; int x19; int x20; }*)arg1 andPrivateLocation:(const struct { double x1; double x2; double x3; double x4; double x5; float x6; float x7; float x8; bool x9; int x10; struct { double x_11_1_1; double x_11_1_2; } x11; double x12; int x13; int x14; bool x15; struct { double x_16_1_1; double x_16_1_2; bool x_16_1_3; bool x_16_1_4; } x16; struct { double x_17_1_1; double x_17_1_2; } x17; int x18; float x19; struct { double x_20_1_1; double x_20_1_2; } x20; double x21; double x22; int x23; bool x24; double x25; double x26; double x27; double x28; double x29; double x30; bool x31; struct { double x_32_1_1; double x_32_1_2; } x32; double x33; int x34; double x35; double x36; }*)arg2;
- (bool)isStaleFix:(struct time_point<std::__1::chrono::steady_clock, std::__1::chrono::duration<long long, std::__1::ratio<1, 1000000000> > > { struct duration<long long, std::__1::ratio<1, 1000000000> > { long long x_1_1_1; } x1; })arg1;

@end