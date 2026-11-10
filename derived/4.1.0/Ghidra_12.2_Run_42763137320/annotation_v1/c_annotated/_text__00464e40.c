/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00364E40
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00464e40; name: FUN_.text__00464e40
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN__text__00464e40(long *param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long *plVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_50; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_48; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_40; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 local_38; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 local_30; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_28; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  for (lVar2 = *param_1; lVar2 != 0; lVar2 = *(long *)(lVar2 + 0x6800)) { // [自动静态注释] 循环/迭代
    if (*(long *)(lVar2 + 0x6810) != 0) goto LAB__text__00464ee4; // [自动静态注释] 条件判断/分支
  } // [自动静态注释] 作用域/控制流边界
  lVar2 = FUN__text__00400f80(0,0x6818); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (lVar2 == 0) { // [自动静态注释] 条件判断/分支
    return (undefined8 *)0x0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  lVar3 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar5 = (long *)0x0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 *)(lVar2 + 0x6800) = 0;
  lVar4 = 0x80; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  do { // [自动静态注释] 循环/迭代
    plVar1 = (long *)(lVar2 + lVar3); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar3 = lVar3 + 0x340; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *plVar1 = (long)plVar5;
    plVar1[0x1a] = (long)plVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar5 = plVar1 + 0x4e; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar4 = lVar4 + -4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar1[0x34] = (long)(plVar1 + 0x1a); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar1[0x4e] = (long)(plVar1 + 0x34); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } while (lVar4 != 0); // [自动静态注释] 循环/迭代
  *(long *)(lVar2 + 0x6810) = lVar2 + lVar3 + -0xd0;
  *(undefined4 *)(lVar2 + 0x6808) = 0x80;
  if (*param_1 == 0) { // [自动静态注释] 条件判断/分支
    *param_1 = lVar2;
    *(undefined8 *)(lVar2 + 0x6800) = 0;
    puVar6 = *(undefined8 **)(lVar2 + 0x6810); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    *(long *)(lVar2 + 0x6800) = *param_1;
    *param_1 = lVar2;
LAB__text__00464ee4: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    puVar6 = *(undefined8 **)(lVar2 + 0x6810); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  if (puVar6 != (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
    *(undefined8 *)(lVar2 + 0x6810) = *puVar6;
    *puVar6 = 0;
    *(int *)(lVar2 + 0x6808) = *(int *)(lVar2 + 0x6808) + -1;
    puVar6[1] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar6[2] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *puVar6 = 0;
    local_50 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_48 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_40 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_28 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_38 = 0xff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_30 = 0xff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    FUN__text__0046bd38(puVar6 + 3,&local_50); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(undefined4 *)(puVar6 + 0x15) = 0;
    *(undefined4 *)(puVar6 + 0x12) = 0;
    puVar6[0x10] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar6[0x11] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar2 = _DAT_008a4aa0 + 0x10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar6[0x16] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar6[0x17] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar6[0x18] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar6[3] = lVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(byte *)(puVar6 + 0x19) = *(byte *)(puVar6 + 0x19) & 0xf8 | 1;
  } // [自动静态注释] 作用域/控制流边界
  return puVar6; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


