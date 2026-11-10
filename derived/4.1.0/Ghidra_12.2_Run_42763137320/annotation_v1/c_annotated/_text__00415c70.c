/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00315C70
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00415c70; name: FUN_.text__00415c70
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__00415c70(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (((*(byte *)(param_1 + 0x58) & 1) == 0) || (iVar1 = FUN__text__0044f5b0(param_1), iVar1 == 1)) // [自动静态注释] 条件判断/分支
  { // [自动静态注释] 作用域/控制流边界
    plVar3 = DAT_00aea230; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (DAT_00aea238 == 0) { // [自动静态注释] 条件判断/分支
      plVar3 = (long *)FUN__text__00415d70(_DAT_008a4d88,0); // [自动静态注释] 调用尚未恢复正式名称的函数
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      do { // [自动静态注释] 循环/迭代
        iVar1 = (**(code **)(**(long **)(*plVar3 + 0xe0) + 0xf0))(); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        iVar2 = (**(code **)(**(long **)(param_1 + 0xe0) + 0xf0))(); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (iVar2 <= iVar1) break; // [自动静态注释] 条件判断/分支
        plVar3 = plVar3 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } while (plVar3 != DAT_00aea230 + DAT_00aea238); // [自动静态注释] 循环/迭代
      plVar3 = (long *)FUN__text__00415d70(_DAT_008a4d88, // [自动静态注释] 调用尚未恢复正式名称的函数
                                           (ulong)((long)plVar3 - (long)DAT_00aea230) >> 3); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    if (plVar3 != (long *)0x0) { // [自动静态注释] 条件判断/分支
      *plVar3 = param_1;
      FUN__text__00415ee0(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
      return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__004061f0(param_1,1); // [自动静态注释] 调用尚未恢复正式名称的函数
  return 2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


