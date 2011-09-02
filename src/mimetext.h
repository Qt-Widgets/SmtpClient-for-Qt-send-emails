/*
  Copyright (c) 2011 - Tőkés Attila

  This file is part of SmtpClient for Qt.

  SmtpClient for Qt is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 2 of the License, or
  (at your option) any later version.

  SmtpClient for Qt is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY.

  See the LICENCE file for more details.
*/

#ifndef MIMETEXT_H
#define MIMETEXT_H

#include "mimepart.h"

class MimeText : public MimePart
{
public:

    /* [1] Constructors and Destructors */

    MimeText();
    ~MimeText();

    /* [1] --- */


    /* [2] Getters and Setters*/

    void setText(const QString & text);
    void setEncoding(Encoding enc);
    void setCharset(const QString & charset);

    const QString & getText() const;
    MimePart::Encoding getEncoding() const;
    const QString & getCharset() const;

    /* [2] --- */

protected:

    /* [3] Protected members */

    QString text;
    QString charset;
    Encoding encoding;

    /* [3] --- */


    /* [4] Protected methods */

    void prepare();

    /* [4] --- */

};

#endif // MIMETEXT_H