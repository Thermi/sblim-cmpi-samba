/**
 *  Linux_SambaReadListForShareRepositoryInstance.h
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


#ifndef Linux_SambaReadListForShareRepositoryInstance_h
#define Linux_SambaReadListForShareRepositoryInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaReadListForShareInstanceName.h"

namespace genProvider {

  class Linux_SambaReadListForShareRepositoryInstance {
  public:
       Linux_SambaReadListForShareRepositoryInstance();
  	
       Linux_SambaReadListForShareRepositoryInstance
  	    (const Linux_SambaReadListForShareRepositoryInstance& original);
  	   
       Linux_SambaReadListForShareRepositoryInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaReadListForShareRepositoryInstance();
       
       Linux_SambaReadListForShareRepositoryInstance& operator=
  	    (const Linux_SambaReadListForShareRepositoryInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaReadListForShareInstanceName& val);        
       const Linux_SambaReadListForShareInstanceName&
        getInstanceName() const;
       
  private:
       void init();
       void init(const Linux_SambaReadListForShareRepositoryInstance& original);
       void reset();
       
       Linux_SambaReadListForShareInstanceName m_instanceName;
       
       struct isSetType{
       	 unsigned int instanceName:1;
       } isSet;
  };
  
  
  struct Linux_SambaReadListForShareRepositoryInstanceEnumerationElement{
  	Linux_SambaReadListForShareRepositoryInstance* m_elementP;
  	Linux_SambaReadListForShareRepositoryInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaReadListForShareRepositoryInstanceEnumerationElement();
  	~Linux_SambaReadListForShareRepositoryInstanceEnumerationElement();  	
  };
  

  class Linux_SambaReadListForShareRepositoryInstanceEnumeration {
  	private:
  	  Linux_SambaReadListForShareRepositoryInstanceEnumerationElement* firstElementP;
  	  Linux_SambaReadListForShareRepositoryInstanceEnumerationElement* currentElementP;
  	  Linux_SambaReadListForShareRepositoryInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaReadListForShareRepositoryInstanceEnumeration();
  	  
  	  Linux_SambaReadListForShareRepositoryInstanceEnumeration(
  	   const Linux_SambaReadListForShareRepositoryInstanceEnumeration& original);
  	  
  	  ~Linux_SambaReadListForShareRepositoryInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaReadListForShareRepositoryInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaReadListForShareRepositoryInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaReadListForShareRepositoryInstance& elementP);
  };
}
#endif

