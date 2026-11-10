/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00325BC0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00425bc0; name: FUN_.text__00425bc0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__00425bc0(int param_1,long *param_2,undefined8 param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int *piVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int *piVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  puVar2 = _DAT_008a47c0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *param_2 = 0;
  piVar4 = (int *)*puVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar1 = *(uint *)(puVar2 + 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  piVar5 = piVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (uVar1 != 0) { // [自动静态注释] 条件判断/分支
    lVar6 = (ulong)uVar1 << 5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    while (*piVar5 != param_1) { // [自动静态注释] 循环/迭代
      piVar5 = piVar5 + 8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar6 = lVar6 + -0x20; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (lVar6 == 0) { // [自动静态注释] 条件判断/分支
        return 0x58; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  if (piVar5 == piVar4 + (ulong)uVar1 * 8) { // [自动静态注释] 条件判断/分支
    return 0x58; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  plVar3 = (long *)(**(code **)(piVar5 + 2))(_DAT_008a47f0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *param_2 = (long)plVar3;
  if (plVar3 == (long *)0x0) { // [自动静态注释] 条件判断/分支
    return 2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  (**(code **)(*plVar3 + 0x20))(plVar3,param_3); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


