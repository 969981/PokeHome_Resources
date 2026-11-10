/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_005B27A8
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006b27a8; name: FUN_.text__006b27a8
 */


long FUN__text__006b27a8(long param_1,int param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int *piVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte bVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (*(int *)(param_1 + 0x60) != 0) { // [自动静态注释] 条件判断/分支
    lVar1 = *(long *)(param_1 + 0xa8) + 0xc; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar4 = *(uint *)(*(long *)(param_1 + 0xa8) + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    piVar2 = (int *)(lVar1 + (ulong)(*(int *)(lVar1 + (ulong)uVar4 + 4) + uVar4)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (*piVar2 == 0x15) { // [自动静态注释] 条件判断/分支
      iVar3 = param_2 + -9; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (param_2 < 0x10) { // [自动静态注释] 条件判断/分支
        iVar3 = param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      bVar5 = *(byte *)((long)piVar2 + (long)iVar3 + 4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (-1 < (char)bVar5) { // [自动静态注释] 条件判断/分支
        return lVar1 + (ulong)(*(int *)(lVar1 + (ulong)uVar4 + 4 + (ulong)bVar5 * 4) + uVar4); // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


