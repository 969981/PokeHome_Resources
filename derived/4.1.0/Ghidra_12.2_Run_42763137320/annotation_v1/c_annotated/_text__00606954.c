/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00506954
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00606954; name: FUN_.text__00606954
 */


void FUN__text__00606954(undefined8 *param_1,long param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  ushort uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  short sVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char cVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char cVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined2 uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  *(undefined2 *)(param_1 + 9) = 0;
  param_1[7] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[8] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *param_1 = 0;
  param_1[5] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[6] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[3] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[4] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined1 *)((long)param_1 + 0x1b) = 4;
  *(undefined2 *)((long)param_1 + 0x1e) = 0;
  param_1[1] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[2] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined1 *)param_1 = *(undefined1 *)(param_2 + 0x42);
  sVar2 = *(short *)(param_2 + 0xd); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar1 = *(ushort *)(param_2 + 0x22); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar6 = (ulong)uVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (sVar2 == 0x400) { // [自动静态注释] 条件判断/分支
    if (uVar1 != 0) goto LAB__text__006069c4; // [自动静态注释] 条件判断/分支
    uVar6 = 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else if ((sVar2 != 0x3f9) || (3 < uVar1)) { // [自动静态注释] 条件判断/分支
LAB__text__006069c4: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    cVar3 = FUN__text__005fe83c(sVar2,uVar6,5); // [自动静态注释] 调用尚未恢复正式名称的函数
    cVar4 = FUN__text__005fe954(sVar2,uVar6,5); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (cVar3 != '\0') { // [自动静态注释] 条件判断/分支
      cVar4 = cVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    *(char *)((long)param_1 + 0x19) = cVar4;
    goto LAB__text__00606a18; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  *(undefined1 *)((long)param_1 + 0x19) = *(undefined1 *)(uVar6 * 8 + 0x75a422);
  cVar4 = *(char *)(uVar6 * 8 + 0x75a423); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
LAB__text__00606a18: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  *(char *)((long)param_1 + 0x1a) = cVar4;
  *(undefined1 *)((long)param_1 + 0x39) = *(undefined1 *)(param_2 + 0xbf);
  uVar5 = FUN__text__005ff43c(*(undefined2 *)(param_2 + 0xd),*(undefined2 *)(param_2 + 0x22),5); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(undefined2 *)((long)param_1 + 0x3a) = uVar5;
  *(byte *)((long)param_1 + 0x3c) = *(byte *)((long)param_1 + 0x3c) | 1;
  FUN__text__0062adb0(param_1,param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


