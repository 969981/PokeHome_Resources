/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_005857F8
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006857f8; name: FUN_.text__006857f8
 */


void FUN__text__006857f8(long *param_1,ulong param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong *puVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong *puVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (param_2 != 0) { // [自动静态注释] 条件判断/分支
    do { // [自动静态注释] 循环/迭代
      uVar6 = param_2 - 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar5 = uVar6 >> 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      iVar1 = (*(code *)param_1[4]) // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                        (*(undefined8 *)(*param_1 + param_2 * 8), // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                         *(undefined8 *)(*param_1 + uVar5 * 8));
      if (iVar1 == 0) { // [自动静态注释] 条件判断/分支
        return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
      lVar2 = *param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar3 = *(ulong **)(lVar2 + param_2 * 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar4 = *(ulong **)(lVar2 + uVar5 * 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(ulong **)(lVar2 + uVar5 * 8) = puVar3;
      *puVar3 = uVar5;
      *(ulong **)(*param_1 + param_2 * 8) = puVar4;
      *puVar4 = param_2;
      param_2 = uVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (1 < uVar6); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


