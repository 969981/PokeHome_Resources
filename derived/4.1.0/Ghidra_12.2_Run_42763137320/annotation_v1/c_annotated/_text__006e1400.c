/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_005E1400
 * 用途/行为：用途尚未确认；代码可观察到：内存复制/初始化, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006e1400; name: FUN_.text__006e1400
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__006e1400(long *param_1,long param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  param_1[10] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar2 = _DAT_008a6c28; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar1 = _DAT_008a6b80; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 *)(param_1 + 0xb) = 0;
  *param_1 = lVar2 + 0x10;
  param_1[8] = lVar1 + 0x10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[9] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  memset(param_1 + 0x11c,0,0x898); // [自动静态注释] 内存复制、清零或移动
  FUN__text__006ec4b0(param_1 + 0x263); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(undefined1 *)(param_1 + 0x26d) = 0;
  FUN__text__006ee670(param_1 + 0x26e); // [自动静态注释] 调用尚未恢复正式名称的函数
  param_1[0x298] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x297] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x296] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x295] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x299] = _DAT_008a6b20 + 0x10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__006ec4b0(param_1 + 0x29a); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__006ee670(param_1 + 0x2a3); // [自动静态注释] 调用尚未恢复正式名称的函数
  param_1[0x2ce] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x2c7] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x2c9] = (long)(param_1 + 0x2c9); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x2ca] = (long)(param_1 + 0x2c9); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 *)(param_1 + 0x2cf) = 0;
  param_1[0x2d3] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x2cb] = (long)(param_1 + 0x2cb); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x2cc] = (long)(param_1 + 0x2cb); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x2d4] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x2d5] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  nn::os::InitializeMutex((MutexType *)(param_1 + 0x2d8),false,0); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  nn::os::InitializeMutex((MutexType *)(param_1 + 0x2dc),false,0); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  nn::util::ReferSymbol((void *)0x866121); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  param_1[0x14] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x15] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x13] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x255] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x256] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                    /* WARNING: Could not recover jumptable at 0x006e1544. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10)) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
            (param_1,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x18),param_2); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


