/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003C1A60
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004c1a60; name: FUN_.text__004c1a60
 */


void FUN__text__004c1a60(long param_1,undefined4 param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long *plVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_40; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_38; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (DAT_00aeab68 != 0) { // [自动静态注释] 条件判断/分支
    local_40 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uStack_38 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar3 = *(long **)(param_1 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    while (plVar1 = plVar3, plVar1 != (long *)0x0) { // [自动静态注释] 循环/迭代
      plVar3 = (long *)plVar1[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      FUN__text__004c3960(plVar1,&local_40,param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
      uVar2 = FUN__text__004c3a4c(plVar1); // [自动静态注释] 调用尚未恢复正式名称的函数
      if ((uVar2 & 1) != 0) { // [自动静态注释] 条件判断/分支
        FUN__text__004c2840(param_1,plVar1); // [自动静态注释] 调用尚未恢复正式名称的函数
        FUN__text__004c1fc0(param_1,plVar1); // [自动静态注释] 调用尚未恢复正式名称的函数
        FUN__text__004c31a0(param_1,plVar1); // [自动静态注释] 调用尚未恢复正式名称的函数
        (**(code **)(*plVar1 + 0x40))(plVar1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        FUN__text__00447104(plVar1); // [自动静态注释] 调用尚未恢复正式名称的函数
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
    FUN__text__004c2010(param_1,&local_40,param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


