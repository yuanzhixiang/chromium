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
    enum class ResourceType : uint8_t {
        // We do not have kMainResource anymore, which used to have zero value.
        kImage = 1,
        kCSSStyleSheet = 2,
        kScript = 3,
        kFont = 4,
        kRaw = 5,
        kSVGDocument = 6,
        kXSLStyleSheet = 7,
        kLinkPrefetch = 8,
        kTextTrack = 9,
        kAudio = 10,
        kVideo = 11,
        kManifest = 12,
        kSpeculationRules = 13,
        kMock = 14, // Only for testing
        kDictionary = 15,
        kMaxValue = kDictionary
    };
}


#endif //RESOURCE_H
