#include <iostream>
#include <vector>

int main()
{
    // do these operation on the input sensor data
    // filter the positive values
    // calibrate the filtered values
    // if the calibrated values are within a range then
    // store the calibrated/processed data into another vector
    std::vector<int> sensor_readings = { -15, 10, 0, 21, -13, 45, 60, -18, 19 };
    std::vector<int> processed;
    processed.reserve(sensor_readings.size());
    for (auto r : sensor_readings)
    {
        if (r > 0)
        {
            int calibrated = r * 2;
            if (calibrated >= 20 && calibrated <= 100)
            {
                processed.push_back(calibrated);
            }
        }
    }

    for (auto t : processed)
    {
        std::cout << t << ' ';
    }
    std::cout << '\n';

    return 0;
}