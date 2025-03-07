/*
 * Copyright (c) 2021, Andreas Kling <andreas@ladybird.org>
 *
 * SPDX-License-Identifier: BSD-2-Clause
 */

#pragma once

#include <AK/Noncopyable.h>
#include <LibGC/Root.h>
#include <LibWeb/Forward.h>

namespace Web::DOM {

class DocumentLoadEventDelayer {
    AK_MAKE_NONMOVABLE(DocumentLoadEventDelayer);
    AK_MAKE_NONCOPYABLE(DocumentLoadEventDelayer);

public:
    explicit DocumentLoadEventDelayer(Document&);
    ~DocumentLoadEventDelayer();

private:
    GC::Root<Document> m_document;
};

}
