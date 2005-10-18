/**
 *  Linux_SambaServiceInstanceName.h
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


#ifndef Linux_SambaServiceInstanceName_h
#define Linux_SambaServiceInstanceName_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"
#include "ArrayConverter.h"
#include "CmpiErrorFormater.h"

namespace genProvider {

  class Linux_SambaServiceInstanceName {
  public:
       Linux_SambaServiceInstanceName();
  	
       Linux_SambaServiceInstanceName
  	    (const Linux_SambaServiceInstanceName& original);
  	   
       Linux_SambaServiceInstanceName
        (const CmpiObjectPath& path);
  	 
       ~Linux_SambaServiceInstanceName();
       
       Linux_SambaServiceInstanceName& operator=
  	    (const Linux_SambaServiceInstanceName& original);
       
       CmpiObjectPath getObjectPath() const;
       
       void fillKeys(CmpiInstance& cmpiInstance) const;
       
       unsigned int isNameSpaceSet() const;
       void setNamespace(const char * val, int makeCopy = 1);
       const char * getNamespace() const;

       unsigned int isCreationClassNameSet() const;
       void setCreationClassName(const char* val, int makeCopy = 1);
       const char* getCreationClassName() const;

       unsigned int isNameSet() const;
       void setName(const char* val, int makeCopy = 1);
       const char* getName() const;

       unsigned int isSystemCreationClassNameSet() const;
       void setSystemCreationClassName(const char* val, int makeCopy = 1);
       const char* getSystemCreationClassName() const;

       unsigned int isSystemNameSet() const;
       void setSystemName(const char* val, int makeCopy = 1);
       const char* getSystemName() const;
       
  private:
       void init();
       void init(const Linux_SambaServiceInstanceName& original);
       void reset();
       
       const char* m_CIMClassNameP;
       const char* m_namespace;
       const char* m_CreationClassName;
       const char* m_Name;
       const char* m_SystemCreationClassName;
       const char* m_SystemName;
       
       struct isSetType{
       	 unsigned int m_namespace:1;
         unsigned int CreationClassName:1;
         unsigned int Name:1;
         unsigned int SystemCreationClassName:1;
         unsigned int SystemName:1;
       } isSet;
  };
  
  
  struct Linux_SambaServiceInstanceNameEnumerationElement{
  	Linux_SambaServiceInstanceName* m_elementP;
  	Linux_SambaServiceInstanceNameEnumerationElement* m_nextP;
  	
  	Linux_SambaServiceInstanceNameEnumerationElement();
  	~Linux_SambaServiceInstanceNameEnumerationElement();  	
  };
  

  class Linux_SambaServiceInstanceNameEnumeration {
  	private:
  	  Linux_SambaServiceInstanceNameEnumerationElement* firstElementP;
  	  Linux_SambaServiceInstanceNameEnumerationElement* currentElementP;
  	  Linux_SambaServiceInstanceNameEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaServiceInstanceNameEnumeration();
  	  
  	  Linux_SambaServiceInstanceNameEnumeration(const CmpiArray& arr);
  	  
  	  Linux_SambaServiceInstanceNameEnumeration(
  	   const Linux_SambaServiceInstanceNameEnumeration& original);
  	  
  	  ~Linux_SambaServiceInstanceNameEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaServiceInstanceName& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaServiceInstanceName& getElement(int pos) const;  	  
  	  
  	  //no copy of the element is done
  	  void addElement(const Linux_SambaServiceInstanceName& elementP);
  	  
  	  operator CmpiArray() const;
  };
}
#endif

