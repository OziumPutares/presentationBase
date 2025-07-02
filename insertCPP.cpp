
#include <filesystem>
#include <fstream>
int main() {
  std::ifstream inputFile(std::filesystem::current_path() /
                          "index_template.html");
}
