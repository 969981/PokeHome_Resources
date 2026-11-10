/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00015F24
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00115f24; name: FUN_.text__00115f24
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN__text__00115f24(undefined8 param_1,long *param_2,long *param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_40; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 uStack_31; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar4 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar4 = uVar4 & 0xffffffffffffe000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(long *)(uVar4 + 0x98) == 0x10) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10(); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  *(long **)(uVar4 + *(long *)(uVar4 + 0x98) * 8 + 0x18) = param_2;
  *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + 1;
  plVar2 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x278,8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (plVar2 == (long *)0x0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*param_2 + 0xb8))(param_2); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    plVar2 = (long *)FUN__text__005e6444(0); // [自动静态注释] 调用尚未恢复正式名称的函数
    lVar1 = _DAT_0089fdb0 + 0x68; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar3 = _DAT_0089fdb0 + 0xa8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *plVar2 = _DAT_0089fdb0 + 0x10;
    plVar2[9] = lVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar2[10] = lVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (plVar2[0x4c] != 0) { // [自动静态注释] 条件判断/分支
      (**(code **)(*(long *)(plVar2[0x4c] + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      plVar2[0x4c] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    plVar2 = (long *)FUN__text__005e66f0(plVar2); // [自动静态注释] 调用尚未恢复正式名称的函数
    return plVar2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  lVar3 = *param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__005e6444(); // [自动静态注释] 调用尚未恢复正式名称的函数
  lVar1 = _DAT_0089fd30; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 *)(plVar2 + 0x4d) = 1;
  plVar2[0x4c] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined1 *)((long)plVar2 + 0x26c) = 0;
  plVar2[0x4e] = lVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *plVar2 = lVar1 + 0x10;
  plVar2[9] = lVar1 + 0x68; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar2[10] = lVar1 + 0xa8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_40 = FUN__text__0010feac(&uStack_31,plVar2[1]); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (local_40 != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(local_40 + 0x48) + 0x10))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__005e7474(plVar2,&local_40); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (local_40 != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(local_40 + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  plVar2[1] = (long)param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar2[2] = (long)plVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar2[3] = 0x278; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar2[4] = 8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + -1;
  return plVar2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


