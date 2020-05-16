#pragma once
#include <memory>
#include "Vm.h"

class Server
{
public:
   Server(int capacity)
   {
      this->capacity = capacity;
   }

   bool contains(const VmSPtr& vm)
   {
      return true;
   }

   double actualLoadPercentage = 0;
   int capacity = 0;

private:
};

using ServerSPtr = std::shared_ptr<Server>;