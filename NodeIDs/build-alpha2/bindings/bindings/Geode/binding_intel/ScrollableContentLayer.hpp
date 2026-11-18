#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCLayer.hpp>
#include <Geode/mapping/CCTouchClipper.hpp>
#include <Geode/mapping/CCPoint.hpp>
#include <Geode/mapping/ccTypes.hpp>
#include <Geode/mapping/map.hpp>
#include <Geode/mapping/vector.hpp>

class ScrollableContentLayer : public cocos2d::CCLayer, public cocos2d::CCTouchClipper {
public:
    static constexpr auto CLASS_NAME = "ScrollableContentLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(ScrollableContentLayer, cocos2d::CCLayer)

    /**
     * @note[short] Windows: 0x809e0
     * @note[short] Android: Rebinded
     */
     ScrollableContentLayer();

    /**
     * @note[short] MacOS (ARM): 0x84a7ac
     * @note[short] MacOS (Intel): 0x96dd60
     * @note[short] Windows: 0x80bf0
     * @note[short] iOS: 0x5267c8
     * @note[short] Android: Rebinded
     */
    virtual  ~ScrollableContentLayer();

    /**
     * @note[short] MacOS (ARM): 0x847c4c
     * @note[short] MacOS (Intel): 0x96afb0
     * @note[short] Windows: 0x80ef0
     * @note[short] Android
     */
    static ScrollableContentLayer* create(cocos2d::CCSize size);

    /**
     * @note[short] MacOS (ARM): 0x84978c
     * @note[short] MacOS (Intel): 0x96cc90
     * @note[short] Windows: 0x82040
     * @note[short] iOS: 0x525c74
     * @note[short] Android
     */
    virtual void update(float dt);

    /**
     * @note[short] MacOS (ARM): 0x8493f4
     * @note[short] MacOS (Intel): 0x96c8a0
     * @note[short] Windows: 0x81e30
     * @note[short] iOS: 0x525a64
     * @note[short] Android
     */
    virtual void visit();

    /**
     * @note[short] MacOS (ARM): 0x8494ac
     * @note[short] MacOS (Intel): 0x96c970
     * @note[short] Windows: 0x81ea0
     * @note[short] iOS: 0x525aa4
     * @note[short] Android
     */
    virtual bool touchInsideClip(cocos2d::CCPoint const& point);

    /**
     * @note[short] MacOS (ARM): 0x84961c
     * @note[short] MacOS (Intel): 0x96cb10
     * @note[short] Windows: 0x81ed0
     * @note[short] iOS: 0x525b18
     * @note[short] Android
     */
    virtual bool scrollWheel(float y, float x);

    /**
     * @note[short] MacOS (ARM): 0x847da0
     * @note[short] MacOS (Intel): 0x96b0e0
     * @note[short] Windows: 0x81140
     * @note[short] Android
     */
    void applyContentPosition();

    /**
     * @note[short] Windows: 0x810d0
     * @note[short] Android
     */
    void clampOffset();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    bool consumePendingCancel();

    /**
     * @note[short] Android
     */
    void contentWiped();

    /**
     * @note[short] Windows: 0x825c0
     * @note[short] Android
     */
    cocos2d::CCMenu* createOwnedMenu();

    /**
     * @note[short] MacOS (ARM): 0x8499b4
     * @note[short] MacOS (Intel): 0x96cf10
     * @note[short] Windows: 0x82300
     * @note[short] Android
     */
    void ensureOwnedContentNode();

    /**
     * @note[short] MacOS (ARM): 0x848098
     * @note[short] MacOS (Intel): 0x96b3f0
     * @note[short] Windows: 0x81310
     * @note[short] Android
     */
    void ensureScrollThumb();

    /**
     * @note[short] Windows: 0x815a0
     * @note[short] Android
     */
    bool feedTouchBegan(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] Windows: 0x81720
     * @note[short] Android
     */
    void feedTouchCancelled(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] Windows: 0x816a0
     * @note[short] Android
     */
    void feedTouchEnded(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] Windows: 0x81610
     * @note[short] Android
     */
    void feedTouchMoved(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] Windows: 0x823c0
     * @note[short] Android
     */
    cocos2d::CCNode* getOrCreateSection(int section);

    /**
     * @note[short] Android
     */
    cocos2d::CCMenu* getOrCreateSectionMenu(int section);

    /**
     * @note[short] MacOS (ARM): 0x8489fc
     * @note[short] MacOS (Intel): 0x96bdb0
     * @note[short] Windows: 0x817b0
     * @note[short] Android
     */
    bool handleTouchBegan(cocos2d::CCTouch* touch);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void handleTouchCancelled(cocos2d::CCTouch* touch);

    /**
     * @note[short] Windows: 0x81c60
     * @note[short] Android
     */
    void handleTouchEnded(cocos2d::CCTouch* touch);

    /**
     * @note[short] Windows: 0x819a0
     * @note[short] Android
     */
    void handleTouchMoved(cocos2d::CCTouch* touch);

