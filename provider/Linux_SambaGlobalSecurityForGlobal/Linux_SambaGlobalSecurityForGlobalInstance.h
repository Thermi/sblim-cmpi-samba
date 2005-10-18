/**
 *  Linux_SambaGlobalSecurityForGlobalInstance.h
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


#ifndef Linux_SambaGlobalSecurityForGlobalInstance_h
#define Linux_SambaGlobalSecurityForGlobalInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaGlobalSecurityForGlobalInstanceName.h"

namespace genProvider {

  class Linux_SambaGlobalSecurityForGlobalInstance {
  public:
       Linux_SambaGlobalSecurityForGlobalInstance();
  	
       Linux_SambaGlobalSecurityForGlobalInstance
  	    (const Linux_SambaGlobalSecurityForGlobalInstance& original);
  	   
       Linux_SambaGlobalSecurityForGlobalInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaGlobalSecurityForGlobalInstance();
       
       Linux_SambaGlobalSecurityForGlobalInstance& operator=
  	    (const Linux_SambaGlobalSecurityForGlobalInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaGlobalSecurityForGlobalInstanceName& val);        
       const Linux_SambaGlobalSecurityForGlobalInstanceName&
        getInstanceName() const;

       unsigned int isIsCurrentSet() const;
       void setIsCurrent(const CMPIUint16 val);
       const CMPIUint16 getIsCurrent() const;

       unsigned int isIsDefaultSet() const;
       void setIsDefault(const CMPIUint16 val);
       const CMPIUint16 getIsDefault() const;
       
  private:
       void init();
       void init(const Linux_SambaGlobalSecurityForGlobalInstance& original);
       void reset();
       
       Linux_SambaGlobalSecurityForGlobalInstanceName m_instanceName;
       CMPIUint16 m_IsCurrent;
       CMPIUint16 m_IsDefault;
       
       struct isSetType{
       	 unsigned int instanceName:1;
         unsigned int IsCurrent:1;
         unsigned int IsDefault:1;
       } isSet;
  };
  
  
  struct Linux_SambaGlobalSecurityForGlobalInstanceEnumerationElement{
  	Linux_SambaGlobalSecurityForGlobalInstance* m_elementP;
  	Linux_SambaGlobalSecurityForGlobalInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaGlobalSecurityForGlobalInstanceEnumerationElement();
  	~Linux_SambaGlobalSecurityForGlobalInstanceEnumerationElement();  	
  };
  

  class Linux_SambaGlobalSecurityForGlobalInstanceEnumeration {
  	private:
  	  Linux_SambaGlobalSecurityForGlobalInstanceEnumerationElement* firstElementP;
  	  Linux_SambaGlobalSecurityForGlobalInstanceEnumerationElement* currentElementP;
  	  Linux_SambaGlobalSecurityForGlobalInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaGlobalSecurityForGlobalInstanceEnumeration();
  	  
  	  Linux_SambaGlobalSecurityForGlobalInstanceEnumeration(
  	   const Linux_SambaGlobalSecurityForGlobalInstanceEnumeration& original);
  	  
  	  ~Linux_SambaGlobalSecurityForGlobalInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaGlobalSecurityForGlobalInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaGlobalSecurityForGlobalInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaGlobalSecurityForGlobalInstance& elementP);
  };
}
#endif

