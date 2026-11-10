/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00358600
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00458600; name: FUN_.text__00458600
 */


undefined8 FUN__text__00458600(long *param_1,long param_2,undefined8 param_3,long param_4) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if ((long *)*param_1 != (long *)0x0) { // [自动静态注释] 条件判断/分支
    plVar3 = (long *)*param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar5 = (long *)0x0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      plVar4 = (long *)*plVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      plVar6 = plVar3 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (plVar3[1] != param_2) { // [自动静态注释] 条件判断/分支
        plVar6 = plVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      plVar3 = plVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      plVar5 = plVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (plVar4 != (long *)0x0); // [自动静态注释] 循环/迭代
    if (plVar6 != (long *)0x0) { // [自动静态注释] 条件判断/分支
      puVar2 = *(undefined8 **)(param_4 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      goto joined_r0x0045871c; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  plVar3 = (long *)param_1[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (plVar3 == (long *)0x0) { // [自动静态注释] 条件判断/分支
    plVar3 = (long *)FUN__text__00400f80(0,0x28); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (plVar3 == (long *)0x0) { // [自动静态注释] 条件判断/分支
      return 2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    *(undefined1 *)(plVar3 + 4) = 0;
    plVar3[1] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar3[2] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar3[3] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *plVar3 = param_1[2];
    param_1[2] = (long)plVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar2 = (undefined8 *)param_1[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (puVar2 == (undefined8 *)0x0) goto LAB__text__004586d4; // [自动静态注释] 条件判断/分支
LAB__text__0045869c: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    *puVar2 = plVar3;
    plVar3 = (long *)param_1[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    puVar2 = (undefined8 *)param_1[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (puVar2 != (undefined8 *)0x0) goto LAB__text__0045869c; // [自动静态注释] 条件判断/分支
LAB__text__004586d4: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    *param_1 = (long)plVar3;
  } // [自动静态注释] 作用域/控制流边界
  param_1[1] = (long)plVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[2] = *plVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *plVar3 = 0;
  *(int *)((long)param_1 + 0x24) = *(int *)((long)param_1 + 0x24) + 1;
  plVar6 = (long *)(param_1[1] + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *plVar6 = param_2;
  *(int *)(param_2 + 0xbc) = *(int *)(param_2 + 0xbc) + 1;
  *(int *)(*plVar6 + 0xd0) = *(int *)(*plVar6 + 0xd0) + 1;
  puVar2 = *(undefined8 **)(param_4 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
joined_r0x0045871c: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  if (puVar2 == (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
    return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  uVar1 = *(uint *)(plVar6 + 2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  (**(code **)*puVar2)(puVar2,plVar6 + 1,*(undefined4 *)(*(long *)(param_2 + 0x68) + 0x10)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  if (((char)plVar6[3] == '\0') && (uVar1 < *(uint *)(plVar6 + 2))) { // [自动静态注释] 条件判断/分支
    *(short *)(*plVar6 + 0xdc) = *(short *)(*plVar6 + 0xdc) + 1;
    *(undefined1 *)(plVar6 + 3) = 1;
    return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


