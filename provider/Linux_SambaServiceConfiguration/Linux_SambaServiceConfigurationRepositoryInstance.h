/**
 *  Linux_SambaServiceConfigurationRepositoryInstance.h
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


#ifndef Linux_SambaServiceConfigurationRepositoryInstance_h
#define Linux_SambaServiceConfigurationRepositoryInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaServiceConfigurationInstanceName.h"

namespace genProvider {

  class Linux_SambaServiceConfigurationRepositoryInstance {
  public:
       Linux_SambaServiceConfigurationRepositoryInstance();
  	
       Linux_SambaServiceConfigurationRepositoryInstance
  	    (const Linux_SambaServiceConfigurationRepositoryInstance& original);
  	   
       Linux_SambaServiceConfigurationRepositoryInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaServiceConfigurationRepositoryInstance();
       
       Linux_SambaServiceConfigurationRepositoryInstance& operator=
  	    (const Linux_SambaServiceConfigurationRepositoryInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaServiceConfigurationInstanceName& val);        
       const Linux_SambaServiceConfigurationInstanceName&
        getInstanceName() const;
       
  private:
       void init();
       void init(const Linux_SambaServiceConfigurationRepositoryInstance& original);
       void reset();
       
       Linux_SambaServiceConfigurationInstanceName m_instanceName;
       
       struct isSetType{
       	 unsigned int instanceName:1;
       } isSet;
  };
  
  
  struct Linux_SambaServiceConfigurationRepositoryInstanceEnumerationElement{
  	Linux_SambaServiceConfigurationRepositoryInstance* m_elementP;
  	Linux_SambaServiceConfigurationRepositoryInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaServiceConfigurationRepositoryInstanceEnumerationElement();
  	~Linux_SambaServiceConfigurationRepositoryInstanceEnumerationElement();  	
  };
  

  class Linux_SambaServiceConfigurationRepositoryInstanceEnumeration {
  	private:
  	  Linux_SambaServiceConfigurationRepositoryInstanceEnumerationElement* firstElementP;
  	  Linux_SambaServiceConfigurationRepositoryInstanceEnumerationElement* currentElementP;
  	  Linux_SambaServiceConfigurationRepositoryInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaServiceConfigurationRepositoryInstanceEnumeration();
  	  
  	  Linux_SambaServiceConfigurationRepositoryInstanceEnumeration(
  	   const Linux_SambaServiceConfigurationRepositoryInstanceEnumeration& original);
  	  
  	  ~Linux_SambaServiceConfigurationRepositoryInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaServiceConfigurationRepositoryInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaServiceConfigurationRepositoryInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaServiceConfigurationRepositoryInstance& elementP);
  };
}
#endif

