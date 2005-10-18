/**
 *  Linux_SambaGlobalSecurityForGlobalManualInstance.h
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


#ifndef Linux_SambaGlobalSecurityForGlobalManualInstance_h
#define Linux_SambaGlobalSecurityForGlobalManualInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaGlobalSecurityForGlobalInstanceName.h"

namespace genProvider {

  class Linux_SambaGlobalSecurityForGlobalManualInstance {
  public:
       Linux_SambaGlobalSecurityForGlobalManualInstance();
  	
       Linux_SambaGlobalSecurityForGlobalManualInstance
  	    (const Linux_SambaGlobalSecurityForGlobalManualInstance& original);
  	   
       Linux_SambaGlobalSecurityForGlobalManualInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaGlobalSecurityForGlobalManualInstance();
       
       Linux_SambaGlobalSecurityForGlobalManualInstance& operator=
  	    (const Linux_SambaGlobalSecurityForGlobalManualInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaGlobalSecurityForGlobalInstanceName& val);        
       const Linux_SambaGlobalSecurityForGlobalInstanceName&
        getInstanceName() const;
       
  private:
       void init();
       void init(const Linux_SambaGlobalSecurityForGlobalManualInstance& original);
       void reset();
       
       Linux_SambaGlobalSecurityForGlobalInstanceName m_instanceName;
       
       struct isSetType{
       	 unsigned int instanceName:1;
       } isSet;
  };
  
  
  struct Linux_SambaGlobalSecurityForGlobalManualInstanceEnumerationElement{
  	Linux_SambaGlobalSecurityForGlobalManualInstance* m_elementP;
  	Linux_SambaGlobalSecurityForGlobalManualInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaGlobalSecurityForGlobalManualInstanceEnumerationElement();
  	~Linux_SambaGlobalSecurityForGlobalManualInstanceEnumerationElement();  	
  };
  

  class Linux_SambaGlobalSecurityForGlobalManualInstanceEnumeration {
  	private:
  	  Linux_SambaGlobalSecurityForGlobalManualInstanceEnumerationElement* firstElementP;
  	  Linux_SambaGlobalSecurityForGlobalManualInstanceEnumerationElement* currentElementP;
  	  Linux_SambaGlobalSecurityForGlobalManualInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaGlobalSecurityForGlobalManualInstanceEnumeration();
  	  
  	  Linux_SambaGlobalSecurityForGlobalManualInstanceEnumeration(
  	   const Linux_SambaGlobalSecurityForGlobalManualInstanceEnumeration& original);
  	  
  	  ~Linux_SambaGlobalSecurityForGlobalManualInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaGlobalSecurityForGlobalManualInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaGlobalSecurityForGlobalManualInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaGlobalSecurityForGlobalManualInstance& elementP);
  };
}
#endif

