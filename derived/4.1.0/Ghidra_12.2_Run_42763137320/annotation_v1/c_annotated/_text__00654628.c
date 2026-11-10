/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00554628
 * 用途/行为：用途尚未确认；代码可观察到：内存复制/初始化, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00654628; name: FUN_.text__00654628
 */


long FUN__text__00654628(long *param_1,undefined8 param_2,undefined4 param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  size_t sVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_140; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char acStack_136 [262]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar3 = *param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  memset(acStack_136,0,0x106); // [自动静态注释] 内存复制、清零或移动
  FUN__text__00654930(param_2,param_3,acStack_136); // [自动静态注释] 调用尚未恢复正式名称的函数
  sVar1 = strlen(acStack_136); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar2 = FUN__text__00654034(*(undefined8 *)(lVar3 + 200),acStack_136,sVar1 + 1); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (lVar2 == 0) { // [自动静态注释] 条件判断/分支
    if ((*(byte *)(lVar3 + 0xf68) >> 2 & 1) == 0) { // [自动静态注释] 条件判断/分支
      return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    FUN__text__00654930(0x71a415,param_3,acStack_136); // [自动静态注释] 调用尚未恢复正式名称的函数
    sVar1 = strlen(acStack_136); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar2 = FUN__text__00654034(*(undefined8 *)(lVar3 + 200),acStack_136,sVar1 + 1); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (lVar2 == 0) { // [自动静态注释] 条件判断/分支
      return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  if (*(long *)(lVar3 + 0xc08) == -1) { // [自动静态注释] 条件判断/分支
    return lVar2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  uStack_140 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__00679878(&uStack_140); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__00666f74(lVar3,0x71f814); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__00653f90(*(undefined8 *)(lVar3 + 200),acStack_136,sVar1 + 1); // [自动静态注释] 调用尚未恢复正式名称的函数
  return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


