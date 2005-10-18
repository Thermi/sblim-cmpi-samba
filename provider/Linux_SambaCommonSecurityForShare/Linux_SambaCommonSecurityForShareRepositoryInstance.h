/**
 *  Linux_SambaCommonSecurityForShareRepositoryInstance.h
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


#ifndef Linux_SambaCommonSecurityForShareRepositoryInstance_h
#define Linux_SambaCommonSecurityForShareRepositoryInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaCommonSecurityForShareInstanceName.h"

namespace genProvider {

  class Linux_SambaCommonSecurityForShareRepositoryInstance {
  public:
       Linux_SambaCommonSecurityForShareRepositoryInstance();
  	
       Linux_SambaCommonSecurityForShareRepositoryInstance
  	    (const Linux_SambaCommonSecurityForShareRepositoryInstance& original);
  	   
       Linux_SambaCommonSecurityForShareRepositoryInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaCommonSecurityForShareRepositoryInstance();
       
       Linux_SambaCommonSecurityForShareRepositoryInstance& operator=
  	    (const Linux_SambaCommonSecurityForShareRepositoryInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaCommonSecurityForShareInstanceName& val);        
       const Linux_SambaCommonSecurityForShareInstanceName&
        getInstanceName() const;
       
  private:
       void init();
       void init(const Linux_SambaCommonSecurityForShareRepositoryInstance& original);
       void reset();
       
       Linux_SambaCommonSecurityForShareInstanceName m_instanceName;
       
       struct isSetType{
       	 unsigned int instanceName:1;
       } isSet;
  };
  
  
  struct Linux_SambaCommonSecurityForShareRepositoryInstanceEnumerationElement{
  	Linux_SambaCommonSecurityForShareRepositoryInstance* m_elementP;
  	Linux_SambaCommonSecurityForShareRepositoryInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaCommonSecurityForShareRepositoryInstanceEnumerationElement();
  	~Linux_SambaCommonSecurityForShareRepositoryInstanceEnumerationElement();  	
  };
  

  class Linux_SambaCommonSecurityForShareRepositoryInstanceEnumeration {
  	private:
  	  Linux_SambaCommonSecurityForShareRepositoryInstanceEnumerationElement* firstElementP;
  	  Linux_SambaCommonSecurityForShareRepositoryInstanceEnumerationElement* currentElementP;
  	  Linux_SambaCommonSecurityForShareRepositoryInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaCommonSecurityForShareRepositoryInstanceEnumeration();
  	  
  	  Linux_SambaCommonSecurityForShareRepositoryInstanceEnumeration(
  	   const Linux_SambaCommonSecurityForShareRepositoryInstanceEnumeration& original);
  	  
  	  ~Linux_SambaCommonSecurityForShareRepositoryInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaCommonSecurityForShareRepositoryInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaCommonSecurityForShareRepositoryInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaCommonSecurityForShareRepositoryInstance& elementP);
  };
}
#endif

