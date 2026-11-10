/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_002DCE14
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003dce14; name: FUN_.text__003dce14
 */


void FUN__text__003dce14(undefined8 *param_1,int param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int *piVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  piVar2 = (int *)*param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*piVar2 == 0) { // [自动静态注释] 条件判断/分支
    *piVar2 = param_2;
    uVar4 = piVar2[4]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar3 = (ulong)(uint)piVar2[5] - 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (uVar4 <= uVar3) goto LAB__text__003dce5c; // [自动静态注释] 条件判断/分支
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    uVar4 = piVar2[4]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar3 = (ulong)(uint)piVar2[5] - 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (uVar4 <= uVar3) { // [自动静态注释] 条件判断/分支
LAB__text__003dce5c: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      iVar1 = (int)uVar3 - uVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar5 = LZCOUNT(iVar1 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined4 *)
       (*(long *)(*(long *)(piVar2 + 8) + (0x1b - lVar5) * 8 + 8) + // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
       (ulong)(uint)(iVar1 - *(int *)((0x1c - lVar5) * 4 + 0x734874)) * 8) = 5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  *(undefined4 *)(*(long *)(piVar2 + 6) + uVar3 * 8) = 5;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


