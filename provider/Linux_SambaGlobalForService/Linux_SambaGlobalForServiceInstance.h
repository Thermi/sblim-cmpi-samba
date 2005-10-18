/**
 *  Linux_SambaGlobalForServiceInstance.h
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


#ifndef Linux_SambaGlobalForServiceInstance_h
#define Linux_SambaGlobalForServiceInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaGlobalForServiceInstanceName.h"

namespace genProvider {

  class Linux_SambaGlobalForServiceInstance {
  public:
       Linux_SambaGlobalForServiceInstance();
  	
       Linux_SambaGlobalForServiceInstance
  	    (const Linux_SambaGlobalForServiceInstance& original);
  	   
       Linux_SambaGlobalForServiceInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaGlobalForServiceInstance();
       
       Linux_SambaGlobalForServiceInstance& operator=
  	    (const Linux_SambaGlobalForServiceInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaGlobalForServiceInstanceName& val);        
       const Linux_SambaGlobalForServiceInstanceName&
        getInstanceName() const;

       unsigned int isIsCurrentSet() const;
       void setIsCurrent(const CMPIUint16 val);
       const CMPIUint16 getIsCurrent() const;

       unsigned int isIsDefaultSet() const;
       void setIsDefault(const CMPIUint16 val);
       const CMPIUint16 getIsDefault() const;
       
  private:
       void init();
       void init(const Linux_SambaGlobalForServiceInstance& original);
       void reset();
       
       Linux_SambaGlobalForServiceInstanceName m_instanceName;
       CMPIUint16 m_IsCurrent;
       CMPIUint16 m_IsDefault;
       
       struct isSetType{
       	 unsigned int instanceName:1;
         unsigned int IsCurrent:1;
         unsigned int IsDefault:1;
       } isSet;
  };
  
  
  struct Linux_SambaGlobalForServiceInstanceEnumerationElement{
  	Linux_SambaGlobalForServiceInstance* m_elementP;
  	Linux_SambaGlobalForServiceInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaGlobalForServiceInstanceEnumerationElement();
  	~Linux_SambaGlobalForServiceInstanceEnumerationElement();  	
  };
  

  class Linux_SambaGlobalForServiceInstanceEnumeration {
  	private:
  	  Linux_SambaGlobalForServiceInstanceEnumerationElement* firstElementP;
  	  Linux_SambaGlobalForServiceInstanceEnumerationElement* currentElementP;
  	  Linux_SambaGlobalForServiceInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaGlobalForServiceInstanceEnumeration();
  	  
  	  Linux_SambaGlobalForServiceInstanceEnumeration(
  	   const Linux_SambaGlobalForServiceInstanceEnumeration& original);
  	  
  	  ~Linux_SambaGlobalForServiceInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaGlobalForServiceInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaGlobalForServiceInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaGlobalForServiceInstance& elementP);
  };
}
#endif

