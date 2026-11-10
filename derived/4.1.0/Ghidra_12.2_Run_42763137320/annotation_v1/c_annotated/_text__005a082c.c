/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_004A082C
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005a082c; name: FUN_.text__005a082c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005a082c(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long *plVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_50; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *local_48; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_40; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_38; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar2 = *(long *)(param_1 + 0x110); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar3 = (ulong)*(int *)(param_1 + 0x15c); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((ulong)(*(long *)(param_1 + 0x118) - lVar2 >> 5) <= uVar3) { // [自动静态注释] 条件判断/分支
    plVar4 = *(long **)(param_1 + 0x140); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar5 = (long)*(int *)(param_1 + 0x154); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar2 = FUN__text__006ec6d4(_DAT_008a0448); // [自动静态注释] 调用尚未恢复正式名称的函数
    local_50 = (**(code **)(*plVar4 + 0x10))(plVar4,lVar5,lVar2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar1 = *(long **)(param_1 + 0x118); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_48 = plVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_40 = lVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_38 = lVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (plVar1 < *(long **)(param_1 + 0x120)) { // [自动静态注释] 条件判断/分支
      uVar3 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar3 = uVar3 & 0xffffffffffffe000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (*(long *)(uVar3 + 0x98) == 0x10) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Subroutine does not return */
        FUN__text__00102c10(); // [自动静态注释] 调用尚未恢复正式名称的函数
      } // [自动静态注释] 作用域/控制流边界
      *(undefined8 *)(uVar3 + *(long *)(uVar3 + 0x98) * 8 + 0x18) = *(undefined8 *)(param_1 + 0x128)
      ; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      *(long *)(uVar3 + 0x98) = *(long *)(uVar3 + 0x98) + 1;
      *plVar1 = local_50;
      plVar1[1] = (long)plVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      plVar1[2] = lVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      plVar1[3] = lVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(long *)(uVar3 + 0x98) = *(long *)(uVar3 + 0x98) + -1;
      *(long **)(param_1 + 0x118) = plVar1 + 4;
      local_50 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      FUN__text__005a0c10(param_1 + 0x110,&local_50); // [自动静态注释] 调用尚未恢复正式名称的函数
      lVar2 = local_50; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_50 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (lVar2 != 0) { // [自动静态注释] 条件判断/分支
        local_50 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        (**(code **)(*local_48 + 0x18))(local_48,lVar2,local_40,local_38); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
    uVar3 = (ulong)*(int *)(param_1 + 0x15c); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar2 = *(long *)(param_1 + 0x110); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__006ec8b8(param_1,*(undefined8 *)(lVar2 + uVar3 * 0x20),(long)*(int *)(param_1 + 0x154)) // [自动静态注释] 调用尚未恢复正式名称的函数
  ; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  *(int *)(param_1 + 0x15c) = *(int *)(param_1 + 0x15c) + 1;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


