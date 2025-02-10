//
// Created by yuanzhixiang on 2/10/25.
//

#ifndef RESOURCE_H
#define RESOURCE_H
#include <memory>
#include <optional>

namespace base {
    class Clock;
}

class BackgroundResponseProcessorFactory;
class BlobDataHandle;
class FetchParameters;
class ResourceFinishObserver;
class ResourceLoader;
class ResponseBodyLoaderDrainableInterface;
class SecurityOrigin;

namespace blink {
    // These values are persisted to logs. Entries should not be renumbered and
    // numeric values should never be reused.
    // When adding a new type, append it at the end, and also update the
    // `ResourceType` enum in `tools/metrics/histograms/enums.xml`.

    // ResourceType 是一个强类型枚举，用于区分不同资源类型。
    // 这里显式指定了底层类型 uint8_t，表示取值范围不超过 255。
    // “k” 是一种常见的命名约定，表明这是一个枚举常量（enum constant）。
    // 我们不再使用 kMainResource（曾用作 0），因此从 1 开始编号。

    // 为什么带 k 前缀：这是常见的命名风格，用来表明这是一个枚举值或常量（constant）。
    enum class ResourceType : uint8_t {
        // We do not have kMainResource anymore, which used to have zero value.

        // 表示图像资源，例如 PNG、JPG、GIF 等
        kImage = 1,

        // 表示 CSS 样式表资源，比如外链 .css 文件
        kCSSStyleSheet = 2,

        // 表示脚本资源，多用于 JavaScript
        kScript = 3,

        // 表示字体文件资源，如 WOFF、TTF
        kFont = 4,

        // 表示原始数据资源，可能是未指定类型或自定义的
        kRaw = 5,

        // 表示独立的 SVG 文档（而非内联 SVG）
        kSVGDocument = 6,

        // 表示 XSL 样式表资源（较少见）
        kXSLStyleSheet = 7,

        // 表示预获取链接 (prefetch) 资源提示
        kLinkPrefetch = 8,

        // 表示文本轨道资源，比如字幕、弹幕或字幕文件
        kTextTrack = 9,

        // 表示音频资源
        kAudio = 10,

        // 表示视频资源
        kVideo = 11,

        // 表示 Web Manifest 文件
        kManifest = 12,

        // 表示“Speculation Rules”，用于预加载/预取逻辑
        kSpeculationRules = 13,

        // 测试用的 Mock 资源类型
        kMock = 14, // Only for testing

        // 表示字典资源，可能用于拼写检查等
        kDictionary = 15,

        // 记录可用的最高枚举值，用于范围判断或迭代
        kMaxValue = kDictionary
      };
}




#endif //RESOURCE_H
