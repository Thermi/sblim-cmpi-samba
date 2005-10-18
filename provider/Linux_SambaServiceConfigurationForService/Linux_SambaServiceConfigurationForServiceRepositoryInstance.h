/**
 *  Linux_SambaServiceConfigurationForServiceRepositoryInstance.h
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


#ifndef Linux_SambaServiceConfigurationForServiceRepositoryInstance_h
#define Linux_SambaServiceConfigurationForServiceRepositoryInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaServiceConfigurationForServiceInstanceName.h"

namespace genProvider {

  class Linux_SambaServiceConfigurationForServiceRepositoryInstance {
  public:
       Linux_SambaServiceConfigurationForServiceRepositoryInstance();
  	
       Linux_SambaServiceConfigurationForServiceRepositoryInstance
  	    (const Linux_SambaServiceConfigurationForServiceRepositoryInstance& original);
  	   
       Linux_SambaServiceConfigurationForServiceRepositoryInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaServiceConfigurationForServiceRepositoryInstance();
       
       Linux_SambaServiceConfigurationForServiceRepositoryInstance& operator=
  	    (const Linux_SambaServiceConfigurationForServiceRepositoryInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaServiceConfigurationForServiceInstanceName& val);        
       const Linux_SambaServiceConfigurationForServiceInstanceName&
        getInstanceName() const;
       
  private:
       void init();
       void init(const Linux_SambaServiceConfigurationForServiceRepositoryInstance& original);
       void reset();
       
       Linux_SambaServiceConfigurationForServiceInstanceName m_instanceName;
       
       struct isSetType{
       	 unsigned int instanceName:1;
       } isSet;
  };
  
  
  struct Linux_SambaServiceConfigurationForServiceRepositoryInstanceEnumerationElement{
  	Linux_SambaServiceConfigurationForServiceRepositoryInstance* m_elementP;
  	Linux_SambaServiceConfigurationForServiceRepositoryInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaServiceConfigurationForServiceRepositoryInstanceEnumerationElement();
  	~Linux_SambaServiceConfigurationForServiceRepositoryInstanceEnumerationElement();  	
  };
  

  class Linux_SambaServiceConfigurationForServiceRepositoryInstanceEnumeration {
  	private:
  	  Linux_SambaServiceConfigurationForServiceRepositoryInstanceEnumerationElement* firstElementP;
  	  Linux_SambaServiceConfigurationForServiceRepositoryInstanceEnumerationElement* currentElementP;
  	  Linux_SambaServiceConfigurationForServiceRepositoryInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaServiceConfigurationForServiceRepositoryInstanceEnumeration();
  	  
  	  Linux_SambaServiceConfigurationForServiceRepositoryInstanceEnumeration(
  	   const Linux_SambaServiceConfigurationForServiceRepositoryInstanceEnumeration& original);
  	  
  	  ~Linux_SambaServiceConfigurationForServiceRepositoryInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaServiceConfigurationForServiceRepositoryInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaServiceConfigurationForServiceRepositoryInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaServiceConfigurationForServiceRepositoryInstance& elementP);
  };
}
#endif

