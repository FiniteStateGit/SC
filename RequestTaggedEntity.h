/*
* All or portions of this file Copyright (c) Amazon.com, Inc. or its affiliates or
* its licensors.
*
* For complete copyright and license terms please see the LICENSE at the root of this
* distribution (the "License"). All use of this software is governed by the License,
* or, if provided, by the license below or the license accompanying this file. Do not
* remove or modify any license notices. This file is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
*
*/

#pragma once
#include <ScriptCanvas/CodeGen/CodeGen.h>
#include <ScriptCanvas/Core/Node.h>
#include <LmbrCentral/Scripting/TagComponentBus.h>
#include <Source/RequestTaggedEntity.generated.h>

namespace ScriptCanvas
{
    namespace Nodes
    {
        namespace Wiki
        {
            class RequestTaggedEntity : public Node, public LmbrCentral::TagGlobalRequestBus
            {
            public:
                ScriptCanvas_Node(RequestTaggedEntity,
                    ScriptCanvas_Node::Name("Request Tagged Entity", "Request a single entity with the specified tag")
                    ScriptCanvas_Node::Uuid("{36a5d838-d8b1-49c2-939c-5a3c5fb26f70}")
                    ScriptCanvas_Node::Icon("Editor/Icons/ScriptCanvas/Log.png")
                    ScriptCanvas_Node::Category("Utilities")
                    ScriptCanvas_Node::Version(0)
                );
                void OnInputSignal(const SlotId& slotId) override;
                ScriptCanvas_In(ScriptCanvas_In::Name("In", "Input signal"));
                ScriptCanvas_Out(ScriptCanvas_Out::Name("Out", ""));
				virtual void  RequestEntWTag(AZ::Crc32);
            };
        }
    }
}
