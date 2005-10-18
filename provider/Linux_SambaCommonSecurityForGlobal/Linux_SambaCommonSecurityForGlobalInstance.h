/**
 *  Linux_SambaCommonSecurityForGlobalInstance.h
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


#ifndef Linux_SambaCommonSecurityForGlobalInstance_h
#define Linux_SambaCommonSecurityForGlobalInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaCommonSecurityForGlobalInstanceName.h"

namespace genProvider {

  class Linux_SambaCommonSecurityForGlobalInstance {
  public:
       Linux_SambaCommonSecurityForGlobalInstance();
  	
       Linux_SambaCommonSecurityForGlobalInstance
  	    (const Linux_SambaCommonSecurityForGlobalInstance& original);
  	   
       Linux_SambaCommonSecurityForGlobalInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaCommonSecurityForGlobalInstance();
       
       Linux_SambaCommonSecurityForGlobalInstance& operator=
  	    (const Linux_SambaCommonSecurityForGlobalInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaCommonSecurityForGlobalInstanceName& val);        
       const Linux_SambaCommonSecurityForGlobalInstanceName&
        getInstanceName() const;

       unsigned int isIsCurrentSet() const;
       void setIsCurrent(const CMPIUint16 val);
       const CMPIUint16 getIsCurrent() const;

       unsigned int isIsDefaultSet() const;
       void setIsDefault(const CMPIUint16 val);
       const CMPIUint16 getIsDefault() const;
       
  private:
       void init();
       void init(const Linux_SambaCommonSecurityForGlobalInstance& original);
       void reset();
       
       Linux_SambaCommonSecurityForGlobalInstanceName m_instanceName;
       CMPIUint16 m_IsCurrent;
       CMPIUint16 m_IsDefault;
       
       struct isSetType{
       	 unsigned int instanceName:1;
         unsigned int IsCurrent:1;
         unsigned int IsDefault:1;
       } isSet;
  };
  
  
  struct Linux_SambaCommonSecurityForGlobalInstanceEnumerationElement{
  	Linux_SambaCommonSecurityForGlobalInstance* m_elementP;
  	Linux_SambaCommonSecurityForGlobalInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaCommonSecurityForGlobalInstanceEnumerationElement();
  	~Linux_SambaCommonSecurityForGlobalInstanceEnumerationElement();  	
  };
  

  class Linux_SambaCommonSecurityForGlobalInstanceEnumeration {
  	private:
  	  Linux_SambaCommonSecurityForGlobalInstanceEnumerationElement* firstElementP;
  	  Linux_SambaCommonSecurityForGlobalInstanceEnumerationElement* currentElementP;
  	  Linux_SambaCommonSecurityForGlobalInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaCommonSecurityForGlobalInstanceEnumeration();
  	  
  	  Linux_SambaCommonSecurityForGlobalInstanceEnumeration(
  	   const Linux_SambaCommonSecurityForGlobalInstanceEnumeration& original);
  	  
  	  ~Linux_SambaCommonSecurityForGlobalInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaCommonSecurityForGlobalInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaCommonSecurityForGlobalInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaCommonSecurityForGlobalInstance& elementP);
  };
}
#endif

