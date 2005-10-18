/**
 *  Linux_SambaShareOptionsInstance.h
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


#ifndef Linux_SambaShareOptionsInstance_h
#define Linux_SambaShareOptionsInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaShareOptionsInstanceName.h"

namespace genProvider {

  class Linux_SambaShareOptionsInstance {
  public:
       Linux_SambaShareOptionsInstance();
  	
       Linux_SambaShareOptionsInstance
  	    (const Linux_SambaShareOptionsInstance& original);
  	   
       Linux_SambaShareOptionsInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaShareOptionsInstance();
       
       Linux_SambaShareOptionsInstance& operator=
  	    (const Linux_SambaShareOptionsInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaShareOptionsInstanceName& val);        
       const Linux_SambaShareOptionsInstanceName&
        getInstanceName() const;

       unsigned int isAvailableSet() const;
       void setAvailable(const CMPIBoolean val);
       const CMPIBoolean getAvailable() const;

       unsigned int isCaptionSet() const;
       void setCaption(const char* val, int makeCopy = 1);
       const char* getCaption() const;

       unsigned int isCommentSet() const;
       void setComment(const char* val, int makeCopy = 1);
       const char* getComment() const;

       unsigned int isDescriptionSet() const;
       void setDescription(const char* val, int makeCopy = 1);
       const char* getDescription() const;

       unsigned int isElementNameSet() const;
       void setElementName(const char* val, int makeCopy = 1);
       const char* getElementName() const;

       unsigned int isPathSet() const;
       void setPath(const char* val, int makeCopy = 1);
       const char* getPath() const;

       unsigned int isPrintableSet() const;
       void setPrintable(const CMPIBoolean val);
       const CMPIBoolean getPrintable() const;
       
  private:
       void init();
       void init(const Linux_SambaShareOptionsInstance& original);
       void reset();
       
       Linux_SambaShareOptionsInstanceName m_instanceName;
       CMPIBoolean m_Available;
       const char* m_Caption;
       const char* m_Comment;
       const char* m_Description;
       const char* m_ElementName;
       const char* m_Path;
       CMPIBoolean m_Printable;
       
       struct isSetType{
       	 unsigned int instanceName:1;
         unsigned int Available:1;
         unsigned int Caption:1;
         unsigned int Comment:1;
         unsigned int Description:1;
         unsigned int ElementName:1;
         unsigned int Path:1;
         unsigned int Printable:1;
       } isSet;
  };
  
  
  struct Linux_SambaShareOptionsInstanceEnumerationElement{
  	Linux_SambaShareOptionsInstance* m_elementP;
  	Linux_SambaShareOptionsInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaShareOptionsInstanceEnumerationElement();
  	~Linux_SambaShareOptionsInstanceEnumerationElement();  	
  };
  

  class Linux_SambaShareOptionsInstanceEnumeration {
  	private:
  	  Linux_SambaShareOptionsInstanceEnumerationElement* firstElementP;
  	  Linux_SambaShareOptionsInstanceEnumerationElement* currentElementP;
  	  Linux_SambaShareOptionsInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaShareOptionsInstanceEnumeration();
  	  
  	  Linux_SambaShareOptionsInstanceEnumeration(
  	   const Linux_SambaShareOptionsInstanceEnumeration& original);
  	  
  	  ~Linux_SambaShareOptionsInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaShareOptionsInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaShareOptionsInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaShareOptionsInstance& elementP);
  };
}
#endif

