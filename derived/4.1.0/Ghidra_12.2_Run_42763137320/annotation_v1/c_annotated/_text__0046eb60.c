/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0036EB60
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0046eb60; name: FUN_.text__0046eb60
 */


undefined8 FUN__text__0046eb60(undefined8 param_1,int *param_2,undefined8 *param_3,long param_4) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long *plVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 *puVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  puVar6 = (undefined8 *)*param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (puVar6 != (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
    if (*(int *)(puVar6 + 2) != *(int *)((long)puVar6 + 0x14)) { // [自动静态注释] 条件判断/分支
      puVar5 = puVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      goto LAB__text__0046ec10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    param_3[1] = puVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar5 = (undefined8 *)*puVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *param_3 = puVar5;
    if (puVar5 != (undefined8 *)0x0) goto LAB__text__0046ec10; // [自动静态注释] 条件判断/分支
  } // [自动静态注释] 作用域/控制流边界
  puVar5 = (undefined8 *)FUN__text__00400f80(0,0x38); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (puVar5 == (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
    return 0x34; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  *puVar5 = 0;
  puVar5[5] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar5[6] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar5[3] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar5[4] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar5[1] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar5[2] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  iVar2 = FUN__text__00470060(puVar5,0x10); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (iVar2 != 1) { // [自动静态注释] 条件判断/分支
    if (puVar5[6] != 0) { // [自动静态注释] 条件判断/分支
      FUN__text__00400fc0(0); // [自动静态注释] 调用尚未恢复正式名称的函数
    } // [自动静态注释] 作用域/控制流边界
    *(undefined4 *)((long)puVar5 + 0x2c) = 0;
    puVar5[6] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (puVar5[1] != 0) { // [自动静态注释] 条件判断/分支
      *(undefined4 *)(puVar5 + 2) = 0;
      FUN__text__00400fc0(0); // [自动静态注释] 调用尚未恢复正式名称的函数
      puVar5[1] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined4 *)((long)puVar5 + 0x14) = 0;
    } // [自动静态注释] 作用域/控制流边界
    if (puVar5[3] != 0) { // [自动静态注释] 条件判断/分支
      *(undefined4 *)(puVar5 + 4) = 0;
      FUN__text__00400fc0(0); // [自动静态注释] 调用尚未恢复正式名称的函数
      puVar5[3] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined4 *)((long)puVar5 + 0x24) = 0;
    } // [自动静态注释] 作用域/控制流边界
    FUN__text__00400fc0(0,puVar5); // [自动静态注释] 调用尚未恢复正式名称的函数
    return 0x34; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  *puVar5 = 0;
  plVar1 = (long *)(param_2 + 4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(long *)(param_2 + 4) != 0) { // [自动静态注释] 条件判断/分支
    plVar1 = *(long **)(param_2 + 2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  *plVar1 = (long)puVar5;
  *(undefined8 **)(param_2 + 2) = puVar5;
  *param_2 = *param_2 + 1;
  *param_3 = puVar5;
  param_3[1] = puVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
LAB__text__0046ec10: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uVar3 = *(uint *)(puVar5 + 2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(uint *)((long)puVar5 + 0x14) <= uVar3) { // [自动静态注释] 条件判断/分支
    FUN__text__00470270(puVar5 + 1); // [自动静态注释] 调用尚未恢复正式名称的函数
    uVar3 = *(uint *)(puVar5 + 2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  *(uint *)(puVar5 + 2) = uVar3 + 1;
  puVar4 = (undefined4 *)(puVar5[1] + (ulong)uVar3 * 0x28); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar4[6] = *(undefined4 *)(param_4 + 0xf8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar4[7] = *(undefined4 *)(param_4 + 0xfc); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar4[8] = *(undefined4 *)(param_4 + 0x100); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *puVar4 = *(undefined4 *)(param_4 + 0xc0);
  puVar4[3] = *(undefined4 *)(param_4 + 0xb8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar4[2] = *(undefined4 *)(param_4 + 0xb4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar4[1] = *(undefined4 *)(param_4 + 0xb0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar4[4] = *(undefined4 *)(param_4 + 200); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar4[5] = *(undefined4 *)(param_4 + 0xd4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


