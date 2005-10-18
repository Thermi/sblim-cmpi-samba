/**
 *  Linux_SambaCommonSecurityForGlobalManualInstance.h
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


#ifndef Linux_SambaCommonSecurityForGlobalManualInstance_h
#define Linux_SambaCommonSecurityForGlobalManualInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaCommonSecurityForGlobalInstanceName.h"

namespace genProvider {

  class Linux_SambaCommonSecurityForGlobalManualInstance {
  public:
       Linux_SambaCommonSecurityForGlobalManualInstance();
  	
       Linux_SambaCommonSecurityForGlobalManualInstance
  	    (const Linux_SambaCommonSecurityForGlobalManualInstance& original);
  	   
       Linux_SambaCommonSecurityForGlobalManualInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaCommonSecurityForGlobalManualInstance();
       
       Linux_SambaCommonSecurityForGlobalManualInstance& operator=
  	    (const Linux_SambaCommonSecurityForGlobalManualInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaCommonSecurityForGlobalInstanceName& val);        
       const Linux_SambaCommonSecurityForGlobalInstanceName&
        getInstanceName() const;
       
  private:
       void init();
       void init(const Linux_SambaCommonSecurityForGlobalManualInstance& original);
       void reset();
       
       Linux_SambaCommonSecurityForGlobalInstanceName m_instanceName;
       
       struct isSetType{
       	 unsigned int instanceName:1;
       } isSet;
  };
  
  
  struct Linux_SambaCommonSecurityForGlobalManualInstanceEnumerationElement{
  	Linux_SambaCommonSecurityForGlobalManualInstance* m_elementP;
  	Linux_SambaCommonSecurityForGlobalManualInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaCommonSecurityForGlobalManualInstanceEnumerationElement();
  	~Linux_SambaCommonSecurityForGlobalManualInstanceEnumerationElement();  	
  };
  

  class Linux_SambaCommonSecurityForGlobalManualInstanceEnumeration {
  	private:
  	  Linux_SambaCommonSecurityForGlobalManualInstanceEnumerationElement* firstElementP;
  	  Linux_SambaCommonSecurityForGlobalManualInstanceEnumerationElement* currentElementP;
  	  Linux_SambaCommonSecurityForGlobalManualInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaCommonSecurityForGlobalManualInstanceEnumeration();
  	  
  	  Linux_SambaCommonSecurityForGlobalManualInstanceEnumeration(
  	   const Linux_SambaCommonSecurityForGlobalManualInstanceEnumeration& original);
  	  
  	  ~Linux_SambaCommonSecurityForGlobalManualInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaCommonSecurityForGlobalManualInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaCommonSecurityForGlobalManualInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaCommonSecurityForGlobalManualInstance& elementP);
  };
}
#endif

