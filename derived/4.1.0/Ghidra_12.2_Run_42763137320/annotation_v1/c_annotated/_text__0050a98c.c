/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0040A98C
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0050a98c; name: FUN_.text__0050a98c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN__text__0050a98c(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  plVar3 = (long *)FUN__text__00400f80(9,0x48); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (plVar3 != (long *)0x0) { // [自动静态注释] 条件判断/分支
    plVar3[2] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar1 = _DAT_008a40a0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined4 *)(plVar3 + 7) = 0;
    plVar3[3] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar3[4] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar3[5] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar3[6] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar3[1] = lVar1 + 0x10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined1 *)(plVar3 + 8) = 0x10;
    iVar2 = FUN__text__00542850(plVar3); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (iVar2 != 1) { // [自动静态注释] 条件判断/分支
      FUN__text__00542970(plVar3); // [自动静态注释] 调用尚未恢复正式名称的函数
      plVar3[1] = lVar1 + 0x10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (plVar3[2] != 0) { // [自动静态注释] 条件判断/分支
        FUN__text__0050cda0(plVar3 + 1); // [自动静态注释] 调用尚未恢复正式名称的函数
        plVar3[2] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      FUN__text__00400fc0(9,plVar3); // [自动静态注释] 调用尚未恢复正式名称的函数
      return (long *)0x0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    if (*(long *)(param_1 + 0x80) == 0) { // [自动静态注释] 条件判断/分支
      *(long **)(param_1 + 0x80) = plVar3;
      *plVar3 = 0;
      return plVar3; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    *plVar3 = *(long *)(param_1 + 0x80);
    *(long **)(param_1 + 0x80) = plVar3;
  } // [自动静态注释] 作用域/控制流边界
  return plVar3; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


