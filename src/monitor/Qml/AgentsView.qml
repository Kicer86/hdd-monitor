import QtQuick.Layouts 1.15
import QtQuick 2.15
import QtQuick.Controls 2.15

Item {
    property alias label: label.title
    property alias model: agentsList.model

    clip: true

    GroupBox {
        id: label
        anchors.fill: parent
        spacing: 2

        ListView {
            id: agentsList
            anchors.fill: parent

            delegate: AgentDelegate {
                MouseArea{
                    anchors.fill: parent
                    onDoubleClicked:{
                        switchAgentsListViewAndAgentDetailsView()
                    }
                }
            }
        }

        Column {
            id: agentDetails

            anchors.fill: parent
            anchors.leftMargin: label.width

            clip: true
            spacing: 2

            Behavior on anchors.leftMargin { PropertyAnimation {} }

            Button {
                id: agentDetailsBackBtn
                text: "<<"
                onClicked: {
                    switchAgentsListViewAndAgentDetailsView()
                }
            }

            ComboBox {
                model: ["Disk1", "Disk2", "Disk3"]
            }
        }
    }

    function switchAgentsListViewAndAgentDetailsView() {
        if (agentDetails.anchors.leftMargin === 0)
            agentDetails.anchors.leftMargin = label.width;
        else
            agentDetails.anchors.leftMargin = 0;
    }

}


/*##^##
Designer {
    D{i:0;autoSize:true;formeditorZoom:0.5;height:480;width:640}D{i:7}
}
##^##*/