    /**
     * @note[short] Android
     */
    bool init(cocos2d::CCSize p0);

    /**
     * @note[short] Windows: 0x82890
     * @note[short] Android
     */
    bool itemTouchBegan(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] Android
     */
    TodoReturn itemTouchCancelled(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] Android
     */
    TodoReturn itemTouchEnded(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] Android
     */
    TodoReturn itemTouchMoved(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] Android
     */
    cocos2d::CCNode* mountedVirtualRow(int row);

    /**
     * @note[short] Windows: 0x82f20
     * @note[short] Android
     */
    void mountRowSlot(int row);

    /**
     * @note[short] Android
     */
    void persistScrollOffset(std::string const& key);

    /**
     * @note[short] MacOS (ARM): 0x84a1b8
     * @note[short] MacOS (Intel): 0x96d760
     * @note[short] Windows: 0x82a60
     * @note[short] Android
     */
    void reloadVirtualRows(float offset);

    /**
     * @note[short] Android
     */
    void remountVirtualRow(int row);

    /**
     * @note[short] Windows: 0x81000
     * @note[short] Android
     */
    bool restoreScrollOffset(std::string const& key);

    /**
     * @note[short] MacOS (ARM): 0x8482e8
     * @note[short] MacOS (Intel): 0x96b620
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x524bc8
     * @note[short] Android
     */
    void scrollTo(float offset);

    /**
     * @note[short] Windows: 0x82650
     * @note[short] Android
     */
    void sectionAddChild(cocos2d::CCNode* child, int zOrder, int tag);

    /**
     * @note[short] Android
     */
    void sectionClear();

    /**
     * @note[short] Android
     */
    int sectionIndexForY(float y) const ;

    /**
     * @note[short] MacOS (ARM): 0x847efc
     * @note[short] MacOS (Intel): 0x96b270
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void setContentHeight(float height);

    /**
     * @note[short] Android
     */
    void setForwardedTouchesOnly(bool p0);

    /**
     * @note[short] Android
     */
    void setHorizontal(bool p0);

    /**
     * @note[short] Windows: 0x82290
     * @note[short] Android
     */
    void setSectionHeight(float p0);

    /**
     * @note[short] Android
     */
    void setThumbColor(cocos2d::ccColor3B p0);

    /**
     * @note[short] Android
     */
    void setThumbOffset(cocos2d::CCPoint p0);

    /**
     * @note[short] Android
     */
    void setThumbOpacity(unsigned char p0);

    /**
     * @note[short] MacOS (ARM): 0x848180
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void setViewSize(cocos2d::CCSize size);

    /**
     * @note[short] Android
     */
    void setVirtualRows(VirtualRowSource* source, float buffer, float topPadding, float bottomPadding);

    /**
     * @note[short] Windows: 0x831b0
     * @note[short] Android
     */
    void unmountAllRows();

    /**
     * @note[short] Windows: 0x83100
     * @note[short] Android
     */
    void unmountRowSlot(int row);

    /**
     * @note[short] Windows: 0x81420
     * @note[short] Android
     */
    void updateScrollThumb();

    /**
     * @note[short] Android
     */
    void updateSectionVisibility();

    /**
     * @note[short] MacOS (ARM): 0x84873c
     * @note[short] MacOS (Intel): 0x96bad0
     * @note[short] Windows: 0x82bf0
     * @note[short] Android
     */
    void updateVirtualRows();

    /**
     * @note[short] Windows: 0x81d60
     * @note[short] Android
     */
    cocos2d::CCRect worldClipRect();
    cocos2d::CCNode* m_content;
    cocos2d::CCSize m_viewSize;
    float m_contentHeight;
    float m_offset;
    int m_touchID;
    cocos2d::CCPoint m_touchStart;
    cocos2d::CCPoint m_touchLast;
    double m_lastMoveTime;
    float m_velocity;
    float m_wheelVelocity;
    bool m_isDragging;
    bool m_pendingCancel;
    cocos2d::CCLayerColor* m_thumb;
    cocos2d::ccColor4B m_thumbColor;
    cocos2d::CCPoint m_thumbOffset;
    bool m_draggingThumb;
    float m_thumbDragStartY;
    float m_thumbDragStartOffset;
    float m_sectionHeight;
    bool m_forwardedTouchesOnly;
    std::map<int, cocos2d::CCNode*> m_sections;
    std::map<int, cocos2d::CCMenu*> m_sectionMenus;
    cocos2d::CCMenu* m_touchedVirtualRow;
    bool m_horizontal;
    VirtualRowSource* m_rowSource;
    float m_rowBuffer;
    float m_rowTopPadding;
    float m_rowBottomPadding;
    std::vector<float> m_rowEdges;
    std::map<int, std::pair<cocos2d::CCNode*, cocos2d::CCMenu*>> m_mountedRows;
    int m_firstMountedRow;
    int m_lastMountedRow;
    bool m_updatingRows;
};
