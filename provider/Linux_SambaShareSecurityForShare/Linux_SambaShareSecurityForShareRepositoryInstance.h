/**
 *  Linux_SambaShareSecurityForShareRepositoryInstance.h
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


#ifndef Linux_SambaShareSecurityForShareRepositoryInstance_h
#define Linux_SambaShareSecurityForShareRepositoryInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaShareSecurityForShareInstanceName.h"

namespace genProvider {

  class Linux_SambaShareSecurityForShareRepositoryInstance {
  public:
       Linux_SambaShareSecurityForShareRepositoryInstance();
  	
       Linux_SambaShareSecurityForShareRepositoryInstance
  	    (const Linux_SambaShareSecurityForShareRepositoryInstance& original);
  	   
       Linux_SambaShareSecurityForShareRepositoryInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaShareSecurityForShareRepositoryInstance();
       
       Linux_SambaShareSecurityForShareRepositoryInstance& operator=
  	    (const Linux_SambaShareSecurityForShareRepositoryInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaShareSecurityForShareInstanceName& val);        
       const Linux_SambaShareSecurityForShareInstanceName&
        getInstanceName() const;
       
  private:
       void init();
       void init(const Linux_SambaShareSecurityForShareRepositoryInstance& original);
       void reset();
       
       Linux_SambaShareSecurityForShareInstanceName m_instanceName;
       
       struct isSetType{
       	 unsigned int instanceName:1;
       } isSet;
  };
  
  
  struct Linux_SambaShareSecurityForShareRepositoryInstanceEnumerationElement{
  	Linux_SambaShareSecurityForShareRepositoryInstance* m_elementP;
  	Linux_SambaShareSecurityForShareRepositoryInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaShareSecurityForShareRepositoryInstanceEnumerationElement();
  	~Linux_SambaShareSecurityForShareRepositoryInstanceEnumerationElement();  	
  };
  

  class Linux_SambaShareSecurityForShareRepositoryInstanceEnumeration {
  	private:
  	  Linux_SambaShareSecurityForShareRepositoryInstanceEnumerationElement* firstElementP;
  	  Linux_SambaShareSecurityForShareRepositoryInstanceEnumerationElement* currentElementP;
  	  Linux_SambaShareSecurityForShareRepositoryInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaShareSecurityForShareRepositoryInstanceEnumeration();
  	  
  	  Linux_SambaShareSecurityForShareRepositoryInstanceEnumeration(
  	   const Linux_SambaShareSecurityForShareRepositoryInstanceEnumeration& original);
  	  
  	  ~Linux_SambaShareSecurityForShareRepositoryInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaShareSecurityForShareRepositoryInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaShareSecurityForShareRepositoryInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaShareSecurityForShareRepositoryInstance& elementP);
  };
}
#endif

