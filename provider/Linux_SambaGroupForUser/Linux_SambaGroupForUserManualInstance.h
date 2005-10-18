/**
 *  Linux_SambaGroupForUserManualInstance.h
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


#ifndef Linux_SambaGroupForUserManualInstance_h
#define Linux_SambaGroupForUserManualInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaGroupForUserInstanceName.h"

namespace genProvider {

  class Linux_SambaGroupForUserManualInstance {
  public:
       Linux_SambaGroupForUserManualInstance();
  	
       Linux_SambaGroupForUserManualInstance
  	    (const Linux_SambaGroupForUserManualInstance& original);
  	   
       Linux_SambaGroupForUserManualInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaGroupForUserManualInstance();
       
       Linux_SambaGroupForUserManualInstance& operator=
  	    (const Linux_SambaGroupForUserManualInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaGroupForUserInstanceName& val);        
       const Linux_SambaGroupForUserInstanceName&
        getInstanceName() const;
       
  private:
       void init();
       void init(const Linux_SambaGroupForUserManualInstance& original);
       void reset();
       
       Linux_SambaGroupForUserInstanceName m_instanceName;
       
       struct isSetType{
       	 unsigned int instanceName:1;
       } isSet;
  };
  
  
  struct Linux_SambaGroupForUserManualInstanceEnumerationElement{
  	Linux_SambaGroupForUserManualInstance* m_elementP;
  	Linux_SambaGroupForUserManualInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaGroupForUserManualInstanceEnumerationElement();
  	~Linux_SambaGroupForUserManualInstanceEnumerationElement();  	
  };
  

  class Linux_SambaGroupForUserManualInstanceEnumeration {
  	private:
  	  Linux_SambaGroupForUserManualInstanceEnumerationElement* firstElementP;
  	  Linux_SambaGroupForUserManualInstanceEnumerationElement* currentElementP;
  	  Linux_SambaGroupForUserManualInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaGroupForUserManualInstanceEnumeration();
  	  
  	  Linux_SambaGroupForUserManualInstanceEnumeration(
  	   const Linux_SambaGroupForUserManualInstanceEnumeration& original);
  	  
  	  ~Linux_SambaGroupForUserManualInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaGroupForUserManualInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaGroupForUserManualInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaGroupForUserManualInstance& elementP);
  };
}
#endif

