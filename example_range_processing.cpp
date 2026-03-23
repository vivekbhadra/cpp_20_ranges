#include <iostream>
#include <ranges>
#include <vector>

int main()
{
    // do these operation on the input sensor data
    // filter the positive values
    // calibrate the filtered values
    // if the calibrated values are within a range then
    // print the processed data
    std::vector<int> sensor_readings = { -15, 10, 0, 21, -13, 45, 60, -18, 19 };

    auto processed_view = 
    sensor_readings | std::views::filter([](int reading) { return reading > 0; }) 
                    | std::views::transform([](int reading) { return reading * 2; }) 
                    | std::views::filter([](int calibrated) { return calibrated >= 20 && calibrated <= 100; })
                    |std::views::transform([](int calibrated){return calibrated / 2;});
    for (auto p : processed_view)
    {
        std::cout << p << ' ';
    }
    std::cout << '\n';

    return 0;
}