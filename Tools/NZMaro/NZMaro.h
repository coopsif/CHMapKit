//
//  NZMaro.h
//  NengZhe
//
//  Created by Cher on 16/3/30.
//  Copyright © 2016年 LiuKun. All rights reserved.
//

#ifndef NZMaro_h
#define NZMaro_h

#import "AppDelegate.h"

////////////////////////////////////////////////////////账号信息////////////////////////////////////////////////////////////////
//友盟的appkey



//容联网络通话


///////////////////////////////////////////////////////账号信息/////////////////////////////////////////////////////////////////
//屏幕宽度
#define  CH_W [[UIScreen mainScreen] bounds].size.width
//屏幕高度
#define  CH_H [[UIScreen mainScreen] bounds].size.height

#define CH_Random_Rgb [UIColor colorWithRed:arc4random()%11*0.1 green:arc4random()%11*0.1 blue:arc4random()%11*0.1 alpha:1]
#define CH_Com_Rgb(s) [UIColor colorWithRed:s/255.0 green:s/255.0 blue:s/255.0 alpha:1]

#define CH_Rgb(r,g,b) [UIColor colorWithRed:r/255.0 green:g/255.0 blue:b/255.0 alpha:1]

#define CH_Red [UIColor colorWithRed:215/255.0 green:22/255.0 blue:32/255.0 alpha:1]
#define CH_Blue [UIColor colorWithRed:59/255.0 green:153/255.0 blue:228/255.0 alpha:1]
#define ButtonBgColor [UIColor colorWithRed:229/255.0 green:229/255.0 blue:229/255.0 alpha:1]

#define CH_Frame(x,y,w,h) CGRectMake(x, y, w, h)

#define RespondsToSelector(_c, _m) ([_c respondsToSelector:_m])
#define ISEMPTY(_v) (_v == nil || _v.length == 0)
//获取app版本号
#define APP_VERSION [[[NSBundle mainBundle] infoDictionary] objectForKey:@"CFBundleShortVersionString"]

#define  FIVE_FIT(s) ((s*NZ_W)/320.0)
#define  SIX_FIT(s) ((s*NZ_W)/375.0)

#define  codeTime 60  //验证码时间

//DUG输出
#ifdef DEBUG
# define DLog(format, ...) NSLog((@"[文件名:%s]" "[函数名:%s]" "[行号:%d]" format), __FILE__, __FUNCTION__, __LINE__, ##__VA_ARGS__);
#else
# define DLog(...);
#endif
//////////////////////////////////////////////////////////////////////////////////////////
//获取app版本号
#define APP_VERSION [[[NSBundle mainBundle] infoDictionary] objectForKey:@"CFBundleShortVersionString"]

#define WS(weakSelf)  __weak __typeof(&*self)weakSelf = self


/////////////////////////////////////////////读取本地图片/////////////////////////////////////////////
#define LOADIMAGE(file,ext) [UIImage imageWithContentsOfFile:[[NSBundle mainBundle] pathForResource:file ofType:ext]]
//定义UIImage对象
#define Image(A) [UIImage imageWithContentsOfFile:[[NSBundle mainBundle] pathForResource:A ofType:nil]]


//////////////////////////////////////系统默认//////////////////////////////////////////////



//////////////////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////通知名//////////////////////////////////////////////



//////////////////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////重要宏//////////////////////////////////////////////


#define NZ_AppDelegate (AppDelegate *)[UIApplication sharedApplication].delegate //应用代理



//////////////////////////////////////通知名//////////////////////////////////////////////



#endif /* NZMaro_h */
