/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_005B5028
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006b5028; name: FUN_.text__006b5028
 */


undefined4 FUN__text__006b5028(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int *piVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte bVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar5 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((*(byte *)(param_1 + 0x60) >> 2 & 1) != 0) { // [自动静态注释] 条件判断/分支
    lVar1 = *(long *)(param_1 + 0xa8) + 0xc; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar3 = *(uint *)(*(long *)(param_1 + 0xa8) + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    piVar2 = (int *)(lVar1 + (ulong)(*(int *)(lVar1 + (ulong)uVar3 + 4) + uVar3)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if ((*piVar2 == 0x15) && (bVar4 = *(byte *)((long)piVar2 + 6), -1 < (char)bVar4)) { // [自动静态注释] 条件判断/分支
      uVar5 = *(undefined4 *) // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
               (lVar1 + (ulong)(*(int *)(lVar1 + (ulong)uVar3 + 4 + (ulong)bVar4 * 4) + uVar3) + 8); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return uVar5; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


