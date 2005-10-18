/**
 *  Linux_SambaValidUsersForPrinterInstanceName.h
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


#ifndef Linux_SambaValidUsersForPrinterInstanceName_h
#define Linux_SambaValidUsersForPrinterInstanceName_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"
#include "ArrayConverter.h"
#include "CmpiErrorFormater.h"
#include "Linux_SambaUserInstanceName.h"
#include "Linux_SambaPrinterOptionsInstanceName.h"

namespace genProvider {

  class Linux_SambaValidUsersForPrinterInstanceName {
  public:
       Linux_SambaValidUsersForPrinterInstanceName();
  	
       Linux_SambaValidUsersForPrinterInstanceName
  	    (const Linux_SambaValidUsersForPrinterInstanceName& original);
  	   
       Linux_SambaValidUsersForPrinterInstanceName
        (const CmpiObjectPath& path);
  	 
       ~Linux_SambaValidUsersForPrinterInstanceName();
       
       Linux_SambaValidUsersForPrinterInstanceName& operator=
  	    (const Linux_SambaValidUsersForPrinterInstanceName& original);
       
       CmpiObjectPath getObjectPath() const;
       
       void fillKeys(CmpiInstance& cmpiInstance) const;
       
       unsigned int isNameSpaceSet() const;
       void setNamespace(const char * val, int makeCopy = 1);
       const char * getNamespace() const;

       unsigned int isPartComponentSet() const;
       void setPartComponent(const Linux_SambaUserInstanceName& val);
       const Linux_SambaUserInstanceName& getPartComponent() const;

       unsigned int isGroupComponentSet() const;
       void setGroupComponent(const Linux_SambaPrinterOptionsInstanceName& val);
       const Linux_SambaPrinterOptionsInstanceName& getGroupComponent() const;
       
  private:
       void init();
       void init(const Linux_SambaValidUsersForPrinterInstanceName& original);
       void reset();
       
       const char* m_CIMClassNameP;
       const char* m_namespace;
       Linux_SambaUserInstanceName m_PartComponent;
       Linux_SambaPrinterOptionsInstanceName m_GroupComponent;
       
       struct isSetType{
       	 unsigned int m_namespace:1;
         unsigned int PartComponent:1;
         unsigned int GroupComponent:1;
       } isSet;
  };
  
  
  struct Linux_SambaValidUsersForPrinterInstanceNameEnumerationElement{
  	Linux_SambaValidUsersForPrinterInstanceName* m_elementP;
  	Linux_SambaValidUsersForPrinterInstanceNameEnumerationElement* m_nextP;
  	
  	Linux_SambaValidUsersForPrinterInstanceNameEnumerationElement();
  	~Linux_SambaValidUsersForPrinterInstanceNameEnumerationElement();  	
  };
  

  class Linux_SambaValidUsersForPrinterInstanceNameEnumeration {
  	private:
  	  Linux_SambaValidUsersForPrinterInstanceNameEnumerationElement* firstElementP;
  	  Linux_SambaValidUsersForPrinterInstanceNameEnumerationElement* currentElementP;
  	  Linux_SambaValidUsersForPrinterInstanceNameEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaValidUsersForPrinterInstanceNameEnumeration();
  	  
  	  Linux_SambaValidUsersForPrinterInstanceNameEnumeration(const CmpiArray& arr);
  	  
  	  Linux_SambaValidUsersForPrinterInstanceNameEnumeration(
  	   const Linux_SambaValidUsersForPrinterInstanceNameEnumeration& original);
  	  
  	  ~Linux_SambaValidUsersForPrinterInstanceNameEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaValidUsersForPrinterInstanceName& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaValidUsersForPrinterInstanceName& getElement(int pos) const;  	  
  	  
  	  //no copy of the element is done
  	  void addElement(const Linux_SambaValidUsersForPrinterInstanceName& elementP);
  	  
  	  operator CmpiArray() const;
  };
}
#endif

