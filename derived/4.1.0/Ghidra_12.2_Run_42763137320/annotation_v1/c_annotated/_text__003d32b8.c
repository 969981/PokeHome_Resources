/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_002D32B8
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003d32b8; name: FUN_.text__003d32b8
 */


uint FUN__text__003d32b8(undefined8 param_1,undefined8 param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_48; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auStack_40 [16]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar5 = FUN__text__0015536c(param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
  if ((uVar5 & 1) == 0) { // [自动静态注释] 条件判断/分支
    return 0xff000000; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  local_48 = 0xaf66cf4c8606ef75; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__001554a0(auStack_40,param_2,&local_48); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar1 = FUN__text__00155670(auStack_40,0); // [自动静态注释] 调用尚未恢复正式名称的函数
  local_48 = 0xaf66ba4c8606cbc6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__001554a0(auStack_40,param_2,&local_48); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar2 = FUN__text__00155670(auStack_40,0); // [自动静态注释] 调用尚未恢复正式名称的函数
  local_48 = 0xaf66bf4c8606d445; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__001554a0(auStack_40,param_2,&local_48); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar3 = FUN__text__00155670(auStack_40,0); // [自动静态注释] 调用尚未恢复正式名称的函数
  local_48 = 0xaf66bc4c8606cf2c; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__001554a0(auStack_40,param_2,&local_48); // [自动静态注释] 调用尚未恢复正式名称的函数
  iVar4 = FUN__text__00155670(auStack_40,0); // [自动静态注释] 调用尚未恢复正式名称的函数
  return (uVar3 & 0xff) << 0x10 | iVar4 << 0x18 | (uVar2 & 0xff) << 8 | uVar1 & 0xff; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


