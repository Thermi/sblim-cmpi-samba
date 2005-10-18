/**
 *  Linux_SambaGlobalProtocolForGlobalInstance.h
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


#ifndef Linux_SambaGlobalProtocolForGlobalInstance_h
#define Linux_SambaGlobalProtocolForGlobalInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaGlobalProtocolForGlobalInstanceName.h"

namespace genProvider {

  class Linux_SambaGlobalProtocolForGlobalInstance {
  public:
       Linux_SambaGlobalProtocolForGlobalInstance();
  	
       Linux_SambaGlobalProtocolForGlobalInstance
  	    (const Linux_SambaGlobalProtocolForGlobalInstance& original);
  	   
       Linux_SambaGlobalProtocolForGlobalInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaGlobalProtocolForGlobalInstance();
       
       Linux_SambaGlobalProtocolForGlobalInstance& operator=
  	    (const Linux_SambaGlobalProtocolForGlobalInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaGlobalProtocolForGlobalInstanceName& val);        
       const Linux_SambaGlobalProtocolForGlobalInstanceName&
        getInstanceName() const;

       unsigned int isIsCurrentSet() const;
       void setIsCurrent(const CMPIUint16 val);
       const CMPIUint16 getIsCurrent() const;

       unsigned int isIsDefaultSet() const;
       void setIsDefault(const CMPIUint16 val);
       const CMPIUint16 getIsDefault() const;
       
  private:
       void init();
       void init(const Linux_SambaGlobalProtocolForGlobalInstance& original);
       void reset();
       
       Linux_SambaGlobalProtocolForGlobalInstanceName m_instanceName;
       CMPIUint16 m_IsCurrent;
       CMPIUint16 m_IsDefault;
       
       struct isSetType{
       	 unsigned int instanceName:1;
         unsigned int IsCurrent:1;
         unsigned int IsDefault:1;
       } isSet;
  };
  
  
  struct Linux_SambaGlobalProtocolForGlobalInstanceEnumerationElement{
  	Linux_SambaGlobalProtocolForGlobalInstance* m_elementP;
  	Linux_SambaGlobalProtocolForGlobalInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaGlobalProtocolForGlobalInstanceEnumerationElement();
  	~Linux_SambaGlobalProtocolForGlobalInstanceEnumerationElement();  	
  };
  

  class Linux_SambaGlobalProtocolForGlobalInstanceEnumeration {
  	private:
  	  Linux_SambaGlobalProtocolForGlobalInstanceEnumerationElement* firstElementP;
  	  Linux_SambaGlobalProtocolForGlobalInstanceEnumerationElement* currentElementP;
  	  Linux_SambaGlobalProtocolForGlobalInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaGlobalProtocolForGlobalInstanceEnumeration();
  	  
  	  Linux_SambaGlobalProtocolForGlobalInstanceEnumeration(
  	   const Linux_SambaGlobalProtocolForGlobalInstanceEnumeration& original);
  	  
  	  ~Linux_SambaGlobalProtocolForGlobalInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaGlobalProtocolForGlobalInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaGlobalProtocolForGlobalInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaGlobalProtocolForGlobalInstance& elementP);
  };
}
#endif

