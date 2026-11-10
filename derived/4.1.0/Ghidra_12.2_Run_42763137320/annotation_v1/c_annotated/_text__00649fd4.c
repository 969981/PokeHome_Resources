/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00549FD4
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00649fd4; name: FUN_.text__00649fd4
 */


bool FUN__text__00649fd4(undefined8 param_1,uint *param_2,undefined4 param_3,undefined4 param_4, // [自动静态注释] 调用尚未恢复正式名称的函数
                        uint param_5) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int *piVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint *puVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  piVar2 = (int *)FUN__text__0064a828(param_3,param_4); // [自动静态注释] 调用尚未恢复正式名称的函数
  puVar5 = (uint *)((long)piVar2 + (ulong)*(ushort *)((long)piVar2 + (0x2e - (long)*piVar2))); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar1 = *(uint *)((long)puVar5 + (ulong)*puVar5); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (param_5 < uVar1) { // [自动静态注释] 条件判断/分支
    piVar2 = (int *)FUN__text__0064a828(param_3,param_4); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (*(ushort *)((long)piVar2 - (long)*piVar2) < 0x2f) { // [自动静态注释] 条件判断/分支
      lVar6 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      uVar4 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[0x17]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar6 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (uVar4 != 0) { // [自动静态注释] 条件判断/分支
        puVar5 = (uint *)((long)piVar2 + uVar4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        lVar6 = (long)puVar5 + (ulong)*puVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
    puVar5 = (uint *)(lVar6 + (ulong)param_5 * 4 + 4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    piVar2 = (int *)((long)puVar5 + (ulong)*puVar5); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 7) || // [自动静态注释] 条件判断/分支
       (uVar4 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[3], uVar4 == 0)) { // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar3 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      uVar3 = (uint)*(ushort *)((long)piVar2 + uVar4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    *param_2 = uVar3;
    piVar2 = (int *)FUN__text__0064a828(param_3,param_4); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (*(ushort *)((long)piVar2 - (long)*piVar2) < 0x2f) { // [自动静态注释] 条件判断/分支
      lVar6 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      uVar4 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[0x17]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar6 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (uVar4 != 0) { // [自动静态注释] 条件判断/分支
        puVar5 = (uint *)((long)piVar2 + uVar4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        lVar6 = (long)puVar5 + (ulong)*puVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
    puVar5 = (uint *)(lVar6 + (ulong)param_5 * 4 + 4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    piVar2 = (int *)((long)puVar5 + (ulong)*puVar5); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 5) || // [自动静态注释] 条件判断/分支
       (uVar4 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[2], uVar4 == 0)) { // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar3 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      uVar3 = (uint)*(ushort *)((long)piVar2 + uVar4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    param_2[1] = uVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  return param_5 < uVar1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


