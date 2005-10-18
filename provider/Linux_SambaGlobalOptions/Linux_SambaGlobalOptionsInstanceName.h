/**
 *  Linux_SambaGlobalOptionsInstanceName.h
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


#ifndef Linux_SambaGlobalOptionsInstanceName_h
#define Linux_SambaGlobalOptionsInstanceName_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"
#include "ArrayConverter.h"
#include "CmpiErrorFormater.h"

namespace genProvider {

  class Linux_SambaGlobalOptionsInstanceName {
  public:
       Linux_SambaGlobalOptionsInstanceName();
  	
       Linux_SambaGlobalOptionsInstanceName
  	    (const Linux_SambaGlobalOptionsInstanceName& original);
  	   
       Linux_SambaGlobalOptionsInstanceName
        (const CmpiObjectPath& path);
  	 
       ~Linux_SambaGlobalOptionsInstanceName();
       
       Linux_SambaGlobalOptionsInstanceName& operator=
  	    (const Linux_SambaGlobalOptionsInstanceName& original);
       
       CmpiObjectPath getObjectPath() const;
       
       void fillKeys(CmpiInstance& cmpiInstance) const;
       
       unsigned int isNameSpaceSet() const;
       void setNamespace(const char * val, int makeCopy = 1);
       const char * getNamespace() const;

       unsigned int isInstanceIDSet() const;
       void setInstanceID(const char* val, int makeCopy = 1);
       const char* getInstanceID() const;

       unsigned int isNameSet() const;
       void setName(const char* val, int makeCopy = 1);
       const char* getName() const;
       
  private:
       void init();
       void init(const Linux_SambaGlobalOptionsInstanceName& original);
       void reset();
       
       const char* m_CIMClassNameP;
       const char* m_namespace;
       const char* m_InstanceID;
       const char* m_Name;
       
       struct isSetType{
       	 unsigned int m_namespace:1;
         unsigned int InstanceID:1;
         unsigned int Name:1;
       } isSet;
  };
  
  
  struct Linux_SambaGlobalOptionsInstanceNameEnumerationElement{
  	Linux_SambaGlobalOptionsInstanceName* m_elementP;
  	Linux_SambaGlobalOptionsInstanceNameEnumerationElement* m_nextP;
  	
  	Linux_SambaGlobalOptionsInstanceNameEnumerationElement();
  	~Linux_SambaGlobalOptionsInstanceNameEnumerationElement();  	
  };
  

  class Linux_SambaGlobalOptionsInstanceNameEnumeration {
  	private:
  	  Linux_SambaGlobalOptionsInstanceNameEnumerationElement* firstElementP;
  	  Linux_SambaGlobalOptionsInstanceNameEnumerationElement* currentElementP;
  	  Linux_SambaGlobalOptionsInstanceNameEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaGlobalOptionsInstanceNameEnumeration();
  	  
  	  Linux_SambaGlobalOptionsInstanceNameEnumeration(const CmpiArray& arr);
  	  
  	  Linux_SambaGlobalOptionsInstanceNameEnumeration(
  	   const Linux_SambaGlobalOptionsInstanceNameEnumeration& original);
  	  
  	  ~Linux_SambaGlobalOptionsInstanceNameEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaGlobalOptionsInstanceName& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaGlobalOptionsInstanceName& getElement(int pos) const;  	  
  	  
  	  //no copy of the element is done
  	  void addElement(const Linux_SambaGlobalOptionsInstanceName& elementP);
  	  
  	  operator CmpiArray() const;
  };
}
#endif

