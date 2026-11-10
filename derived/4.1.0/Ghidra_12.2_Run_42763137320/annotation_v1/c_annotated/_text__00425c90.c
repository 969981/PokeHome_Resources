/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00325C90
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00425c90; name: FUN_.text__00425c90
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN__text__00425c90(undefined8 param_1,int param_2,long *param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int *piVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int *piVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  puVar2 = _DAT_008a47c0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *param_3 = 0;
  piVar3 = (int *)*puVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar1 = *(uint *)(puVar2 + 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  piVar4 = piVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (uVar1 == 0) { // [自动静态注释] 条件判断/分支
LAB__text__00425cf0: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    if (piVar4 == piVar3 + (ulong)uVar1 * 8) { // [自动静态注释] 条件判断/分支
      return 0x58; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    uVar6 = 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (*(code **)(piVar4 + 4) != (code *)0x0) { // [自动静态注释] 条件判断/分支
      lVar5 = (**(code **)(piVar4 + 4))(); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *param_3 = lVar5;
      uVar6 = 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (lVar5 == 0) { // [自动静态注释] 条件判断/分支
        uVar6 = 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      return uVar6; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    lVar5 = (ulong)uVar1 << 5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar6 = 0x58; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      if (*piVar4 == param_2) goto LAB__text__00425cf0; // [自动静态注释] 条件判断/分支
      piVar4 = piVar4 + 8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar5 = lVar5 + -0x20; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (lVar5 != 0); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  return uVar6; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


