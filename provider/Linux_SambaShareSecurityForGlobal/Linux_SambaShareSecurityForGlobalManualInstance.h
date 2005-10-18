/**
 *  Linux_SambaShareSecurityForGlobalManualInstance.h
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


#ifndef Linux_SambaShareSecurityForGlobalManualInstance_h
#define Linux_SambaShareSecurityForGlobalManualInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaShareSecurityForGlobalInstanceName.h"

namespace genProvider {

  class Linux_SambaShareSecurityForGlobalManualInstance {
  public:
       Linux_SambaShareSecurityForGlobalManualInstance();
  	
       Linux_SambaShareSecurityForGlobalManualInstance
  	    (const Linux_SambaShareSecurityForGlobalManualInstance& original);
  	   
       Linux_SambaShareSecurityForGlobalManualInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaShareSecurityForGlobalManualInstance();
       
       Linux_SambaShareSecurityForGlobalManualInstance& operator=
  	    (const Linux_SambaShareSecurityForGlobalManualInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaShareSecurityForGlobalInstanceName& val);        
       const Linux_SambaShareSecurityForGlobalInstanceName&
        getInstanceName() const;
       
  private:
       void init();
       void init(const Linux_SambaShareSecurityForGlobalManualInstance& original);
       void reset();
       
       Linux_SambaShareSecurityForGlobalInstanceName m_instanceName;
       
       struct isSetType{
       	 unsigned int instanceName:1;
       } isSet;
  };
  
  
  struct Linux_SambaShareSecurityForGlobalManualInstanceEnumerationElement{
  	Linux_SambaShareSecurityForGlobalManualInstance* m_elementP;
  	Linux_SambaShareSecurityForGlobalManualInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaShareSecurityForGlobalManualInstanceEnumerationElement();
  	~Linux_SambaShareSecurityForGlobalManualInstanceEnumerationElement();  	
  };
  

  class Linux_SambaShareSecurityForGlobalManualInstanceEnumeration {
  	private:
  	  Linux_SambaShareSecurityForGlobalManualInstanceEnumerationElement* firstElementP;
  	  Linux_SambaShareSecurityForGlobalManualInstanceEnumerationElement* currentElementP;
  	  Linux_SambaShareSecurityForGlobalManualInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaShareSecurityForGlobalManualInstanceEnumeration();
  	  
  	  Linux_SambaShareSecurityForGlobalManualInstanceEnumeration(
  	   const Linux_SambaShareSecurityForGlobalManualInstanceEnumeration& original);
  	  
  	  ~Linux_SambaShareSecurityForGlobalManualInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaShareSecurityForGlobalManualInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaShareSecurityForGlobalManualInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaShareSecurityForGlobalManualInstance& elementP);
  };
}
#endif

