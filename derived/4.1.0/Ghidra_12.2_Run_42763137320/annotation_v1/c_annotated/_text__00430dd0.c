/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00330DD0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00430dd0; name: FUN_.text__00430dd0
 */


undefined8 FUN__text__00430dd0(undefined8 *param_1,int param_2,long param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int *piVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int *piVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  piVar2 = (int *)*param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar1 = *(uint *)(param_1 + 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  piVar3 = piVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (uVar1 != 0) { // [自动静态注释] 条件判断/分支
    lVar4 = (ulong)uVar1 << 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    while (*piVar3 != param_2) { // [自动静态注释] 循环/迭代
      piVar3 = piVar3 + 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar4 = lVar4 + -0x10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (lVar4 == 0) { // [自动静态注释] 条件判断/分支
        return 0x14; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  if (piVar3 == piVar2 + (ulong)uVar1 * 4) { // [自动静态注释] 条件判断/分支
    return 0x14; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  lVar4 = *(long *)(piVar3 + 2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(long *)(lVar4 + 8) == 0) { // [自动静态注释] 条件判断/分支
    *(long *)(lVar4 + 8) = param_3;
    *(undefined8 *)(param_3 + 8) = 0;
    return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  *(long *)(param_3 + 8) = *(long *)(lVar4 + 8);
  *(long *)(lVar4 + 8) = param_3;
  return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


