/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0018DC60
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0028dc60; name: FUN_.text__0028dc60
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0028dc60(long *param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_28; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar4 = *param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar1 = *(uint *)(param_1 + 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(uint *)(lVar4 + 0x87c) = uVar1;
  iVar2 = FUN__text__0015ab30(); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(undefined4 *)(lVar4 + 0x880) =
       *(undefined4 *)(_DAT_008a1760 + (long)iVar2 * 0x2c + (ulong)uVar1 * 4);
  FUN__text__00286ad0(lVar4); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__00285880(lVar4); // [自动静态注释] 调用尚未恢复正式名称的函数
  local_28 = 0x431e769ffc1ad350; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar3 = FUN__text__0012ce7c(lVar4 + 0x110,&local_28); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__003a14e8(uVar3,1); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__00128ec0(lVar4,0); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (*(long *)(lVar4 + 0x4e0) != 0) { // [自动静态注释] 条件判断/分支
    FUN__text__003c02e4(); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


