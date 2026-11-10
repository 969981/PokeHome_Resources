/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0059EA8C
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0069ea8c; name: FUN_.text__0069ea8c
 */


long * FUN__text__0069ea8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4, // [自动静态注释] 调用尚未恢复正式名称的函数
                          undefined8 param_5,undefined8 param_6,undefined8 param_7) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  long *plVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_68; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_60; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_58; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_50; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_48; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  plVar1 = (long *)0x0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (param_4 < 0x316e6170) { // [自动静态注释] 条件判断/分支
    if (param_4 < 0x31646e77) { // [自动静态注释] 条件判断/分支
      if (param_4 == 0x31636970) { // [自动静态注释] 条件判断/分支
        plVar1 = (long *)FUN__text__006a0ee8(0x100,0x10); // [自动静态注释] 调用尚未恢复正式名称的函数
        if (plVar1 != (long *)0x0) { // [自动静态注释] 条件判断/分支
          FUN__text__006b9400(plVar1,param_2,param_3,param_5,param_6,param_7); // [自动静态注释] 调用尚未恢复正式名称的函数
        } // [自动静态注释] 作用域/控制流边界
      } // [自动静态注释] 作用域/控制流边界
      else if ((param_4 == 0x31646e62) && // [自动静态注释] 条件判断/分支
              (plVar1 = (long *)FUN__text__006a0ee8(0xe0,0x10), plVar1 != (long *)0x0)) { // [自动静态注释] 调用尚未恢复正式名称的函数
        FUN__text__0069fc94(plVar1,param_5,param_6,param_7); // [自动静态注释] 调用尚未恢复正式名称的函数
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
    else if (param_4 == 0x31646e77) { // [自动静态注释] 条件判断/分支
      plVar1 = (long *)FUN__text__006a0ee8(0x130,0x10); // [自动静态注释] 调用尚未恢复正式名称的函数
      if (plVar1 != (long *)0x0) { // [自动静态注释] 条件判断/分支
        FUN__text__006c2fc0(plVar1,param_2,param_3,param_5,param_6,param_7); // [自动静态注释] 调用尚未恢复正式名称的函数
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
    else if ((param_4 == 0x31696c61) && // [自动静态注释] 条件判断/分支
            (plVar1 = (long *)FUN__text__006a0ee8(0xe0,0x10), plVar1 != (long *)0x0)) { // [自动静态注释] 调用尚未恢复正式名称的函数
      FUN__text__006c6dec(plVar1,param_5,param_7); // [自动静态注释] 调用尚未恢复正式名称的函数
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  else if (param_4 < 0x31747063) { // [自动静态注释] 条件判断/分支
    if (param_4 == 0x316e6170) { // [自动静态注释] 条件判断/分支
      plVar1 = (long *)FUN__text__006a0ee8(0xe0,0x10); // [自动静态注释] 调用尚未恢复正式名称的函数
      if (plVar1 != (long *)0x0) { // [自动静态注释] 条件判断/分支
        FUN__text__006b2060(plVar1,param_2,param_3,param_5,param_7); // [自动静态注释] 调用尚未恢复正式名称的函数
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
    else if ((param_4 == 0x31726373) && // [自动静态注释] 条件判断/分支
            (plVar1 = (long *)FUN__text__006a0ee8(0xe0,0x10), plVar1 != (long *)0x0)) { // [自动静态注释] 调用尚未恢复正式名称的函数
      FUN__text__006c9a38(plVar1,param_5,param_7); // [自动静态注释] 调用尚未恢复正式名称的函数
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  else if (param_4 == 0x31747063) { // [自动静态注释] 条件判断/分支
    plVar1 = (long *)FUN__text__006a0ee8(0xe0,0x10); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (plVar1 != (long *)0x0) { // [自动静态注释] 条件判断/分支
      FUN__text__0069fe38(plVar1,param_5,param_6,param_7); // [自动静态注释] 调用尚未恢复正式名称的函数
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  else if (param_4 == 0x31747270) { // [自动静态注释] 条件判断/分支
    plVar1 = (long *)FUN__text__006a0ee8(0xf0,0x10); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (plVar1 != (long *)0x0) { // [自动静态注释] 条件判断/分支
      FUN__text__006b9184(plVar1,param_5,param_6,param_7); // [自动静态注释] 调用尚未恢复正式名称的函数
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  else if (param_4 == 0x31747874) { // [自动静态注释] 条件判断/分支
    local_68 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_50 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uStack_48 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_60 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uStack_58 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar1 = (long *)FUN__text__006a0ee8(0x160,0x10); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (plVar1 != (long *)0x0) { // [自动静态注释] 条件判断/分支
      FUN__text__006bc1d0(plVar1,param_2,param_3,&local_68,param_5,param_6,param_7); // [自动静态注释] 调用尚未恢复正式名称的函数
    } // [自动静态注释] 作用域/控制流边界
    (**(code **)(*plVar1 + 0x128))(plVar1,param_2,param_3,param_7,&local_68); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  return plVar1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


