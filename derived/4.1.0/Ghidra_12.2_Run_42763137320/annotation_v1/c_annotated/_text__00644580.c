/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00544580
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00644580; name: FUN_.text__00644580
 */


bool FUN__text__00644580(undefined8 param_1,uint *param_2,undefined4 param_3,undefined4 param_4, // [自动静态注释] 调用尚未恢复正式名称的函数
                        uint param_5) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ushort uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int *piVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint *puVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ushort *puVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  piVar3 = (int *)FUN__text__00644e78(param_3,param_4); // [自动静态注释] 调用尚未恢复正式名称的函数
  if ((*(ushort *)((long)piVar3 - (long)*piVar3) < 0x2f) || // [自动静态注释] 条件判断/分支
     (uVar4 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[0x17], uVar4 == 0)) { // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar5 = (uint *)0x0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar1 = uRam0000000000000000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    puVar5 = (uint *)((long)piVar3 + uVar4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar5 = (uint *)((long)puVar5 + (ulong)*puVar5); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar1 = *puVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  if (uVar1 <= param_5) { // [自动静态注释] 条件判断/分支
    return param_5 < uVar1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  piVar3 = (int *)((long)(puVar5 + (ulong)param_5 + 1) + (ulong)puVar5[(ulong)param_5 + 1]); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(ushort *)((long)piVar3 - (long)*piVar3) < 7) { // [自动静态注释] 条件判断/分支
    *param_2 = 0;
    puVar7 = (ushort *)((long)piVar3 - (long)*piVar3); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar2 = *puVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    uVar4 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[3]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar6 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (uVar4 != 0) { // [自动静态注释] 条件判断/分支
      uVar6 = (uint)*(ushort *)((long)piVar3 + uVar4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    *param_2 = uVar6;
    puVar7 = (ushort *)((long)piVar3 - (long)*piVar3); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar2 = *puVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  if (uVar2 < 5) { // [自动静态注释] 条件判断/分支
    param_2[1] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar7 = (ushort *)((long)piVar3 - (long)*piVar3); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar2 = *puVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    uVar6 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if ((ulong)puVar7[2] != 0) { // [自动静态注释] 条件判断/分支
      uVar6 = (uint)*(ushort *)((long)piVar3 + (ulong)puVar7[2]); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    param_2[1] = uVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar7 = (ushort *)((long)piVar3 - (long)*piVar3); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar2 = *puVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  if ((uVar2 < 9) || ((ulong)puVar7[4] == 0)) { // [自动静态注释] 条件判断/分支
    param_2[2] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    return param_5 < uVar1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  param_2[2] = (uint)*(ushort *)((long)piVar3 + (ulong)puVar7[4]); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  return param_5 < uVar1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


