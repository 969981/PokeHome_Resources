/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_004A1B30
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005a1b30; name: FUN_.text__005a1b30
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005a1b30(long param_1,long param_2,long param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int *piVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  piVar3 = _DAT_008a0300; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar4 = *(long *)(param_1 + 0xb8) + param_2 * 0x10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  iVar2 = *(int *)(lVar4 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  iVar5 = *(int *)(lVar4 + 0xc); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (iVar2 < iVar5) { // [自动静态注释] 条件判断/分支
    lVar4 = (long)iVar2 << 6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    iVar5 = iVar5 - iVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      lVar1 = *(long *)(param_1 + 0xe8) + lVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      FUN__text__006ee104(*(long *)(param_3 + 0x58) + (long)*piVar3 * 0x168, // [自动静态注释] 调用尚未恢复正式名称的函数
                          *(undefined4 *)(lVar1 + 0x3c),*(undefined4 *)(lVar1 + 0x38),
                          *(long *)(param_1 + 0xe8) + lVar4 + (long)*piVar3 * 8 + 0x28);
      lVar4 = lVar4 + 0x40; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      iVar5 = iVar5 + -1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (iVar5 != 0); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


