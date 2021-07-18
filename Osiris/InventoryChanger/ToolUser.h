#pragma once

#include <cstdint>

class CSPlayerInventory;

namespace ToolUser
{
    enum class Action {
        Use,
        WearSticker,
        RemoveNameTag
    };

    void setTool(std::uint64_t itemID) noexcept;
    void setItemToApplyTool(std::uint64_t itemID) noexcept;
    void setItemToWearSticker(std::uint64_t itemID) noexcept;
    void setItemToRemoveNameTag(std::uint64_t itemID) noexcept;
    void setNameTag(const char* nameTag) noexcept;
    void setStickerSlot(int slot) noexcept;
    void setStatTrakSwapItem1(std::uint64_t itemID) noexcept;
    void setStatTrakSwapItem2(std::uint64_t itemID) noexcept;
    void preAddItems(CSPlayerInventory& localInventory) noexcept;
}
