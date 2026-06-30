#include "btc.hpp"

static bool line_parser(std::string line) {
	static int flag;
	if (flag == 0) {
		if (line != "date | value")
			return (std::cerr << "Header format is wrong" << std::endl, false);
		std::cout << "Header checking passed" << std::endl;
	}
	else {
		if (static_cast<char>(line[4]) != '-' || static_cast<char>(line[7]) != '-' || static_cast<char>(line[11]) != '|' || line.length() < 14 )
			return (std::cerr << "The formating of the date is wrong" << std::endl, false);
		std::stringstream y, m, d;
		std::istringstream v(&line[13]);
		y << line.substr(0, 4);
		m << line.substr(5, 2);
		d << line.substr(8, 2);
		y >> prog_data()->years;
		m >> prog_data()->months;
		d >> prog_data()->days;
		v >> prog_data()->value;
		if (v.peek() != EOF)
			return false;
		std::cout << prog_data()->years << std::endl;
		std::cout << prog_data()->months << std::endl;
		std::cout << prog_data()->days << std::endl;
		int daily_limits[13] = {0, 31, 29, 31, 30, 31, 30, 31, 30, 31, 30, 31, 30};
		if ((prog_data()->months < 12 && prog_data()->months > 0) && (prog_data()->years < 2026 && prog_data()->years >= 2009)) {
			if (prog_data()->days > daily_limits[prog_data()->months])
				return (std::cout << "The days exceed the days of the " << prog_data()->months << "month" << std::endl, false);
			std::cout << "all correct with the date" << std::endl;
		}
		else
			return (std::cout << line << "This date is invalid" << std::endl, false);
		
	}
	flag++;
	return true;
}

bool parser(std::string file) {
	std::ifstream csv_file(file.c_str());
	std::string file_line;
	while (!csv_file.eof()) {
		getline(csv_file, file_line);
		if (!line_parser(file_line))
			return false;
	}
	return true;
}