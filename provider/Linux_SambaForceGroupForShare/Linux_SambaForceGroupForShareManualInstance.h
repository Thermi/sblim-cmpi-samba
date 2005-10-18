/**
 *  Linux_SambaForceGroupForShareManualInstance.h
 * 
 * (C) Copyright IBM Corp. 2005
 *
 * THIS FILE IS PROVIDED UNDER THE TERMS OF THE COMMON PUBLIC LICENSE
 * ("AGREEMENT"). ANY USE, REPRODUCTION OR DISTRIBUTION OF THIS FILE
 * CONSTITUTES RECIPIENTS ACCEPTANCE OF THE AGREEMENT.
 *
 * You can obtain a current copy of the Common Public License from
 * http://www.opensource.org/licenses/cpl1.0.php
 *
 * Author:     Rodrigo Ceron <rceron@br.ibm.com>
 *
 * Contributors:
 *
 */


#ifndef Linux_SambaForceGroupForShareManualInstance_h
#define Linux_SambaForceGroupForShareManualInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaForceGroupForShareInstanceName.h"

namespace genProvider {

  class Linux_SambaForceGroupForShareManualInstance {
  public:
       Linux_SambaForceGroupForShareManualInstance();
  	
       Linux_SambaForceGroupForShareManualInstance
  	    (const Linux_SambaForceGroupForShareManualInstance& original);
  	   
       Linux_SambaForceGroupForShareManualInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaForceGroupForShareManualInstance();
       
       Linux_SambaForceGroupForShareManualInstance& operator=
  	    (const Linux_SambaForceGroupForShareManualInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaForceGroupForShareInstanceName& val);        
       const Linux_SambaForceGroupForShareInstanceName&
        getInstanceName() const;
       
  private:
       void init();
       void init(const Linux_SambaForceGroupForShareManualInstance& original);
       void reset();
       
       Linux_SambaForceGroupForShareInstanceName m_instanceName;
       
       struct isSetType{
       	 unsigned int instanceName:1;
       } isSet;
  };
  
  
  struct Linux_SambaForceGroupForShareManualInstanceEnumerationElement{
  	Linux_SambaForceGroupForShareManualInstance* m_elementP;
  	Linux_SambaForceGroupForShareManualInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaForceGroupForShareManualInstanceEnumerationElement();
  	~Linux_SambaForceGroupForShareManualInstanceEnumerationElement();  	
  };
  

  class Linux_SambaForceGroupForShareManualInstanceEnumeration {
  	private:
  	  Linux_SambaForceGroupForShareManualInstanceEnumerationElement* firstElementP;
  	  Linux_SambaForceGroupForShareManualInstanceEnumerationElement* currentElementP;
  	  Linux_SambaForceGroupForShareManualInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaForceGroupForShareManualInstanceEnumeration();
  	  
  	  Linux_SambaForceGroupForShareManualInstanceEnumeration(
  	   const Linux_SambaForceGroupForShareManualInstanceEnumeration& original);
  	  
  	  ~Linux_SambaForceGroupForShareManualInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaForceGroupForShareManualInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaForceGroupForShareManualInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaForceGroupForShareManualInstance& elementP);
  };
}
#endif

