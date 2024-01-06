#include "clock.h"

const char* getDayName(int day)
{
	static const char* dayNames[]{ "SUN", "MON", "TUE", "WED", "THRUS", "FRI", "SAT" };
	return dayNames[day];
}

static const char* getMonth(int month)
{
	static const char* monthNames[]{ "JAN","FEB","MAR","APR","MAY","JUNE","JULY","AUG","SEPT","OCT","NOV","DEC" };

	return monthNames[month - 1];
}

void systemTime() {

	while (true) {
		// Time based greeting
		auto now = std::chrono::system_clock::now();
		auto time = std::chrono::system_clock::to_time_t(now);
		tm currentTime{};
		localtime_s(&currentTime, &time);

		/// GET TIME
		auto hours = currentTime.tm_hour;
		auto min = currentTime.tm_min;
		auto sec = currentTime.tm_sec;

		/// DAY
		auto day = currentTime.tm_mday;
		auto dayName = getDayName(currentTime.tm_wday);

		///MONTH
		auto month = currentTime.tm_mon + 1;  // Adding 1 because months are zero-based
		auto monthName = getMonth(month);

		///YEAR
		auto year = currentTime.tm_year + 1900;


		setConsoleColor(ConsoleColor::GREEN); // Set text color to green and background to black
		std::cout << "[* Time: " << std::setw(2) << std::setfill('0') << hours << ':'
			<< std::setw(2) << min << ':' << std::setw(2) << sec<<" |";
		setConsoleColor(ConsoleColor::RED);
		std::cout << "| Date: " << dayName << "- " << day << ' ' << monthName << ' ' << year << " *]\r";

		std::this_thread::sleep_for(std::chrono::seconds(1));
	}
}