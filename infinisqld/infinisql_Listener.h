/*
 * Copyright (c) 2013 Mark Travis <mtravis15432+src@gmail.com>
 * All rights reserved. No warranty, explicit or implicit, provided.
 *
 * This file is part of InfiniSQL (tm). It is available either under the
 * GNU Affero Public License or under a commercial license. Contact the
 * copyright holder for information about a commercial license if terms
 * of the GNU Affero Public License do not suit you.
 *
 * This copy of InfiniSQL is free software: you can redistribute it and/or
 * modify it under the terms of the GNU Affero Public License as published
 * by the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * InfiniSQL is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Affero Public License for more details.
 *
 * You should have received a copy of the GNU Affero Public License
 * along with InfiniSQL. It should be in the top level of the source
 * directory in a file entitled "COPYING".
 * If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef LISTENER_H
#define LISTENER_H

#include "infinisql_gch.h"

class Listener
{
public:
  Listener(Topology::partitionAddress *);
  virtual ~Listener();

  int startsocket(string &, string &);

  //private:
  class Mboxes mboxes;
  Topology::partitionAddress myIdentity;
  class Topology myTopology;

  /*
  vector<class MboxProducer *> socketAffinity;
  vector<listenertype_e> listenerTypes;
   */
  /*
  boost::unordered_map<int, class MboxProducer *> socketAffinity;
  boost::unordered_map<int, listenertype_e> listenerTypeMap;
   */
};

void *listener(void *);

#endif  /* LISTENER_H */
