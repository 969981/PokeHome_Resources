/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003647D0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004647d0; name: FUN_.text__004647d0
 */


bool FUN__text__004647d0(long param_1,undefined8 *param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int *piVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int *piVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  piVar3 = (int *)*param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar2 = *(uint *)(param_2 + 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  piVar1 = piVar3 + (ulong)uVar2 * 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (uVar2 != 0) { // [自动静态注释] 条件判断/分支
    lVar4 = (ulong)uVar2 << 3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      if (*(int *)(param_1 + 0x20) == *piVar3 && // [自动静态注释] 条件判断/分支
          (*(uint *)(param_1 + 0xd2) >> 0x11 & 1) == (uint)*(byte *)(piVar3 + 1)) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      goto LAB__text__00464814; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      piVar3 = piVar3 + 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar4 = lVar4 + -8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (lVar4 != 0); // [自动静态注释] 循环/迭代
    piVar3 = piVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
LAB__text__00464814: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return piVar3 != piVar1 && piVar3 != (int *)0x0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


