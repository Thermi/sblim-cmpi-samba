/**
 *  Linux_SambaServiceConfigurationForServiceManualInstance.h
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


#ifndef Linux_SambaServiceConfigurationForServiceManualInstance_h
#define Linux_SambaServiceConfigurationForServiceManualInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaServiceConfigurationForServiceInstanceName.h"

namespace genProvider {

  class Linux_SambaServiceConfigurationForServiceManualInstance {
  public:
       Linux_SambaServiceConfigurationForServiceManualInstance();
  	
       Linux_SambaServiceConfigurationForServiceManualInstance
  	    (const Linux_SambaServiceConfigurationForServiceManualInstance& original);
  	   
       Linux_SambaServiceConfigurationForServiceManualInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaServiceConfigurationForServiceManualInstance();
       
       Linux_SambaServiceConfigurationForServiceManualInstance& operator=
  	    (const Linux_SambaServiceConfigurationForServiceManualInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaServiceConfigurationForServiceInstanceName& val);        
       const Linux_SambaServiceConfigurationForServiceInstanceName&
        getInstanceName() const;
       
  private:
       void init();
       void init(const Linux_SambaServiceConfigurationForServiceManualInstance& original);
       void reset();
       
       Linux_SambaServiceConfigurationForServiceInstanceName m_instanceName;
       
       struct isSetType{
       	 unsigned int instanceName:1;
       } isSet;
  };
  
  
  struct Linux_SambaServiceConfigurationForServiceManualInstanceEnumerationElement{
  	Linux_SambaServiceConfigurationForServiceManualInstance* m_elementP;
  	Linux_SambaServiceConfigurationForServiceManualInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaServiceConfigurationForServiceManualInstanceEnumerationElement();
  	~Linux_SambaServiceConfigurationForServiceManualInstanceEnumerationElement();  	
  };
  

  class Linux_SambaServiceConfigurationForServiceManualInstanceEnumeration {
  	private:
  	  Linux_SambaServiceConfigurationForServiceManualInstanceEnumerationElement* firstElementP;
  	  Linux_SambaServiceConfigurationForServiceManualInstanceEnumerationElement* currentElementP;
  	  Linux_SambaServiceConfigurationForServiceManualInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaServiceConfigurationForServiceManualInstanceEnumeration();
  	  
  	  Linux_SambaServiceConfigurationForServiceManualInstanceEnumeration(
  	   const Linux_SambaServiceConfigurationForServiceManualInstanceEnumeration& original);
  	  
  	  ~Linux_SambaServiceConfigurationForServiceManualInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaServiceConfigurationForServiceManualInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaServiceConfigurationForServiceManualInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaServiceConfigurationForServiceManualInstance& elementP);
  };
}
#endif

