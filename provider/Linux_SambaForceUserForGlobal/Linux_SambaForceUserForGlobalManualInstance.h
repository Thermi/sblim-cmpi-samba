/**
 *  Linux_SambaForceUserForGlobalManualInstance.h
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


#ifndef Linux_SambaForceUserForGlobalManualInstance_h
#define Linux_SambaForceUserForGlobalManualInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaForceUserForGlobalInstanceName.h"

namespace genProvider {

  class Linux_SambaForceUserForGlobalManualInstance {
  public:
       Linux_SambaForceUserForGlobalManualInstance();
  	
       Linux_SambaForceUserForGlobalManualInstance
  	    (const Linux_SambaForceUserForGlobalManualInstance& original);
  	   
       Linux_SambaForceUserForGlobalManualInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaForceUserForGlobalManualInstance();
       
       Linux_SambaForceUserForGlobalManualInstance& operator=
  	    (const Linux_SambaForceUserForGlobalManualInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaForceUserForGlobalInstanceName& val);        
       const Linux_SambaForceUserForGlobalInstanceName&
        getInstanceName() const;
       
  private:
       void init();
       void init(const Linux_SambaForceUserForGlobalManualInstance& original);
       void reset();
       
       Linux_SambaForceUserForGlobalInstanceName m_instanceName;
       
       struct isSetType{
       	 unsigned int instanceName:1;
       } isSet;
  };
  
  
  struct Linux_SambaForceUserForGlobalManualInstanceEnumerationElement{
  	Linux_SambaForceUserForGlobalManualInstance* m_elementP;
  	Linux_SambaForceUserForGlobalManualInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaForceUserForGlobalManualInstanceEnumerationElement();
  	~Linux_SambaForceUserForGlobalManualInstanceEnumerationElement();  	
  };
  

  class Linux_SambaForceUserForGlobalManualInstanceEnumeration {
  	private:
  	  Linux_SambaForceUserForGlobalManualInstanceEnumerationElement* firstElementP;
  	  Linux_SambaForceUserForGlobalManualInstanceEnumerationElement* currentElementP;
  	  Linux_SambaForceUserForGlobalManualInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaForceUserForGlobalManualInstanceEnumeration();
  	  
  	  Linux_SambaForceUserForGlobalManualInstanceEnumeration(
  	   const Linux_SambaForceUserForGlobalManualInstanceEnumeration& original);
  	  
  	  ~Linux_SambaForceUserForGlobalManualInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaForceUserForGlobalManualInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaForceUserForGlobalManualInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaForceUserForGlobalManualInstance& elementP);
  };
}
#endif

