/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_005EA4A0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006ea4a0; name: FUN_.text__006ea4a0
 */


long FUN__text__006ea4a0(int *param_1,long *param_2,long param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  ulong uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if ((param_3 == 0) || ((char)param_1[0xc] == '\0')) { // [自动静态注释] 条件判断/分支
    return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  iVar4 = *param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar5 = *(long *)(param_1 + (long)iVar4 * 0x6c + 0x76); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar1 = (*(long *)(param_1 + (long)iVar4 * 0x6c + 0x70) + param_3 + -1 & // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          -*(long *)(param_1 + (long)iVar4 * 0x6c + 0x70)) + lVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  if (uVar1 <= *(ulong *)(param_1 + (long)iVar4 * 0x6c + 0x20)) { // [自动静态注释] 条件判断/分支
    *(ulong *)(param_1 + (long)iVar4 * 0x6c + 0x76) = uVar1;
    if (*(long *)(param_1 + (long)iVar4 * 0x6c + 0x78) != 0) { // [自动静态注释] 条件判断/分支
      lVar5 = *(long *)(param_1 + (long)iVar4 * 0x6c + 0x78) + lVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar2 = *(long *)(param_1 + (long)iVar4 * 0x6c + 0x72); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar3 = *(long *)(param_1 + (long)iVar4 * 0x6c + 0x74); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *param_2 = lVar2;
      param_2[1] = lVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *param_2 = (lVar5 - *(long *)(param_1 + (long)iVar4 * 0x6c + 0x78)) + lVar2;
      iVar4 = *param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(long *)(param_1 + (long)iVar4 * 2 + 4) =
           (*(long *)(param_1 + (long)iVar4 * 0x6c + 0x70) + param_3 + -1 & // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
           -*(long *)(param_1 + (long)iVar4 * 0x6c + 0x70)) + // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
           *(long *)(param_1 + (long)iVar4 * 2 + 4);
      return lVar5; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__006d84a0(0,0x800); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__006d84b0(0x717912,param_3); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__006d84b0(0x71c918,*(undefined8 *)(param_1 + (long)*param_1 * 2 + 4), // [自动静态注释] 调用尚未恢复正式名称的函数
                      *(undefined8 *)(param_1 + 10));
  return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


