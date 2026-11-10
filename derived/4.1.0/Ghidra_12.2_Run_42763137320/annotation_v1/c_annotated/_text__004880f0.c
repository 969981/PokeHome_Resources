/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003880F0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004880f0; name: FUN_.text__004880f0
 */


int * FUN__text__004880f0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int *piVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int *piVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  piVar3 = (int *)*param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar5 = *(uint *)(param_1 + 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  piVar1 = piVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (uVar5 == 0) { // [自动静态注释] 条件判断/分支
LAB__text__00488150: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    if (piVar1 != piVar3 + (ulong)uVar5 * 4) goto LAB__text__004881a4; // [自动静态注释] 条件判断/分支
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    lVar4 = (ulong)uVar5 << 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      if (*piVar1 == (int)param_2 && piVar1[1] == (int)((ulong)param_2 >> 0x20)) // [自动静态注释] 条件判断/分支
      goto LAB__text__00488150; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      piVar1 = piVar1 + 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar4 = lVar4 + -0x10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (lVar4 != 0); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  if (*(uint *)((long)param_1 + 0xc) <= uVar5) { // [自动静态注释] 条件判断/分支
    uVar2 = FUN__text__0048b5a0(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
    if ((uVar2 & 1) == 0) { // [自动静态注释] 条件判断/分支
      return (int *)0x0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    if (*(uint *)((long)param_1 + 0xc) <= uVar5) { // [自动静态注释] 条件判断/分支
      return (int *)0x0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    uVar5 = *(uint *)(param_1 + 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    piVar3 = (int *)*param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  *(uint *)(param_1 + 1) = uVar5 + 1;
  if (piVar3 == (int *)0x0) { // [自动静态注释] 条件判断/分支
    return (int *)0x0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  piVar1 = piVar3 + (ulong)uVar5 * 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 *)piVar1 = param_2;
LAB__text__004881a4: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  *(undefined8 *)(piVar1 + 2) = *param_3;
  return piVar1 + 2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


