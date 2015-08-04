#ifndef TRAININGSET_H
#define TRAININGSET_H

#include "finds.h"
namespace vhland002{
class TrainingSet
{
public:
    enum Sky{ Sunny, Rainy};
    enum AirTemp{ Warm, Cold};
    enum Humidity{Normal, High};
    enum Wind{Strong};
    enum Forecast{Same, Change};
    enum EnjoySport{ Yes, No};


    TrainingSet(Sky sky_p,AirTemp airtemp_p,Humidity humidity_p,Wind wind_p,Forecast forecast_p,EnjoySport enjoy_p):
        sky(sky_p), airtemp(airtemp_p), humidity(humidity_p), wind(wind_p), forecast(forecast_p), enjoy(enjoy_p){}


    Sky sky;
    AirTemp airtemp;
    Humidity humidity;
    Wind wind;
    Forecast forecast;
    EnjoySport enjoy;
};



}
#endif // TRAININGSET_H
