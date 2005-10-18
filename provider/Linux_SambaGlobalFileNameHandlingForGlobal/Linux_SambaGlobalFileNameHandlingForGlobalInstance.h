/**
 *  Linux_SambaGlobalFileNameHandlingForGlobalInstance.h
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


#ifndef Linux_SambaGlobalFileNameHandlingForGlobalInstance_h
#define Linux_SambaGlobalFileNameHandlingForGlobalInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaGlobalFileNameHandlingForGlobalInstanceName.h"

namespace genProvider {

  class Linux_SambaGlobalFileNameHandlingForGlobalInstance {
  public:
       Linux_SambaGlobalFileNameHandlingForGlobalInstance();
  	
       Linux_SambaGlobalFileNameHandlingForGlobalInstance
  	    (const Linux_SambaGlobalFileNameHandlingForGlobalInstance& original);
  	   
       Linux_SambaGlobalFileNameHandlingForGlobalInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaGlobalFileNameHandlingForGlobalInstance();
       
       Linux_SambaGlobalFileNameHandlingForGlobalInstance& operator=
  	    (const Linux_SambaGlobalFileNameHandlingForGlobalInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaGlobalFileNameHandlingForGlobalInstanceName& val);        
       const Linux_SambaGlobalFileNameHandlingForGlobalInstanceName&
        getInstanceName() const;

       unsigned int isIsCurrentSet() const;
       void setIsCurrent(const CMPIUint16 val);
       const CMPIUint16 getIsCurrent() const;

       unsigned int isIsDefaultSet() const;
       void setIsDefault(const CMPIUint16 val);
       const CMPIUint16 getIsDefault() const;
       
  private:
       void init();
       void init(const Linux_SambaGlobalFileNameHandlingForGlobalInstance& original);
       void reset();
       
       Linux_SambaGlobalFileNameHandlingForGlobalInstanceName m_instanceName;
       CMPIUint16 m_IsCurrent;
       CMPIUint16 m_IsDefault;
       
       struct isSetType{
       	 unsigned int instanceName:1;
         unsigned int IsCurrent:1;
         unsigned int IsDefault:1;
       } isSet;
  };
  
  
  struct Linux_SambaGlobalFileNameHandlingForGlobalInstanceEnumerationElement{
  	Linux_SambaGlobalFileNameHandlingForGlobalInstance* m_elementP;
  	Linux_SambaGlobalFileNameHandlingForGlobalInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaGlobalFileNameHandlingForGlobalInstanceEnumerationElement();
  	~Linux_SambaGlobalFileNameHandlingForGlobalInstanceEnumerationElement();  	
  };
  

  class Linux_SambaGlobalFileNameHandlingForGlobalInstanceEnumeration {
  	private:
  	  Linux_SambaGlobalFileNameHandlingForGlobalInstanceEnumerationElement* firstElementP;
  	  Linux_SambaGlobalFileNameHandlingForGlobalInstanceEnumerationElement* currentElementP;
  	  Linux_SambaGlobalFileNameHandlingForGlobalInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaGlobalFileNameHandlingForGlobalInstanceEnumeration();
  	  
  	  Linux_SambaGlobalFileNameHandlingForGlobalInstanceEnumeration(
  	   const Linux_SambaGlobalFileNameHandlingForGlobalInstanceEnumeration& original);
  	  
  	  ~Linux_SambaGlobalFileNameHandlingForGlobalInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaGlobalFileNameHandlingForGlobalInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaGlobalFileNameHandlingForGlobalInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaGlobalFileNameHandlingForGlobalInstance& elementP);
  };
}
#endif

