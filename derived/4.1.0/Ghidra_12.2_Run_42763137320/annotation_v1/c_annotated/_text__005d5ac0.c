/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_004D5AC0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005d5ac0; name: FUN_.text__005d5ac0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN__text__005d5ac0(undefined8 *param_1,long param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long *plVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_68; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 *local_60; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_58; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_50; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_48; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  plVar2 = *(long **)(param_2 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(long **)(param_2 + 0x178) != (long *)0x0) { // [自动静态注释] 条件判断/分支
    plVar2 = *(long **)(param_2 + 0x178); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  uVar5 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar5 = uVar5 & 0xffffffffffffe000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(long *)(uVar5 + 0x98) == 0x10) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10(); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  *(long **)(uVar5 + *(long *)(uVar5 + 0x98) * 8 + 0x18) = plVar2;
  *(long *)(uVar5 + 0x98) = *(long *)(uVar5 + 0x98) + 1;
  plVar1 = (long *)(**(code **)(*plVar2 + 0x10))(plVar2,0x80,8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (plVar1 == (long *)0x0) { // [自动静态注释] 条件判断/分支
    plVar2 = (long *)(**(code **)(*plVar2 + 0xb8))(plVar2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uStack_58 = 0x5d5be8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_60 = (undefined1 *)((long)register0x00000008 + -0x40); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_50 = param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uStack_48 = param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    (**(code **)(*plVar2 + 0x48))(&local_68); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    if (plVar2[0x32] != 0) { // [自动静态注释] 条件判断/分支
      (**(code **)(*(long *)(plVar2[0x32] + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    plVar2[0x32] = local_68; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    FUN__text__005d8e38(plVar2); // [自动静态注释] 调用尚未恢复正式名称的函数
    uVar5 = (**(code **)(*plVar2 + 0x40))(plVar2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    FUN__text__005d8f14(plVar2); // [自动静态注释] 调用尚未恢复正式名称的函数
    FUN__text__005d5c70(plVar2[0x33]); // [自动静态注释] 调用尚未恢复正式名称的函数
    return uVar5 & 0xffffffff; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  plVar1[7] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar3 = _DAT_008a59c0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 *)(plVar1 + 8) = 0;
  *(undefined4 *)(plVar1 + 6) = 0;
  *(undefined4 *)(plVar1 + 10) = 0;
  plVar1[0xb] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar1[0xc] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar1[0xf] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar1[0xd] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar1[0xe] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar4 = plVar1 + 9; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *plVar4 = lVar3 + 0x50;
  *plVar1 = lVar3 + 0x10;
  plVar1[1] = (long)plVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar1[2] = (long)plVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar1[3] = 0x80; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar1[4] = 8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar1[5] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long *)(uVar5 + 0x98) = *(long *)(uVar5 + 0x98) + -1;
  (**(code **)(*plVar4 + 0x10))(plVar4); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  if (*(long *)(param_2 + 0x198) != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(*(long *)(param_2 + 0x198) + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  *(long **)(param_2 + 0x198) = plVar1;
  lVar3 = plVar1[9]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *param_1 = plVar1;
                    /* WARNING: Could not recover jumptable at 0x005d5bd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar5 = (**(code **)(lVar3 + 0x10))(plVar4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  return uVar5; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


