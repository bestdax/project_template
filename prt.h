#pragma once
#include <string>
#include <fstream>
#include <ctime>
#include <filesystem>
#include <cstring>
#include <iostream>

class ProjectTemplate
{
public:
	ProjectTemplate();
	void create_euler_project(std::string prj_name);
	void create_algorithm_project();
private:
	void mkdir(std::filesystem::path path);
	void create_file(std::filesystem::path path, std::string content);
	std::filesystem::path project_dir;
private:
	std::string main_cmake_content;
	std::string subdir_cmake_content;
	std::string problem_cmake_content;
	std::string problem_test_cmake_content;
	std::string main_cpp_content;
	std::string problem_cpp_content;
	std::string problem_test_cpp_content;
	std::string problem_header_content;
};
