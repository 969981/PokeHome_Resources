/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_002E0354
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003e0354; name: FUN_.text__003e0354
 */


long FUN__text__003e0354(undefined8 *param_1,long param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  ulong uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong *puVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  plVar5 = (long *)*param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (param_2 < 0) { // [自动静态注释] 条件判断/分支
    if (*(int *)((long)plVar5 + 0x3c) == 0) { // [自动静态注释] 条件判断/分支
      *(undefined4 *)((long)plVar5 + 0x3c) = 0x16;
      return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  puVar4 = (ulong *)(plVar5 + 2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar2 = plVar5[3]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar1 = *puVar4 + param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (uVar2 < uVar1) { // [自动静态注释] 条件判断/分支
    lVar6 = uVar2 - *puVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *puVar4 = 0;
    plVar5[3] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar5[1] = plVar5[1] + uVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar3 = (**(code **)(*plVar5 + 0x20))(plVar5,param_2 - lVar6); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar5[1] = plVar5[1] + lVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    return lVar3 + lVar6; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  *puVar4 = uVar1;
  return param_2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


