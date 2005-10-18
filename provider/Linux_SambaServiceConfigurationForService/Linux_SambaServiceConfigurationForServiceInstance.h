/**
 *  Linux_SambaServiceConfigurationForServiceInstance.h
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


#ifndef Linux_SambaServiceConfigurationForServiceInstance_h
#define Linux_SambaServiceConfigurationForServiceInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaServiceConfigurationForServiceInstanceName.h"

namespace genProvider {

  class Linux_SambaServiceConfigurationForServiceInstance {
  public:
       Linux_SambaServiceConfigurationForServiceInstance();
  	
       Linux_SambaServiceConfigurationForServiceInstance
  	    (const Linux_SambaServiceConfigurationForServiceInstance& original);
  	   
       Linux_SambaServiceConfigurationForServiceInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaServiceConfigurationForServiceInstance();
       
       Linux_SambaServiceConfigurationForServiceInstance& operator=
  	    (const Linux_SambaServiceConfigurationForServiceInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaServiceConfigurationForServiceInstanceName& val);        
       const Linux_SambaServiceConfigurationForServiceInstanceName&
        getInstanceName() const;
       
  private:
       void init();
       void init(const Linux_SambaServiceConfigurationForServiceInstance& original);
       void reset();
       
       Linux_SambaServiceConfigurationForServiceInstanceName m_instanceName;
       
       struct isSetType{
       	 unsigned int instanceName:1;
       } isSet;
  };
  
  
  struct Linux_SambaServiceConfigurationForServiceInstanceEnumerationElement{
  	Linux_SambaServiceConfigurationForServiceInstance* m_elementP;
  	Linux_SambaServiceConfigurationForServiceInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaServiceConfigurationForServiceInstanceEnumerationElement();
  	~Linux_SambaServiceConfigurationForServiceInstanceEnumerationElement();  	
  };
  

  class Linux_SambaServiceConfigurationForServiceInstanceEnumeration {
  	private:
  	  Linux_SambaServiceConfigurationForServiceInstanceEnumerationElement* firstElementP;
  	  Linux_SambaServiceConfigurationForServiceInstanceEnumerationElement* currentElementP;
  	  Linux_SambaServiceConfigurationForServiceInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaServiceConfigurationForServiceInstanceEnumeration();
  	  
  	  Linux_SambaServiceConfigurationForServiceInstanceEnumeration(
  	   const Linux_SambaServiceConfigurationForServiceInstanceEnumeration& original);
  	  
  	  ~Linux_SambaServiceConfigurationForServiceInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaServiceConfigurationForServiceInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaServiceConfigurationForServiceInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaServiceConfigurationForServiceInstance& elementP);
  };
}
#endif

