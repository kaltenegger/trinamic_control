// Copyright 2023 Eugen Kaltenegger

#include <yaml-cpp/node/node.h>
#include <yaml-cpp/node/parse.h>

namespace trinamic_control
{
class TrinamicConfig
{
public:
  TrinamicConfig(YAML::Node yaml);
  std::list<std::pair<TrinamicParameter, int>> getConfigList();
private:
  std::list<std::pair<TrinamicParameter, int>> config_list_;
};
}  // namespace trinamic_control