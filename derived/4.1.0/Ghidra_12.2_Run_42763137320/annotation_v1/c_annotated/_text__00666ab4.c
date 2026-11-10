/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00566AB4
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00666ab4; name: FUN_.text__00666ab4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN__text__00666ab4(ulong param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int *piVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auVar5 [16]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auVar6 [16]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  iVar2 = (int)param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (iVar2 != 0) { // [自动静态注释] 条件判断/分支
    param_1 = param_1 & 0xffffffff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (iVar2 < 0) { // [自动静态注释] 条件判断/分支
      nnsocketSetLastErrno(0x16); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      param_1 = 0xffffffff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      auVar5 = FUN__text__0066c6a8(); // [自动静态注释] 调用尚未恢复正式名称的函数
      piVar1 = _DAT_008a6578; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      do { // [自动静态注释] 循环/迭代
        iVar3 = nnsocketPoll(0,0,param_1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if ((iVar3 != -1) || // [自动静态注释] 条件判断/分支
           ((iVar4 = nnsocketGetLastErrno(), iVar4 != 0 && // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            ((iVar3 = -1, iVar4 != 4 || (*piVar1 != 0)))))) goto LAB__text__00666b50; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        auVar6 = FUN__text__0066c6a8(); // [自动静态注释] 调用尚未恢复正式名称的函数
        iVar3 = FUN__text__0066c6d8(auVar6._0_8_,auVar6._8_8_,auVar5._0_8_,auVar5._8_8_); // [自动静态注释] 调用尚未恢复正式名称的函数
        param_1 = (ulong)(uint)(iVar2 - iVar3); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } while (iVar2 - iVar3 != 0 && iVar3 <= iVar2); // [自动静态注释] 循环/迭代
      iVar3 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
LAB__text__00666b50: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      param_1 = (ulong)-(uint)(iVar3 != 0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return param_1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


