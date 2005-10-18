/**
 *  Linux_SambaGlobalBrowseOptionsRepositoryInstance.h
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


#ifndef Linux_SambaGlobalBrowseOptionsRepositoryInstance_h
#define Linux_SambaGlobalBrowseOptionsRepositoryInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaGlobalBrowseOptionsInstanceName.h"

namespace genProvider {

  class Linux_SambaGlobalBrowseOptionsRepositoryInstance {
  public:
       Linux_SambaGlobalBrowseOptionsRepositoryInstance();
  	
       Linux_SambaGlobalBrowseOptionsRepositoryInstance
  	    (const Linux_SambaGlobalBrowseOptionsRepositoryInstance& original);
  	   
       Linux_SambaGlobalBrowseOptionsRepositoryInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaGlobalBrowseOptionsRepositoryInstance();
       
       Linux_SambaGlobalBrowseOptionsRepositoryInstance& operator=
  	    (const Linux_SambaGlobalBrowseOptionsRepositoryInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaGlobalBrowseOptionsInstanceName& val);        
       const Linux_SambaGlobalBrowseOptionsInstanceName&
        getInstanceName() const;
       
  private:
       void init();
       void init(const Linux_SambaGlobalBrowseOptionsRepositoryInstance& original);
       void reset();
       
       Linux_SambaGlobalBrowseOptionsInstanceName m_instanceName;
       
       struct isSetType{
       	 unsigned int instanceName:1;
       } isSet;
  };
  
  
  struct Linux_SambaGlobalBrowseOptionsRepositoryInstanceEnumerationElement{
  	Linux_SambaGlobalBrowseOptionsRepositoryInstance* m_elementP;
  	Linux_SambaGlobalBrowseOptionsRepositoryInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaGlobalBrowseOptionsRepositoryInstanceEnumerationElement();
  	~Linux_SambaGlobalBrowseOptionsRepositoryInstanceEnumerationElement();  	
  };
  

  class Linux_SambaGlobalBrowseOptionsRepositoryInstanceEnumeration {
  	private:
  	  Linux_SambaGlobalBrowseOptionsRepositoryInstanceEnumerationElement* firstElementP;
  	  Linux_SambaGlobalBrowseOptionsRepositoryInstanceEnumerationElement* currentElementP;
  	  Linux_SambaGlobalBrowseOptionsRepositoryInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaGlobalBrowseOptionsRepositoryInstanceEnumeration();
  	  
  	  Linux_SambaGlobalBrowseOptionsRepositoryInstanceEnumeration(
  	   const Linux_SambaGlobalBrowseOptionsRepositoryInstanceEnumeration& original);
  	  
  	  ~Linux_SambaGlobalBrowseOptionsRepositoryInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaGlobalBrowseOptionsRepositoryInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaGlobalBrowseOptionsRepositoryInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaGlobalBrowseOptionsRepositoryInstance& elementP);
  };
}
#endif

