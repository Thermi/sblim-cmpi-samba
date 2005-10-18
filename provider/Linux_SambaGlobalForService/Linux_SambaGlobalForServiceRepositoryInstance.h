/**
 *  Linux_SambaGlobalForServiceRepositoryInstance.h
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


#ifndef Linux_SambaGlobalForServiceRepositoryInstance_h
#define Linux_SambaGlobalForServiceRepositoryInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaGlobalForServiceInstanceName.h"

namespace genProvider {

  class Linux_SambaGlobalForServiceRepositoryInstance {
  public:
       Linux_SambaGlobalForServiceRepositoryInstance();
  	
       Linux_SambaGlobalForServiceRepositoryInstance
  	    (const Linux_SambaGlobalForServiceRepositoryInstance& original);
  	   
       Linux_SambaGlobalForServiceRepositoryInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaGlobalForServiceRepositoryInstance();
       
       Linux_SambaGlobalForServiceRepositoryInstance& operator=
  	    (const Linux_SambaGlobalForServiceRepositoryInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaGlobalForServiceInstanceName& val);        
       const Linux_SambaGlobalForServiceInstanceName&
        getInstanceName() const;
       
  private:
       void init();
       void init(const Linux_SambaGlobalForServiceRepositoryInstance& original);
       void reset();
       
       Linux_SambaGlobalForServiceInstanceName m_instanceName;
       
       struct isSetType{
       	 unsigned int instanceName:1;
       } isSet;
  };
  
  
  struct Linux_SambaGlobalForServiceRepositoryInstanceEnumerationElement{
  	Linux_SambaGlobalForServiceRepositoryInstance* m_elementP;
  	Linux_SambaGlobalForServiceRepositoryInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaGlobalForServiceRepositoryInstanceEnumerationElement();
  	~Linux_SambaGlobalForServiceRepositoryInstanceEnumerationElement();  	
  };
  

  class Linux_SambaGlobalForServiceRepositoryInstanceEnumeration {
  	private:
  	  Linux_SambaGlobalForServiceRepositoryInstanceEnumerationElement* firstElementP;
  	  Linux_SambaGlobalForServiceRepositoryInstanceEnumerationElement* currentElementP;
  	  Linux_SambaGlobalForServiceRepositoryInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaGlobalForServiceRepositoryInstanceEnumeration();
  	  
  	  Linux_SambaGlobalForServiceRepositoryInstanceEnumeration(
  	   const Linux_SambaGlobalForServiceRepositoryInstanceEnumeration& original);
  	  
  	  ~Linux_SambaGlobalForServiceRepositoryInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaGlobalForServiceRepositoryInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaGlobalForServiceRepositoryInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaGlobalForServiceRepositoryInstance& elementP);
  };
}
#endif

