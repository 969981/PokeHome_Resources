/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00542D84
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00642d84; name: FUN_.text__00642d84
 */


bool FUN__text__00642d84(undefined8 param_1,uint *param_2,undefined4 param_3,undefined4 param_4, // [自动静态注释] 调用尚未恢复正式名称的函数
                        uint param_5) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int *piVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint *puVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  piVar3 = (int *)FUN__text__00643738(param_3,param_4); // [自动静态注释] 调用尚未恢复正式名称的函数
  puVar6 = (uint *)((long)piVar3 + (ulong)*(ushort *)((long)piVar3 + (0x2e - (long)*piVar3))); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar1 = *(uint *)((long)puVar6 + (ulong)*puVar6); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (param_5 < uVar1) { // [自动静态注释] 条件判断/分支
    piVar3 = (int *)FUN__text__00643738(param_3,param_4); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (*(ushort *)((long)piVar3 - (long)*piVar3) < 0x2f) { // [自动静态注释] 条件判断/分支
      lVar7 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      uVar5 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[0x17]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar7 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (uVar5 != 0) { // [自动静态注释] 条件判断/分支
        puVar6 = (uint *)((long)piVar3 + uVar5); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        lVar7 = (long)puVar6 + (ulong)*puVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
    lVar2 = (ulong)param_5 * 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar6 = (uint *)(lVar7 + lVar2 + 4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    piVar3 = (int *)((long)puVar6 + (ulong)*puVar6); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if ((*(ushort *)((long)piVar3 - (long)*piVar3) < 5) || // [自动静态注释] 条件判断/分支
       (uVar5 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[2], uVar5 == 0)) { // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar4 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      uVar4 = (uint)*(ushort *)((long)piVar3 + uVar5); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    *param_2 = uVar4;
    piVar3 = (int *)FUN__text__00643738(param_3,param_4); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (*(ushort *)((long)piVar3 - (long)*piVar3) < 0x2f) { // [自动静态注释] 条件判断/分支
      lVar7 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      uVar5 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[0x17]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar7 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (uVar5 != 0) { // [自动静态注释] 条件判断/分支
        puVar6 = (uint *)((long)piVar3 + uVar5); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        lVar7 = (long)puVar6 + (ulong)*puVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
    puVar6 = (uint *)(lVar7 + lVar2 + 4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    piVar3 = (int *)((long)puVar6 + (ulong)*puVar6); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if ((*(ushort *)((long)piVar3 - (long)*piVar3) < 7) || // [自动静态注释] 条件判断/分支
       (uVar5 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[3], uVar5 == 0)) { // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar4 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      uVar4 = (uint)*(ushort *)((long)piVar3 + uVar5); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    param_2[1] = uVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    piVar3 = (int *)FUN__text__00643738(param_3,param_4); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (*(ushort *)((long)piVar3 - (long)*piVar3) < 0x2f) { // [自动静态注释] 条件判断/分支
      lVar7 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      uVar5 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[0x17]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar7 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (uVar5 != 0) { // [自动静态注释] 条件判断/分支
        puVar6 = (uint *)((long)piVar3 + uVar5); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        lVar7 = (long)puVar6 + (ulong)*puVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
    puVar6 = (uint *)(lVar7 + lVar2 + 4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    piVar3 = (int *)((long)puVar6 + (ulong)*puVar6); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if ((*(ushort *)((long)piVar3 - (long)*piVar3) < 9) || // [自动静态注释] 条件判断/分支
       (uVar5 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[4], uVar5 == 0)) { // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar4 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      uVar4 = (uint)*(ushort *)((long)piVar3 + uVar5); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    param_2[2] = uVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  return param_5 < uVar1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


