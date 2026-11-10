/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_002668B8
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003668b8; name: FUN_.text__003668b8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__003668b8(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_30; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_28; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar1 = FUN__text__00321ac0(); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (*(char *)(lVar1 + 0x9349d) == '\0') { // [自动静态注释] 条件判断/分支
    local_4 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar2 = FUN__text__00371260(*_DAT_0089f448,&local_4); // [自动静态注释] 调用尚未恢复正式名称的函数
    local_28 = param_1 + 0x60; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    local_4 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar2 = FUN__text__00371260(*_DAT_0089f448,&local_4); // [自动静态注释] 调用尚未恢复正式名称的函数
    local_28 = param_1 + 0x1358; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  local_30 = 0x12f8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__00366950(uVar2,0x735008,&local_28,&local_30); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


