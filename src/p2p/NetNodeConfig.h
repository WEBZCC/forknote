// Copyright (c) 2012-2015, The CryptoNote developers, The Bytecoin developers
//
// This file is part of Bytecoin.
//
// Bytecoin is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// Bytecoin is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with Bytecoin.  If not, see <http://www.gnu.org/licenses/>.

#pragma once

#include <cstdint>
#include <vector>
#include <string>

#include <boost/program_options.hpp>
#include <boost/uuid/uuid.hpp>
#include <boost/uuid/uuid_io.hpp>
#include "p2p_networks.h"
#include "p2p_protocol_types.h"

namespace CryptoNote {

class NetNodeConfig {
public:
  NetNodeConfig();
  static void initOptions(boost::program_options::options_description& desc);
  bool init(const boost::program_options::variables_map& vm);

  std::string bindIp;
  std::string bindPort;
  uint32_t externalPort;
  bool allowLocalIp;
  std::vector<peerlist_entry> peers;
  std::vector<net_address> priorityNodes;
  std::vector<net_address> exclusiveNodes;
  std::vector<net_address> seedNodes;
  bool hideMyPort;
boost::uuids::uuid networkId;
std::string p2pStatTrustedPubKey;
  std::string configFolder;
};

} //namespace nodetool