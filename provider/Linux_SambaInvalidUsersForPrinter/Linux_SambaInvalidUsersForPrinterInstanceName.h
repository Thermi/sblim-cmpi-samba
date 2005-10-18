/**
 *  Linux_SambaInvalidUsersForPrinterInstanceName.h
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


#ifndef Linux_SambaInvalidUsersForPrinterInstanceName_h
#define Linux_SambaInvalidUsersForPrinterInstanceName_h

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

  class Linux_SambaInvalidUsersForPrinterInstanceName {
  public:
       Linux_SambaInvalidUsersForPrinterInstanceName();
  	
       Linux_SambaInvalidUsersForPrinterInstanceName
  	    (const Linux_SambaInvalidUsersForPrinterInstanceName& original);
  	   
       Linux_SambaInvalidUsersForPrinterInstanceName
        (const CmpiObjectPath& path);
  	 
       ~Linux_SambaInvalidUsersForPrinterInstanceName();
       
       Linux_SambaInvalidUsersForPrinterInstanceName& operator=
  	    (const Linux_SambaInvalidUsersForPrinterInstanceName& original);
       
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
       void init(const Linux_SambaInvalidUsersForPrinterInstanceName& original);
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
  
  
  struct Linux_SambaInvalidUsersForPrinterInstanceNameEnumerationElement{
  	Linux_SambaInvalidUsersForPrinterInstanceName* m_elementP;
  	Linux_SambaInvalidUsersForPrinterInstanceNameEnumerationElement* m_nextP;
  	
  	Linux_SambaInvalidUsersForPrinterInstanceNameEnumerationElement();
  	~Linux_SambaInvalidUsersForPrinterInstanceNameEnumerationElement();  	
  };
  

  class Linux_SambaInvalidUsersForPrinterInstanceNameEnumeration {
  	private:
  	  Linux_SambaInvalidUsersForPrinterInstanceNameEnumerationElement* firstElementP;
  	  Linux_SambaInvalidUsersForPrinterInstanceNameEnumerationElement* currentElementP;
  	  Linux_SambaInvalidUsersForPrinterInstanceNameEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaInvalidUsersForPrinterInstanceNameEnumeration();
  	  
  	  Linux_SambaInvalidUsersForPrinterInstanceNameEnumeration(const CmpiArray& arr);
  	  
  	  Linux_SambaInvalidUsersForPrinterInstanceNameEnumeration(
  	   const Linux_SambaInvalidUsersForPrinterInstanceNameEnumeration& original);
  	  
  	  ~Linux_SambaInvalidUsersForPrinterInstanceNameEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaInvalidUsersForPrinterInstanceName& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaInvalidUsersForPrinterInstanceName& getElement(int pos) const;  	  
  	  
  	  //no copy of the element is done
  	  void addElement(const Linux_SambaInvalidUsersForPrinterInstanceName& elementP);
  	  
  	  operator CmpiArray() const;
  };
}
#endif

