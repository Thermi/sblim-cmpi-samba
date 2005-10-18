/**
 *  Linux_SambaForceUserForShareRepositoryInstance.h
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


#ifndef Linux_SambaForceUserForShareRepositoryInstance_h
#define Linux_SambaForceUserForShareRepositoryInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaForceUserForShareInstanceName.h"

namespace genProvider {

  class Linux_SambaForceUserForShareRepositoryInstance {
  public:
       Linux_SambaForceUserForShareRepositoryInstance();
  	
       Linux_SambaForceUserForShareRepositoryInstance
  	    (const Linux_SambaForceUserForShareRepositoryInstance& original);
  	   
       Linux_SambaForceUserForShareRepositoryInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaForceUserForShareRepositoryInstance();
       
       Linux_SambaForceUserForShareRepositoryInstance& operator=
  	    (const Linux_SambaForceUserForShareRepositoryInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaForceUserForShareInstanceName& val);        
       const Linux_SambaForceUserForShareInstanceName&
        getInstanceName() const;
       
  private:
       void init();
       void init(const Linux_SambaForceUserForShareRepositoryInstance& original);
       void reset();
       
       Linux_SambaForceUserForShareInstanceName m_instanceName;
       
       struct isSetType{
       	 unsigned int instanceName:1;
       } isSet;
  };
  
  
  struct Linux_SambaForceUserForShareRepositoryInstanceEnumerationElement{
  	Linux_SambaForceUserForShareRepositoryInstance* m_elementP;
  	Linux_SambaForceUserForShareRepositoryInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaForceUserForShareRepositoryInstanceEnumerationElement();
  	~Linux_SambaForceUserForShareRepositoryInstanceEnumerationElement();  	
  };
  

  class Linux_SambaForceUserForShareRepositoryInstanceEnumeration {
  	private:
  	  Linux_SambaForceUserForShareRepositoryInstanceEnumerationElement* firstElementP;
  	  Linux_SambaForceUserForShareRepositoryInstanceEnumerationElement* currentElementP;
  	  Linux_SambaForceUserForShareRepositoryInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaForceUserForShareRepositoryInstanceEnumeration();
  	  
  	  Linux_SambaForceUserForShareRepositoryInstanceEnumeration(
  	   const Linux_SambaForceUserForShareRepositoryInstanceEnumeration& original);
  	  
  	  ~Linux_SambaForceUserForShareRepositoryInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaForceUserForShareRepositoryInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaForceUserForShareRepositoryInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaForceUserForShareRepositoryInstance& elementP);
  };
}
#endif

