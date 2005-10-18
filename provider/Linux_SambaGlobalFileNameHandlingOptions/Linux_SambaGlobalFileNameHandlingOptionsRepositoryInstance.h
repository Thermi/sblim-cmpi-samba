/**
 *  Linux_SambaGlobalFileNameHandlingOptionsRepositoryInstance.h
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


#ifndef Linux_SambaGlobalFileNameHandlingOptionsRepositoryInstance_h
#define Linux_SambaGlobalFileNameHandlingOptionsRepositoryInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaGlobalFileNameHandlingOptionsInstanceName.h"

namespace genProvider {

  class Linux_SambaGlobalFileNameHandlingOptionsRepositoryInstance {
  public:
       Linux_SambaGlobalFileNameHandlingOptionsRepositoryInstance();
  	
       Linux_SambaGlobalFileNameHandlingOptionsRepositoryInstance
  	    (const Linux_SambaGlobalFileNameHandlingOptionsRepositoryInstance& original);
  	   
       Linux_SambaGlobalFileNameHandlingOptionsRepositoryInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaGlobalFileNameHandlingOptionsRepositoryInstance();
       
       Linux_SambaGlobalFileNameHandlingOptionsRepositoryInstance& operator=
  	    (const Linux_SambaGlobalFileNameHandlingOptionsRepositoryInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaGlobalFileNameHandlingOptionsInstanceName& val);        
       const Linux_SambaGlobalFileNameHandlingOptionsInstanceName&
        getInstanceName() const;
       
  private:
       void init();
       void init(const Linux_SambaGlobalFileNameHandlingOptionsRepositoryInstance& original);
       void reset();
       
       Linux_SambaGlobalFileNameHandlingOptionsInstanceName m_instanceName;
       
       struct isSetType{
       	 unsigned int instanceName:1;
       } isSet;
  };
  
  
  struct Linux_SambaGlobalFileNameHandlingOptionsRepositoryInstanceEnumerationElement{
  	Linux_SambaGlobalFileNameHandlingOptionsRepositoryInstance* m_elementP;
  	Linux_SambaGlobalFileNameHandlingOptionsRepositoryInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaGlobalFileNameHandlingOptionsRepositoryInstanceEnumerationElement();
  	~Linux_SambaGlobalFileNameHandlingOptionsRepositoryInstanceEnumerationElement();  	
  };
  

  class Linux_SambaGlobalFileNameHandlingOptionsRepositoryInstanceEnumeration {
  	private:
  	  Linux_SambaGlobalFileNameHandlingOptionsRepositoryInstanceEnumerationElement* firstElementP;
  	  Linux_SambaGlobalFileNameHandlingOptionsRepositoryInstanceEnumerationElement* currentElementP;
  	  Linux_SambaGlobalFileNameHandlingOptionsRepositoryInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaGlobalFileNameHandlingOptionsRepositoryInstanceEnumeration();
  	  
  	  Linux_SambaGlobalFileNameHandlingOptionsRepositoryInstanceEnumeration(
  	   const Linux_SambaGlobalFileNameHandlingOptionsRepositoryInstanceEnumeration& original);
  	  
  	  ~Linux_SambaGlobalFileNameHandlingOptionsRepositoryInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaGlobalFileNameHandlingOptionsRepositoryInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaGlobalFileNameHandlingOptionsRepositoryInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaGlobalFileNameHandlingOptionsRepositoryInstance& elementP);
  };
}
#endif

