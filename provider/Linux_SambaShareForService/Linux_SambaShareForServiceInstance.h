/**
 *  Linux_SambaShareForServiceInstance.h
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


#ifndef Linux_SambaShareForServiceInstance_h
#define Linux_SambaShareForServiceInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaShareForServiceInstanceName.h"

namespace genProvider {

  class Linux_SambaShareForServiceInstance {
  public:
       Linux_SambaShareForServiceInstance();
  	
       Linux_SambaShareForServiceInstance
  	    (const Linux_SambaShareForServiceInstance& original);
  	   
       Linux_SambaShareForServiceInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaShareForServiceInstance();
       
       Linux_SambaShareForServiceInstance& operator=
  	    (const Linux_SambaShareForServiceInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaShareForServiceInstanceName& val);        
       const Linux_SambaShareForServiceInstanceName&
        getInstanceName() const;

       unsigned int isIsCurrentSet() const;
       void setIsCurrent(const CMPIUint16 val);
       const CMPIUint16 getIsCurrent() const;

       unsigned int isIsDefaultSet() const;
       void setIsDefault(const CMPIUint16 val);
       const CMPIUint16 getIsDefault() const;
       
  private:
       void init();
       void init(const Linux_SambaShareForServiceInstance& original);
       void reset();
       
       Linux_SambaShareForServiceInstanceName m_instanceName;
       CMPIUint16 m_IsCurrent;
       CMPIUint16 m_IsDefault;
       
       struct isSetType{
       	 unsigned int instanceName:1;
         unsigned int IsCurrent:1;
         unsigned int IsDefault:1;
       } isSet;
  };
  
  
  struct Linux_SambaShareForServiceInstanceEnumerationElement{
  	Linux_SambaShareForServiceInstance* m_elementP;
  	Linux_SambaShareForServiceInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaShareForServiceInstanceEnumerationElement();
  	~Linux_SambaShareForServiceInstanceEnumerationElement();  	
  };
  

  class Linux_SambaShareForServiceInstanceEnumeration {
  	private:
  	  Linux_SambaShareForServiceInstanceEnumerationElement* firstElementP;
  	  Linux_SambaShareForServiceInstanceEnumerationElement* currentElementP;
  	  Linux_SambaShareForServiceInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaShareForServiceInstanceEnumeration();
  	  
  	  Linux_SambaShareForServiceInstanceEnumeration(
  	   const Linux_SambaShareForServiceInstanceEnumeration& original);
  	  
  	  ~Linux_SambaShareForServiceInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaShareForServiceInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaShareForServiceInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaShareForServiceInstance& elementP);
  };
}
#endif

