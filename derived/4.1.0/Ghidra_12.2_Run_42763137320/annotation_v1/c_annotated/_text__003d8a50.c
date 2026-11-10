/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_002D8A50
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003d8a50; name: FUN_.text__003d8a50
 */


undefined8 FUN__text__003d8a50(int *param_1,ulong param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 *puVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (param_2 >> 0x20 != 0) { // [自动静态注释] 条件判断/分支
    if (*param_1 == 0) { // [自动静态注释] 条件判断/分支
      *param_1 = 0xe;
    } // [自动静态注释] 作用域/控制流边界
    puVar4 = (undefined4 *)FUN__text__003d9014(param_1 + 4); // [自动静态注释] 调用尚未恢复正式名称的函数
    *puVar4 = 5;
    return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  uVar5 = (ulong)(uint)param_1[5] - 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (uVar5 < (uint)param_1[4]) { // [自动静态注释] 条件判断/分支
    uVar1 = *(uint *)(*(long *)(param_1 + 6) + uVar5 * 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    iVar2 = (int)uVar5 - param_1[4]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar6 = LZCOUNT(iVar2 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar1 = *(uint *)(*(long *)(*(long *)(param_1 + 8) + (0x1b - lVar6) * 8 + 8) + // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                     (ulong)(uint)(iVar2 - *(int *)((0x1c - lVar6) * 4 + 0x734874)) * 8); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  if (uVar1 < 8) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Could not recover jumptable at 0x003d8b00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*(code *)(&UNK__text__003d8b04 + (ulong)*(byte *)((ulong)uVar1 + 0x73aab5) * 4))(); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    return uVar3; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


