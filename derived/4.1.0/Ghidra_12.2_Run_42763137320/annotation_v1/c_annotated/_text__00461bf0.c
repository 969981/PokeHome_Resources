/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00361BF0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00461bf0; name: FUN_.text__00461bf0
 */


undefined4 FUN__text__00461bf0(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  byte bVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte *pbVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte *pbVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  pbVar3 = *(byte **)(param_1 + 0x90); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (pbVar3 != (byte *)0x0) { // [自动静态注释] 条件判断/分支
    bVar1 = *pbVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar5 = (uint)bVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (bVar1 < 2) { // [自动静态注释] 条件判断/分支
      uVar5 = 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    uVar2 = (ulong)uVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    pbVar4 = pbVar3 + ((ulong)bVar1 & 0xfc); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      pbVar4 = pbVar4 + 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      pbVar3 = pbVar3 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (*pbVar3 == 0x1e) { // [自动静态注释] 条件判断/分支
        return *(undefined4 *)pbVar4; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
      uVar2 = uVar2 - 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (uVar2 != 0); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


