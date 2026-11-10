/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00372E88
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00472e88; name: FUN_.text__00472e88
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00472e88(void) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  bool bVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bool bVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong *puVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong *puVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  puVar5 = _DAT_008a48f0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *_DAT_008a48f0 = 0;
  puVar5[1] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar4 = _DAT_008a48e8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar6 = (long *)*_DAT_008a48e8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  while (plVar6 != (long *)0x0) { // [自动静态注释] 循环/迭代
    while( true ) { // [自动静态注释] 循环/迭代
      *plVar4 = *plVar6;
      if ((long *)plVar4[1] == plVar6) { // [自动静态注释] 条件判断/分支
        plVar4[1] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      if ((plVar6 < (long *)plVar4[3]) || // [自动静态注释] 条件判断/分支
         ((long *)plVar4[3] + (ulong)*(uint *)(plVar4 + 4) * 3 <= plVar6)) break; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      *plVar6 = plVar4[2];
      plVar4[2] = (long)plVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      plVar6 = (long *)*plVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(int *)((long)plVar4 + 0x24) = *(int *)((long)plVar4 + 0x24) + -1;
      if (plVar6 == (long *)0x0) goto LAB__text__00472f40; // [自动静态注释] 条件判断/分支
    } // [自动静态注释] 作用域/控制流边界
    FUN__text__00400fc0(5); // [自动静态注释] 调用尚未恢复正式名称的函数
    plVar6 = (long *)*plVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(int *)((long)plVar4 + 0x24) = *(int *)((long)plVar4 + 0x24) + -1;
  } // [自动静态注释] 作用域/控制流边界
LAB__text__00472f40: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  puVar3 = (ulong *)plVar4[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  while (puVar3 != (ulong *)0x0) { // [自动静态注释] 循环/迭代
    puVar7 = (ulong *)*puVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar1 = puVar3 < (ulong)plVar4[3]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar2 = plVar4[3] + (ulong)*(uint *)(plVar4 + 4) * 0x18 <= puVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar3 = puVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (bVar1 || bVar2) { // [自动静态注释] 条件判断/分支
      FUN__text__00400fc0(5); // [自动静态注释] 调用尚未恢复正式名称的函数
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  if (plVar4[3] != 0) { // [自动静态注释] 条件判断/分支
    FUN__text__00400fc0(5); // [自动静态注释] 调用尚未恢复正式名称的函数
    plVar4[3] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  *(undefined4 *)(plVar4 + 4) = 0;
  *plVar4 = 0;
  plVar4[1] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar4[2] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


