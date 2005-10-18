/**
 *  Linux_SambaGroupManualInstance.h
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


#ifndef Linux_SambaGroupManualInstance_h
#define Linux_SambaGroupManualInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaGroupInstanceName.h"

namespace genProvider {

  class Linux_SambaGroupManualInstance {
  public:
       Linux_SambaGroupManualInstance();
  	
       Linux_SambaGroupManualInstance
  	    (const Linux_SambaGroupManualInstance& original);
  	   
       Linux_SambaGroupManualInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaGroupManualInstance();
       
       Linux_SambaGroupManualInstance& operator=
  	    (const Linux_SambaGroupManualInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaGroupInstanceName& val);        
       const Linux_SambaGroupInstanceName&
        getInstanceName() const;

       unsigned int isSystemGroupNameSet() const;
       void setSystemGroupName(const char* val, int makeCopy = 1);
       const char* getSystemGroupName() const;
       
  private:
       void init();
       void init(const Linux_SambaGroupManualInstance& original);
       void reset();
       
       Linux_SambaGroupInstanceName m_instanceName;
       const char* m_SystemGroupName;
       
       struct isSetType{
       	 unsigned int instanceName:1;
         unsigned int SystemGroupName:1;
       } isSet;
  };
  
  
  struct Linux_SambaGroupManualInstanceEnumerationElement{
  	Linux_SambaGroupManualInstance* m_elementP;
  	Linux_SambaGroupManualInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaGroupManualInstanceEnumerationElement();
  	~Linux_SambaGroupManualInstanceEnumerationElement();  	
  };
  

  class Linux_SambaGroupManualInstanceEnumeration {
  	private:
  	  Linux_SambaGroupManualInstanceEnumerationElement* firstElementP;
  	  Linux_SambaGroupManualInstanceEnumerationElement* currentElementP;
  	  Linux_SambaGroupManualInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaGroupManualInstanceEnumeration();
  	  
  	  Linux_SambaGroupManualInstanceEnumeration(
  	   const Linux_SambaGroupManualInstanceEnumeration& original);
  	  
  	  ~Linux_SambaGroupManualInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaGroupManualInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaGroupManualInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaGroupManualInstance& elementP);
  };
}
#endif

