/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0039C260
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0049c260; name: FUN_.text__0049c260
 */


void FUN__text__0049c260(long param_1,undefined4 param_2,undefined8 param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar4 = *(long *)(param_1 + 0x70); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar4 == 0) { // [自动静态注释] 条件判断/分支
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  *(byte *)(lVar4 + 200) = *(byte *)(lVar4 + 200) | 4;
  if (*(int *)(lVar4 + 0xb8) + 1U < 2) goto LAB__text__0049c31c; // [自动静态注释] 条件判断/分支
  uVar1 = *(int *)(lVar4 + 0xb8) - 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  do { // [自动静态注释] 循环/迭代
    uVar5 = (ulong)uVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (*(int *)(*(long *)(lVar4 + 0xb0) + uVar5 * 0x10 + 8) != 0) goto LAB__text__0049c2c8; // [自动静态注释] 条件判断/分支
    uVar1 = uVar1 - 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } while (uVar1 != 0xffffffff); // [自动静态注释] 循环/迭代
  goto LAB__text__0049c318; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  while( true ) { // [自动静态注释] 循环/迭代
    while (iVar3 = (int)uVar5, // [自动静态注释] 循环/迭代
          *(int *)(*(long *)(lVar4 + 0xb0) + (ulong)(iVar3 - 1) * 0x10 + 8) == 0) {
      uVar5 = uVar5 - 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if ((int)uVar5 == 0) goto LAB__text__0049c318; // [自动静态注释] 条件判断/分支
    } // [自动静态注释] 作用域/控制流边界
    uVar5 = (ulong)(iVar3 - 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (iVar3 == 0) break; // [自动静态注释] 条件判断/分支
LAB__text__0049c2c8: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    plVar2 = *(long **)(*(long *)(lVar4 + 0xb0) + uVar5 * 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if ((*(uint *)(plVar2 + 0x13) & 0x1f000) == 0) { // [自动静态注释] 条件判断/分支
      (**(code **)(*plVar2 + 0xf8))(plVar2,param_2,param_3); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    if ((int)uVar5 == 0) goto LAB__text__0049c31c; // [自动静态注释] 条件判断/分支
  } // [自动静态注释] 作用域/控制流边界
LAB__text__0049c318: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  if (lVar4 == 0) { // [自动静态注释] 条件判断/分支
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
LAB__text__0049c31c: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  *(byte *)(lVar4 + 200) = *(byte *)(lVar4 + 200) & 0xfb;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


