/**
 *  Linux_SambaGlobalProtocolOptionsRepositoryInstance.h
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


#ifndef Linux_SambaGlobalProtocolOptionsRepositoryInstance_h
#define Linux_SambaGlobalProtocolOptionsRepositoryInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaGlobalProtocolOptionsInstanceName.h"

namespace genProvider {

  class Linux_SambaGlobalProtocolOptionsRepositoryInstance {
  public:
       Linux_SambaGlobalProtocolOptionsRepositoryInstance();
  	
       Linux_SambaGlobalProtocolOptionsRepositoryInstance
  	    (const Linux_SambaGlobalProtocolOptionsRepositoryInstance& original);
  	   
       Linux_SambaGlobalProtocolOptionsRepositoryInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaGlobalProtocolOptionsRepositoryInstance();
       
       Linux_SambaGlobalProtocolOptionsRepositoryInstance& operator=
  	    (const Linux_SambaGlobalProtocolOptionsRepositoryInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaGlobalProtocolOptionsInstanceName& val);        
       const Linux_SambaGlobalProtocolOptionsInstanceName&
        getInstanceName() const;
       
  private:
       void init();
       void init(const Linux_SambaGlobalProtocolOptionsRepositoryInstance& original);
       void reset();
       
       Linux_SambaGlobalProtocolOptionsInstanceName m_instanceName;
       
       struct isSetType{
       	 unsigned int instanceName:1;
       } isSet;
  };
  
  
  struct Linux_SambaGlobalProtocolOptionsRepositoryInstanceEnumerationElement{
  	Linux_SambaGlobalProtocolOptionsRepositoryInstance* m_elementP;
  	Linux_SambaGlobalProtocolOptionsRepositoryInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaGlobalProtocolOptionsRepositoryInstanceEnumerationElement();
  	~Linux_SambaGlobalProtocolOptionsRepositoryInstanceEnumerationElement();  	
  };
  

  class Linux_SambaGlobalProtocolOptionsRepositoryInstanceEnumeration {
  	private:
  	  Linux_SambaGlobalProtocolOptionsRepositoryInstanceEnumerationElement* firstElementP;
  	  Linux_SambaGlobalProtocolOptionsRepositoryInstanceEnumerationElement* currentElementP;
  	  Linux_SambaGlobalProtocolOptionsRepositoryInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaGlobalProtocolOptionsRepositoryInstanceEnumeration();
  	  
  	  Linux_SambaGlobalProtocolOptionsRepositoryInstanceEnumeration(
  	   const Linux_SambaGlobalProtocolOptionsRepositoryInstanceEnumeration& original);
  	  
  	  ~Linux_SambaGlobalProtocolOptionsRepositoryInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaGlobalProtocolOptionsRepositoryInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaGlobalProtocolOptionsRepositoryInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaGlobalProtocolOptionsRepositoryInstance& elementP);
  };
}
#endif

