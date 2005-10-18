/**
 *  Linux_SambaGlobalBrowseOptionsInstanceName.h
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


#ifndef Linux_SambaGlobalBrowseOptionsInstanceName_h
#define Linux_SambaGlobalBrowseOptionsInstanceName_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"
#include "ArrayConverter.h"
#include "CmpiErrorFormater.h"

namespace genProvider {

  class Linux_SambaGlobalBrowseOptionsInstanceName {
  public:
       Linux_SambaGlobalBrowseOptionsInstanceName();
  	
       Linux_SambaGlobalBrowseOptionsInstanceName
  	    (const Linux_SambaGlobalBrowseOptionsInstanceName& original);
  	   
       Linux_SambaGlobalBrowseOptionsInstanceName
        (const CmpiObjectPath& path);
  	 
       ~Linux_SambaGlobalBrowseOptionsInstanceName();
       
       Linux_SambaGlobalBrowseOptionsInstanceName& operator=
  	    (const Linux_SambaGlobalBrowseOptionsInstanceName& original);
       
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
       void init(const Linux_SambaGlobalBrowseOptionsInstanceName& original);
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
  
  
  struct Linux_SambaGlobalBrowseOptionsInstanceNameEnumerationElement{
  	Linux_SambaGlobalBrowseOptionsInstanceName* m_elementP;
  	Linux_SambaGlobalBrowseOptionsInstanceNameEnumerationElement* m_nextP;
  	
  	Linux_SambaGlobalBrowseOptionsInstanceNameEnumerationElement();
  	~Linux_SambaGlobalBrowseOptionsInstanceNameEnumerationElement();  	
  };
  

  class Linux_SambaGlobalBrowseOptionsInstanceNameEnumeration {
  	private:
  	  Linux_SambaGlobalBrowseOptionsInstanceNameEnumerationElement* firstElementP;
  	  Linux_SambaGlobalBrowseOptionsInstanceNameEnumerationElement* currentElementP;
  	  Linux_SambaGlobalBrowseOptionsInstanceNameEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaGlobalBrowseOptionsInstanceNameEnumeration();
  	  
  	  Linux_SambaGlobalBrowseOptionsInstanceNameEnumeration(const CmpiArray& arr);
  	  
  	  Linux_SambaGlobalBrowseOptionsInstanceNameEnumeration(
  	   const Linux_SambaGlobalBrowseOptionsInstanceNameEnumeration& original);
  	  
  	  ~Linux_SambaGlobalBrowseOptionsInstanceNameEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaGlobalBrowseOptionsInstanceName& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaGlobalBrowseOptionsInstanceName& getElement(int pos) const;  	  
  	  
  	  //no copy of the element is done
  	  void addElement(const Linux_SambaGlobalBrowseOptionsInstanceName& elementP);
  	  
  	  operator CmpiArray() const;
  };
}
#endif

