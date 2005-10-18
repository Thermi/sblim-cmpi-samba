/**
 *  Linux_SambaShareSecurityForGlobalInstance.h
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


#ifndef Linux_SambaShareSecurityForGlobalInstance_h
#define Linux_SambaShareSecurityForGlobalInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaShareSecurityForGlobalInstanceName.h"

namespace genProvider {

  class Linux_SambaShareSecurityForGlobalInstance {
  public:
       Linux_SambaShareSecurityForGlobalInstance();
  	
       Linux_SambaShareSecurityForGlobalInstance
  	    (const Linux_SambaShareSecurityForGlobalInstance& original);
  	   
       Linux_SambaShareSecurityForGlobalInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaShareSecurityForGlobalInstance();
       
       Linux_SambaShareSecurityForGlobalInstance& operator=
  	    (const Linux_SambaShareSecurityForGlobalInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaShareSecurityForGlobalInstanceName& val);        
       const Linux_SambaShareSecurityForGlobalInstanceName&
        getInstanceName() const;

       unsigned int isIsCurrentSet() const;
       void setIsCurrent(const CMPIUint16 val);
       const CMPIUint16 getIsCurrent() const;

       unsigned int isIsDefaultSet() const;
       void setIsDefault(const CMPIUint16 val);
       const CMPIUint16 getIsDefault() const;
       
  private:
       void init();
       void init(const Linux_SambaShareSecurityForGlobalInstance& original);
       void reset();
       
       Linux_SambaShareSecurityForGlobalInstanceName m_instanceName;
       CMPIUint16 m_IsCurrent;
       CMPIUint16 m_IsDefault;
       
       struct isSetType{
       	 unsigned int instanceName:1;
         unsigned int IsCurrent:1;
         unsigned int IsDefault:1;
       } isSet;
  };
  
  
  struct Linux_SambaShareSecurityForGlobalInstanceEnumerationElement{
  	Linux_SambaShareSecurityForGlobalInstance* m_elementP;
  	Linux_SambaShareSecurityForGlobalInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaShareSecurityForGlobalInstanceEnumerationElement();
  	~Linux_SambaShareSecurityForGlobalInstanceEnumerationElement();  	
  };
  

  class Linux_SambaShareSecurityForGlobalInstanceEnumeration {
  	private:
  	  Linux_SambaShareSecurityForGlobalInstanceEnumerationElement* firstElementP;
  	  Linux_SambaShareSecurityForGlobalInstanceEnumerationElement* currentElementP;
  	  Linux_SambaShareSecurityForGlobalInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaShareSecurityForGlobalInstanceEnumeration();
  	  
  	  Linux_SambaShareSecurityForGlobalInstanceEnumeration(
  	   const Linux_SambaShareSecurityForGlobalInstanceEnumeration& original);
  	  
  	  ~Linux_SambaShareSecurityForGlobalInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaShareSecurityForGlobalInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaShareSecurityForGlobalInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaShareSecurityForGlobalInstance& elementP);
  };
}
#endif

