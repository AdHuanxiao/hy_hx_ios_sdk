//
//  HuanxiaoAds.h
//  HuanxiaoAds SDK
//
//  Copyright © 2026 Huanxiao Technology Co., Ltd. All rights reserved.


#import <Foundation/Foundation.h>

//! SDK 版本号 (数值)
FOUNDATION_EXPORT double HuanxiaoAdsVersionNumber;

//! SDK 版本号 (字符串)
FOUNDATION_EXPORT const unsigned char HuanxiaoAdsVersionString[];

#pragma mark - 核心模块

/// SDK 常量定义（错误码、状态码、日志级别）
#import <HYHXHuanxiaoAds/HXAdsDefines.h>

/// 隐私配置类
#import <HYHXHuanxiaoAds/HXPrivacyConfig.h>

/// SDK 配置类
#import <HYHXHuanxiaoAds/HXAdsConfig.h>

/// SDK 主类
#import <HYHXHuanxiaoAds/HXAdsSDK.h>

#pragma mark - 广告模块

// 竞价结果通知协议
#import <HYHXHuanxiaoAds/HXBidNotifiable.h>

// 开屏广告
#import <HYHXHuanxiaoAds/HXSplashAdDelegate.h>
#import <HYHXHuanxiaoAds/HXSplashAd.h>
#import <HYHXHuanxiaoAds/HXSplashAd+Internal.h>

// 插屏广告
#import <HYHXHuanxiaoAds/HXInterstitialAdDelegate.h>
#import <HYHXHuanxiaoAds/HXInterstitialAd.h>
#import <HYHXHuanxiaoAds/HXInterstitialAd+Internal.h>

// 信息流广告
#import <HYHXHuanxiaoAds/HXNativeAdDelegate.h>
#import <HYHXHuanxiaoAds/HXNativeAd.h>
#import <HYHXHuanxiaoAds/HXNativeAd+Internal.h>
#import <HYHXHuanxiaoAds/HXNativeAdRenderData.h>
#import <HYHXHuanxiaoAds/HXInteractionContainerView.h>
#import <HYHXHuanxiaoAds/HXMediaView.h>
// 激励视频广告
#import <HYHXHuanxiaoAds/HXRewardVideoAdDelegate.h>
#import <HYHXHuanxiaoAds/HXRewardVideoAd.h>
#import <HYHXHuanxiaoAds/HXRewardVideoAd+Internal.h>
#import <HYHXHuanxiaoAds/HXResourceLoader.h>

